include "project"
include "myplugin"

targetname(projectName .. "III")

defines { "GTA3", "PLUGIN_SGV_10EN", "RW" }

includedirs {
	"$(PLUGIN_SDK_DIR)\\plugin_III\\",
	"$(PLUGIN_SDK_DIR)\\plugin_III\\game_III\\",
}

debugdir "$(GTA_III_DIR)"
debugcommand "$(GTA_III_DIR)/gta3.exe"
postbuildcommands("copy /y \"$(TargetPath)\" \"$(GTA_III_DIR)\\scripts\\" .. projectName .. "III.asi\"")
	
filter "configurations:Release"
	links { "plugin_iii" }
	
filter "configurations:Debug"
	links { "plugin_iii_d" }
		
filter { }
