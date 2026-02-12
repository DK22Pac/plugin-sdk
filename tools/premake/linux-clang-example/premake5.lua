local sdkdir = os.getenv("PLUGIN_SDK_DIR")

if not sdkdir then
    error("WARNING: PLUGIN_SDK_DIR env var not found. Defaulting to current directory.")
end

sdkdir = path.translate(sdkdir, "/")

workspace "plugin"
    configurations { "Release", "zDebug" }
    location "build"

project "Plugin_SA"
    kind "StaticLib"
    language "C++"
    architecture "x32"
    
    targetname "Plugin" 

    forceincludes { "cstring", "CPed.h" }

    defines {
        "RW",
        "PLUGIN_SGV_10US",
        "GTASA"
    }

    filter "action:gmake or action:gmake2 or action:codeblocks"
        toolset "clang"
        buildoptions { 
            "-std=c++2b", -- C++23 
            "--target=i686-w64-mingw32",
            "-fpermissive",
            "-fcommon",
            "-fms-extensions",
            "-Wno-microsoft-include" 
        }
    filter {}

    includedirs { 
        sdkdir,
        sdkdir .. "/shared", 
        sdkdir .. "/shared/game", 
        sdkdir .. "/plugin_sa", 
        sdkdir .. "/plugin_sa/game_sa",
        sdkdir .. "/plugin_sa/game_sa/rw"  
    }
    
    files { 
        sdkdir .. "/shared/**.cpp", 
        sdkdir .. "/plugin_sa/**.cpp" 
    }