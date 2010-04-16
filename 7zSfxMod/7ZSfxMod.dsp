# Microsoft Developer Studio Project File - Name="7zSfxMod" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=7zSfxMod - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "7ZSfxMod.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "7ZSfxMod.mak" CFG="7zSfxMod - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "7zSfxMod - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE "7zSfxMod - Win32 All" (based on "Win32 (x86) Application")
!MESSAGE "7zSfxMod - Win32 LZMA" (based on "Win32 (x86) Application")
!MESSAGE "7zSfxMod - Win32 LZMA2" (based on "Win32 (x86) Application")
!MESSAGE "7zSfxMod - Win32 Deflate" (based on "Win32 (x86) Application")
!MESSAGE "7zSfxMod - Win32 PPMd" (based on "Win32 (x86) Application")
!MESSAGE "7zSfxMod - Win32 SfxTools" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "7zSfxMod - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug\win32"
# PROP Intermediate_Dir "Debug\win32\7zSfxMod"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /I "..\CPP\\" /D "_DEBUG" /D "COMPRESS_DEFLATE" /D "COMPRESS_LZMA" /D "COMPRESS_LZMA2" /D "COMPRESS_BCJ" /D "COMPRESS_BCJ2" /D "_SFXTOOLS" /D "_OPTIMIZE_SFXSIZE" /D "_USE_SFXRTF" /D "_USE_SFXIMAGES" /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "EXTRACT_ONLY" /D "NO_REGISTRY" /D "_SFX" /D "_NO_CRYPTO" /D "UNICODE" /D "_UNICODE" /D "_USE_SFXTEST" /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x419 /d "_DEBUG"
# ADD RSC /l 0x419 /d "_DEBUG" /d "_SFXTOOLS"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comctl32.lib /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept /heap:0x1000000
# SUBTRACT LINK32 /pdb:none /incremental:no /map

!ELSEIF  "$(CFG)" == "7zSfxMod - Win32 All"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "7zSfxMod___Win32_Release_DLL_All"
# PROP BASE Intermediate_Dir "7zSfxMod___Win32_Release_DLL_All"
# PROP BASE Ignore_Export_Lib 0
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Output\x86-vc6"
# PROP Intermediate_Dir "Intermediate\x86-vc6\All"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O1 /I "..\\" /D "NDEBUG" /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "EXTRACT_ONLY" /D "EXCLUDE_COM" /D "NO_REGISTRY" /D "FORMAT_7Z" /D "COMPRESS_LZMA" /D "COMPRESS_BCJ_X86" /D "COMPRESS_BCJ2" /D "COMPRESS_COPY" /D "COMPRESS_DEFLATE" /D "_SFX" /D "_NO_CRYPTO" /YX /FD /c
# ADD CPP /nologo /MD /W3 /O1 /I "..\CPP\\" /D "NDEBUG" /D "COMPRESS_LZMA" /D "COMPRESS_LZMA2" /D "COMPRESS_DEFLATE" /D "COMPRESS_PPMD" /D "COMPRESS_BCJ" /D "COMPRESS_BCJ2" /D "_OPTIMIZE_SFXSIZE" /D "_USE_SFXRTF" /D "_USE_SFXIMAGES" /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "EXTRACT_ONLY" /D "NO_REGISTRY" /D "_SFX" /D "_NO_CRYPTO" /D "UNICODE" /D "_UNICODE" /D "_USE_SFXTEST" /Yu"stdafx.h" /FD /wd4530 /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x419 /d "NDEBUG"
# ADD RSC /l 0x419 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib comctl32.lib /nologo /subsystem:windows /map /machine:I386
# SUBTRACT BASE LINK32 /nodefaultlib
# ADD LINK32 kernel32.lib user32.lib gdi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comctl32.lib /nologo /subsystem:windows /map /machine:I386 /out:"Output/x86-vc6/7zsd_All.sfx"
# SUBTRACT LINK32 /nodefaultlib

