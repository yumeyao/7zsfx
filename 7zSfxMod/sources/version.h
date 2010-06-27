/*---------------------------------------------------------------------------*/
/* File:        version.h                                                    */
/* Created:     Fri, 29 Jul 2005 03:23:00 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Last update: Sun, 27 Jun 2010 07:14:51 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Revision:    1795                                                         */
/*---------------------------------------------------------------------------*/
/* Revision:    1795                                                         */
/* Updated:     Sun, 27 Jun 2010 03:37:09 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Fix incorrect work of '-mf' switch                           */
/*				some changes in errors reports (see SfxDialog.cpp)			 */
/*---------------------------------------------------------------------------*/
/* Revision:    1794                                                         */
/* Updated:     Sat, 26 Jun 2010 10:47:59 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Add copyrights strings to -sfxversion                        */
/*---------------------------------------------------------------------------*/
/* Revision:    1791                                                         */
/* Updated:     Wed, 23 Jun 2010 11:33:43 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Update 7-Zip sources up to 9.15 beta                         */
/*---------------------------------------------------------------------------*/
/* Revision:    1774                                                         */
/* Updated:     Sun, 06 Jun 2010 08:49:42 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Add warnings stuff											 */
/*				(_SFX_USE_CHECK_RAM && _SFX_USE_CHECK_FREE_SPACE)            */
/*---------------------------------------------------------------------------*/
/* Revision:    1773                                                         */
/* Updated:     Sat, 05 Jun 2010 11:16:59 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Update 7-Zip sources up to 9.14 beta                         */
/*				First changes for new editions 'lite/standard/full' and		 */
/*					all MS compilers support. This is the feature			 */
/*---------------------------------------------------------------------------*/
/* Revision:    1723                                                         */
/* Updated:     Fri, 16 Apr 2010 21:10:05 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Update 7-Zip sources up to 9.13 beta                         */
/*---------------------------------------------------------------------------*/
/* Revision:    1704                                                         */
/* Updated:     Sun, 28 Mar 2010 06:38:43 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Update 7-Zip sources up to 9.12 beta                         */
/*---------------------------------------------------------------------------*/
/* Revision:    1698                                                         */
/* Updated:     Mon, 22 Mar 2010 11:33:53 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: New file timestamp.                                          */
/*				main.cpp:													 */
/*						Correct 'x86' and 'x64' prefixes workflow			 */
/*						for 'RunProgram'									 */
/*---------------------------------------------------------------------------*/
#define VERSION_H_REVISION 1795
#define VERSION_REVISION VERSION_H_REVISION

#ifndef _VERSION_H_INCLUDED_
#define _VERSION_H_INCLUDED_

#define VERSION_SFX_NUM_TEXT	"1.4.0"
#define VERSION_SFX_NUM_BIN		1,4,0,VERSION_REVISION
#define VERSION_SFX_DATE_EN		"June 27, 2010"
#define VERSION_SFX_DATE_RU		"27 июня 2010 г."
#define VERSION_SFX_BRANCH_EN	"beta"
#define VERSION_SFX_BRANCH_RU	VERSION_SFX_BRANCH_EN

#define VERSION_7ZIP_NUM_TEXT	"9.15"
#define VERSION_7ZIP_DATE_EN	"June 20, 2010"
#define VERSION_7ZIP_DATE_RU	"20 июня 2010 г."
#define VERSION_7ZIP_BRANCH_EN	"beta"
#define VERSION_7ZIP_BRANCH_RU	VERSION_7ZIP_BRANCH_EN


// end of editable

#ifdef _WIN64
	#define PLATFORM_NAME		"x64"
#else
	#ifdef _WIN32
		#define PLATFORM_NAME		"x86"
	#else
		#error "Unknown platform"
	#endif
#endif

#define VERSION_BUILD_TEXT1(a)	#a
#define VERSION_BUILD_TEXT2(a)	VERSION_BUILD_TEXT1(a)
#define VERSION_BUILD_TEXT	VERSION_BUILD_TEXT2(VERSION_REVISION)

#define VERSION_SFX_TEXT_EN	VERSION_SFX_NUM_TEXT" "VERSION_SFX_BRANCH_EN" ["PLATFORM_NAME"] build "VERSION_BUILD_TEXT" ("VERSION_SFX_DATE_EN")"
#define VERSION_SFX_TEXT_RU	VERSION_SFX_NUM_TEXT" "VERSION_SFX_BRANCH_RU" ["PLATFORM_NAME"] сборка "VERSION_BUILD_TEXT" ("VERSION_SFX_DATE_RU")"

#define VERSION_7ZIP_TEXT_EN	VERSION_7ZIP_NUM_TEXT" "VERSION_7ZIP_BRANCH_EN" ("VERSION_7ZIP_DATE_EN")"
#define VERSION_7ZIP_TEXT_RU	VERSION_7ZIP_NUM_TEXT" "VERSION_7ZIP_BRANCH_RU" ("VERSION_7ZIP_DATE_RU")"

#define VERSION_7ZSFX_BIN	VERSION_SFX_NUM_BIN
#define VERSION_7ZSFX_TXT	VERSION_SFX_NUM_TEXT "." VERSION_BUILD_TEXT

#define PRIVATEBUILD_EN		VERSION_SFX_DATE_EN

#endif // _VERSION_H_INCLUDED_
