/*---------------------------------------------------------------------------*/
/* File:        version.h                                                    */
/* Created:     Fri, 29 Jul 2005 03:23:00 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Last update: Fri, 16 Apr 2010 21:10:05 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Revision:    1723                                                         */
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
#define VERSION_H_REVISION 1723
#define VERSION_REVISION VERSION_H_REVISION

#ifndef _VERSION_H_INCLUDED_
#define _VERSION_H_INCLUDED_

#define VERSION_SFX_NUM_TEXT	"1.4.0"
#define VERSION_SFX_NUM_BIN		1,4,0,VERSION_REVISION
#define VERSION_SFX_DATE_EN		"April 17, 2010"
#define VERSION_SFX_DATE_RU		"17 апреля 2010 г."
#define VERSION_SFX_BRANCH_EN	"alpha"
#define VERSION_SFX_BRANCH_RU	VERSION_SFX_BRANCH_EN

#define VERSION_7ZIP_NUM_TEXT	"9.13"
#define VERSION_7ZIP_DATE_EN	"April 15, 2010"
#define VERSION_7ZIP_DATE_RU	"15 апреля 2010 г."
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