!ELSEIF  "$(CFG)" == "7zSfxMod - Win32 LZMA"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "7zSfxMod___Win32_Release_DLL_LZMA"
# PROP BASE Intermediate_Dir "7zSfxMod___Win32_Release_DLL_LZMA"
# PROP BASE Ignore_Export_Lib 0
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Output\x86-vc6"
# PROP Intermediate_Dir "Intermediate\x86-vc6\LZMA"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O1 /I "..\\" /D "NDEBUG" /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "EXTRACT_ONLY" /D "EXCLUDE_COM" /D "NO_REGISTRY" /D "FORMAT_7Z" /D "COMPRESS_LZMA" /D "COMPRESS_BCJ_X86" /D "COMPRESS_BCJ2" /D "COMPRESS_COPY" /D "COMPRESS_DEFLATE" /D "_SFX" /D "_NO_CRYPTO" /YX /FD /c
# ADD CPP /nologo /MD /W3 /O1 /I "..\CPP\\" /D "NDEBUG" /D "COMPRESS_LZMA" /D "COMPRESS_BCJ" /D "COMPRESS_BCJ2" /D "_OPTIMIZE_SFXSIZE" /D "_USE_SFXRTF" /D "_USE_SFXIMAGES" /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "EXTRACT_ONLY" /D "NO_REGISTRY" /D "_SFX" /D "_NO_CRYPTO" /D "UNICODE" /D "_UNICODE" /D "_USE_SFXTEST" /Yu"stdafx.h" /FD /wd4530 /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x419 /d "NDEBUG"
# ADD RSC /l 0x419 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib comctl32.lib /nologo /subsystem:windows /map /machine:I386
# SUBTRACT BASE LINK32 /nodefaultlib
# ADD LINK32 kernel32.lib user32.lib gdi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comctl32.lib /nologo /subsystem:windows /map /machine:I386 /out:"Output/x86-vc6/7zsd_LZMA.sfx"
# SUBTRACT LINK32 /pdb:none

!ELSEIF  "$(CFG)" == "7zSfxMod - Win32 LZMA2"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "7zSfxMod___Win32_LZMA2"
# PROP BASE Intermediate_Dir "7zSfxMod___Win32_LZMA2"
# PROP BASE Ignore_Export_Lib 0
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Output\x86-vc6"
# PROP Intermediate_Dir "Intermediate\x86-vc6\LZMA2"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O1 /I "..\CPP\\" /D "NDEBUG" /D "COMPRESS_LZMA" /D "COMPRESS_LZMA2" /D "COMPRESS_BCJ" /D "COMPRESS_BCJ2" /D "_OPTIMIZE_SFXSIZE" /D "_USE_SFXRTF" /D "_USE_SFXIMAGES" /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "EXTRACT_ONLY" /D "NO_REGISTRY" /D "_SFX" /D "_NO_CRYPTO" /D "UNICODE" /D "_UNICODE" /D "_USE_SFXTEST" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /O1 /I "..\CPP\\" /D "NDEBUG" /D "COMPRESS_LZMA" /D "COMPRESS_LZMA2" /D "COMPRESS_BCJ" /D "COMPRESS_BCJ2" /D "_OPTIMIZE_SFXSIZE" /D "_USE_SFXRTF" /D "_USE_SFXIMAGES" /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "EXTRACT_ONLY" /D "NO_REGISTRY" /D "_SFX" /D "_NO_CRYPTO" /D "UNICODE" /D "_UNICODE" /D "_USE_SFXTEST" /Yu"stdafx.h" /FD /wd4530 /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x419 /d "NDEBUG"
# ADD RSC /l 0x419 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comctl32.lib /nologo /subsystem:windows /map /machine:I386 /out:"Release/7ZSD_LZMA.sfx"
# SUBTRACT BASE LINK32 /pdb:none
# ADD LINK32 kernel32.lib user32.lib gdi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comctl32.lib /nologo /subsystem:windows /map /machine:I386 /out:"Output/x86-vc6/7zsd_LZMA2.sfx"
# SUBTRACT LINK32 /pdb:none

