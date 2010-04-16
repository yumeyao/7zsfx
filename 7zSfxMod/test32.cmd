@echo off

set platform_dir=win32
set platform_suffix=

set modules=LZMA LZMA2 Deflate PPMd All LZMA_Dialogs

cd ..
FOR %%a in (%modules%) DO (
echo output\%platform_dir%\7zsd_%%a%platform_suffix%.sfx -sfxversion
output\%platform_dir%\7zsd_%%a%platform_suffix%.sfx -sfxversion
)

rem start output/%platform%/7zsd_lzma.sfx -sfxversion
