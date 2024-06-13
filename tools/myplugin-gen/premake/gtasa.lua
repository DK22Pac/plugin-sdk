include "project"
include "myplugin"
	
targetname(projectName .. "SA")
	
defines { "GTASA", "PLUGIN_SGV_10US", "RW" }

includedirs {
	"$(PLUGIN_SDK_DIR)\\plugin_SA\\",
	"$(PLUGIN_SDK_DIR)\\plugin_SA\\game_SA\\",
}

local sa_dir = os.getenv("GTA_SA_DIR")

if os.isfile(sa_dir .. "/gta-sa.exe") then
	debugcommand "$(GTA_SA_DIR)/gta-sa.exe"
else
	debugcommand "$(GTA_SA_DIR)/gta_sa.exe"
end

debugdir "$(GTA_SA_DIR)"
postbuildcommands("copy /y \"$(TargetPath)\" \"$(GTA_SA_DIR)\\scripts\\" .. projectName .. "SA.asi\"")

filter "configurations:Release"
	links { "plugin" }
	
filter "configurations:Debug"
	links { "plugin_d" }
		
filter { }
