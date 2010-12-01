/*---------------------------------------------------------------------------*/
/* File:        AES.cpp                                                      */
/* Created:     Sat, 13 Nov 2010 14:15:29 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Last update: Sat, 27 Nov 2010 10:08:38 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Revision:    14                                                           */
/*---------------------------------------------------------------------------*/
#include "stdafx.h"

#ifdef SFX_CRYPTO
	#include "7zip\Crypto\MyAes.cpp"
	#include "7zip\Crypto\7zAes.cpp"
	#include "7zip\Crypto\7zAesRegister.cpp"

	extern "C" {
		#include "../C/Aes.c"
		#include "../C/Sha256.c"
		#if defined(_DEBUG) || defined(RELEASE_DEBUG)
			#include "../C/AesOpt.c"
		#endif // _DEBUG
	}
#endif // SFX_CRYPTO
