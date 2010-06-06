@Echo off
rem SetLocal enabledelayedexpansion

Set SfxBuild=1774
Set SfxVersion=140
set archive_name=snapshots\7zsd_%SfxVersion%_%SfxBuild%_sources

cd ..
set sources_7zip=7-Zip\Asm\* 7-Zip\C\* 7-Zip\CPP\* 7-Zip\DOC\*
set sources_7zSfxMod=7zSfxMod\sources\* 7zSfxMod\7zSfxMod.vcproj 7zSfxMod\7zSfxMod.sln

7za a -mx=9 -m0=PPMd %archive_name% -xr!.svn %sources_7zip% %sources_7zSfxMod%