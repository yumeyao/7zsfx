/*---------------------------------------------------------------------------*/
/* File:        7zSfxModInt.h                                                */
/* Created:     Wed, 25 Jul 2007 09:54:00 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Last update: Fri, 20 Jan 2012 23:35:13 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Revision:    1641                                                         */
/*---------------------------------------------------------------------------*/
/* Revision:    1641                                                         */
/* Updated:     Fri, 20 Jan 2012 23:34:46 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Add 'safe_SHBrowseForFolder' that ignore                     */
/*              RPC_S_SERVER_UNAVAILABLE exception on x64 platform           */
/*---------------------------------------------------------------------------*/
/* Revision:    1047                                                         */
/* Updated:     Sun, 06 Jun 2010 07:47:34 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: Add warnings stuff                                           */
/*---------------------------------------------------------------------------*/
/* Revision:    972                                                          */
/* Updated:     Mon, 22 Mar 2010 11:08:53 GMT                                */
/*              by Oleg N. Scherbakov, mailto:oleg@7zsfx.info                */
/* Description: New file stamp.                                              */
/*---------------------------------------------------------------------------*/
#ifndef _7ZSFXMODINT_H_INCLUDED_
#define _7ZSFXMODINT_H_INCLUDED_

#include "7zSfxMod.h"
#include "langstrs.h"
#include "resource.h"
#include "version.h"

struct CTextConfigPair
{
  UString ID;
  UString String;
};

namespace SfxErrors
{
	enum
	{
		sePropVariant1 = 100,
		sePropVariant2,
		sePropVariant3,
		seAnti,
		seCreateFolder,
		seOverwrite,
		seCreateFile,
	};
}

extern LPCWSTR	lpwszTitle;
extern LPCWSTR	lpwszErrorTitle;
extern LPCWSTR	lpwszCancelText;
extern LPCWSTR	lpwszExtractTitle;
extern LPCWSTR	lpwszExtractPathTitle;
extern LPCWSTR	lpwszExtractPathText;
extern LPCWSTR	lpwszExtractDialogText;
extern LPCWSTR	lpwszCancelPrompt;
extern int		GUIMode;
extern int		GUIFlags;
extern int		MiscFlags;
#ifdef _SFX_USE_LANG
extern LANGID	idSfxLang;
#endif
extern int		ExtractDialogWidth;
extern int		ExtractPathWidth;
extern HWND		hwndExtractDlg;
extern int		FinishMessage;
extern bool		fUseBackward;

extern UString	extractPath;
extern int		OverwriteMode, OverwriteFlags;

// ExtractDlg
extern HWND		hwndExtractDlg;
extern BOOL		fCancelExtract;

class CSfxExtractEngine;
extern CSfxExtractEngine * SfxExtractEngine;
extern CObjectVector<CTextConfigPair> Variables;

#ifdef _SFX_USE_WARNINGS
	extern LPCWSTR lpwszWarningTitle;
	INT_PTR ShowSfxWarningDialog( LPCWSTR lpwszMessage );
#endif // _SFX_USE_WARNINGS
void	ShowSfxErrorDialog( LPCWSTR lpwszMessage );
void	SfxErrorDialog( BOOL fUseLastError, UINT idFormat, ... );
BOOL	DeleteFileOrDirectoryAlways( LPCWSTR lpwszPathName );
BOOL	SfxCreateDirectory( LPCWSTR lpwszPath );

BOOL	CreateFolderTree( LPCWSTR lpwszPath );
BOOL	CreateShortcut( LPCTSTR lpszShortcutData );
void	DisableXPStyles( HWND hwnd );
void	GetDlgItemRect( HWND hwndDlg, int nIDItem, LPRECT rc );
void	ReplaceWithExtractPath( UString& str, UString &extractPath );
void	ReplaceWithArchivePath( UString& str, UString &archivePath );
void	ReplaceWithArchiveName( UString& str, UString &archiveName );
void	HookForExtractPath( HWND hwnd, BOOL fFromBeginPrompt );

