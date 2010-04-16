/*---------------------------------------------------------------------------*/
/* File:        ExtractEngine.h                                              */
/* Created:     Wed, 05 Oct 2005 17:35:00 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Last update: Mon, 22 Mar 2010 11:15:14 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Revision:    1629                                                         */
/*---------------------------------------------------------------------------*/
/* Revision:    1629                                                         */
/* Updated:     Mon, 22 Mar 2010 11:15:14 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: New file stamp.                                              */
/*---------------------------------------------------------------------------*/
#ifndef _EXTRACTENGINE_H_INCLUDED_
#define _EXTRACTENGINE_H_INCLUDED_

class CSfxExtractEngine: public IArchiveExtractCallback, public CMyUnknownImp
{
public:

	MY_UNKNOWN_IMP

	// IProgress
	STDMETHOD(SetTotal)(UInt64 size);
	STDMETHOD(SetCompleted)(const UInt64 *completeValue);

	// IExtractCallback
	STDMETHOD(GetStream)(UInt32 index, ISequentialOutStream **outStream, Int32 askExtractMode);
	STDMETHOD(PrepareOperation)(Int32 askExtractMode);
	STDMETHOD(SetOperationResult)(Int32 resultEOperationResult);

	HANDLE	GetExtractThread() { return m_hExtractThread; };
	Int32	GetErrorCode() { return m_ErrorCode; };
	STDMETHOD(SayInternalError)( Int32 errc, DWORD dwLastError );

private:
	
	CMyComPtr<IInArchive>	m_archiveHandler;
	UString					m_directoryPath;
	BOOL					m_extractMode;
	COutFileStream *		m_outFileStreamSpec;
	CMyComPtr<ISequentialOutStream> m_outFileStream;
	UString					m_diskFilePath;
	static HANDLE			m_hExtractThread;
	static Int32			m_ErrorCode;

	struct CProcessedFileInfo
	{
		FILETIME	UTCLastWriteTime;
		BOOL		IsDirectory;
		UInt32		Attributes;
	} m_processedFileInfo;

public:
	static HRESULT WINAPI ExtractThread( CSfxExtractEngine * pThis );
	HRESULT Extract( IInArchive * archive, LPCWSTR lpwszFolderName );
};

#endif // _EXTRACTENGINE_H_INCLUDED_
