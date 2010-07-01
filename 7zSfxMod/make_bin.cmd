@Echo off
rem SetLocal enabledelayedexpansion

Set SfxBuild=1799
Set SfxVersion=150

set source_dir=%CD%
set sfx_name=%source_dir%\..\bin\7zsd_%SfxVersion%_%SfxBuild%

cd ..\output
7z a -mx=9 %sfx_name%.7z -xr!7zsd_Debug* win32\*.sfx win64\*.sfx