!ELSEIF  "$(CFG)" == "7zSfxMod - Win32 Deflate"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "7zSfxMod___Win32_Release_DLL_Deflate"
# PROP BASE Intermediate_Dir "7zSfxMod___Win32_Release_DLL_Deflate"
# PROP BASE Ignore_Export_Lib 0
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Output\x86-vc6"
# PROP Intermediate_Dir "Intermediate\x86-vc6\Defalte"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O1 /I "..\\" /D "NDEBUG" /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "EXTRACT_ONLY" /D "EXCLUDE_COM" /D "NO_REGISTRY" /D "FORMAT_7Z" /D "COMPRESS_LZMA" /D "COMPRESS_BCJ_X86" /D "COMPRESS_BCJ2" /D "COMPRESS_COPY" /D "COMPRESS_DEFLATE" /D "_SFX" /D "_NO_CRYPTO" /YX /FD /c
# ADD CPP /nologo /MD /W3 /O1 /I "..\CPP\\" /D "NDEBUG" /D "COMPRESS_DEFLATE" /D "_OPTIMIZE_SFXSIZE" /D "_USE_SFXRTF" /D "_USE_SFXIMAGES" /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "EXTRACT_ONLY" /D "NO_REGISTRY" /D "_SFX" /D "_NO_CRYPTO" /D "UNICODE" /D "_UNICODE" /D "_USE_SFXTEST" /Yu"stdafx.h" /FD /wd4530 /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x419 /d "NDEBUG"
# ADD RSC /l 0x419 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib comctl32.lib /nologo /subsystem:windows /map /machine:I386
# SUBTRACT BASE LINK32 /nodefaultlib
# ADD LINK32 kernel32.lib user32.lib gdi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comctl32.lib /nologo /subsystem:windows /map /machine:I386 /out:"Output/x86-vc6/7zsd_Deflate.sfx"
# SUBTRACT LINK32 /pdb:none

!ELSEIF  "$(CFG)" == "7zSfxMod - Win32 PPMd"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "7zSfxMod___Win32_Release_DLL_PPMd"
# PROP BASE Intermediate_Dir "7zSfxMod___Win32_Release_DLL_PPMd"
# PROP BASE Ignore_Export_Lib 0
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Output\x86-vc6"
# PROP Intermediate_Dir "Intermediate\x86-vc6\PPMd"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O1 /I "..\\" /D "NDEBUG" /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "EXTRACT_ONLY" /D "EXCLUDE_COM" /D "NO_REGISTRY" /D "FORMAT_7Z" /D "COMPRESS_LZMA" /D "COMPRESS_BCJ_X86" /D "COMPRESS_BCJ2" /D "COMPRESS_COPY" /D "COMPRESS_DEFLATE" /D "COMPRESS_PPMD" /D "_SFX" /D "_NO_CRYPTO" /YX /FD /c
# ADD CPP /nologo /MD /W3 /O1 /I "..\CPP\\" /D "NDEBUG" /D "COMPRESS_PPMD" /D "_OPTIMIZE_SFXSIZE" /D "_USE_SFXRTF" /D "_USE_SFXIMAGES" /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "EXTRACT_ONLY" /D "NO_REGISTRY" /D "_SFX" /D "_NO_CRYPTO" /D "UNICODE" /D "_UNICODE" /D "_USE_SFXTEST" /Yu"stdafx.h" /FD /wd4530 /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x419 /d "NDEBUG"
# ADD RSC /l 0x419 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib comctl32.lib /nologo /subsystem:windows /map /machine:I386 /out:"Release_DLL/7ZSD_All.sfx"
# SUBTRACT BASE LINK32 /nodefaultlib
# ADD LINK32 kernel32.lib user32.lib gdi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comctl32.lib /nologo /subsystem:windows /map /machine:I386 /out:"Output/x86-vc6/7zsd_PPMd.sfx"
# SUBTRACT LINK32 /nodefaultlib

!ELSEIF  "$(CFG)" == "7zSfxMod - Win32 SfxTools"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "7zSfxMod___Win32_SfxTools"
# PROP BASE Intermediate_Dir "7zSfxMod___Win32_SfxTools"
# PROP BASE Ignore_Export_Lib 0
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Output\x86-vc6"
# PROP Intermediate_Dir "Intermediate\x86-vc6\SfxTools"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O1 /I "..\CPP\\" /D "NDEBUG" /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "EXTRACT_ONLY" /D "NO_REGISTRY" /D "_SFX" /D "_NO_CRYPTO" /D "UNICODE" /D "_UNICODE" /D "_USE_SFXTEST" /D "COMPRESS_LZMA" /D "COMPRESS_BCJ" /D "COMPRESS_BCJ2" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /O1 /I "..\CPP\\" /D "NDEBUG" /D "COMPRESS_LZMA" /D "COMPRESS_BCJ" /D "COMPRESS_BCJ2" /D "_OPTIMIZE_SFXSIZE" /D "_USE_SFXRTF" /D "_USE_SFXIMAGES" /D "WIN32" /D "_WINDOWS" /D "_MBCS" /D "EXTRACT_ONLY" /D "NO_REGISTRY" /D "_SFX" /D "_NO_CRYPTO" /D "UNICODE" /D "_UNICODE" /D "_USE_SFXTEST" /Yu"stdafx.h" /FD /wd4530 /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x419 /d "NDEBUG"
# ADD RSC /l 0x419 /d "NDEBUG" /d "_SFXTOOLS"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib comctl32.lib /nologo /subsystem:windows /map /machine:I386 /out:"Release/7ZSD_LZMA.sfx"
# SUBTRACT BASE LINK32 /pdb:none
# ADD LINK32 kernel32.lib user32.lib gdi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comctl32.lib /nologo /subsystem:windows /map /machine:I386 /out:"Output/x86-vc6/7zsd_SfxTools.sfx"
# SUBTRACT LINK32 /pdb:none

