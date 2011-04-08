/*---------------------------------------------------------------------------*/
/* File:        config.cpp                                                   */
/* Created:     Tue, 23 Feb 2010 05:32:49 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Last update: Thu, 07 Apr 2011 11:21:32 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Revision:    409                                                          */
/*---------------------------------------------------------------------------*/
/* Revision:    28                                                           */
/* Updated:     Mon, 22 Mar 2010 11:11:30 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: New file stamp.                                              */
/*---------------------------------------------------------------------------*/
#include "stdafx.h"
#include "7zSfxModInt.h"

#ifdef _MSC_VER
	#if defined(_WIN32) && !defined(_DEBUG) && defined(_MSC_VER_OK) && defined(_SFX_USE_CUSTOM_MSVCRT)
		// only MS VC, only release versions
		#if !defined(_WIN64) && defined(_M_IX86)
#pragma comment( lib, "C:/Mobile/Develop/Lib/VC8/x86/msvcrt.lib" )
		#elif defined(_WIN64) && defined(_M_X64)
#pragma comment( lib, "C:/Mobile/Develop/Lib/VC8/x64/msvcrt.lib" )
		#endif // platform
	#else
		#pragma comment( lib, "msvcrt.lib" )
	#endif // defined(_WIN32) && !defined(_DEBUG) && defined(_MSC_VER_OK) && defined(_SFX_USE_CUSTOM_MSVCRT)
#endif // _MSC_VER
