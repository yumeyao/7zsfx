/*---------------------------------------------------------------------------*/
/* File:        7zSfxMod.h                                                   */
/* Created:     Thu, 28 Jul 2005 02:44:00 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Last update: Fri, 08 Oct 2010 23:05:55 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Revision:    1899                                                         */
/*---------------------------------------------------------------------------*/
/* Revision:    1775                                                         */
/* Updated:     Sun, 06 Jun 2010 07:46:34 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Add warnings stuff                                           */
/*---------------------------------------------------------------------------*/
/* Revision:    1699                                                         */
/* Updated:     Mon, 22 Mar 2010 11:00:15 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: New file stamp.                                              */
/*---------------------------------------------------------------------------*/
	#ifndef _7ZSFXMOD_H_INCLUDED_
#define _7ZSFXMOD_H_INCLUDED_

#ifndef _CFG_PARAM_TYPE
	#define _CFG_PARAM_TYPE	L
#endif // _CFG_PARAM_TYPE

#define CFG_TITLE						_CFG_PARAM_TYPE"Title"
#define CFG_ERRORTITLE					_CFG_PARAM_TYPE"ErrorTitle"
#ifdef _SFX_USE_WARNINGS
	#define CFG_WARNINGTITLE			_CFG_PARAM_TYPE"WarningTitle"
#endif // _SFX_USE_WARNINGS
#define CFG_GUIMODE						_CFG_PARAM_TYPE"GUIMode"
#define CFG_GUIFLAGS					_CFG_PARAM_TYPE"GUIFlags"
#define CFG_MISCFLAGS					_CFG_PARAM_TYPE"MiscFlags"
#define CFG_BEGINPROMPT					_CFG_PARAM_TYPE"BeginPrompt"
#define CFG_INSTALLPATH					_CFG_PARAM_TYPE"InstallPath"
#define CFG_EXTRACT_TITLE				_CFG_PARAM_TYPE"ExtractTitle"
#define CFG_EXTRACT_CANCELTEXT			_CFG_PARAM_TYPE"ExtractCancelText"
#define CFG_EXTRACT_DIALOGTEXT			_CFG_PARAM_TYPE"ExtractDialogText"
#define CFG_EXTRACT_DIALOGWIDTH			_CFG_PARAM_TYPE"ExtractDialogWidth"
#define CFG_RUNPROGRAM					_CFG_PARAM_TYPE"RunProgram"
#define CFG_AUTOINSTALL					_CFG_PARAM_TYPE"AutoInstall"
#define CFG_SHORTCUT					_CFG_PARAM_TYPE"Shortcut"
#define CFG_DELETE						_CFG_PARAM_TYPE"Delete"
#define CFG_SELFDELETE					_CFG_PARAM_TYPE"SelfDelete"
#define CFG_EXTRACT_PATH_TITLE			_CFG_PARAM_TYPE"ExtractPathTitle"
#define CFG_EXTRACT_PATH_TEXT			_CFG_PARAM_TYPE"ExtractPathText"
#define CFG_HELP_TEXT					_CFG_PARAM_TYPE"HelpText"
#define CFG_OVERWRITE_MODE				_CFG_PARAM_TYPE"OverwriteMode"
#define CFG_CANCEL_PROMPT				_CFG_PARAM_TYPE"CancelPrompt"
#define CFG_EXTRACTPATH_WIDTH			_CFG_PARAM_TYPE"ExtractPathWidth"
#define CFG_FINISHMESSAGE				_CFG_PARAM_TYPE"FinishMessage"
#define CFG_EXECUTEFILE					_CFG_PARAM_TYPE"ExecuteFile"
#define CFG_EXECUTEPARAMETERS			_CFG_PARAM_TYPE"ExecuteParameters"
#define CFG_DIRECTORY					_CFG_PARAM_TYPE"Directory"
#define CFG_PROGRESS					_CFG_PARAM_TYPE"Progress"
#define CFG_SETENVIRONMENT				_CFG_PARAM_TYPE"SetEnvironment"
#define CFG_BEGINPROMPTTIMEOUT			_CFG_PARAM_TYPE"BeginPromptTimeout"


#define GUIMODE_STANDARD				0
#define GUIMODE_NOCANCEL				1
#define GUIMODE_HIDDEN					2
#define GUIMODE_MAX						2

#define OVERWRITE_MODE_ALL				0
#define OVERWRITE_MODE_NONE				1
#define OVERWRITE_MODE_OLDER			2
//#define OVERWRITE_MODE_CONFIRM			3
//#define OVERWRITE_MODE_CONFIRM_NEWER	4
#define OVERWRITE_MODE_MAX				2 /* current up to OVERWRITE_MODE_OLDER */
#define OVERWRITE_MODE_MASK				0x07
#define OVERWRITE_FLAG_SKIP_LOCKED		0x08


