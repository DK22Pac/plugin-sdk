include "project"
include "myplugin"

targetname(projectName .. "II")

defines { "GTA2", "PLUGIN_SGV_96EN", "GBH" }

includedirs {
	"$(PLUGIN_SDK_DIR)\\plugin_II\\",
	"$(PLUGIN_SDK_DIR)\\plugin_II\\game_II\\",
}

debugdir "$(GTA_II_DIR)"
debugcommand "$(GTA_II_DIR)/gta2.exe"
postbuildcommands("copy /y \"$(TargetPath)\" \"$(GTA_II_DIR)\\scripts\\" .. projectName .. "II.asi\"")
	
filter "configurations:Release"
	links { "plugin_ii" }
	
filter "configurations:Debug"
	links { "plugin_ii_d" }
		
filter { }
