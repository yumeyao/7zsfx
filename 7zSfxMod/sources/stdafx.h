/*---------------------------------------------------------------------------*/
/* File:        stdafx.h                                                     */
/* Created:     Sun, 29 Oct 2006 13:32:00 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Last update: Sat, 29 May 2010 08:09:12 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Revision:    1308                                                         */
/*---------------------------------------------------------------------------*/
/* Revision:    1240                                                         */
/* Updated:     Mon, 22 Mar 2010 11:33:37 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: New file stamp.                                              */
/*---------------------------------------------------------------------------*/
#ifndef _STDAFX_H_INCLUDED_
#define _STDAFX_H_INCLUDED_

#if !defined(UNICODE) || !defined(_UNICODE)
	#error "UNICODE and _UNICODE must be defined"
#endif // UNICODE && _UNICODE

#define _MSC_VER_MIN	1400
#define _MSC_VER_MAX	1600

#if defined(_MSC_VER) && (_MSC_VER < _MSC_VER_MIN || _MSC_VER > _MSC_VER_MAX)
	#pragma message( "Warning: This MS compiler is not tested" )
	#undef _MSC_VER_OK
#else
	#define _MSC_VER_OK	
#endif // _MSC_VER

// All possible defines
#ifdef _DEBUGALL
	#ifndef COMPRESS_LZMA
		#define COMPRESS_LZMA
	#endif
	#ifndef COMPRESS_LZMA2
		#define COMPRESS_LZMA2
	#endif
	#ifndef COMPRESS_PPMD
		#define COMPRESS_PPMD
	#endif
	#ifndef COMPRESS_DEFLATE
		#define COMPRESS_DEFLATE
	#endif
	#ifndef COMPRESS_BCJ
		#define COMPRESS_BCJ
	#endif
	#ifndef COMPRESS_BCJ2
		#define COMPRESS_BCJ2
	#endif
	#ifndef _SFX_USE_TEST
		#define _SFX_USE_TEST
	#endif
	#ifndef _SFX_USE_RTF_CONTROL
		#define _SFX_USE_RTF_CONTROL
	#endif
	#ifndef _SFX_USE_IMAGES
		#define _SFX_USE_IMAGES
	#endif
//	#ifndef _USE_SFXVOLUMES
//		#define _USE_SFXVOLUMES
//	#endif
# endif

#define WIN32_LEAN_AND_MEAN
#define _WIN32_WINNT 0x0500
#define _RICHEDIT_VER	0x0200

#if defined(_MSC_VER) && _MSC_VER == 1200
	#pragma warning(disable:4068)
#endif // _MSC_VER && _MSC_VER == 1200
#include <windows.h>
#if defined(_MSC_VER) && _MSC_VER == 1200
	#pragma warning(default:4068)
#endif // _MSC_VER && _MSC_VER == 1200

#include <commctrl.h>
#include <shlobj.h>
#include <shellapi.h>
#include <initguid.h>
#include <richedit.h>


#include "Windows/PropVariant.h"
#include "7Zip/Common/FileStreams.h"
#include "7Zip/Common/RegisterCodec.h"
#include "7Zip/Archive/7z/7zHandler.h"
#include "7Zip/Archive/IArchive.h"
#include "7Zip/Archive/IArchive.h"

extern "C" {
	#include "../C/7zcrc.h"
}

#ifndef MUI_LANGUAGE_ID
	#define MUI_LANGUAGE_ID                     0x4      // Use traditional language ID convention
#endif // MUI_LANGUAGE_ID

#endif // _STDAFX_H_INCLUDED_
