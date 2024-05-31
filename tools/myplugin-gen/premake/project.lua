newoption {
	trigger     = "project_name",
	description = "Set a project name"
}

newoption {
	trigger     = "game_name",
	description = "Get project game destination"
}

projectName = _OPTIONS["project_name"] or "MyPlugin"
projectPath = "..\\generated\\" .. projectName .. "//"
gameName = _OPTIONS["game_name"] or "Unknown"

workspace(projectName)
configurations { "Release", "Debug" }
location(projectPath .. "project_files/")
   
project(projectName)
kind "SharedLib"

language "C++"
targetextension ".asi"
characterset ("MBCS")
cppdialect "C++latest"

targetdir(projectPath .. "output/asi/")
objdir(projectPath .. "output/obj/")

defines { 
	"_CRT_SECURE_NO_WARNINGS",
	"_CRT_NON_CONFORMING_SWPRINTFS",
	"_USE_MATH_DEFINES",
	"_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING"
}
cppdialect "C++17"

files {
	projectPath .. "source/Main.cpp",
}

includedirs { 
	projectPath .. "source/",
}

includedirs {
	"$(PLUGIN_SDK_DIR)/shared/",
	"$(PLUGIN_SDK_DIR)/shared/game/",
}
	
libdirs { 
	"$(PLUGIN_SDK_DIR)/output/lib/",
	"$(DXSDK_DIR)/Lib/x86/",
	"$(PLUGIN_SDK_DIR)/shared/bass/",
}

filter "configurations:Debug"		
	defines { "DEBUG" }
	symbols "on"
	staticruntime "on"

filter "configurations:Release"
	defines { "NDEBUG" }
	symbols "off"
	optimize "On"
	staticruntime "on"
	
filter {}

