include "project"
include "myplugin"

targetname(projectName .. "IV")

defines { "GTAIV", "PLUGIN_SGV_CE", "RAGE" }

includedirs {
	"$(PLUGIN_SDK_DIR)\\plugin_IV\\",
	"$(PLUGIN_SDK_DIR)\\plugin_IV\\game_IV\\",
}

debugdir "$(GTA_IV_DIR)"
debugcommand "$(GTA_IV_DIR)/GTAIV.exe"
postbuildcommands("copy /y \"$(TargetPath)\" \"$(GTA_IV_DIR)\\plugins\\" .. projectName .. "IV.asi\"")

filter "configurations:Release"
	links { "plugin_iv" }
	
filter "configurations:Debug"
	links { "plugin_iv_d" }
		
filter { }
