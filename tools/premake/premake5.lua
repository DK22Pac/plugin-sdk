require "codeblocks"

newoption { trigger = "pluginsdkdir", description = "Plugin-SDK directory path (optional)" }

-- new plugin project generation
newaction { trigger = "newplugin",    description = "Generate new ASI plugin project" }
newoption { trigger = "type",         description = "Project type: ASI, DLL, CLEO, MOON. Used with newplugin" }
newoption { trigger = "name",         description = "Plugin project name. Used with newplugin"}
newoption { trigger = "dir",          description = "Project directory. Used with newplugin"}

newoption { trigger = "gta2",         description = "Adds GTA 2 support. Used with newplugin" }
newoption { trigger = "gta3",         description = "Adds GTA 3 support. Used with newplugin" }
newoption { trigger = "gtavc",        description = "Adds GTA Vice City support. Used with newplugin" }
newoption { trigger = "gtasa",        description = "Adds GTA San Andreas support. Used with newplugin" }
newoption { trigger = "gta4",         description = "Adds GTA IV support. Used with newplugin" }
newoption { trigger = "gta3_unreal",  description = "Adds GTA 3 Definitive Edition support. Used with newplugin" }
newoption { trigger = "gtavc_unreal", description = "Adds GTA Vice City Definitive Edition support. Used with newplugin" }
newoption { trigger = "gtasa_unreal", description = "Adds GTA San Andreas Definitive Edition support. Used with newplugin" }

newoption { trigger = "d3d",          description = "Adds DirectX 3D features support. Used with newplugin" }


-- process and validate input args
if _ACTION then
    _ACTION = string.lower(_ACTION)
end

mingw = _ACTION == "codeblocks"
msbuild = not mingw

sdkdir = _OPTIONS["pluginsdkdir"]
if sdkdir == nil then
    sdkdir = os.getenv("PLUGIN_SDK_DIR")
end
if sdkdir == nil or sdkdir == "" then
    print("ERROR!\nCan't locate Plugin-SDK directory\n")
    os.exit(1)
end

projectType = _OPTIONS["type"]
if projectType == nil then
    projectType = "ASI"
end
projectType = string.upper(projectType)
if projectType ~= "ASI" and projectType ~= "DLL" and projectType ~= "CLEO" and projectType ~= "MOON" then
    print("ERROR!\nUnknown project type " .. projectType .. "\nSupported values: ASI, DLL, CLEO, MOON\n")
    os.exit(1)
end


function deleteAllFoldersWithName(pathToDir, folderName)
    os.execute("for /d /r \"" .. pathToDir .. "\" %d in (" .. folderName .. ") do @if exist \"%d\" rd /s/q \"%d\" >nul 2>&1")
end

function cleanProjectsDirectory(pathToDir)
    os.execute("del /s \"" .. pathToDir .. "\\*.sln\" >nul 2>&1")
    os.execute("del /s \"" .. pathToDir .. "\\*.suo\" >nul 2>&1")
    os.execute("del /s \"" .. pathToDir .. "\\*.sdf\" >nul 2>&1")
    os.execute("del /s \"" .. pathToDir .. "\\*.opensdf\" >nul 2>&1")
    os.execute("del /s \"" .. pathToDir .. "\\*.vcxproj\" >nul 2>&1")
    os.execute("del /s \"" .. pathToDir .. "\\*.vcxproj.filters\" >nul 2>&1")
    os.execute("del /s \"" .. pathToDir .. "\\*.vcxproj.user\" >nul 2>&1")
    os.execute("del /s \"" .. pathToDir .. "\\*.workspace\" >nul 2>&1")
    os.execute("del /s \"" .. pathToDir .. "\\*.cbp\" >nul 2>&1")
    os.execute("del /s \"" .. pathToDir .. "\\*.project\" >nul 2>&1")
    os.execute("del /s \"" .. pathToDir .. "\\*.depend\" >nul 2>&1")
    os.execute("del /s \"" .. pathToDir .. "\\*.layout\" >nul 2>&1")
    deleteAllFoldersWithName(pathToDir, "obj")
end

function projectFile(projectPath, fileName)
    return (projectPath .. "/" .. fileName)
end

function gameFile(projectPath, gameName, fileName)
    return (projectPath .. "\\" .. gameName .. "\\" .. fileName)
end

function gameFileTaskAtoZ(projectPath, gameName, fileName)
    local alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    local strary = {}
    for i = 1, #alphabet do
        local c = alphabet:sub(i,i)
        strary[i] = (projectPath .. "\\" .. gameName .. "\\" .. fileName .. c .. "*.*")
    end
    return strary
end

function projectDefinition(name, value)
    if mingw then
        return (name .. "=\"\\\"" .. value .. "\\\"\"")
    else
        return (name .. "=\"" .. value .. "\"")
    end
end

function splitString(line, sep)
    local i = 1
    local params = {}
    for str in (line .. sep):gmatch("([^" .. sep .. "]*)" .. sep) do
        params[i] = str
        i = i + 1
    end
    return params
end

function splitStringAndPasteToArray(line, sep, params, arindex)
    if line and line ~= "" then
        local i = arindex
        for str in (line .. sep):gmatch("([^" .. sep .. "]*)" .. sep) do
            params[i] = str
            i = i + 1
        end
    end
    
    return params
end

function setToolset()
    if _ACTION == "codeblocks" then
        toolset "gcc"
        buildoptions "-std=gnu++17"
    else
        systemversion "latest"
        buildoptions "/std:c++latest"
    end
end

