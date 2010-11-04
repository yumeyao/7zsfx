/*---------------------------------------------------------------------------*/
/* File:        config.h                                                     */
/* Created:     Sat, 23 Jan 2010 11:11:00 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Last update: Wed, 03 Nov 2010 09:52:51 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Revision:    284                                                          */
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
#ifndef _CONFIG_H_INCLUDED_
#define _CONFIG_H_INCLUDED_

/* custom pre-defines */
#define NO_REGISTRY
#define EXTRACT_ONLY
#define NO_READ_FROM_CODER
#define _SFX
#define _NO_CRYPTO

/* SFXBUILD_OPTIONS1 (7-Zip compression methods, filters etc), defaults: 0 */

/* SFXBUILD_OPTIONS2 (SFX prefixes), defaults: all prefixes */
#ifndef SFXBUILD_OPTIONS2
	#define _SFX_USE_PREFIX_PLATFORM		/* use x86 & x64 prefixes for execution parameters */
	#define _SFX_USE_PREFIX_WAITALL			/* external programs: 'wait all child processes' trick */
	#define _SFX_USE_PREFIX_HIDCON			/* external programs: 'hide console' trick */
	#define _SFX_USE_PREFIX_NOWAIT			/* external programs: 'don't wait end of the execution' trick */
	#define _SFX_USE_PREFIX_FORCENOWAIT		/* external programs: 'don't wait end of the execution' trick */
											/* even unpacking to temporary folder */
#endif // SFXBUILD_OPTIONS2

/* SFXBUILD_OPTIONS3 (SFX GUI, switches, config parameters), defaults: all available */
#ifndef SFXBUILD_OPTIONS3
	#define _SFX_USE_WIN7_PROGRESSBAR		/* Windows 7 progress bar on taskbar button */
											/* require latest SDK */
	#define _SFX_USE_RTF_CONTROL			/* Enable RTF in texts */
	#define _SFX_USE_IMAGES					/* Enable images in custom dialogs */
	#define _SFX_USE_LANG					/* use -sfxlang:XXXX command line switch, localized resources and configs */
	#define _SFX_USE_ELEVATION				/* Elevate user rights on start */
	#define _SFX_USE_CHECK_RAM				/* check available physical memory to prevent swap */
	#define _SFX_USE_CHECK_FREE_SPACE		/* check available free space on destination drive */
	#define _SFX_USE_BEGINPROMPTTIMEOUT		/* BeginPrompt default button timeout */
	#define _SFX_USE_CONFIG_PLATFORM		/* Separate configs for different platforms */
#endif // SFXBUILD_OPTIONS3

// 7-Zip options
#ifndef SFXBUILD_OPTIONS1
	#define SFXBUILD_OPTIONS1		0
#endif
#ifndef SFXBUILD_OPTIONS2
	#define SFXBUILD_OPTIONS2		0xffff
#endif
#ifndef SFXBUILD_OPTIONS3
	#define SFXBUILD_OPTIONS3		0xffff
#endif

#define SFXBUILD_OPTIONS1_COMPRESS_COPY			0x001
#define SFXBUILD_OPTIONS1_COMPRESS_BCJ			0x002
#define SFXBUILD_OPTIONS1_COMPRESS_BCJ2			0x004
#define SFXBUILD_OPTIONS1_COMPRESS_DEFLATE		0x008
#define SFXBUILD_OPTIONS1_COMPRESS_LZMA			0x010
#define SFXBUILD_OPTIONS1_COMPRESS_LZMA2		0x020
#define SFXBUILD_OPTIONS1_COMPRESS_PPMD			0x040
#define SFXBUILD_OPTIONS1_CRYPTO				0x080
#define SFXBUILD_OPTIONS1_VOLUMES				0x100

#define SFXBUILD_OPTIONS2_PREFIX_PLATFORM		0x001
#define SFXBUILD_OPTIONS2_PRIFIX_WAITALL		0x002
#define SFXBUILD_OPTIONS2_PREFIX_HIDCON			0x004
#define SFXBUILD_OPTIONS2_PREFIX_NOWAIT			0x008
#define SFXBUILD_OPTIONS2_PREFIX_FORCENOWAIT	0x010

#define SFXBUILD_OPTIONS3_WIN7_PROGRESSBAR		0x001
#define SFXBUILD_OPTIONS3_RTF_CONTROL			0x002
#define SFXBUILD_OPTIONS3_IMAGES				0x004
#define SFXBUILD_OPTIONS3_LANG					0x008
#define SFXBUILD_OPTIONS3_ELEVATION				0x010
#define SFXBUILD_OPTIONS3_CHECK_RAM				0x020
#define SFXBUILD_OPTIONS3_CHECK_FREE_SPACE		0x040
#define SFXBUILD_OPTIONS3_BEGINPROMPTTIMEOUT	0x080
#define SFXBUILD_OPTIONS3_CONFIG_PLATFORM		0x100


