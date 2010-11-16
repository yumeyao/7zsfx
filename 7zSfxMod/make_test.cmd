@Echo off
rem SetLocal enabledelayedexpansion

Set SfxVersion=150

For /F %%i In (SfxBuild.txt) Do Set %%i

Set tm=%time%
Set HH=%tm:~0,2%
Set HH=%HH: =0%
set timestamp=%date:~6,4%%date:~3,2%%date:~0,2%_%HH%%tm:~3,2%
echo %timestamp%

set sfx_name=..\snapshots\7zsd_tools_%SfxVersion%_%SfxBuild%
set archive_name=%sfx_name%_%timestamp%

cd ..\output
7z a -p123 -mx=9 %archive_name%.7z -xr!7zsd_Debug* *.sfx
copy /b 7zsd_LZMA2.sfx + ..\7zSfxMod\configs\test_config.2.txt +%archive_name%.7z %sfx_name%_x86_test2.exe
del %archive_name%.7z