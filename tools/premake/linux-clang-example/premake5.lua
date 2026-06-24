-- This is an example Premake5 script for generating a project that compiles
-- a custom GTA SA/VC/III ASI/CLEO plugin using Clang/MinGW on Linux.
-- To use this template, set the PLUGIN_SDK_DIR environment variable to the
-- path of your compiled Plugin-SDK repository.

local sdkdir = os.getenv("PLUGIN_SDK_DIR")
if not sdkdir or sdkdir == "" then
    error("ERROR: PLUGIN_SDK_DIR environment variable is not set!")
end
sdkdir = path.translate(sdkdir, "/")

workspace "MyCustomPlugin"
    configurations { "Release", "Debug" }
    location "build"

project "MyCustomPlugin"
    kind "SharedLib"
    language "C++"
    targetextension ".asi" -- .asi, .cleo, or .dll
    
    -- Target 32-bit (x86) for classic GTA games, 64-bit (x86_64) for Unreal DE games
    architecture "x86" 

    -- Target Clang cross-compilation toolchain on Linux/MinGW
    filter "action:gmake or action:gmake2"
        toolset "clang"
        buildoptions {
            "-fpermissive",
            "-fcommon",
            "-fms-extensions",
            "-Wno-invalid-offsetof",
            "-Wno-microsoft-include",
            "-static",
        }
        
    filter { "action:gmake or action:gmake2", "architecture:x86" }
        buildoptions { "--target=i686-w64-mingw32" }
        linkoptions { "--target=i686-w64-mingw32", "-static-libgcc", "-static-libstdc++" }
        
    filter { "action:gmake or action:gmake2", "architecture:x86_64" }
        buildoptions { "--target=x86_64-w64-mingw32" }
        linkoptions { "--target=x86_64-w64-mingw32", "-static-libgcc", "-static-libstdc++" }
    filter {}

    -- C++23 standard
    filter "files:**.cpp"
        buildoptions { "-std=c++2b" }
    filter {}

    -- Include directories for the SDK
    includedirs {
        "source", -- Your plugin source folder
        sdkdir .. "/shared",
        sdkdir .. "/shared/game",
        sdkdir .. "/shared/dxsdk",
        sdkdir .. "/safetyhook",
        -- Game-specific includes (change as needed for III, VC, SA, etc.):
        sdkdir .. "/plugin_sa",
        sdkdir .. "/plugin_sa/game_sa",
        sdkdir .. "/plugin_sa/game_sa/enums",
        sdkdir .. "/plugin_sa/game_sa/rw",
    }

    -- SDK static library search directory
    libdirs {
        sdkdir .. "/output/lib"
    }

    -- Source files for your plugin
    files {
        "source/**.h",
        "source/**.cpp",
    }

    -- Define game macros (e.g. GTASA, GTAVC, GTA3) and link against correct SDK library
    filter "configurations:Release"
        defines { "GTASA", "NDEBUG" }
        links { "Plugin" } -- Links libPlugin.a
        targetdir "output/Release"
        
    filter "configurations:Debug"
        defines { "GTASA", "DEBUG", "_DEBUG" }
        links { "Plugin_d" } -- Links libPlugin_d.a
        targetdir "output/Debug"
    filter {}