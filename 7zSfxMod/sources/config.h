/*---------------------------------------------------------------------------*/
/* File:        config.h                                                     */
/* Created:     Sat, 23 Jan 2010 11:11:00 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Last update: Fri, 08 Oct 2010 20:48:26 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Revision:    259                                                          */
/*---------------------------------------------------------------------------*/
/* Revision:    154                                                          */
/* Updated:     Sat, 26 Jun 2010 04:15:20 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: New prefix 'waitall',										 */
/*				make old prefixes as selectable for build:					 */
/*					'hidcon','nowait','forcenowait'							 */
/*---------------------------------------------------------------------------*/
/* Revision:    134                                                          */
/* Updated:     Sun, 06 Jun 2010 07:47:47 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Add warnings stuff											 */
/*				(_SFX_USE_CHECK_RAM && _SFX_USE_CHECK_FREE_SPACE)            */
/*---------------------------------------------------------------------------*/
/* Revision:    55                                                           */
/* Updated:     Thu, 18 Mar 2010 14:04:32 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: New file stamp.                                              */
/*---------------------------------------------------------------------------*/
#define _SFX_USE_CUSTOM_MSVCRT			/* msvcrt.dll */
										/* require msvcrt.lib from old VC6 for x86 */
										/* or new for x64 from the latest DDK */
										/* see realization in 'config.cpp' */
#define _SFX_OPTIMIZE_SIZE				/* section optimizations, was used in VC6 */
#define _SFX_USE_CUSTOM_EXCEPTIONS		/* use custom realization of exceptions handlers */
/* see realization in 'config.cpp' */

/* Begin of options to build */
#define _SFX_USE_WIN7_PROGRESSBAR		/* Windows 7 progress bar on taskbar button */
										/* require latest SDK */
#define _SFX_USE_RTF_CONTROL			/* Enable RTF in texts */
#define _SFX_USE_IMAGES					/* Enable images in custom dialogs */

#define _SFX_USE_TEST					/* internal use */
#define _SFX_USE_LANG					/* use -sfxlang:XXXX command line switch */
#define _SFX_USE_ELEVATION				/* Elevate user rights on start */
#define _SFX_USE_PREFIX_PLATFORM		/* use x86 & x64 prefixes for execution parameters */
#define _SFX_USE_PREFIX_WAITALL			/* external programs: 'wait all child processes' trick */
#define _SFX_USE_PREFIX_HIDCON			/* external programs: 'hide console' trick */
#define _SFX_USE_PREFIX_NOWAIT			/* external programs: 'don't wait end of the execution' trick */
#define _SFX_USE_PREFIX_FORCENOWAIT		/* external programs: 'don't wait end of the execution' trick */
										/* even unpacking to temporary folder */

#define _SFX_USE_CHECK_RAM				/* check available physical memory to prevent swap */
#define _SFX_USE_CHECK_FREE_SPACE		/* check available free space on destination drive */

// October 9, 2010
#define _SFX_USE_BEGINPROMPTTIMEOUT		/* BeginPrompt default button timeout */
/* End of options to build */

#ifdef _7ZSFX_LITE
	#undef _SFX_USE_RTF_CONTROL
	#undef _SFX_USE_IMAGES
	#undef _SFX_USE_LANG
	#undef _SFX_USE_PREFIX_PLATFORM
#endif // _7ZSFX_LITE

#ifndef _SFX_USE_WARNINGS
	#if defined(_SFX_USE_CHECK_FREE_SPACE) || defined(_SFX_USE_CHECK_RAM)
		#define _SFX_USE_WARNINGS
	#endif // defined(_SFX_USE_CHECK_FREE_SPACE) || defined(_SFX_USE_CHECK_RAM)
#endif // 

//#define _SFX_FEATURES_TEST
