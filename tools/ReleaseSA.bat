@echo off
echo --------------------------------------------------
echo Building ReleaseSA
echo --------------------------------------------------
echo[
call "tools\Setup.bat"
MsBuild CheatMenu.sln /property:Configuration=Release /t:CheatMenuSA
