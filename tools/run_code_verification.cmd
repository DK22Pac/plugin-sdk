@echo off

where /q node.exe
if %ERRORLEVEL% equ 0 (
    cd ..\
    node.exe ".github/workflows/scripts/Validate_Contents.js"
) else (
    echo This tool requires Node.js JavaScript runtime environment.
    echo Visit https://nodejs.org to download
)

pause