bool	GetTextConfig( const AString &string, CObjectVector<CTextConfigPair> &pairs, bool fromCmdLine );
LPCWSTR GetTextConfigValue( const CObjectVector<CTextConfigPair> &pairs, LPCWSTR id, int * pFrom = NULL );
BOOL	SfxExtractPathDialog( LPCWSTR lpwszTitle, LPCWSTR lpwszText );
void	ExpandEnvironmentStrings( UString & ustr );
int		GetOverwriteMode( LPCWSTR lpwszPath, FILETIME * fileTime );
int		MyStrincmp( LPCWSTR str1, LPCWSTR str2, int nLength );
UString GetWindowUString( HWND hwnd );
BOOL	ReplaceVariablesInWindow( HWND hwnd );
BOOL	GetChildRect( HWND hwnd, LPRECT rc );
void ReplaceHexChars( UString& str );
#ifdef _SFX_USE_RTF_CONTROL
	HWND RecreateAsRichEdit( HWND hwndStatic );
#endif // _SFX_USE_RTF_CONTROL
#ifdef _SFX_USE_IMAGES
	BOOL SetDlgControlImage( HWND hwndControl );
#endif // _SFX_USE_IMAGES


//long	StringToLong( LPCWSTR nptr );
#define StringToLong	_wtol

BOOL ExtractDialog();

#define SFX_OM_ERROR		-1
#define SFX_OM_OVERWRITE	0
#define SFX_OM_SKIP			1

#define ClearFileAttributes(path)		SetFileAttributes(path,0)

void SfxDialog_InitHooks();
UINT SfxDialog( LPCWSTR lpwszCaption, LPCWSTR lpwszText, UINT uType,
				WNDPROC WindowProc = NULL, HWND hwndOwner = NULL, int nIconFlag = GUIFLAGS_USEICON );
BOOL SfxBeginPrompt( LPCWSTR lpwszCaption, LPCWSTR lpwszText );
void SetFontFromDialog( HWND hwndTarged, HWND hwndDialog );
BOOL CancelInstall( HWND hwnd );

#define WM_7ZSFX_SETTOTAL		(WM_APP+1)
#define WM_7ZSFX_SETCOMPLETED	(WM_APP+2)

#define FINISHMESSAGE_MAX_TIMEOUT	999

#ifdef _SFX_USE_TEST
	
	extern	UString	TSD_Flags;
	extern	DWORD	TSD_ExtractTimeout;
	extern	int		nTestModeType;

	int TestSfxDialogs( CObjectVector<CTextConfigPair>& config );
	int TestSfxDialogsToStdout( CObjectVector<CTextConfigPair>& config );
	void WriteStdoutChar( WCHAR wc );

#endif // _SFX_USE_TEST

int GetDirectorySeparatorPos( UString& ustrPath );
void CreateDummyWindow();
void SfxCleanup();
void ReplaceVariablesEx( UString& str );
UString MyGetEnvironmentVariable( LPCWSTR lpwszName );
#ifdef _SFX_USE_LANG
	UINT GetUILanguage();
#endif // _SFX_USE_LANG
#ifdef _SFX_USE_PREFIX_PLATFORM
	BOOL SfxPrepareExecute( int nPlatform );
	#if defined(_WIN64) && defined(_M_X64)
		#define SfxFinalizeExecute()
	#else
		void SfxFinalizeExecute();
	#endif // defined(_WIN64) && defined(_M_X64)
#endif // _SFX_USE_PREFIX_PLATFORM

#define SetLastWriteTime	SetMTime

#ifdef _USE_SFXVOLUMES
	class CSfxInStream :
		public IInStream,
		public IStreamGetSize,
		public CMyUnknownImp
	{
	protected:
		CInFileStream	m_Files[1000];
	};
#else
	#define CSfxInStream	CInFileStream
#endif // _USE_SFXVOLUMES

#ifdef _SFX_USE_PREFIX_PLATFORM
enum {  SFX_EXECUTE_PLATFORM_ANY,
        SFX_EXECUTE_PLATFORM_I386,
        SFX_EXECUTE_PLATFORM_AMD64};
#endif // _SFX_USE_PREFIX_PLATFORM

#if defined(_SFX_USE_CUSTOM_EXCEPTIONS) && defined(_WIN64)
		LPITEMIDLIST safe_SHBrowseForFolder( LPBROWSEINFO lpbi );
#else
	#define safe_SHBrowseForFolder	SHBrowseForFolder
#endif // defined(_SFX_USE_CUSTOM_EXCEPTIONS) && defined(_WIN64)

#endif // _7ZSFXMODINT_H_INCLUDED_
