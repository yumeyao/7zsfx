/*---------------------------------------------------------------------------*/
/* File:        config.cpp                                                   */
/* Created:     Tue, 23 Feb 2010 05:32:49 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Last update: Mon, 22 Mar 2010 11:11:30 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Revision:    28                                                           */
/*---------------------------------------------------------------------------*/
/* Revision:    28                                                           */
/* Updated:     Mon, 22 Mar 2010 11:11:30 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: New file stamp.                                              */
/*---------------------------------------------------------------------------*/
#include "stdafx.h"
#include "7zSfxModInt.h"

#if defined(_MSC_VER) && defined(_WIN32) && !defined(_DEBUG)
	// only MS VC, only release versions
	#ifdef _SFX_USE_CUSTOM_MSVCRT
		#if !defined(_WIN64) && defined(_M_IX86)
			#pragma comment( lib, "C:/MyLibs/Lib/i386/msvcrt.lib" )
		#elif defined(_WIN64) && defined(_M_X64)
			#pragma comment( lib, "C:/MyLibs/Lib/amd64/msvcrt.lib" )
		#endif
	#endif // _SFX_USE_CUSTOM_MSVCRT
#endif // defined(_MSC_VER) && defined(_WIN32) && !defined(_DEBUG)
