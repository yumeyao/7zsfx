/*---------------------------------------------------------------------------*/
/* File:        ExtractEngine.cpp                                            */
/* Created:     Wed, 05 Oct 2005 07:36:00 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Last update: Sun, 06 Jun 2010 08:51:01 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Revision:    1706                                                         */
/*---------------------------------------------------------------------------*/
/* Revision:    1706                                                         */
/* Updated:     Sun, 06 Jun 2010 08:51:01 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Add check free space on destination drive                    */
/*---------------------------------------------------------------------------*/
/* Revision:    1630                                                         */
/* Updated:     Mon, 22 Mar 2010 11:14:29 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: New file stamp.                                              */
/*---------------------------------------------------------------------------*/
#include "stdafx.h"
#include "7zSfxModInt.h"
#include "ExtractEngine.h"
#include "SfxDialogs.h"

CSfxExtractEngine * SfxExtractEngine;

Int32 CSfxExtractEngine::m_ErrorCode = NArchive::NExtract::NOperationResult::kOK;
HANDLE CSfxExtractEngine::m_hExtractThread;

using namespace NWindows;


STDMETHODIMP CSfxExtractEngine::SetTotal( UInt64 size )
{
#ifdef _SFX_USE_CHECK_FREE_SPACE
	UInt64 ui64Free;
	if( (MiscFlags&MISCFLAGS_NO_CHECK_DISK_FREE) == 0 &&
			::GetDiskFreeSpaceEx( extractPath, (PULARGE_INTEGER)&ui64Free, NULL, NULL ) != FALSE && ui64Free < size )
	{
		if( ShowSfxWarningDialog( GetLanguageString(STR_DISK_FREE_SPACE) ) != IDOK )
		{
			m_ErrorCode = SfxErrors::seCreateFile; // fake error code for prevent "Internal error" dialog
			return E_FAIL;
		}
		MiscFlags |= MISCFLAGS_NO_CHECK_DISK_FREE;
	}
#endif // _SFX_USE_CHECK_FREE_SPACE
	::SendMessage( hwndExtractDlg, WM_7ZSFX_SETTOTAL, 0, (LPARAM)&size );
	return S_OK;
}

STDMETHODIMP CSfxExtractEngine::SetCompleted( const UInt64 *completeValue )
{
	if( fCancelExtract != FALSE )
		return E_ABORT;
	if( completeValue != NULL )
		::SendMessage( hwndExtractDlg, WM_7ZSFX_SETCOMPLETED, 0, (LPARAM)completeValue );
//#if defined(_DEBUG)
//		Sleep( 20 );
//#endif
	return S_OK;
}

STDMETHODIMP CSfxExtractEngine::PrepareOperation( Int32 askExtractMode )
{
  m_extractMode = FALSE;
  
  if( askExtractMode == NArchive::NExtract::NAskMode::kExtract )
	  m_extractMode = TRUE;

  return S_OK;
}

STDMETHODIMP CSfxExtractEngine::SetOperationResult( Int32 resultEOperationResult )
{
	if( resultEOperationResult != NArchive::NExtract::NOperationResult::kOK )
	{
		m_ErrorCode = resultEOperationResult;
		return E_FAIL;
	}

	if( m_outFileStream != NULL )
		m_outFileStreamSpec->SetLastWriteTime( &m_processedFileInfo.UTCLastWriteTime );
	m_outFileStream.Release();
	if( m_extractMode != FALSE )
		SetFileAttributes( m_diskFilePath, m_processedFileInfo.Attributes );
	return S_OK;
}

STDMETHODIMP CSfxExtractEngine::SayInternalError( Int32 errc, DWORD dwLastError )
{
	::SetLastError( dwLastError );
	if( errc == SfxErrors::seCreateFile )
		SfxErrorDialog( TRUE, ERR_CREATE_FILE, (LPCWSTR)m_diskFilePath );
	else
	{
		if( errc == SfxErrors::seOverwrite )
			SfxErrorDialog( TRUE, ERR_OVERWRITE, (LPCWSTR)m_diskFilePath );
	}
	return SetOperationResult( errc );
}