#define GUIFLAGS_TITLE_PERCENT_RIGHT	0x0001
#define GUIFLAGS_TITLE_PERCENT_NONE		0x0002
#define GUIFLAGS_PERCENT_TEXT			0x0004
#define GUIFLAGS_XPSTYLE				0x0008
#define GUIFLAGS_PERCENT_BOLD			0x0010
#define GUIFLAGS_USEICON				0x0020
#define GUIFLAGS_EXTRACT_PATH1			0x0040
#define GUIFLAGS_EXTRACT_PATH2			0x0080
#define GUIFLAGS_CONFIRM_CANCEL			0x0100
#define GUIFLAGS_NO_TITLE_ICON			0x0200
#define GUIFLAGS_EPD_USEICON			0x0400
#define GUIFLAGS_BP_MODULEICON			0x0800
#define	GUIFLAGS_BP_OKCANCEL			0x1000
#define	GUIFLAGS_NO_WIN7_PROGRESSBAR	0x2000
#define GUIFLAGS_MASK					0x1FFF

#define MISCFLAGS_NO_CHECK_DISK_FREE	0x0001
#define MISCFLAGS_NO_CHECK_RAM			0x0002
#define MISCFLAGS_ELEVATE				0x0004

#define ERRC_NONE						0
#define ERRC_GET_PATHNAME				1
#define ERRC_OPEN_ARCHIVE				2
#define ERRC_READ_CONFIG				3
#define ERRC_CONFIG_DATA				4
#define ERRC_CANCELED					5
#define ERRC_BAD_AUTOINSTALL			6
#define ERRC_NOTHING_TO_EXECUTE			7
#define ERRC_EXTRACT					8
#define ERRC_EXECUTE					9
#define ERRC_EXCEPTION					10
#define ERRC_ELEVATE					11
#define ERRC_PLATFORM					20
#define ERRC_SFXTEST					100

#define CMDLINE_SFXCONFIG			_CFG_PARAM_TYPE"sfxconfig"
#define CMDLINE_SFXVERSION			_CFG_PARAM_TYPE"sfxversion"
#define CMDLINE_SFXLANG				_CFG_PARAM_TYPE"sfxlang"
#define	CMDLINE_SFXTEST				_CFG_PARAM_TYPE"sfxtest"

#ifdef _SFX_USE_TEST

	#define TSD_BEGINPROMPT			L'b'
	#define TSD_BEGINPROMPT_FORCE	L'B'
	#define TSD_CANCELPROMPT		L'c'
	#define TSD_CANCELPROMPT_FORCE	L'C'
	#define TSD_EXTRACT				L'e'
	#define TSD_EXTRACT_FORCE		L'E'
	#define TSD_FINISHMESSAGE		L'f'
	#define TSD_FINISHMESSAGE_FORCE	L'F'
	#define TSD_HELPTEXT			L'h'
	#define TSD_HELPTEXT_FORCE		L'H'
	#define TSD_EXTRACTPATH			L'p'
	#define TSD_EXTRACTPATH_FORCE	L'P'
	#define TSD_WARNING				L'w'
	#define TSD_WARNING_FORCE		L'W'
	#define TSD_ERROR				L'z'
	#define TSD_ERROR_FORCE			L'Z'

	#define TMT_DIALOGS				1
	#define TMT_ARCHIVE				2
	#define TMT_DIALOGS_TO_STDOUT	3
	#define TMT_CHECK_CONFIG		4

#endif // _SFX_USE_TEST

#define SPECIAL_FOLDER_FORMAT			L"7zSfxFolder%02d"
#define SFX_STRING_FORMAT				L"7zSfxString%d"

/* Custom resources IDs */
#define IDC_BANNER						3001

#define IDD_BEGINPROMT_CLASSIC          2001
#define IDD_EXTRACTPATH                 2002
#define IDD_BEGINPROMT_EXTRACTPATH      2003
#define IDD_EXTRACT                     2004
#define IDD_FINISHMESSAGE               2005
#define IDD_HELPTEXT                    2006

#define SDC_ICON						1201
#define SDC_TEXT						1202
#define SDC_BUTTON1						1203
#define SDC_BUTTON2						1204
#define SDC_TEXT2						1205
#define SDC_EXTRACTPATHEDIT				1206
#define SDC_EXTRACTPATHBROWSE			1207
#define SDC_PROGRESS					1208
#define SDC_BACK						1209

#define IDC_NEXT                        SDC_BUTTON1
#define IDC_CANCEL						SDC_BUTTON2
#define IDC_BACK						SDC_BACK
#define IDC_MAIN_TEXT					SDC_TEXT
#define IDC_EXTRA_TEXT					SDC_TEXT2
#define IDC_EXTRACT_PATH_EDIT			SDC_EXTRACTPATHEDIT
#define IDC_EXTRACT_PATH_BROWSE			SDC_EXTRACTPATHBROWSE


#endif // _7ZSFXMOD_H_INCLUDED_
