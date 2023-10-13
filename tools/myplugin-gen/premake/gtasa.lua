include "project"
include "myplugin"
	
targetname(projectName .. "SA")
	
defines { "GTASA", "PLUGIN_SGV_10US", "RW" }

includedirs {
	"$(PLUGIN_SDK_DIR)\\plugin_SA\\",
	"$(PLUGIN_SDK_DIR)\\plugin_SA\\game_SA\\",
}

debugdir "$(GTA_SA_DIR)"
debugcommand "$(GTA_SA_DIR)/gta-sa.exe"
postbuildcommands("copy /y \"$(TargetPath)\" \"$(GTA_SA_DIR)\\scripts\\" .. projectName .. "SA.asi\"")

filter "configurations:Release"
	links { "plugin" }
	
filter "configurations:Debug"
	links { "plugin_d" }
		
filter { }