STDMETHODIMP CSfxExtractEngine::GetStream( UInt32 index, ISequentialOutStream **outStream, Int32 askExtractMode )
{
	if( fCancelExtract != FALSE )
		return E_ABORT;
	
	m_outFileStream.Release();

	NCOM::CPropVariant propVariantName;
	RINOK( m_archiveHandler->GetProperty(index, kpidPath, &propVariantName) );
	UString fullPath;
	if( propVariantName.vt == VT_EMPTY || propVariantName.vt != VT_BSTR )
	{
		return SetOperationResult( SfxErrors::sePropVariant1 );
	}

	fullPath = propVariantName.bstrVal;
	m_diskFilePath = m_directoryPath + fullPath;

	if( askExtractMode == NArchive::NExtract::NAskMode::kExtract )
	{
		NCOM::CPropVariant propVariant;
		RINOK(m_archiveHandler->GetProperty(index, kpidAttrib, &propVariant));

		if (propVariant.vt == VT_EMPTY)
			m_processedFileInfo.Attributes = 0;
		else
		{
			if (propVariant.vt != VT_UI4)
				return SetOperationResult( SfxErrors::sePropVariant2 );
			m_processedFileInfo.Attributes = propVariant.ulVal;
		}

		RINOK(m_archiveHandler->GetProperty(index, kpidIsDir, &propVariant));
		m_processedFileInfo.IsDirectory = (propVariant.boolVal != VARIANT_FALSE) ? TRUE : FALSE;

		/*
		BOOL isAnti = FALSE;
		{
			NCOM::CPropVariant propVariantTemp;
			RINOK(m_archiveHandler->GetProperty(index, kpidIsAnti,&propVariantTemp));
			if (propVariantTemp.vt == VT_BOOL)
				isAnti = (propVariantTemp.boolVal != VARIANT_FALSE) ? TRUE : FALSE;
		}
		if( isAnti != FALSE )
		{
			return SetOperationResult( SfxErrors::seAnti );
		}*/

		RINOK(m_archiveHandler->GetProperty(index, kpidMTime, &propVariant));
		SYSTEMTIME	currTime;
		switch( propVariant.vt )
		{
		case VT_EMPTY:
			::GetLocalTime( &currTime );
			::SystemTimeToFileTime( &currTime, &m_processedFileInfo.UTCLastWriteTime );
			break;
		case VT_FILETIME:
			m_processedFileInfo.UTCLastWriteTime = propVariant.filetime;
			break;
		default:
			return SetOperationResult( SfxErrors::sePropVariant3 );
		}

		if( m_processedFileInfo.IsDirectory != FALSE )
		{
			if( CreateFolderTree( (LPCWSTR)m_diskFilePath ) == FALSE )
				return SetOperationResult( SfxErrors::seCreateFolder );
			return S_OK;
		}
		
		switch( GetOverwriteMode( m_diskFilePath, &m_processedFileInfo.UTCLastWriteTime ) )
		{
		case SFX_OM_SKIP:
			*outStream = NULL;
			return S_OK;
		case SFX_OM_ERROR:
			return SayInternalError( SfxErrors::seOverwrite, ::GetLastError() );
		}

		m_outFileStreamSpec = new COutFileStream;
		CMyComPtr<ISequentialOutStream> outStreamLoc(m_outFileStreamSpec);
		if( m_outFileStreamSpec->Create( m_diskFilePath, true ) == false )
		{
			DWORD dwLastError = ::GetLastError();
			UString filePath = m_diskFilePath;
			int nPos = GetDirectorySeparatorPos( filePath );
			if( nPos < 0 )
				return SayInternalError( SfxErrors::seCreateFile, dwLastError );
			filePath.ReleaseBuffer( nPos );
			if( CreateFolderTree( (LPCWSTR)filePath ) == FALSE )
				return SetOperationResult( SfxErrors::seCreateFolder );
			if( m_outFileStreamSpec->Create( m_diskFilePath, true ) == false )
				return SayInternalError( SfxErrors::seCreateFile, ::GetLastError() );
		}
		m_outFileStream = outStreamLoc;
		*outStream = outStreamLoc.Detach();
	}
	else
	{
		*outStream = NULL;
	}

	return S_OK;
}

