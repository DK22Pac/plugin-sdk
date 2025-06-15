@echo off
setlocal EnableDelayedExpansion

set projectName=
set platform[1]= 
set platform[2]= 
set platform[3]= 
set platform[4]= 
set platform[5]= 



:select_platform
cls
echo Plugin-SDK MyPlugin Generator for Visual Studio
echo;

:select_platform_retry
echo Select target platform(s):
echo   1 - [!platform[1]!] GTA 2
echo   2 - [!platform[2]!] GTA III
echo   3 - [!platform[3]!] GTA Vice City
echo   4 - [!platform[4]!] GTA San Andreas
echo   5 - [!platform[5]!] GTA IV
echo;
echo   A - Accept
echo   Q - Quit
echo;

set /P rmFunc="Type in 1-5, A or Q and press enter: "
for %%I in (1 2 3 4 5 A a Q q) do if #!rmFunc!==#%%I (
    set rmFunc=
    set choice=%%I
    goto game_choice_%%I
)
echo ;
cls
goto select_platform

:game_choice_1
:game_choice_2
:game_choice_3
:game_choice_4
:game_choice_5
if "!platform[%choice%]!"=="X" (set platform[!choice!]= ) else (set platform[!choice!]=X)
goto select_platform

:game_choice_A
:game_choice_a
if "!platform[1]!"==" " if "!platform[2]!"==" " if "!platform[3]!"==" " if "!platform[4]!"==" " if "!platform[5]!"==" " (
    cls
    echo ERROR: Please select at least one platform^^!
    echo;
    goto select_platform_retry
)
echo;
echo;
goto select_project_name

:game_choice_Q
:game_choice_q
goto :EOF



:select_project_name
set /p projectName=Type in your plugin name and press enter:
if "!projectName!"=="" (
    cls
    echo ERROR: Project name can not be empty^^!
    echo;
    goto select_project_name
)
if exist "generated/!projectName!/!projectName!.sln" (
    cls
    echo ERROR: Project with name "!projectName!" already exists^^!
    echo;
    goto select_project_name
)

set projectDir=%~dp0generated\!projectName!
if not exist "!projectDir!" (mkdir "!projectDir!")

rem prepare platform switches
set platforms=
if "!platform[1]!"=="X" (set platforms=!platforms! --gta2)
if "!platform[2]!"=="X" (set platforms=!platforms! --gta3)
if "!platform[3]!"=="X" (set platforms=!platforms! --gtavc)
if "!platform[4]!"=="X" (set platforms=!platforms! --gtasa)
if "!platform[5]!"=="X" (set platforms=!platforms! --gta4)

..\\premake\\premake5 --file="..\\premake\\premake5.lua" newplugin --dir="!projectDir!" --name="!projectName!" !platforms!

rem show solution file in directory
if %errorlevel% == 0 (explorer.exe /select,"!projectDir!\!projectName!.sln") else pause
