@echo off
title Generating Plugin-SDK project solution
"%PLUGIN_SDK_DIR%\tools\premake\premake5" vs2022 --file="%PLUGIN_SDK_DIR%\tools\premake\premake5.lua"
if %errorlevel% neq 0 pause