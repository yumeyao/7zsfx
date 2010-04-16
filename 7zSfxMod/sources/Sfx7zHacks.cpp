/*---------------------------------------------------------------------------*/
/* File:        Sfx7zHacks.cpp                                               */
/* Created:     Sun, 13 Dec 2009 09:41:00 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Last update: Mon, 22 Mar 2010 11:29:31 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Revision:    100                                                          */
/*---------------------------------------------------------------------------*/
/* Revision:    100                                                          */
/* Updated:     Mon, 22 Mar 2010 11:29:31 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: New file stamp.                                              */
/*---------------------------------------------------------------------------*/
#include "StdAfx.h"

namespace NArchive {
	namespace N7z {
		
		Byte kSignature[kSignatureSize] = {'7' + 1, 'z', 0xBC, 0xAF, 0x27, 0x1C};
#ifdef _7Z_VOL
		Byte kFinishSignature[kSignatureSize] = {'7' + 1, 'z', 0xBC, 0xAF, 0x27, 0x1C + 1};
#endif
		
		class SignatureInitializer
		{
		public:
			SignatureInitializer()
			{
				kSignature[0]--;
#ifdef _7Z_VOL
				kFinishSignature[0]--;
#endif
			};
		} g_SignatureInitializer;
		
}}

extern "C" {
	#undef _MSC_VER
	#include "../c/Threads.c"
}