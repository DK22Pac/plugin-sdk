local sdkdir = os.getenv("PLUGIN_SDK_DIR")

if not sdkdir then
    error("WARNING: PLUGIN_SDK_DIR env var not found. Defaulting to current directory.")
end

sdkdir = path.translate(sdkdir, "/")

workspace "plugin"
    configurations { "Release", "zDebug" }
    location (sdkdir .. "\\output")
    targetdir (sdkdir .. "\\output\\lib")

project "plugin_sa"
    kind "StaticLib"
    language "C++"
    architecture "x32"
    staticruntime "On"

    defines {
        "RW",
        "PLUGIN_SGV_10US",
        "GTASA"
    }

    filter "action:gmake or action:gmake2 or action:codeblocks"
        toolset "clang"
        buildoptions { 
            "--target=i686-w64-mingw32",
            "-fpermissive",
            "-fcommon",
            "-fms-extensions",
            "-Wno-microsoft-include" ,
            "-static",
        }
    
    filter "files:**.cpp"
        buildoptions { "-std=c++2b" } -- C++23


    filter "configurations:Release"
        defines { "NDEBUG" }
        optimize "On" 
        symbols "Off"
        targetname "plugin" 

    filter "configurations:zDebug"
        defines { "DEBUG", "_DEBUG" }
        symbols "On"       
        optimize "Debug"   
        targetname "plugin_d" 

    filter {}

    includedirs { 
        sdkdir,
        sdkdir .. "/shared", 
        sdkdir .. "/shared/game", 
        sdkdir .. "/plugin_sa", 
        sdkdir .. "/plugin_sa/game_sa",
        sdkdir .. "/plugin_sa/game_sa/rw",  
        sdkdir .. "/safetyhook"  
    }
    
    files { 
        sdkdir .. "/shared/**.cpp", 
        sdkdir .. "/plugin_sa/**.cpp", 
        sdkdir .. "/safetyhook/**" 
    }