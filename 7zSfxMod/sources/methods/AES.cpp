/*---------------------------------------------------------------------------*/
/* File:        AES.cpp                                                      */
/* Created:     Sat, 13 Nov 2010 14:15:29 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Last update: Sat, 13 Nov 2010 15:22:03 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Revision:    1                                                            */
/*---------------------------------------------------------------------------*/
#include "stdafx.h"

#ifdef SFX_CRYPTO
	#include "7zip\Crypto\MyAes.cpp"
	#include "7zip\Crypto\7zAes.cpp"
	#include "7zip\Crypto\7zAesRegister.cpp"

	extern "C" {
		#include "../C/Aes.c"
		#include "../C/Sha256.c"
		#ifdef _DEBUG
			#include "../C/AesOpt.c"
		#endif // _DEBUG
	}
#endif // SFX_CRYPTO