#if SFXBUILD_OPTIONS1&SFXBUILD_OPTIONS1_COMPRESS_COPY && !defined(COMPRESS_COPY)
	#define COMPRESS_COPY
#endif
#if SFXBUILD_OPTIONS1&SFXBUILD_OPTIONS1_COMPRESS_BCJ && !defined(COMPRESS_BCJ)
	#define COMPRESS_BCJ
#endif
#if SFXBUILD_OPTIONS1&SFXBUILD_OPTIONS1_COMPRESS_BCJ2 && !defined(COMPRESS_BCJ2)
	#define COMPRESS_BCJ2
#endif
#if SFXBUILD_OPTIONS1&SFXBUILD_OPTIONS1_COMPRESS_DEFLATE && !defined(COMPRESS_DEFLATE)
	#define COMPRESS_DEFLATE
#endif
#if SFXBUILD_OPTIONS1&SFXBUILD_OPTIONS1_COMPRESS_LZMA && !defined(COMPRESS_LZMA)
	#define COMPRESS_LZMA
#endif
#if SFXBUILD_OPTIONS1&SFXBUILD_OPTIONS1_COMPRESS_LZMA2 && !defined(COMPRESS_LZMA2)
	#define COMPRESS_LZMA2
#endif
#if SFXBUILD_OPTIONS1&SFXBUILD_OPTIONS1_COMPRESS_PPMD && !defined(COMPRESS_PPMD)
	#define COMPRESS_PPMD
#endif
#if SFXBUILD_OPTIONS1&SFXBUILD_OPTIONS1_CRYPTO == 0 && !defined(_NO_CRYPTO)
	#define _NO_CRYPTO
#endif

#ifndef COMPRESS_COPY
	#undef SFXBUILD_OPTIONS1_COMPRESS_COPY
	#define SFXBUILD_OPTIONS1_COMPRESS_COPY		0
#endif
#ifndef COMPRESS_BCJ
	#undef SFXBUILD_OPTIONS1_COMPRESS_BCJ
	#define SFXBUILD_OPTIONS1_COMPRESS_BCJ		0
#endif
#ifndef COMPRESS_BCJ2
	#undef SFXBUILD_OPTIONS1_COMPRESS_BCJ2
	#define SFXBUILD_OPTIONS1_COMPRESS_BCJ2		0
#endif
#ifndef COMPRESS_DEFLATE
	#undef SFXBUILD_OPTIONS1_COMPRESS_DEFLATE
	#define SFXBUILD_OPTIONS1_COMPRESS_DEFLATE	0
#endif
#ifndef COMPRESS_LZMA
	#undef SFXBUILD_OPTIONS1_COMPRESS_LZMA
	#define SFXBUILD_OPTIONS1_COMPRESS_LZMA		0
#endif
#ifndef COMPRESS_LZMA2
	#undef SFXBUILD_OPTIONS1_COMPRESS_LZMA2
	#define SFXBUILD_OPTIONS1_COMPRESS_LZMA2	0
#endif
#ifndef COMPRESS_PPMD
	#undef SFXBUILD_OPTIONS1_COMPRESS_PPMD
	#define SFXBUILD_OPTIONS1_COMPRESS_PPMD		0
#endif
#ifdef _NO_CRYPTO
	#undef SFXBUILD_OPTIONS1_CRYPTO
	#define SFXBUILD_OPTIONS1_CRYPTO			0
#endif

#undef SFXBUILD_OPTIONS1
#undef SFXBUILD_OPTIONS1_VOLUMES
#define SFXBUILD_OPTIONS1_VOLUMES		0	/* not ready yet */
#define SFXBUILD_OPTIONS1					\
	SFXBUILD_OPTIONS1_COMPRESS_COPY		|	\
	SFXBUILD_OPTIONS1_COMPRESS_BCJ		|	\
	SFXBUILD_OPTIONS1_COMPRESS_BCJ2		|	\
	SFXBUILD_OPTIONS1_COMPRESS_DEFLATE	|	\
	SFXBUILD_OPTIONS1_COMPRESS_LZMA		|	\
	SFXBUILD_OPTIONS1_COMPRESS_LZMA2	|	\
	SFXBUILD_OPTIONS1_COMPRESS_PPMD		|	\
	SFXBUILD_OPTIONS1_CRYPTO			|	\
	SFXBUILD_OPTIONS1_VOLUMES			|	\
	0



