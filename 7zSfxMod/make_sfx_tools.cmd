@Echo off
rem SetLocal enabledelayedexpansion

Set SfxBuild=1795
Set SfxVersion=150

Set tm=%time%
Set HH=%tm:~0,2%
Set HH=%HH: =0%
set timestamp=%date:~6,4%%date:~3,2%%date:~0,2%_%HH%%tm:~3,2%
echo %timestamp%

set sfx_name=..\snapshots\7zsd_tools_%SfxVersion%_%SfxBuild%
set archive_name=%sfx_name%_%timestamp%

cd output
7z a -mx=9 ../%archive_name%.7z -xr!7zsd_Debug* win32/*.sfx win64/*.sfx
copy /b win32\7zsd_LZMA_Dialogs.sfx + ..\..\configs\7zsd_tools_RTF_uk_ru.txt +..\%archive_name%.7z ..\%sfx_name%_x86.exe
copy /b win64\7zsd_LZMA_Dialogs_x64.sfx + ..\..\configs\7zsd_tools_RTF_uk_ru.txt +..\%archive_name%.7z ..\%sfx_name%_x64.exe
del ..\%archive_name%.7z