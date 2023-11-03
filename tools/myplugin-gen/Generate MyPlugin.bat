@echo off
Setlocal EnableDelayedExpansion

:start
echo Plugin-SDK MyPlugin Generator for Visual Studio
echo Type a game name to start or type HELP for more information

:input_game
set /p input=Game:

:choice
if /i "!input!"=="help" (
    echo Input one of the supported games by plugin-sdk:
    echo GTA2
    echo GTA3
    echo GTAVC
    echo GTASA
    echo GTA4
    goto input_game
) else if /i "!input!"=="gta2" (
    goto set_project_name
) else if /i "!input!"=="gta3" (
    goto set_project_name
) else if /i "!input!"=="gtavc" (
    goto set_project_name
) else if /i "!input!"=="gtasa" (
    goto set_project_name
) else if /i "!input!"=="gta4" (
    goto set_project_name
) else (
    goto input_game
)

:set_project_name
set /p projectName=Project:

if "!projectName!"=="" (
    echo Project name cannot be empty.
    goto input_game
)

set name=!projectName!
set name=!name: =_!
goto vs_version

:vs_version
set /p vsVer=VisualStudioVer:

echo !vsVer!|findstr /r "^[0-9][0-9][0-9][0-9]$" >nul
if errorlevel 1 (
    echo Visual Studio version must be a 4-digit number.
    goto vs_version
)

goto build

:build
..\\premake\\premake5 vs"!vsVer!" --file=premake\\"!input!.lua" --project_name="!name!" --game_name="!input!"
    
pause
