/*---------------------------------------------------------------------------*/
/* File:        version.h                                                    */
/* Created:     Fri, 29 Jul 2005 03:23:00 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Last update: Thu, 07 Apr 2011 11:07:18 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Revision:    2079                                                         */
/*---------------------------------------------------------------------------*/
/* Revision:    2079                                                         */
/* Updated:     Thu, 07 Apr 2011 11:06:15 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Correct manifest revision                                    */
/*---------------------------------------------------------------------------*/
/* Revision:    2073                                                         */
/* Updated:     Fri, 01 Apr 2011 08:59:48 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Correct copyright year                                       */
/*---------------------------------------------------------------------------*/
/* Revision:    2071                                                         */
/* Updated:     Wed, 30 Mar 2011 10:32:51 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Correct '%%P' in Shortcut                                    */
/*---------------------------------------------------------------------------*/
/* Revision:    1989                                                         */
/* Updated:     Fri, 07 Jan 2011 04:59:21 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Incorrect work of '-fm0' command line switch                 */
/*---------------------------------------------------------------------------*/
/* Revision:    1978                                                         */
/* Updated:     Mon, 27 Dec 2010 10:10:14 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Change '-!' workflow                                         */
/*---------------------------------------------------------------------------*/
/* Revision:    1974                                                         */
/* Updated:     Thu, 23 Dec 2010 10:31:06 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Bugfix: Incorrect work of 'FinishMessage' without prefixes	 */
/*					or command line switch									 */
/*---------------------------------------------------------------------------*/
/* Revision:    1948                                                         */
/* Updated:     Sat, 27 Nov 2010 12:51:23 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Add SFX volumes support                                      */
/*---------------------------------------------------------------------------*/
/* Revision:    1941                                                         */
/* Updated:     Sat, 20 Nov 2010 10:58:30 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Update 7-Zip sources up to 9.20                              */
/*---------------------------------------------------------------------------*/
/* Revision:    1937                                                         */
/* Updated:     Tue, 16 Nov 2010 10:56:27 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Correct TOP-order of the "wrong password" error window		 */
/*					for MiscFlags=+8 by recalling SfxPassword:EarlyPassword	 */
/*					before extraction in main.cpp, ExtractArchive(...)		 */
/*---------------------------------------------------------------------------*/
/* Revision:    1936                                                         */
/* Updated:     Mon, 15 Nov 2010 10:28:46 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Add encryption stuff:                                        */
/*					'PasswordTitle' & 'PasswordText' parameters				 */
/*					'-p' command line switch								 */
/*					'MiscFlags=+8' - password dialog before any other dialogs*/
/*---------------------------------------------------------------------------*/
/* Revision:    1935                                                         */
/* Updated:     Mon, 14 Nov 2010 10:03:58 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Add AES encryption support                                   */
/*---------------------------------------------------------------------------*/
/* Revision:    1934                                                         */
/* Updated:     Sat, 13 Nov 2010 10:14:14 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Update 7-Zip sources up to 9.19 beta                         */
/*---------------------------------------------------------------------------*/
/* Revision:    1929                                                         */
/* Updated:     Mon, 08 Nov 2010 11:43:23 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Deletion of redefined config parameters "Parameter=-"        */
/*---------------------------------------------------------------------------*/
/* Revision:    1928                                                         */
/* Updated:     Sun, 07 Nov 2010 07:00:32 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: New module variable %%P - OS platform						 */
/*					Only x64/x86 are supported,								 */
/*					x86 is default for any platforms other than x64			 */
/*---------------------------------------------------------------------------*/
/* Revision:    1924                                                         */
/* Updated:     Wed, 03 Nov 2010 09:42:16 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Update 7-Zip sources up to 9.18 beta                         */
/*---------------------------------------------------------------------------*/
/* Revision:    1915                                                         */
/* Updated:     Mon, 25 Oct 2010 09:18:54 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Move branch from 'develop' to 'alpha'                        */
/*---------------------------------------------------------------------------*/
/* Revision:    1912                                                         */
/* Updated:     Fri, 22 Oct 2010 09:48:34 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Fix incorrect work of '-fm0' switch                          */
/*---------------------------------------------------------------------------*/
/* Revision:    1903                                                         */
/* Updated:     Wed, 13 Oct 2010 10:02:01 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Catch 'new' allocations errors                               */
/*---------------------------------------------------------------------------*/
/* Revision:    1902                                                         */
/* Updated:     Tue, 12 Oct 2010 09:20:45 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Fix MidFree/BigFree/free with NULL pointers                  */
/*---------------------------------------------------------------------------*/
/* Revision:    1898                                                         */
/* Updated:     Fri, 08 Oct 2010 19:46:10 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Update 7-Zip sources up to 9.17 beta                         */
/*				Incorrect size of dialogs that use text with				 */
/*				  environment variables										 */
/*				BeginPrompt timeout											 */
/*---------------------------------------------------------------------------*/
/* Revision:    1799                                                         */
/* Updated:     Thu, 01 Jul 2010 09:30:09 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Update manifest for Windows 7 PCA support                    */
/*---------------------------------------------------------------------------*/
/* Revision:    1798                                                         */
/* Updated:		Wed, 30 Jun 2010 09:24:36 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Fix: extraction folder was not set as default				 */
/*				for external programs										 */
/*---------------------------------------------------------------------------*/
/* Revision:    1795                                                         */
/* Updated:     Sun, 27 Jun 2010 03:46:18 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Small changes in 'waitall' prefix,							 */
/*				add new MiscFlag '4' - run as administaror					 */
/*				Fix incorrect work of '-mf' switch							 */
/*				some changes in errors reports (see SfxDialog.cpp)			 */
/*---------------------------------------------------------------------------*/
/* Revision:    1794                                                         */
/* Updated:     Sat, 26 Jun 2010 04:09:32 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Execution of external programs was rewritten to support		 */
/*				'wait all childs' of the executed process					 */
/*				new execution prefix 'waitall'								 */
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
#define VERSION_H_REVISION 2079
#define VERSION_REVISION VERSION_H_REVISION

#ifndef _VERSION_H_INCLUDED_
#define _VERSION_H_INCLUDED_

#define VERSION_SFX_NUM_TEXT	"1.5.0"
#define VERSION_SFX_NUM_BIN		1,5,0,VERSION_REVISION
#define VERSION_SFX_DATE_EN		"April 7, 2011"
#define VERSION_SFX_DATE_RU		"7 апреля 2011 г."
#define VERSION_SFX_BRANCH_EN	"alpha"
#define VERSION_SFX_BRANCH_RU	VERSION_SFX_BRANCH_EN

#define VERSION_7ZIP_NUM_TEXT	"9.20"
#define VERSION_7ZIP_DATE_EN	"November 18, 2010"
#define VERSION_7ZIP_DATE_RU	"18 ноября 2010 г."
#define VERSION_7ZIP_BRANCH_EN	""
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
