@Echo off
rem SetLocal enabledelayedexpansion

Set SfxBuild=1798
Set SfxVersion=150

set source_dir=%CD%
set sfx_name=%source_dir%\..\snapshots\7zsd_%SfxVersion%_%SfxBuild%

cd ..\output\win32
7z a -mx=9 %sfx_name%_x86.7z -xr!7zsd_Debug* *.sfx
cd ..\win64
7z a -mx=9 %sfx_name%_x64.7z -xr!7zsd_Debug* *.sfx