#if SFXBUILD_OPTIONS2&SFXBUILD_OPTIONS2_PREFIX_PLATFORM && !defined(_SFX_USE_PREFIX_PLATFORM)
	#define _SFX_USE_PREFIX_PLATFORM
#endif

#if SFXBUILD_OPTIONS2&SFXBUILD_OPTIONS2_PREFIX_WAITALL && !defined(_SFX_USE_PREFIX_WAITALL)
	#define _SFX_USE_PREFIX_WAITALL
#endif

#if SFXBUILD_OPTIONS2&SFXBUILD_OPTIONS2_PREFIX_HIDCON && !defined(_SFX_USE_PREFIX_HIDCON)
	#define _SFX_USE_PREFIX_HIDCON
#endif

#if SFXBUILD_OPTIONS2&SFXBUILD_OPTIONS2_PREFIX_NOWAIT && !defined(_SFX_USE_PREFIX_NOWAIT)
#define _SFX_USE_PREFIX_NOWAIT
#endif

#if SFXBUILD_OPTIONS2&SFXBUILD_OPTIONS2_PREFIX_FORCENOWAIT && !defined(_SFX_USE_PREFIX_FORCENOWAIT)
	#define _SFX_USE_PREFIX_FORCENOWAIT
#endif

#ifndef _SFX_USE_PREFIX_PLATFORM
	#undef SFXBUILD_OPTIONS2_PREFIX_PLATFORM
	#define SFXBUILD_OPTIONS2_PREFIX_PLATFORM		0
#endif

#ifndef _SFX_USE_PREFIX_WAITALL
	#undef SFXBUILD_OPTIONS2_PREFIX_WAITALL
	#define SFXBUILD_OPTIONS2_PREFIX_WAITALL		0
#endif

#ifndef _SFX_USE_PREFIX_HIDCON
	#undef SFXBUILD_OPTIONS2_PREFIX_HIDCON
	#define SFXBUILD_OPTIONS2_PREFIX_HIDCON			0
#endif

#ifndef _SFX_USE_PREFIX_NOWAIT
	#undef SFXBUILD_OPTIONS2_PREFIX_NOWAIT
	#define SFXBUILD_OPTIONS2_PREFIX_NOWAIT			0
#endif

#ifndef _SFX_USE_PREFIX_FORCENOWAIT
	#undef SFXBUILD_OPTIONS2_PREFIX_FORCENOWAIT
	#define SFXBUILD_OPTIONS2_PREFIX_FORCENOWAIT	0
#endif

#undef SFXBUILD_OPTIONS2
#define SFXBUILD_OPTIONS2						\
	SFXBUILD_OPTIONS2_PREFIX_PLATFORM		|	\
	SFXBUILD_OPTIONS2_PRIFIX_WAITALL		|	\
	SFXBUILD_OPTIONS2_PREFIX_HIDCON			|	\
	SFXBUILD_OPTIONS2_PREFIX_NOWAIT			|	\
	SFXBUILD_OPTIONS2_PREFIX_FORCENOWAIT	|	\
	0


#if SFXBUILD_OPTIONS3&SFXBUILD_OPTIONS3_WIN7_PROGRESSBAR && !defined(_SFX_USE_WIN7_PROGRESSBAR)
	#define _SFX_USE_WIN7_PROGRESSBAR
#endif
#if SFXBUILD_OPTIONS3&SFXBUILD_OPTIONS3_RTF_CONTROL && !defined(_SFX_USE_RTF_CONTROL)
	#define _SFX_USE_RTF_CONTROL
#endif
#if SFXBUILD_OPTIONS3&SFXBUILD_OPTIONS3_IMAGES && !defined(_SFX_USE_IMAGES)
	#define _SFX_USE_IMAGES
#endif
#if SFXBUILD_OPTIONS3&SFXBUILD_OPTIONS3_LANG && !defined(_SFX_USE_LANG)
	#define _SFX_USE_LANG
#endif
#if SFXBUILD_OPTIONS3&SFXBUILD_OPTIONS3_ELEVATION && !defined(_SFX_USE_ELEVATION)
	#define _SFX_USE_ELEVATION
#endif
#if SFXBUILD_OPTIONS3&SFXBUILD_OPTIONS3_CHECK_RAM && !defined(_SFX_USE_CHECK_RAM)
	#define _SFX_USE_CHECK_RAM
