@echo off
premake5.exe vs2019
call "C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\Common7\Tools\VsDevCmd.bat"
MsBuild CheatMenu.sln /property:Configuration=Debug