!ENDIF 

# Begin Target

# Name "7zSfxMod - Win32 Debug"
# Name "7zSfxMod - Win32 All"
# Name "7zSfxMod - Win32 LZMA"
# Name "7zSfxMod - Win32 LZMA2"
# Name "7zSfxMod - Win32 Deflate"
# Name "7zSfxMod - Win32 PPMd"
# Name "7zSfxMod - Win32 SfxTools"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\sources\config.cpp
# End Source File
# Begin Source File

SOURCE=sources\ExtractEngine.cpp
# End Source File
# Begin Source File

SOURCE=sources\Helpers.cpp
# End Source File
# Begin Source File

SOURCE=sources\langstrs.cpp
# End Source File
# Begin Source File

SOURCE=sources\main.cpp
# End Source File
# Begin Source File

SOURCE=.\sources\Sfx7zHacks.cpp
# End Source File
# Begin Source File

SOURCE=sources\SfxDialogs.cpp
# End Source File
# Begin Source File

SOURCE=sources\SfxTest.cpp
# End Source File
# Begin Source File

SOURCE=sources\stdafx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=sources\7zSfxMod.h
# End Source File
# Begin Source File

SOURCE=sources\7zSfxModInt.h
# End Source File
# Begin Source File

SOURCE=.\sources\config.h
# End Source File
# Begin Source File

SOURCE=sources\ExtractEngine.h
# End Source File
# Begin Source File

SOURCE=sources\langstrs.h
# End Source File
# Begin Source File

SOURCE=sources\resource.h
# End Source File
# Begin Source File

SOURCE=sources\SfxDialogs.h
# End Source File
# Begin Source File

SOURCE=sources\stdafx.h
# End Source File
# Begin Source File

SOURCE=.\sources\version.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=sources\res\7zsfx.ico
# End Source File
# Begin Source File

SOURCE=sources\7zSfxMod.rc
# End Source File
# Begin Source File

SOURCE=sources\res\banner_en.gif
# End Source File
# Begin Source File

SOURCE=sources\res\banner_ru.gif
# End Source File
# Begin Source File

SOURCE=sources\res\manifest32.xml
# End Source File
# Begin Source File

SOURCE=sources\res\manifest64.xml
# End Source File
# End Group
# Begin Group "7z"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\C\7zCrc.c
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\Asm\x86\7zCrcOpt.asm

!IF  "$(CFG)" == "7zSfxMod - Win32 Debug"

# PROP Ignore_Default_Tool 1
# Begin Custom Build
IntDir=.\Debug\win32\7zSfxMod
InputPath=..\Asm\x86\7zCrcOpt.asm
InputName=7zCrcOpt

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	ml /nologo /c /coff /Zf /Fo$(IntDir)\$(InputName).obj $(InputPath)

# End Custom Build

!ELSEIF  "$(CFG)" == "7zSfxMod - Win32 All"

# Begin Custom Build
IntDir=.\Intermediate\x86-vc6\All
InputPath=..\Asm\x86\7zCrcOpt.asm
InputName=7zCrcOpt

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	ml /nologo /c /Fo$(IntDir)\$(InputName).obj $(InputPath)

# End Custom Build

!ELSEIF  "$(CFG)" == "7zSfxMod - Win32 LZMA"