#endif
#if SFXBUILD_OPTIONS3&SFXBUILD_OPTIONS3_CHECK_FREE_SPACE && !defined(_SFX_USE_CHECK_FREE_SPACE)
	#define _SFX_USE_CHECK_FREE_SPACE
#endif
#if SFXBUILD_OPTIONS3&SFXBUILD_OPTIONS3_BEGINPROMPTTIMEOUT && !defined(_SFX_USE_BEGINPROMPTTIMEOUT)
	#define _SFX_USE_BEGINPROMPTTIMEOUT
#endif
#if SFXBUILD_OPTIONS3&SFXBUILD_OPTIONS3_CONFIG_PLATFORM && !defined(_SFX_USE_CONFIG_PLATFORM)
	#define _SFX_USE_CONFIG_PLATFORM
#endif

#ifndef _SFX_USE_WIN7_PROGRESSBAR
	#undef SFXBUILD_OPTIONS3_WIN7_PROGRESSBAR
	#define SFXBUILD_OPTIONS3_WIN7_PROGRESSBAR		0
#endif
#ifndef _SFX_USE_RTF_CONTROL
	#undef SFXBUILD_OPTIONS3_RTF_CONTROL
	#define SFXBUILD_OPTIONS3_RTF_CONTROL			0
#endif
#ifndef _SFX_USE_IMAGES
	#undef SFXBUILD_OPTIONS3_IMAGES
	#define SFXBUILD_OPTIONS3_IMAGES				0
#endif
#ifndef _SFX_USE_LANG
	#undef SFXBUILD_OPTIONS3_LANG
	#define SFXBUILD_OPTIONS3_LANG					0
#endif
#ifndef _SFX_USE_ELEVATION
	#undef SFXBUILD_OPTIONS3_ELEVATION
	#define SFXBUILD_OPTIONS3_ELEVATION				0
#endif
#ifndef _SFX_USE_CHECK_RAM
	#undef SFXBUILD_OPTIONS3_CHECK_RAM
	#define SFXBUILD_OPTIONS3_CHECK_RAM				0
#endif
#ifndef _SFX_USE_CHECK_FREE_SPACE
	#undef SFXBUILD_OPTIONS3_CHECK_FREE_SPACE
	#define SFXBUILD_OPTIONS3_CHECK_FREE_SPACE		0
#endif
#ifndef _SFX_USE_BEGINPROMPTTIMEOUT
	#undef SFXBUILD_OPTIONS3_BEGINPROMPTTIMEOUT
	#define SFXBUILD_OPTIONS3_BEGINPROMPTTIMEOUT	0
#endif
#ifndef _SFX_USE_CONFIG_PLATFORM
	#undef SFXBUILD_OPTIONS3_CONFIG_PLATFORM
	#define SFXBUILD_OPTIONS3_CONFIG_PLATFORM		0
#endif

#undef SFXBUILD_OPTIONS3
#define SFXBUILD_OPTIONS3						\
	SFXBUILD_OPTIONS3_WIN7_PROGRESSBAR		|	\
	SFXBUILD_OPTIONS3_RTF_CONTROL			|	\
	SFXBUILD_OPTIONS3_IMAGES				|	\
	SFXBUILD_OPTIONS3_LANG					|	\
	SFXBUILD_OPTIONS3_ELEVATION				|	\
	SFXBUILD_OPTIONS3_CHECK_RAM				|	\
	SFXBUILD_OPTIONS3_CHECK_FREE_SPACE		|	\
	SFXBUILD_OPTIONS3_BEGINPROMPTTIMEOUT	|	\
	SFXBUILD_OPTIONS3_CONFIG_PLATFORM		|	\
	0

#ifndef _SFX_USE_WARNINGS
	#if defined(_SFX_USE_CHECK_FREE_SPACE) || defined(_SFX_USE_CHECK_RAM)
		#define _SFX_USE_WARNINGS
	#endif // defined(_SFX_USE_CHECK_FREE_SPACE) || defined(_SFX_USE_CHECK_RAM)
#endif // _SFX_USE_WARNINGS

#ifdef _SFX_MAINTAINER
	/* Oleg_Sch: My customs optimizations */
	#define _SFX_USE_CUSTOM_MSVCRT			/* msvcrt.dll */
											/* require msvcrt.lib from old VC6 for x86 */
											/* or new for x64 from the latest DDK */
											/* see realization in 'config.cpp' */
	#define _SFX_USE_CUSTOM_EXCEPTIONS		/* use custom realization of exceptions handlers */
											/* see realization in 'config.cpp' */
	#define _SFX_USE_TEST					/* internal use */
#endif // _SFX_MAINTAINER

#endif // _CONFIG_H_INCLUDED_