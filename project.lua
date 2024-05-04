--! NuMake Project
inspect = workspace:require_url("https://raw.githubusercontent.com/kikito/inspect.lua/master/inspect.lua") --- For debugging purposes

function AddTables(t1,t2)
    for i=1,#t2 do
        t1[#t1+1] = t2[i]
    end
    return t1
end

shared_paths = {
    "shared",
    "shared\\game",
    "shared\\bass",
    "shared\\comp",
    "shared\\dxsdk",
    "shared\\extender",
    "shared\\extensions",
    "shared\\rwd3d9",
}

plugin_rc = {"shared/plugin.rc"}

function Get3DGameDirs(game)
    return {
        "plugin_"..game,
        "plugin_"..game.."\\game_"..game,
        "plugin_"..game.."\\game_"..game.."\\meta",
        "plugin_"..game.."\\game_"..game.."\\rw",
        "hooking"
    }
end


---! GTASA !---
plugin_sa = workspace:create_msvc_target("plugin_sa")
plugin_sa.definitions = {
    "_CRT_SECURE_NO_WARNINGS",
    "_CRT_NON_CONFORMING_SWPRINTFS",
    "_USE_MATH_DEFINES",
    "_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING",
    "_DX9_SDK_INSTALLED",
    "GTASA",
    "PLUGIN_SGV_10US",
    "RW"
}

plugin_sa.include_paths = AddTables(Get3DGameDirs("sa"), shared_paths)

plugin_sa.library_paths = shared_paths

plugin_sa.resource_files = plugin_rc

plugin_sa.files = AddTables(
    workspace:walk_dir("hooking", false, {"cpp"}), 
    AddTables(
        workspace:walk_dir("shared", true, {"cpp"}), 
        workspace:walk_dir("plugin_sa", true, {"cpp"})
    )
)

plugin_sa.arch = "x86"
plugin_sa.static_library = true

plugin_sa.compiler_flags = {
    "/std:c++17",
    "/Ox",
    "/W3",
    "/sdl-",
    "/GF",
    "/Gy",
    "/Oi",
    "/MT",
}

plugin_sa.linker_flags = {
    "/SUBSYSTEM:WINDOWS",
    "/LTCG",

}

plugin_sa.output = "plugin.lib"

---! GTA3 !---
plugin_3 = workspace:create_msvc_target("plugin_3")
plugin_3.definitions = {
    "_CRT_SECURE_NO_WARNINGS",
    "_CRT_NON_CONFORMING_SWPRINTFS",
    "_USE_MATH_DEFINES",
    "_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING",
    "_DX9_SDK_INSTALLED",
    "GTA3",
    "PLUGIN_SGV_10EN",
    "RW"
}

plugin_3.include_paths = AddTables(Get3DGameDirs("iii"), shared_paths)

plugin_3.library_paths = shared_paths

plugin_3.resource_files = plugin_rc

plugin_3.files = AddTables(
    workspace:walk_dir("hooking", false, {"cpp"}), 
    AddTables(
        workspace:walk_dir("shared", true, {"cpp"}), 
        workspace:walk_dir("plugin_iii", true, {"cpp"})
    )
)

plugin_3.arch = "x86"
plugin_3.static_library = true

plugin_3.compiler_flags = {
    "/std:c++17",
    "/Ox",
    "/W3",
    "/sdl-",
    "/GF",
    "/Gy",
    "/Oi",
    "/MT",
}

plugin_3.linker_flags = {
    "/SUBSYSTEM:WINDOWS",
    "/LTCG",

}

plugin_3.output = "plugin_iii.lib"

---! VICE CITY !---
plugin_vc = workspace:create_msvc_target("plugin_vc")
plugin_vc.definitions = {
    "_CRT_SECURE_NO_WARNINGS",
    "_CRT_NON_CONFORMING_SWPRINTFS",
    "_USE_MATH_DEFINES",
    "_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING",
    "_DX9_SDK_INSTALLED",
    "GTAVC",
    "PLUGIN_SGV_10EN",
    "RW"
}

plugin_vc.include_paths = AddTables(Get3DGameDirs("vc"), shared_paths)

plugin_vc.library_paths = shared_paths

plugin_vc.resource_files = plugin_rc

plugin_vc.files = AddTables(
    workspace:walk_dir("hooking", false, {"cpp"}), 
    AddTables(
        workspace:walk_dir("shared", true, {"cpp"}), 
        workspace:walk_dir("plugin_vc", true, {"cpp"})
    )
)

plugin_vc.arch = "x86"
plugin_vc.static_library = true

plugin_vc.compiler_flags = {
    "/std:c++17",
    "/Ox",
    "/W3",
    "/sdl-",
    "/GF",
    "/Gy",
    "/Oi",
    "/MT",
}

plugin_vc.linker_flags = {
    "/SUBSYSTEM:WINDOWS",
    "/LTCG",
}

plugin_vc.output = "plugin_vc.lib"


workspace:register_target(plugin_sa)
workspace:register_target(plugin_vc)
workspace:register_target(plugin_3)