HRESULT CSfxExtractEngine::Extract(IInArchive *archive, LPCWSTR lpwszFolderName)
{
	m_archiveHandler = archive;
	m_directoryPath = lpwszFolderName;
	m_directoryPath += L'\\';

	SfxExtractEngine = this;
	DWORD dwThreadId;
	m_ErrorCode = NArchive::NExtract::NOperationResult::kOK;
	m_hExtractThread = ::CreateThread( NULL, 0, (LPTHREAD_START_ROUTINE)CSfxExtractEngine::ExtractThread, this, 0, &dwThreadId );

	if( GUIMode != GUIMODE_HIDDEN )
		ExtractDialog();
	::WaitForSingleObject( m_hExtractThread, INFINITE );

	hwndExtractDlg = NULL;
	if( m_ErrorCode != NArchive::NExtract::NOperationResult::kOK )
	{
		switch( m_ErrorCode )
		{
		case NArchive::NExtract::NOperationResult::kUnSupportedMethod:
			SfxErrorDialog( FALSE, ERR_7Z_UNSUPPORTED_METHOD );
			break;
		case NArchive::NExtract::NOperationResult::kCRCError:
			SfxErrorDialog( FALSE, ERR_7Z_CRC_ERROR );
			break;
		case NArchive::NExtract::NOperationResult::kDataError:
			SfxErrorDialog( FALSE, ERR_7Z_DATA_ERROR );
			break;
		case SfxErrors::seCreateFolder:
		case SfxErrors::seCreateFile:
		case SfxErrors::seOverwrite:
			break;
		default:
			SfxErrorDialog( FALSE, ERR_7Z_INTERNAL_ERROR, m_ErrorCode );
		}
		return E_FAIL;
	}

	DWORD dwExitCode;
	if( fCancelExtract == FALSE )
	{
		if( ::GetExitCodeThread( m_hExtractThread, &dwExitCode ) == FALSE || dwExitCode != S_OK )
		{
			if( (dwExitCode&((FACILITY_WIN32 << 16) | 0x80000000)) != ((FACILITY_WIN32 << 16) | 0x80000000) )
				SfxErrorDialog( FALSE, ERR_7Z_EXTRACT_ERROR1, dwExitCode );
			else
			{
				if( (dwExitCode&0xffff) != ERROR_OUTOFMEMORY || MiscFlags != -1 )
				{
					::SetLastError( dwExitCode&0xffff );
					SfxErrorDialog( TRUE, ERR_7Z_EXTRACT_ERROR2, dwExitCode );
				}
			}
			return E_FAIL;
		}
	}
	else
		return E_FAIL;

	return S_OK;
}

HRESULT WINAPI CSfxExtractEngine::ExtractThread(CSfxExtractEngine *pThis)
{
	if( GUIMode != GUIMODE_HIDDEN )
	{
		while( hwndExtractDlg == NULL ) Sleep( 20 );
	}
	HRESULT result = E_FAIL;
#ifdef _SFX_USE_TEST
	result = pThis->m_archiveHandler->Extract( 0, (UInt32)-1, nTestModeType == TMT_ARCHIVE ? 1 : 0, pThis );
#else
	result = pThis->m_archiveHandler->Extract( 0, (UInt32)-1, 0, pThis );
#endif // _SFX_USE_TEST
	if( GUIMode != GUIMODE_HIDDEN )
		::EndDialog( hwndExtractDlg, 0 );

	return result;
}