# Begin Custom Build
IntDir=.\Intermediate\x86-vc6\LZMA
InputPath=..\Asm\x86\7zCrcOpt.asm
InputName=7zCrcOpt

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	ml /nologo /c /Fo$(IntDir)\$(InputName).obj $(InputPath)

# End Custom Build

!ELSEIF  "$(CFG)" == "7zSfxMod - Win32 LZMA2"

# Begin Custom Build
IntDir=.\Intermediate\x86-vc6\LZMA2
InputPath=..\Asm\x86\7zCrcOpt.asm
InputName=7zCrcOpt

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	ml /nologo /c /Fo$(IntDir)\$(InputName).obj $(InputPath)

# End Custom Build

!ELSEIF  "$(CFG)" == "7zSfxMod - Win32 Deflate"

# Begin Custom Build
IntDir=.\Intermediate\x86-vc6\Defalte
InputPath=..\Asm\x86\7zCrcOpt.asm
InputName=7zCrcOpt

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	ml /nologo /c /Fo$(IntDir)\$(InputName).obj $(InputPath)

# End Custom Build

!ELSEIF  "$(CFG)" == "7zSfxMod - Win32 PPMd"

# Begin Custom Build
IntDir=.\Intermediate\x86-vc6\PPMd
InputPath=..\Asm\x86\7zCrcOpt.asm
InputName=7zCrcOpt

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	ml /nologo /c /Fo$(IntDir)\$(InputName).obj $(InputPath)

# End Custom Build

!ELSEIF  "$(CFG)" == "7zSfxMod - Win32 SfxTools"

# Begin Custom Build
IntDir=.\Intermediate\x86-vc6\SfxTools
InputPath=..\Asm\x86\7zCrcOpt.asm
InputName=7zCrcOpt

"$(IntDir)\$(InputName).obj" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	ml /nologo /c /Fo$(IntDir)\$(InputName).obj $(InputPath)

# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Archive\7z\7zDecode.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Archive\7z\7zExtract.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Archive\7z\7zFolderOutStream.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Archive\7z\7zHandler.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Archive\7z\7zHeader.cpp
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Archive\7z\7zIn.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Archive\Common\CoderMixer2.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Archive\Common\CoderMixer2MT.cpp
# End Source File
# Begin Source File

SOURCE=..\C\CpuArch.c
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Common\CreateCoder.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Archive\Common\CrossThreadProgress.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\Windows\FileIO.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Common\FileStreams.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Common\FilterCoder.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Common\InBuffer.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Archive\Common\ItemNameUtils.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Common\LimitedStreams.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Common\LockedStream.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\Common\MyString.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\Common\MyVector.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Common\OutBuffer.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Archive\Common\OutStreamWithCRC.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Common\ProgressUtils.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\Windows\PropVariant.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Common\StreamBinder.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Common\StreamObjects.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Common\StreamUtils.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\Windows\Synchronization.cpp
# End Source File
# Begin Source File

SOURCE=..\C\Threads.c
# SUBTRACT CPP /YX /Yc /Yu
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Common\VirtThread.cpp
# End Source File
# End Group
# Begin Group "Methods"

# PROP Default_Filter ""
# Begin Group "Copy"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\CPP\7zip\Compress\CopyCoder.cpp
# End Source File
# Begin Source File

SOURCE=..\CPP\7zip\Compress\CopyRegister.cpp
# End Source File
# End Group
# Begin Group "LZMA"

# PROP Default_Filter ""
# Begin Source File

SOURCE=sources\LZMA.CPP
# End Source File
# End Group
# Begin Group "LZMA2"

# PROP Default_Filter ""
# Begin Source File

SOURCE=sources\lzma2.cpp
# End Source File
# End Group
# Begin Group "Deflate"

# PROP Default_Filter ""
# Begin Source File

SOURCE=sources\Deflate.cpp
# End Source File
# End Group
# Begin Group "PPMd"

# PROP Default_Filter ""
# Begin Source File

SOURCE=sources\PPMd.cpp
# End Source File
# End Group
# Begin Group "BCJ"

# PROP Default_Filter ""
# Begin Source File

SOURCE=sources\BCJ.CPP
# End Source File
# End Group
# Begin Group "BCJ2"

# PROP Default_Filter ""
# Begin Source File

SOURCE=sources\BCJ2.CPP
# End Source File
# End Group
# End Group
# End Target
# End Project