function pluginSdkStaticLibProject(projectName, sdkdir, outName, isPluginProject, gameName)
    print("Generating project \"" .. projectName .. "\"...")
    
    projNameLower = string.lower(projectName)
    
    project (projectName)
    language "C++"

    if projNameLower:sub(-#"_unreal") == "_unreal" then
        architecture "x64"
        defines "_WIN64"
    else
        architecture "x32"
    end
    characterset "MBCS"
    staticruntime "On"

    local projectPath = (sdkdir .. "\\" .. projectName)

    if msbuild then
        cppdialect "C++latest"
        defines { "_CRT_NON_CONFORMING_SWPRINTFS", "_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING" }
        buildoptions { "/sdl-" }
        flags "MultiProcessorCompile"
        disablewarnings "4073" -- "initializers put in library initialization area"
        fatalwarnings "4996" -- "This function or variable may be unsafe. Consider using *_s"
    end
    if mingw then
        buildoptions "-fpermissive"
    end

    if isPluginProject then
        if msbuild then
            externalincludedirs { "$(IncludePath)", "$(PLUGIN_SDK_DIR)\\shared\\dxsdk" }
        else
            includedirs "$(PLUGIN_SDK_DIR)\\shared\\dxsdk"
        end
        defines "_DX9_SDK_INSTALLED"
    end

    if isPluginProject then
        if projNameLower == "plugin_ii" then
            defines { "GTA2", "PLUGIN_SGV_96EN", "GBH" }
            defines "_CRT_SECURE_NO_WARNINGS" --TODO: instead warning 4966 should be suppressed for files in game_II\d3d
        elseif projNameLower == "plugin_iii" then
            defines { "GTA3", "PLUGIN_SGV_10EN", "RW" }
        elseif projNameLower == "plugin_vc" then
            defines { "GTAVC", "PLUGIN_SGV_10EN", "RW" }
        elseif projNameLower == "plugin_sa" then
            defines { "GTASA", "PLUGIN_SGV_10US", "RW" }
        elseif projNameLower == "plugin_iv" then
            defines { "GTAIV", "PLUGIN_SGV_CE", "RAGE" }
        elseif projNameLower == "plugin_iii_unreal" then
            defines { "GTA3_UNREAL", "PLUGIN_UNREAL", "UNREAL", "NOASM", "RWINT32FROMFLOAT" }
        elseif projNameLower == "plugin_vc_unreal" then
            defines { "GTAVC_UNREAL", "PLUGIN_UNREAL", "UNREAL", "NOASM", "RWINT32FROMFLOAT" }
        elseif projNameLower == "plugin_sa_unreal" then
            defines { "GTASA_UNREAL", "PLUGIN_UNREAL", "UNREAL", "NOASM", "RWINT32FROMFLOAT" }
        end
    end

    filter "Release"
        optimize "On"
        linktimeoptimization "On"
        symbols "Off"
    filter "zDebug"
        symbols "On"
    filter {}

    if mingw then
        targetdir "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib"
        filter "Release"
            objdir "!$(PLUGIN_SDK_DIR)\\output\\mingw\\obj\\$(ProjectName)\\Release"
            targetname ("lib" .. outName)
        filter "zDebug"
            objdir "!$(PLUGIN_SDK_DIR)\\output\\mingw\\obj\\$(ProjectName)\\Debug"
            targetname ("lib" .. outName .. "_d")
        filter {}
        targetextension ".a"
    else
        targetdir "$(PLUGIN_SDK_DIR)/output/lib"
        filter "Release"
            objdir "!$(PLUGIN_SDK_DIR)\\output\\obj\\$(ProjectName)\\Release"
            targetname (outName)
        filter "zDebug"
            objdir "!$(PLUGIN_SDK_DIR)\\output\\obj\\$(ProjectName)\\Debug"
            targetname (outName .. "_d")
        filter {}
        targetextension ".lib"
    end

    setToolset()
    kind "StaticLib"
    filter "zDebug"
        symbols "On"
    filter {}

    if isPluginProject then
        os.execute('if not exist "' .. projectPath .. '" (mkdir "' .. projectPath .. '")')
        location (projectPath)

        includedirs {
            ("$(PLUGIN_SDK_DIR)\\" .. projectName),
            ("$(PLUGIN_SDK_DIR)\\" .. projectName .. "\\" .. gameName),
            ("$(PLUGIN_SDK_DIR)\\" .. projectName .. "\\" .. gameName .. "\\rw"),
            "$(PLUGIN_SDK_DIR)\\safetyhook",
            "$(PLUGIN_SDK_DIR)\\shared",
            "$(PLUGIN_SDK_DIR)\\shared\\game"
        }

        -- shared files
        files {
            (projectPath .. "\\**.h"),
            (projectPath .. "\\**.cpp"),
            (sdkdir .. "\\shared\\**.h"),
            (sdkdir .. "\\shared\\**.cpp"),
            (sdkdir .. "\\shared\\**.rc"),
            (sdkdir .. "\\hooking\\**.cpp"),
            (sdkdir .. "\\hooking\\**.h"),
            (sdkdir .. "\\injector\\**.hpp"),
            (sdkdir .. "\\safetyhook\\**.cpp"),
            (sdkdir .. "\\safetyhook\\**.hpp"),
            (sdkdir .. "\\safetyhook\\**.c"),
        }

        -- game files
        vpaths {
            ["shared/*"] = (projectFile(sdkdir, "shared\\**.*")),

            [(gameName .. "/Animation")] = { (gameFile(projectPath, gameName, "Anim*.*")),
                                             (gameFile(projectPath, gameName, "CAnim*.*")) },

            [(gameName .. "/Audio")] =     { (gameFile(projectPath, gameName, "CAE*.*")) },

            [(gameName .. "/Collision")] = { (gameFile(projectPath, gameName, "CCol*.*")),
                                             (gameFile(projectPath, gameName, "CBox.*")),
                                             (gameFile(projectPath, gameName, "CLines.*")),
                                             (gameFile(projectPath, gameName, "CSphere.*")),
                                             (gameFile(projectPath, gameName, "tColSurface.*")),
                                             (gameFile(projectPath, gameName, "CBoundingBox.*")) },

            [(gameName .. "/Core")] =      { (gameFile(projectPath, gameName, "CKeyGen.*")),
                                             (gameFile(projectPath, gameName, "CLink.*")),
                                             (gameFile(projectPath, gameName, "CLinkList.*")),
                                             (gameFile(projectPath, gameName, "CMatrix.*")),
                                             (gameFile(projectPath, gameName, "CMatrixLink.*")),
                                             (gameFile(projectPath, gameName, "COctTree.*")),
                                             (gameFile(projectPath, gameName, "COctTreeBase.*")),
                                             (gameFile(projectPath, gameName, "CPool.*")),
                                             (gameFile(projectPath, gameName, "CPtrList*.*")),
                                             (gameFile(projectPath, gameName, "CPtrNode*.*")),
                                             (gameFile(projectPath, gameName, "CQuadTreeNode.*")),
                                             (gameFile(projectPath, gameName, "CQuaternion.*")),
                                             (gameFile(projectPath, gameName, "CRect.*")),
                                             (gameFile(projectPath, gameName, "CStore.*")),
                                             (gameFile(projectPath, gameName, "CVector.*")),
                                             (gameFile(projectPath, gameName, "CVector2D.*")),
                                             (gameFile(projectPath, gameName, "List_c.*")),
                                             (gameFile(projectPath, gameName, "ListItem_c.*")),
                                             (gameFile(projectPath, gameName, "SArray.*")) },

            [(gameName .. "/Entity")] =    { (gameFile(projectPath, gameName, "CEntity.*")),
                                             (gameFile(projectPath, gameName, "CBuilding.*")),
                                             (gameFile(projectPath, gameName, "CPhysical.*")),
                                             (gameFile(projectPath, gameName, "CPlaceable.*")),
                                             (gameFile(projectPath, gameName, "CTreadable.*")),
                                             (gameFile(projectPath, gameName, "CAnimatedBuilding.*")) },

            [(gameName .. "/Entity/Dummy")] = { (gameFile(projectPath, gameName, "CDummy.*")),
                                             (gameFile(projectPath, gameName, "CDummyObject.*")),
                                             (gameFile(projectPath, gameName, "CDummyPed.*")) },

            [(gameName .. "/Entity/Object")] = { (gameFile(projectPath, gameName, "CObject.*")),
                                             (gameFile(projectPath, gameName, "CCutsceneObject.*")),
                                             (gameFile(projectPath, gameName, "CHandObject.*")),
                                             (gameFile(projectPath, gameName, "CProjectile.*")),
                                             (gameFile(projectPath, gameName, "CCutsceneHead.*")) },

            [(gameName .. "/Entity/Ped")] = { (gameFile(projectPath, gameName, "CPed.*")),
                                             (gameFile(projectPath, gameName, "CCivilianPed.*")),
                                             (gameFile(projectPath, gameName, "CCopPed.*")),
                                             (gameFile(projectPath, gameName, "CEmergencyPed.*")),
                                             (gameFile(projectPath, gameName, "CPlayerPed.*")) },

            [(gameName .. "/Entity/Vehicle")] = { (gameFile(projectPath, gameName, "CVehicle.*")),
                                             (gameFile(projectPath, gameName, "CAutomobile.*")),
                                             (gameFile(projectPath, gameName, "CBike.*")),
                                             (gameFile(projectPath, gameName, "CBmx.*")),
                                             (gameFile(projectPath, gameName, "CBoat.*")),
                                             (gameFile(projectPath, gameName, "CHeli.*")),
                                             (gameFile(projectPath, gameName, "CMonsterTruck.*")),
                                             (gameFile(projectPath, gameName, "CPlane.*")),
                                             (gameFile(projectPath, gameName, "CQuadBike.*")),
                                             (gameFile(projectPath, gameName, "CTrailer.*")),
                                             (gameFile(projectPath, gameName, "CTrain.*")) },

            [(gameName .. "/Enums")] =     { (gameFile(projectPath, gameName, "e*.*")),
                                             (gameFile(projectPath, gameName, "tParticleType.*")) },

            [(gameName .. "/Fx")] =        { (gameFile(projectPath, gameName, "Fx*.*")) },

            [(gameName .. "/Models")] =    { (gameFile(projectPath, gameName, "*ModelInfo.*")) },

            [(gameName .. "/Plugins")] =   { (gameFile(projectPath, gameName, "JPegCompress.*")),
                                             (gameFile(projectPath, gameName, "NodeName.*")),
                                             (gameFile(projectPath, gameName, "PipelinePlugin.*")) },

            [(gameName .. "/RenderWare")] = { (gameFile(projectPath, gameName, "RenderWare.*")),
                                             (gameFile(projectPath, gameName, "D3D*.*")) },

            [(gameName .. "/RenderWare/rw")] = (gameFile(projectPath, gameName, "rw/*.*")),

            [(gameName .. "/Scripts")] =   { (gameFile(projectPath, gameName, "CRunningScript.*")),
                                             (gameFile(projectPath, gameName, "CTheScripts.*")) },

            [(gameName .. "/Tasks/TaskTypes")] = { (gameFileTaskAtoZ(projectPath, gameName, "CTaskSimple")),
                                             (gameFileTaskAtoZ(projectPath, gameName, "CTaskComplex")),
                                             (gameFile(projectPath, gameName, "CTaskGang*.*")),
                                             (gameFile(projectPath, gameName, "CTaskGoTo*.*")),
                                             (gameFile(projectPath, gameName, "CTaskInterior*.*")),
                                             (gameFile(projectPath, gameName, "CTaskLean*.*")) },

            [(gameName .. "/Tasks")] =     { (gameFile(projectPath, gameName, "CTask.*")),
                                             (gameFile(projectPath, gameName, "CTaskComplex.*")),
                                             (gameFile(projectPath, gameName, "CTaskManager.*")),
                                             (gameFile(projectPath, gameName, "CTaskSimple.*")),
                                             (gameFile(projectPath, gameName, "CTaskTimer.*")) }
        }

        -- plugin_[game].h
        if _ACTION == "codeblocks" then
            vpaths {
                ["plugin"] = (projectFile(projectPath, "plugin*.h")),
                [(gameName .. "/Other")] = (gameFile(projectPath, gameName, "*.*"))
            }
        else
            vpaths {
                [""] = (projectFile(projectPath, "plugin*.h"))
            }
        end

        -- precompiled header
        if msbuild and (projNameLower == "plugin_iii" or projNameLower == "plugin_vc" or projNameLower == "plugin_sa") then
            pchheader "stdafx.h"
            forceincludes "stdafx.h"
            pchsource (path.getrelative(path.getabsolute("."), sdkdir .. "/shared/stdafx.cpp"))

            filter "files:**stdafx.cpp"
                defines "USE_PCH"

            local projDir = path.getrelative(path.getabsolute("."), sdkdir .. "/" .. projectName)
            local gameFiles = projDir .. "/" .. gameName .. "/**"
            local attractorFiles = projDir .. "/game_vc/CPed*Attractor*" -- files using _HAS_ITERATOR_DEBUGGING macro

            filter { "files:" .. gameFiles, "files:not " .. attractorFiles}
                defines "USE_PCH"

            filter ("files:not " .. gameFiles)
                flags "NoPCH"

            filter ("files:" .. attractorFiles)
                flags "NoPCH"

            filter {}
        end
    else
        location (projectPath)
        files {
            (projectPath .. "\\**.h"),
            (projectPath .. "\\**.cpp")
        }
    end
end

function getExamplePluginDefines(projName, game, projectType, d3dSupport, additionalDefines, gameName, gameAbbr, gameAbbrLow, protagonistName, cityName)
    local counter = 1
    local aryDefines = {}
    
    if msbuild then
        aryDefines[counter] = "_CRT_NON_CONFORMING_SWPRINTFS"
        counter = counter + 1
    end
    
    aryDefines[counter] = "TARGET_NAME=R\"($(TargetName))\"" -- this plugin name
    aryDefines[counter + 1] = game
    aryDefines[counter + 2] = projectDefinition("GTAGAME_NAME", gameName)
    aryDefines[counter + 3] = projectDefinition("GTAGAME_ABBR", gameAbbr)
    aryDefines[counter + 4] = projectDefinition("GTAGAME_ABBRLOW", gameAbbrLow)
    aryDefines[counter + 5] = projectDefinition("GTAGAME_PROTAGONISTNAME", protagonistName)
    aryDefines[counter + 6] = projectDefinition("GTAGAME_CITYNAME", cityName)
    counter = counter + 7
    
    if projectType == "CLEO" then
        --
    elseif projectType == "MOON" then
        aryDefines[counter] = "LUA_BUILD_AS_DLL"
        aryDefines[counter + 1] = projectDefinition("MODULE_NAME", projName)
        counter = counter + 2
    end
    
    if d3dSupport then
        aryDefines[counter] = "_DX9_SDK_INSTALLED"
        counter = counter + 1
    end
    
    if game == "GTA2" then
        aryDefines[counter] = "PLUGIN_SGV_96EN"
        counter = counter + 1
        
    elseif game == "GTA3" then
        aryDefines[counter] = "PLUGIN_SGV_10EN"
        aryDefines[counter + 1] = "RW"
        counter = counter + 2
        
    elseif game == "GTAVC" then
        aryDefines[counter] = "PLUGIN_SGV_10EN"
        aryDefines[counter + 1] = "RW"
        counter = counter + 2
        
    elseif game == "GTASA" then
        aryDefines[counter] = "PLUGIN_SGV_10US"
        aryDefines[counter + 1] = "RW"
        counter = counter + 2
        
    elseif game == "GTAIV" then
        aryDefines[counter] = "PLUGIN_SGV_CE"
        aryDefines[counter + 1] = "RAGE"
        counter = counter + 2
        
    elseif game == "GTA3_UNREAL" then
        aryDefines[counter] = "PLUGIN_UNREAL"
        aryDefines[counter + 1] = "UNREAL"
        aryDefines[counter + 2] = "NOASM"
        aryDefines[counter + 3] = "RWINT32FROMFLOAT"
        aryDefines[counter + 4] = "_WIN64"
        counter = counter + 5
        
    elseif game == "GTAVC_UNREAL" then
        aryDefines[counter] = "PLUGIN_UNREAL"
        aryDefines[counter + 1] = "UNREAL"
        aryDefines[counter + 2] = "NOASM"
        aryDefines[counter + 3] = "RWINT32FROMFLOAT"
        aryDefines[counter + 4] = "_WIN64"
        counter = counter + 5
        
    elseif game == "GTASA_UNREAL" then
        aryDefines[counter] = "PLUGIN_UNREAL"
        aryDefines[counter + 1] = "UNREAL"
        aryDefines[counter + 2] = "NOASM"
        aryDefines[counter + 3] = "RWINT32FROMFLOAT"
        aryDefines[counter + 4] = "_WIN64"
        counter = counter + 5
    end
    
    aryDefines = splitStringAndPasteToArray(additionalDefines, ";", aryDefines, counter)
    
    return aryDefines
end

function getExamplePluginIncludeFolders(pluginDir, gameDir, projectType, cleoDir, usesD3d9, usesRwD3d9, additionalDirs)
    local counter = 1
    local aryDirs = {}

    aryDirs[counter] = ("$(PLUGIN_SDK_DIR)\\" .. pluginDir)
    aryDirs[counter + 1] = ("$(PLUGIN_SDK_DIR)\\" .. pluginDir .. "\\" .. gameDir)
    aryDirs[counter + 2] = ("$(PLUGIN_SDK_DIR)\\" .. pluginDir .. "\\" .. gameDir .. "\\rw")
    aryDirs[counter + 3] = "$(PLUGIN_SDK_DIR)\\shared"
    aryDirs[counter + 4] = "$(PLUGIN_SDK_DIR)\\shared\\game"
    counter = counter + 5
    
    if projectType == "CLEO" and cleoDir ~= "" then
        aryDirs[counter] = cleoDir
        counter = counter + 1
    elseif projectType == "MOON" then
        aryDirs[counter] = "$(MOONLOADER_SDK_SA_DIR)\\src"
        aryDirs[counter + 1] = "$(MOONLOADER_SDK_SA_DIR)\\src\\libs\\lua"
        aryDirs[counter + 2] = "$(MOONLOADER_SDK_SA_DIR)\\src\\libs\\sol2"
        counter = counter + 3
    end
    
    if usesD3d9 then
        if mingw then
            aryDirs[counter] = "$(PLUGIN_SDK_DIR)\\shared\\dxsdk";
            counter = counter + 1
        end
    end
    
    if usesRwD3d9 then
        aryDirs[counter] = "$(PLUGIN_SDK_DIR)\\shared\\rwd3d9"
        counter = counter + 1
    end
    
    aryDirs = splitStringAndPasteToArray(additionalDirs, ";", aryDirs, counter)
    
    return aryDirs
end

function getExamplePluginLibraryFolders(projectType, cleoDir, usesD3d9, usesRwD3d9, additionalDirs)
    local counter = 1
    local aryDirs = {}

    if mingw then
        aryDirs[counter] = "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib"
    else
        aryDirs[counter] = "$(PLUGIN_SDK_DIR)\\output\\lib"
    end
    counter = counter + 1
    
    if projectType == "CLEO" and cleoDir ~= "" then
        aryDirs[counter] = cleoDir
        counter = counter + 1
    elseif projectType == "MOON" then
        aryDirs[counter] = "$(MOONLOADER_SDK_SA_DIR)\\src\\libs\\lua"
        counter = counter + 1
    end
    
    if usesD3d9 then
        if mingw then
            aryDirs[counter] = "$(PLUGIN_SDK_DIR)\\shared\\dxsdk"
            counter = counter + 1
        end
    end
    
    if usesRwD3d9 then
        aryDirs[counter] = "$(PLUGIN_SDK_DIR)\\shared\\rwd3d9"
        counter = counter + 1
    end

    aryDirs = splitStringAndPasteToArray(additionalDirs, ";", aryDirs, counter)
    
    return aryDirs
end

function getExamplePluginLibraries(pluginLibName, projectType, cleoLibName, usesD3d9, usesRwD3d9, additionalLibs, isDebug)
    local counter = 1
    local aryLibs = {}
    
    if isDebug then
        aryLibs[counter] = (pluginLibName .. "_d")
        counter = counter + 1
    else
        aryLibs[counter] = pluginLibName
        counter = counter + 1
    end
    
    if projectType == "CLEO" and cleoLibName ~= "" then
        aryLibs[counter] = cleoLibName
        counter = counter + 1
    elseif projectType == "MOON" then
        aryLibs[counter] = "lua51"
        counter = counter + 1
    end
    
    if usesD3d9 then
        aryLibs[counter] = "d3d9"
        aryLibs[counter + 1] = "d3dx9"
        counter = counter + 2
    end
    
    if usesRwD3d9 then
        aryLibs[counter] = "rwd3d9"
        counter = counter + 1
    end
    
    aryLibs = splitStringAndPasteToArray(additionalLibs, ";", aryLibs, counter)

    return aryLibs
end

function setupDebugger(projectType, gameDirVar, gameExePath, gameExeName)
    local trgPath = ""
    if projectType == "ASI" then
        trgPath = "\\scripts"
    elseif projectType == "CLEO" then
        trgPath = "\\cleo"
    end
    
    -- create target directory if doesn't exists
    fullTrgPath = os.getenv(gameDirVar)
    if fullTrgPath ~= nil and fullTrgPath ~= "" then
        fullTrgPath = fullTrgPath .. trgPath
        os.execute('if not exist "' .. fullTrgPath .. '" (mkdir "' .. fullTrgPath .. '")')
    end

    postbuildcommands { "\
if defined " .. gameDirVar .. " ( \r\n\
taskkill /IM " .. gameExeName .. " /F /FI \"STATUS eq RUNNING\" \r\n\
xcopy /Y \"$(TargetPath)\" \"$(" .. gameDirVar .. ")" .. trgPath .. "\" \r\n\
)" }

    debugcommand ("$(" .. gameDirVar .. ")\\" .. gameExePath .. gameExeName)
    debugdir ("$(" .. gameDirVar .. ")")
end

function generatePrecompiledHeader(directory, create)
    local headerFilename = path.join(directory, "stdafx.h")
    local sourceFilename = path.join(directory, "stdafx.cpp")

    -- remove old files
    os.remove(headerFilename)
    os.remove(sourceFilename)

    if create == false then
        return
    end

    print("Generating precompiled header files...")

    -- generate stdafx.h
    local header = "// This file was generated by Premake\n";

    local templateFile = io.open("stdafx_template.h", "r")
    header = header .. templateFile:read("*all")
    templateFile:close()

    -- gather include files
    local fileList = {}
    function collect(dir, excludes)
        local f = os.matchfiles(sdkdir .. "\\" .. dir .. "\\**.h*")
        for i=1, #f do
            local p = path.getrelative(directory, f[i]):gsub("/", "\\")

            local excluded = false
            for j=1, #excludes do
                if string.find(p, excludes[j]) then
                    excluded = true
                    break
                end
            end

            if excluded == false then
                fileList[#fileList + 1] = p
            end
        end
    end
    collect("hooking", {})
    collect("injector", {"\\gvm\\"})
    collect("modutils", {})
    collect("safetyhook", {})
    collect("shared", {"dxsdk\\","rwd3d9.h"})
    collect("stb", {})
    table.sort(fileList)

    local includesList = ""
    for i=1, #fileList do
        if i > 1 then includesList = includesList .. '\n' end
        includesList = includesList .. '    #include "' .. fileList[i] .. '"'
    end
    header = header:gsub("GENERATED_LIST", includesList);

    -- stdafx.h file
    local file = io.open(headerFilename, 'w')
    file:write(header)
    file:close()

    -- stdafx.cpp file
    file = io.open(sourceFilename, 'w')
    file:write('#include "stdafx.h"\n')
    file:close()
end

function pluginSdkExampleProject(projectDir, projectName, projectType, game2, game3, gameVc, gameSa, game4, game3Unreal, gameVcUnreal, gameSaUnreal, d3dSupport, additionalIncludeDirs)
    print("Generating project \"" .. projectName .. "\"...")
    
    if additionalIncludeDirs == nil then
        additionalIncludeDirs = ""
    end
    
    local supportedGames = {}
    local gameCounter = 1
    
    if game2 then
        supportedGames[gameCounter] = "GTA2"
        gameCounter = gameCounter + 1
    end
    if game3 then
        supportedGames[gameCounter] = "GTA3"
        gameCounter = gameCounter + 1
    end
    if gameVc then
        supportedGames[gameCounter] = "GTA-VC"
        gameCounter = gameCounter + 1
    end
    if gameSa then
        supportedGames[gameCounter] = "GTA-SA"
        gameCounter = gameCounter + 1
    end
    if game4 then
        supportedGames[gameCounter] = "GTA4"
        gameCounter = gameCounter + 1
    end
    if game3Unreal then
        supportedGames[gameCounter] = "GTA3_Unreal"
        gameCounter = gameCounter + 1
    end
    if gameVcUnreal then
        supportedGames[gameCounter] = "GTA-VC_Unreal"
        gameCounter = gameCounter + 1
    end
    if gameSaUnreal then
        supportedGames[gameCounter] = "GTA-SA_Unreal"
        gameCounter = gameCounter + 1
    end

    workspace (projectName)
    location (projectDir)
    platforms (supportedGames)
    configurations { "Release", "Debug" }
    project (projectName)
    language "C++"
    characterset ("MBCS")
    staticruntime "On"
    flags { "NoImportLib" }
    cppdialect "C++latest"

    if msbuild then
        buildoptions { "/sdl-" }
        flags "MultiProcessorCompile"
    end
    if mingw then
        buildoptions "-fpermissive"
        linkoptions { "-static-libgcc", "-static-libstdc++" }
    end

    local ext = ".asi"
    if projectType == "CLEO" then
        ext = ".cleo"
    elseif projectType == "MOON" or projectType == "DLL" then
        ext = ".dll"
    end
    targetextension (ext)

    filter "Release"
        optimize "On"
        symbols "Off"
        linktimeoptimization "On"
    filter "Debug"
        symbols "On"
    filter {}

    setToolset()
    kind "SharedLib"

    if d3dSupport then
        if msbuild then
           externalincludedirs { "$(IncludePath)", "$(PLUGIN_SDK_DIR)\\shared\\dxsdk" }
           syslibdirs { "$(LibraryPath)", "$(PLUGIN_SDK_DIR)\\shared\\dxsdk" }
        end
    end
    
    if game2 then
        filter "platforms:GTA2"
            architecture "x32"
            includedirs (getExamplePluginIncludeFolders("Plugin_II", "Game_II", projectType, "", d3dSupport, false, additionalIncludeDirs))
            libdirs (getExamplePluginLibraryFolders(projectType, "", d3dSupport, false, additionalLibraryDirs))
            defines (getExamplePluginDefines(projectName, "GTA2", projectType, d3dSupport, additionalDefinitions, "2", "2", "2", "Claude", "Anywhere City"))
            setupDebugger(projectType, "GTA_II_DIR", "", "gta2.exe")
        filter { "Release", "platforms:GTA2" }
            links (getExamplePluginLibraries("Plugin_II", projectType, "", d3dSupport, false, additionalLibraries, false))
            targetname (projectName .. ".II")
        filter { "Debug", "platforms:GTA2" }
            links (getExamplePluginLibraries("Plugin_II", projectType, "", d3dSupport, false, additionalLibraries, true))
            targetname (projectName .. ".II")
        filter {}
    end
    
    if game3 then
        filter "platforms:GTA3"
            architecture "x32"
            includedirs (getExamplePluginIncludeFolders("Plugin_III", "game_III", projectType, "$(CLEO_SDK_III_DIR)", d3dSupport, d3dSupport, additionalIncludeDirs))
            libdirs (getExamplePluginLibraryFolders(projectType, "$(CLEO_SDK_III_DIR)", d3dSupport, d3dSupport, additionalLibraryDirs))
            defines (getExamplePluginDefines(projectName, "GTA3", projectType, d3dSupport, additionalDefinitions, "3", "3", "3", "Claude", "Liberty City"))
            setupDebugger(projectType, "GTA_III_DIR", "", "gta3.exe")
        filter { "Release", "platforms:GTA3" }
            links (getExamplePluginLibraries("Plugin_III", projectType, "III.CLEO", d3dSupport, d3dSupport, additionalLibraries, false))
            targetname (projectName .. ".III")
        filter { "Debug", "platforms:GTA3" }
            links (getExamplePluginLibraries("Plugin_III", projectType, "III.CLEO", d3dSupport, d3dSupport, additionalLibraries, true))
            targetname (projectName .. ".III")
        filter {}
    end
    
    if gameVc then
        filter "platforms:GTA-VC"
            architecture "x32"
            includedirs (getExamplePluginIncludeFolders("Plugin_VC", "game_vc", projectType, "$(CLEO_SDK_VC_DIR)", d3dSupport, d3dSupport, additionalIncludeDirs))
            libdirs (getExamplePluginLibraryFolders(projectType, "$(CLEO_SDK_VC_DIR)", d3dSupport, d3dSupport, additionalLibraryDirs))
            defines (getExamplePluginDefines(projectName, "GTAVC", projectType, d3dSupport, additionalDefinitions, "Vice City", "VC", "vc", "Tommy", "Vice City"))
            setupDebugger(projectType, "GTA_VC_DIR", "", "gta-vc.exe")
        filter { "Release", "platforms:GTAVC" }
            links (getExamplePluginLibraries("plugin_vc", projectType, "VC.CLEO", d3dSupport, d3dSupport, additionalLibraries, false))
            targetname (projectName .. ".VC")
        filter { "Debug", "platforms:GTA-VC" }
            links (getExamplePluginLibraries("Plugin_VC", projectType, "VC.CLEO", d3dSupport, d3dSupport, additionalLibraries, true))
            targetname (projectName .. ".VC")
        filter {}
    end
    
    if gameSa then
        filter "platforms:GTA-SA"
            architecture "x32"
            includedirs (getExamplePluginIncludeFolders("Plugin_SA", "game_sa", projectType, "$(CLEO_SDK_SA_DIR)", d3dSupport, false, additionalIncludeDirs))
            libdirs (getExamplePluginLibraryFolders(projectType, "$(CLEO_SDK_SA_DIR)", d3dSupport, false, additionalLibraryDirs))
            defines (getExamplePluginDefines(projectName, "GTASA", projectType, d3dSupport, additionalDefinitions, "San Andreas", "SA", "sa", "CJ", "San Andreas"))
            setupDebugger(projectType, "GTA_SA_DIR", "", "gta_sa.exe")
        filter { "Release", "platforms:GTASA" }
            links (getExamplePluginLibraries("plugin", projectType, "cleo", d3dSupport, false, additionalLibraries, false))
            targetname (projectName .. ".SA")
        filter { "Debug", "platforms:GTA-SA" }
            links (getExamplePluginLibraries("plugin", projectType, "cleo", d3dSupport, false, additionalLibraries, true))
            targetname (projectName .. ".SA")
        filter {}
    end
    
    if game4 then
        filter "platforms:GTA4"
            architecture "x32"
            includedirs (getExamplePluginIncludeFolders("Plugin_IV", "game_iv", projectType, "", d3dSupport, false, additionalIncludeDirs))
            libdirs (getExamplePluginLibraryFolders(projectType, "", d3dSupport, false, additionalLibraryDirs))
            defines (getExamplePluginDefines(projectName, "GTAIV", projectType, d3dSupport, additionalDefinitions, "4", "4", "4", "Niko", "Liberty City"))
            setupDebugger(projectType, "GTA_IV_DIR", "", "GTAIV.exe")
        filter { "Release", "platforms:GTA4" }
            links (getExamplePluginLibraries("Plugin_IV", projectType, "", d3dSupport, false, additionalLibraries, false))
            targetname (projectName .. ".IV")
        filter { "Debug", "platforms:GTA4" }
            links (getExamplePluginLibraries("Plugin_IV", projectType, "", d3dSupport, false, additionalLibraries, true))
            targetname (projectName .. ".IV")
        filter {}
    end
    
    if game3Unreal then
        filter "platforms:GTA3_Unreal"
            architecture "x64"
            includedirs (getExamplePluginIncludeFolders("Plugin_III_Unreal", "Game_III_Unreal", projectType, "", d3dSupport, false, additionalIncludeDirs))
            libdirs (getExamplePluginLibraryFolders(projectType, "", d3dSupport, false, additionalLibraryDirs))
            defines (getExamplePluginDefines(projectName, "GTA3_UNREAL", projectType, d3dSupport, additionalDefinitions, "3", "3", "3", "Claude", "Liberty City"))
            setupDebugger(projectType, "GTA_III_UNREAL_DIR", "Gameface\\Binaries\\Win64\\", "LibertyCity.exe")
        filter { "Release", "platforms:GTA3_UNREAL" }
            links (getExamplePluginLibraries("plugin_iii_unreal", projectType, "", d3dSupport, false, additionalLibraries, false))
            targetname (projectName .. ".III-DE")
        filter { "Debug", "platforms:GTA3_Unreal" }
            links (getExamplePluginLibraries("Plugin_III_Unreal", projectType, "", d3dSupport, false, additionalLibraries, true))
            targetname (projectName .. ".III-DE")
        filter {}
    end
    
    if gameVcUnreal then
        filter "platforms:GTA-VC_Unreal"
            architecture "x64"
            includedirs (getExamplePluginIncludeFolders("Plugin_VC_Unreal", "Game_VC_Unreal", projectType, "", d3dSupport, false, additionalIncludeDirs))
            libdirs (getExamplePluginLibraryFolders(projectType, "", d3dSupport, false, additionalLibraryDirs))
            defines (getExamplePluginDefines(projectName, "GTAVC_UNREAL", projectType, d3dSupport, additionalDefinitions, "Vice City", "VC", "vc", "Tommy", "Vice City"))
            setupDebugger(projectType, "GTA_VC_UNREAL_DIR", "Gameface\\Binaries\\Win64\\", "ViceCity.exe")
        filter { "Release", "platforms:GTAVC_UNREAL" }
            links (getExamplePluginLibraries("plugin_vc_unreal", projectType, "", d3dSupport, d3dSupport, additionalLibraries, false))
            targetname (projectName .. ".VC-DE")
        filter { "Debug", "platforms:GTA-VC_Unreal" }
            links (getExamplePluginLibraries("Plugin_VC_Unreal", projectType, "", d3dSupport, d3dSupport, additionalLibraries, true))
            targetname (projectName .. ".VC-DE")
        filter {}
    end
    
    if gameSaUnreal then
        filter "platforms:GTA-SA_Unreal"
            architecture "x64"
            includedirs (getExamplePluginIncludeFolders("Plugin_SA_Unreal", "Game_SA_Unreal", projectType, "", d3dSupport, false, additionalIncludeDirs))
            libdirs (getExamplePluginLibraryFolders(projectType, "", d3dSupport, false, additionalLibraryDirs))
            defines (getExamplePluginDefines(projectName, "GTASA_UNREAL", projectType, d3dSupport, additionalDefinitions, "San Andreas", "SA", "sa", "CJ", "San Andreas"))
            setupDebugger(projectType, "GTA_SA_UNREAL_DIR", "Gameface\\Binaries\\Win64\\", "SanAndreas.exe")
        filter { "Release", "platforms:GTASA_UNREAL" }
            links (getExamplePluginLibraries("plugin_unreal", projectType, "", d3dSupport, false, additionalLibraries, false))
            targetname (projectName .. ".SA-DE")
        filter { "Debug", "platforms:GTA-SA_Unreal" }
            links (getExamplePluginLibraries("Plugin_Unreal", projectType, "", d3dSupport, false, additionalLibraries, true))
            targetname (projectName .. ".SA-DE")
        filter {}
    end

    files {
        (projectDir .. "\\**.h"),
        (projectDir .. "\\**.cpp"),
        (projectDir .. "\\source\\**.h"),
        (projectDir .. "\\source\\**.cpp"),
        (projectDir .. "\\*.md")
    }
    vpaths {
        ["Source/*"] = { (projectDir .. "\\**.h"),
                         (projectDir .. "\\**.cpp"),
                         (projectDir .. "\\source\\**.h"),
                         (projectDir .. "\\source\\**.cpp") }
    }
end

function getSdkVerInfo()
    local verNum = nil
    local verNumPrefix = "#define PLUGIN_SDK_VERSION "
    
    local verDate = nil
    local verDatePrefix = "#define PLUGIN_SDK_DATE "
    
    local file = io.open(path.join(sdkdir, "shared\\plugin.h"), "r")
    if file then        
        for line in file:lines() do            
            if line:sub(1, #verNumPrefix) == verNumPrefix then
                verNum = line:sub(#verNumPrefix + 1)
            end
            
            if line:sub(1, #verDatePrefix) == verDatePrefix then
                verDate = line:sub(#verDatePrefix + 1)
            end
        end
        
        file:close()
    end
    
    local verTxt = nil
    
    if verNum ~= nil then
        verTxt = "version " .. verNum
    end
    
    if verDate ~= nil then
        if verTxt ~= nil then
            verTxt = verTxt .. " "
        end
        
        verTxt = verTxt .. "from " .. verDate
    end

    return verTxt
end

function generateNewPluginSource(projectDir, projectName, projectType, game2, game3, gameVc, gameSa, game4, game3Unreal, gameVcUnreal, gameSaUnreal)
    -- classis trilogy helper variables
    local trilogyDefs = {}
    if game3 then  table.insert(trilogyDefs, "GTA3") end
    if gameVc then table.insert(trilogyDefs, "GTAVC") end
    if gameSa then table.insert(trilogyDefs, "GTASA") end
    local isTrilogy = #trilogyDefs > 0 -- any of classic 3/VC/SA
    local isTrilogyOnly = isTrilogy and not (game2 or game4 or game3Unreal or gameVcUnreal or gameSaUnreal) -- only classic 3/VC/SA
    
    -- Unreal trilogy helper variables
    local unrealDefs = {}
    if game3Unreal then  table.insert(unrealDefs, "GTA3_UNREAL") end
    if gameVcUnreal then table.insert(unrealDefs, "GTAVC_UNREAL") end
    if gameSaUnreal then table.insert(unrealDefs, "GTASA_UNREAL") end
    local isUnreal = #unrealDefs > 0 -- any of Unreal 3/VC/SA
    local isUnrealOnly = isUnreal and not (game2 or isTrilogy or game4) -- only Unreal 3/VC/SA
    
    local platformCount = 0
    if game2 then     platformCount = platformCount + 1 end
    if isTrilogy then platformCount = platformCount + 1 end
    if game4 then     platformCount = platformCount + 1 end
    if isUnreal then  platformCount = platformCount + 1 end

    local projectDir = path.normalize(projectDir)
    local sourceDir = path.join(projectDir, "source")
    os.execute('if not exist "' .. sourceDir .. '" (mkdir "' .. sourceDir .. '")')

    -- generate Main.cpp
    local main = io.open(path.join(sourceDir, "Main.cpp"), 'w')

    -- includes
    main:write([[#include <plugin.h>]])
    local verStr = getSdkVerInfo()
    if verStr ~= nil then
        main:write(' // Plugin-SDK ', verStr)
    end
    main:write('\n')
    
    if game2 then
        if platformCount > 1 then main:write([[#if defined GTA2]], '\n') end
        main:write([[#include <CHud.h>]], '\n')
        if platformCount > 1 then main:write([[#endif]], '\n') end
    end
    if isTrilogy then
        if not isTrilogyOnly then main:write([[#if defined ]], table.concat(trilogyDefs, " || defined "), '\n') end
        main:write([[#include <CMessages.h>]], '\n')
        if not isTrilogyOnly then main:write([[#endif]], '\n') end
    end
    if game4 then
        if platformCount > 1 then main:write([[#if defined GTA4]], '\n') end
        --main:write([[#include <CHud.h>]], '\n') -- TODO: add GTA4 include
        if platformCount > 1 then main:write([[#endif]], '\n') end
    end
    if isUnreal then
        if not isUnrealOnly then main:write([[#if defined ]], table.concat(unrealDefs, " || defined "), '\n') end
        --main:write([[#include <CHud.h>]], '\n') -- TODO: DE trilogy include
        if not isUnrealOnly then main:write([[#endif]], '\n') end
    end

    main:write([[

using namespace plugin;

struct Main
{
    size_t m_frame = 0; // render frame counter

    Main()
    {
        // register event callbacks
        Events::gameProcessEvent += []{ gInstance.OnGameProcess(); };
    }

    void OnGameProcess()
    {
        m_frame++;
        
        static char msg[255];
        sprintf_s(msg, "Hello world! Frame %d", m_frame);
        
]])
    
    -- message printing GTA2
    if game2 then
        if platformCount > 1 then main:write([[    #if defined GTA2]], '\n') end
        main:write([[        GetHud()->m_HudBrief.SetHudBriefStr(msg);]], '\n')
        if platformCount > 1 then main:write([[    #endif]], '\n') end
    end

    -- message printing classic trilogy
    if isTrilogy then
        if not isTrilogyOnly then main:write([[    #if defined ]], table.concat(trilogyDefs, " || defined "), '\n') end
        main:write([[        CMessages::AddMessageJumpQ(msg, 500, 0);]], '\n')
        if not isTrilogyOnly then main:write([[    #endif]], '\n') end
    end
    
    -- message printing GTA4
    if game4 then
        if platformCount > 1 then main:write([[    #if defined GTA4]], '\n') end
        --main:write([[        CMessages::AddMessageJumpQ(msg, 500, 0);]], '\n') TODO: GTA4 message printing
        if platformCount > 1 then main:write([[    #endif]], '\n') end
    end

    -- message printing Definitive Edition trilogy
    if isUnreal then
        if not isUnrealOnly then main:write([[    #if defined ]], table.concat(unrealDefs, " || defined "), '\n') end
        --main:write([[        CMessages::AddMessageJumpQ(msg, 500, 0);]], '\n') TODO: DE trilogy message printing
        if not isUnrealOnly then main:write([[    #endif]], '\n') end
    end

main:write([[    }
} gInstance;]], '\n')

    main:close()
end


-- execute
if _ACTION == "newplugin" then
    _ACTION = "vs2022"
    
    generateNewPluginSource(_OPTIONS["dir"], _OPTIONS["name"], projectType,
        _OPTIONS["gta2"] ~= nil,
        _OPTIONS["gta3"] ~= nil,
        _OPTIONS["gtavc"] ~= nil,
        _OPTIONS["gtasa"] ~= nil,
        _OPTIONS["gta4"] ~= nil,
        _OPTIONS["gta3_unreal"] ~= nil,
        _OPTIONS["gtavc_unreal"] ~= nil,
        _OPTIONS["gtasa_unreal"] ~= nil)
        
    pluginSdkExampleProject(_OPTIONS["dir"], _OPTIONS["name"], projectType,
        _OPTIONS["gta2"] ~= nil,
        _OPTIONS["gta3"] ~= nil,
        _OPTIONS["gtavc"] ~= nil,
        _OPTIONS["gtasa"] ~= nil,
        _OPTIONS["gta4"] ~= nil,
        _OPTIONS["gta3_unreal"] ~= nil,
        _OPTIONS["gtavc_unreal"] ~= nil,
        _OPTIONS["gtasa_unreal"] ~= nil,
        _OPTIONS["d3d"] ~= nil)
else -- plugin sdk solution
    print("Deleting temporary files...")
    cleanProjectsDirectory(sdkdir .. "\\examples")
    cleanProjectsDirectory(sdkdir .. "\\Plugin_SA")
    cleanProjectsDirectory(sdkdir .. "\\Plugin_VC")
    cleanProjectsDirectory(sdkdir .. "\\Plugin_III")
    cleanProjectsDirectory(sdkdir .. "\\Plugin_II")
    cleanProjectsDirectory(sdkdir .. "\\Plugin_IV")

    cleanProjectsDirectory(sdkdir .. "\\Plugin_SA_Unreal")
    cleanProjectsDirectory(sdkdir .. "\\Plugin_VC_Unreal")
    cleanProjectsDirectory(sdkdir .. "\\Plugin_III_Unreal")

    os.remove(sdkdir .. "\\plugin.sln")
    os.remove(sdkdir .. "\\plugin.suo")
    os.remove(sdkdir .. "\\plugin.sdf")
    os.remove(sdkdir .. "\\plugin.workspace")
    os.remove(sdkdir .. "\\plugin.workspace.layout")
    deleteAllFoldersWithName(sdkdir, ".vs")
    generatePrecompiledHeader(sdkdir .. "\\shared", false)

    if _ACTION ~= "clean" then
        print("\nGenerating Plugin-SDK solution:")
        generatePrecompiledHeader(sdkdir .. "\\shared", true)

        workspace "plugin"
            location (sdkdir)
            configurations { "Release", "zDebug" }

        group ""
            pluginSdkStaticLibProject("Plugin_II",         sdkdir, "Plugin_II",         true, "Game_II")
            pluginSdkStaticLibProject("Plugin_III",        sdkdir, "Plugin_III",        true, "Game_III")
            pluginSdkStaticLibProject("Plugin_VC",         sdkdir, "Plugin_VC",         true, "Game_VC")
            pluginSdkStaticLibProject("Plugin_SA",         sdkdir, "Plugin",            true, "Game_SA")
            pluginSdkStaticLibProject("Plugin_IV",         sdkdir, "Plugin_IV",         true, "Game_IV")
            pluginSdkStaticLibProject("Plugin_III_Unreal", sdkdir, "Plugin_III_Unreal", true, "Game_III_Unreal")
            pluginSdkStaticLibProject("Plugin_VC_Unreal",  sdkdir, "Plugin_VC_Unreal",  true, "Game_VC_Unreal")
            pluginSdkStaticLibProject("Plugin_SA_Unreal",  sdkdir, "Plugin_Unreal",     true, "Game_SA_Unreal")
            
        print("\nGenerating example projects:")
        local f = io.open(sdkdir .. "\\examples\\examples.csv", "rb")
        if f then
            f:close()
            local firstLine = true
            for line in io.lines(sdkdir .. "\\examples\\examples.csv") do
                if firstLine then
                    -- skip the header row
                    firstLine = false
                else
                    if line ~= "" then
                        local params = splitString(line, ",")
                        if #params ~= 11 then
                            print("ERROR! Invalid declaration of project \"" .. params[1] .. "\" in examples.csv. Expected 11 params, found " .. #params)
                        end
                        local i = 1
                        for i=1, #params do
                            params[i] = params[i]:gsub("%s+", "")
                        end
  
                        local projDir = (sdkdir .. "\\examples\\" .. params[1])
                        pluginSdkExampleProject(projDir, 
                            params[1], -- name
                            params[2], -- project type
                            params[3] ~= "---", -- GTA2
                            params[4] ~= "---", -- GTA3
                            params[5] ~= "---", -- GTAVC
                            params[6] ~= "---", -- GTASA
                            params[7] ~= "---", -- GTA4
                            params[8] ~= "---", -- GTA3 UNREAL
                            params[9] ~= "---", -- GTAVC UNREAL
                            params[10] ~= "---", -- GTASA UNREAL
                            params[11] ~= "---") -- D3D
                    end
                end
            end
        end
        
        print("") -- separator before prints from premake itself
    end
end
