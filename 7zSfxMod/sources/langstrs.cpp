/*---------------------------------------------------------------------------*/
/* File:        langstrs.cpp                                                 */
/* Created:     Wed, 10 Jan 2007 23:44:00 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Last update: Sat, 26 Jun 2010 04:44:01 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Revision:    1263                                                         */
/*---------------------------------------------------------------------------*/
/* Revision:    1263                                                         */
/* Updated:     Sat, 26 Jun 2010 04:44:01 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Add 'copyright' strings                                      */
/*---------------------------------------------------------------------------*/
/* Revision:    1167                                                         */
/* Updated:     Mon, 22 Mar 2010 11:17:07 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: New file stamp.                                              */
/*---------------------------------------------------------------------------*/
#include "stdafx.h"
#include "7zSfxModInt.h"
#include "langstrs.h"
#include "version.h"


LANGSTRING SfxLangStrings[] = {
	{ STR_SFXVERSION,		"SFX module version:\n\t"VERSION_SFX_TEXT_EN"\n"
							"\n7-Zip version:\n\t"VERSION_7ZIP_TEXT_EN"\n"
							"\nSupported methods and filters:\n\t", NULL },
// Copyright
	{ STR_COPYRIGHT,		"Copyright (c) 2005-2012 Oleg Scherbakov\n", NULL },
	{ STR_TITLE,			"7z SFX", NULL },
	{ STR_ERROR_TITLE,		"7z SFX: error", NULL },
	{ STR_ERROR_SUFFIX,		": error", NULL },
	{ STR_EXTRACT_TITLE,	"Extracting", NULL },
	{ ERR_MODULEPATHNAME,	"Could not get SFX filename.", NULL },
	{ ERR_OPEN_ARCHIVE,		"Could not open archive file \"%s\".", NULL },
	{ ERR_NON7Z_ARCHIVE,	"Non 7z archive.", NULL },
	{ ERR_READ_CONFIG,		"Could not read SFX configuration or configuration not found.", NULL },
	{ ERR_WRITE_CONFIG,		"Could not write SFX configuration.", NULL },
	{ ERR_CONFIG_DATA,		"Error in line %d of configuration data:\n\n%s", NULL },
	{ ERR_CREATE_FOLDER,	"Could not create folder \"%s\".", NULL },
	{ ERR_DELETE_FILE,		"Could not delete file or folder \"%s\".", NULL },
	{ ERR_AUTOINSTALL_NOTFOUND,	"Could not find command for \"%s\".", NULL },
	{ ERR_NO_SETUP_EXE,		"Could not find \"setup.exe\".", NULL },
	{ ERR_EXECUTE,			"Error during execution \"%s\".", NULL },
	{ ERR_7Z_UNSUPPORTED_METHOD,	"7-Zip: Unsupported method.", NULL },
	{ ERR_7Z_CRC_ERROR,				"7-Zip: CRC error.", NULL },
	{ ERR_7Z_DATA_ERROR,			"7-Zip: Data error.", NULL },
	{ ERR_7Z_INTERNAL_ERROR,		"7-Zip: Internal error, code %u.", NULL },
	{ ERR_7Z_EXTRACT_ERROR1,		"7-Zip: Internal error, code 0x%08X.", NULL },
	{ ERR_7Z_EXTRACT_ERROR2,		"7-Zip: Extraction error.", NULL },

	{ STR_EXTRACT_PATH_TITLE,		"Extraction path", NULL },
	{ STR_EXTRACT_PATH_TEXT,		"Extraction path:", NULL },
	{ STR_CANCEL_PROMPT,			"Really cancel the installation?", NULL },
	{ STR_DEFAULT_HELP_TEXT,	"No \"HelpText\" in the configuration file.", NULL },
	{ STR_BUTTON_OK,			"OK", NULL },
	{ STR_BUTTON_CANCEL,		"Cancel", NULL },
	{ STR_BUTTON_YES,			"Yes", NULL },
	{ STR_BUTTON_NO,			"No", NULL },
	{ STR_SECONDS,				" s", NULL },
// Added April 9, 2008
	{ ERR_CREATE_FILE,		"Could not create file \"%s\".", NULL },

	{ ERR_OVERWRITE,		"Could not overwrite file \"%s\".", NULL },
	{ ERR_CONFIG_CMDLINE,	"Error in command line:\n\n%s", NULL },
	{ STR_BUTTON_BACK,		"Back", NULL },
	{ STR_BUTTON_NEXT,		"Next", NULL },
	{ STR_BUTTON_FINISH,	"Finish", NULL },
	{ STR_BUTTON_CANCEL2,	"Cancel", NULL },
#ifdef _SFX_USE_CUSTOM_EXCEPTIONS
	{ ERR_SFX_EXCEPTION,		"Application error:\n\nException code:\n\t0x%08x\nAddress:\n\t0x%08x\nException data:\n", NULL },
#endif // _SFX_USE_CUSTOM_EXCEPTIONS

// Added June 6, 2010: warnings dialogs
#ifdef _SFX_USE_WARNINGS
	{ STR_WARNING_TITLE,		"7z SFX: warning", NULL },
	{ STR_WARNING_SUFFIX,		": warning", NULL },
#ifdef _SFX_USE_CHECK_FREE_SPACE
	{ STR_DISK_FREE_SPACE,		"Not enough free space for extracting.\n\nDo you want to continue?", NULL },
#endif // _SFX_USE_CHECK_FREE_SPACE
#ifdef _SFX_USE_CHECK_RAM
	{ STR_PHYSICAL_MEMORY,		"Insufficient physical memory.\nExtracting may take a long time.\n\nDo you want to continue?", NULL },
#endif // _SFX_USE_CHECK_FREE_SPACE
#endif // _SFX_USE_WARNINGS

	{ 0, "", NULL }
};
