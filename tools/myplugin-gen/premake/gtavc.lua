include "project"
include "myplugin"

targetname(projectName .. "VC")

defines { "GTAVC", "PLUGIN_SGV_10EN", "RW" }

includedirs {
	"$(PLUGIN_SDK_DIR)\\plugin_VC\\",
	"$(PLUGIN_SDK_DIR)\\plugin_VC\\game_VC\\",
}

debugdir "$(GTA_VC_DIR)"
debugcommand "$(GTA_VC_DIR)/gta-vc.exe"
postbuildcommands("copy /y \"$(TargetPath)\" \"$(GTA_VC_DIR)\\scripts\\" .. projectName .. "VC.asi\"")
	
filter "configurations:Release"
	links { "plugin_vc" }
	
filter "configurations:Debug"
	links { "plugin_vc_d" }
		
filter { }
