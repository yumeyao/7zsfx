/*---------------------------------------------------------------------------*/
/* File:        Exceptions.cpp                                               */
/* Created:     Mon, 15 Mar 2010 11:26:32 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Last update: Mon, 22 Mar 2010 11:14:04 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Revision:    7                                                            */
/*---------------------------------------------------------------------------*/
/* Revision:    7                                                            */
/* Updated:     Mon, 22 Mar 2010 11:14:04 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: New file stamp.                                              */
/*---------------------------------------------------------------------------*/
#include "stdafx.h"
#include "7zSfxModInt.h"

#ifdef _SFX_USE_CUSTOM_EXCEPTIONS_I386
	#undef	_SFX_USE_CUSTOM_EXCEPTIONS_I386
#endif // _SFX_USE_CUSTOM_EXCEPTIONS_I386

#ifdef _SFX_USE_CUSTOM_EXCEPTIONS_VECTORED_WIN64
	#undef	_SFX_USE_CUSTOM_EXCEPTIONS_VECTORED_WIN64
#endif // _SFX_USE_CUSTOM_EXCEPTIONS_VECTORED_WIN64

#if defined(_MSC_VER) && defined(_WIN32) && !defined(_DEBUG)
	#ifdef _SFX_USE_CUSTOM_EXCEPTIONS
		#undef _SFX_USE_CUSTOM_EXCEPTIONS
		#if defined(_M_IX86) && !defined(_WIN64) && _MSC_VER >= 1400 && _MSC_VER < 1500 && defined(_SFX_USE_CUSTOM_MSVCRT)
			// VC2005, x86, old msvcrt.dll from VC6
			#define _SFX_USE_CUSTOM_EXCEPTIONS_I386
			#define _SFX_USE_CUSTOM_EXCEPTIONS
		#endif // defined(_M_IX86) && !defined(_WIN64) && _MSC_VER >= 1400 && _MSC_VER < 1500 && defined(_SFX_USE_CUSTOM_MSVCRT)
		#ifdef _WIN64
			#define _SFX_USE_CUSTOM_EXCEPTIONS_VECTORED_WIN64
			#define _SFX_USE_CUSTOM_EXCEPTIONS
		#endif // _WIN64
	#endif // _SFX_USE_CUSTOM_EXCEPTIONS
#endif // defined(_MSC_VER) && defined(_WIN32) && !defined(_DEBUG)

#ifdef _SFX_USE_CUSTOM_EXCEPTIONS
	void ReportException( PEXCEPTION_RECORD rec )
	{
		WCHAR buf[1024];
		LPCWSTR lpwszFormat = GetLanguageString( ERR_SFX_EXCEPTION );
		wsprintf( buf, lpwszFormat, rec->ExceptionCode, rec->ExceptionAddress );
		for( DWORD i = 0; i < rec->NumberParameters; i++ )
		{
			WCHAR buf2[128];
			wsprintf( buf2, L"\t0x%p\n", rec->ExceptionInformation[i] );
			lstrcat( buf, buf2 );
		}
		ShowSfxErrorDialog( buf );
		SfxCleanup();
		ExitProcess( ERRC_EXCEPTION );
	}
#endif // _SFX_USE_CUSTOM_EXCEPTIONS

#ifdef _SFX_USE_CUSTOM_EXCEPTIONS_I386
	extern "C" void __CxxFrameHandler3( PEXCEPTION_RECORD rec, void * frame, PCONTEXT context, void ** dispatch )
		{ ReportException( rec ); }

#endif // _SFX_USE_CUSTOM_EXCEPTIONS_I386

#ifdef _SFX_USE_CUSTOM_EXCEPTIONS_VECTORED_WIN64
	class CCustomExceptions
	{
	public:
		CCustomExceptions();
		~CCustomExceptions();
		static LONG NTAPI ExceptionHandler( PEXCEPTION_POINTERS pExection );
	};

	static CCustomExceptions __cef;

	CCustomExceptions::CCustomExceptions() { AddVectoredExceptionHandler( 0, ExceptionHandler ); }
	CCustomExceptions::~CCustomExceptions() { RemoveVectoredExceptionHandler( ExceptionHandler ); }

	LONG NTAPI CCustomExceptions::ExceptionHandler( PEXCEPTION_POINTERS pExection )
	{
		ReportException( pExection->ExceptionRecord );
		return NULL;
	}
#endif // _SFX_USE_CUSTOM_EXCEPTIONS_VECTORED_WIN64