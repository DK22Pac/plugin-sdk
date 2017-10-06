newoption {
   trigger     = "custombuildtool",
   description = "Use plugin-sdk build tool (mingw compiler) in Visual Studio"
}

sdkdir = os.getenv("PLUGIN_SDK_DIR")
mingw = _ACTION == "codeblocks"
custombuild = _OPTIONS["custombuildtool"] ~= nil
msbuild = not mingw and not custombuild

function deleteAllFoldersWithName(pathToDir, folderName)
    os.execute("for /d /r \"" .. pathToDir .. "\" %d in (" .. folderName .. ") do @if exist \"%d\" rd /s/q \"%d\" 2>NUL")
end

function cleanProjectsDirectory(pathToDir)
    os.execute("del /s " .. pathToDir .. "\\*.sln 2>NUL")
    os.execute("del /s " .. pathToDir .. "\\*.suo 2>NUL")
    os.execute("del /s " .. pathToDir .. "\\*.sdf 2>NUL")
    os.execute("del /s " .. pathToDir .. "\\*.opensdf 2>NUL")
    os.execute("del /s " .. pathToDir .. "\\*.vcxproj 2>NUL")
    os.execute("del /s " .. pathToDir .. "\\*.vcxproj.filters 2>NUL")
    os.execute("del /s " .. pathToDir .. "\\*.vcxproj.user 2>NUL")
    os.execute("del /s " .. pathToDir .. "\\*.workspace 2>NUL")
    os.execute("del /s " .. pathToDir .. "\\*.cbp 2>NUL")
    os.execute("del /s " .. pathToDir .. "\\*.project 2>NUL")
    os.execute("del /s " .. pathToDir .. "\\*.depend 2>NUL")
    os.execute("del /s " .. pathToDir .. "\\*.layout 2>NUL")
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

function projectDefinition(name, value, l1, l2)
    return (name .. "=" .. l1 .. value .. l2)
end

function directX9Installed()
    local dx = os.getenv("DIRECTX9_SDK_DIR")
    if dx ~= nil and dx ~= "" then
        return true
    end
    return false
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
    local i = arindex
    for str in (line .. sep):gmatch("([^" .. sep .. "]*)" .. sep) do
        params[i] = str
        i = i + 1
    end
    return params
end

function pluginSdkToolBuildConfig(buildAction, buildType, outName, outDir, objDir, includeDirs, libraryDirs, libraries, definitions, options, linkOptions)
    if includeDirs ~= "" then
        includeDirs = (";" .. includeDirs)
    end
    if libraryDirs ~= "" then
        libraryDirs = (" libraryDirs:\"(" .. libraryDirs .. ")\"")
    end
    if libraries ~= "" then
        libraries = (" libraries:\"(" .. libraries .. ")\"")
    end
    if definitions ~= "" then
        definitions = (" definitions:\"(" .. definitions .. ")\"")
    end
    if options ~= "" then
        options = (" additional:\"(" .. options .. ")\"")
    end
    if linkOptions ~= "" then
        linkOptions = (" linkadditional:\"(" .. linkOptions .. ")\"")
    end
    return ("\"$(PLUGIN_SDK_DIR)\\tools\\pluginsdk-build\\pluginsdk-build.exe\" " .. buildAction .. " buildtype:(" .. buildType .. ") projectdir:\"($(ProjectDir))\" projectname:\"($(ProjectName))\" targetname:\"(" .. outName .. ")\" outdir:\"(" .. outDir .. ")\" intdir:\"(" .. objDir .. ")\" includeDirs:\"($(ProjectDir)" .. includeDirs .. ")\"" .. libraryDirs .. libraries .. definitions .. options .. linkOptions)
end

function pluginSdkToolCleanConfig(outName, outDir, objDir)
    return ("\"$(PLUGIN_SDK_DIR)\\tools\\pluginsdk-build\\pluginsdk-build.exe\" clean projectdir:\"($(ProjectDir))\" projectname:\"($(ProjectName))\" targetname:\"(" .. outName .. ")\" outdir:\"(" .. outDir .. ")\" intdir:\"(" .. objDir .. ")\"")
end

function setToolset()
    if mingw then
        toolset "gcc"
    elseif _ACTION == "vs2017" then
        toolset "v141_xp"
    elseif _ACTION == "vs2015" then
        toolset "v140_xp"
    elseif _ACTION == "vs2013" then
        toolset "v120_xp"
    elseif _ACTION == "vs2012" then
        toolset "v110_xp"
    elseif _ACTION == "vs2010" then
        toolset "v100"
    elseif _ACTION == "vs2008" then
        toolset "v90"
    elseif _ACTION == "vs2005" then
        toolset "v80"
    end
end

function pluginSdkStaticLibProject(projectName, projectPath, outName, isPluginProject, gameName)
    project (projectName)
    language "C++"
    architecture "x32"
    characterset "MBCS"
    flags "StaticRuntime"
    
    if msbuild then
        defines { "_USING_V110_SDK71_", "_CRT_SECURE_NO_WARNINGS", "_CRT_NON_CONFORMING_SWPRINTFS" }
        buildoptions "/Zc:threadSafeInit-"
    end
    
    if isPluginProject == true and directX9Installed() == true then
        if msbuild then
            sysincludedirs { "$(IncludePath)", "$(DIRECTX9_SDK_DIR)\\Include" }
        else
            includedirs "$(DIRECTX9_SDK_DIR)\\Include"
        end
        defines "_DX9_SDK_INSTALLED"
    end
    
    filter "Release"
        optimize "On"
        if msbuild then
            flags "LinkTimeOptimization"
        end
        symbols "Off"
    filter "Debug"
        symbols "On"
    filter {}
    
    if mingw or custombuild then
        targetdir "$(PLUGIN_SDK_DIR)/output/mingw/lib"
        objdir "$(PLUGIN_SDK_DIR)/output/mingw/obj"
        filter "Release"
            targetname ("lib" .. outName)
        filter "Debug"
            targetname ("lib" .. outName .. "_d")
        filter {}
        targetextension ".a"
    else
        targetdir "$(PLUGIN_SDK_DIR)/output/lib"
        objdir "$(PLUGIN_SDK_DIR)/output/obj"
        filter "Release"
            targetname (outName)
        filter "Debug"
            targetname (outName .. "_d")
        filter {}
        targetextension ".lib"
    end
    
    setToolset()
    
    if not custombuild then
        kind "StaticLib"
        filter "Debug"
            symbols "On"
        filter {}
    else
        kind "Makefile"
        local stdAddIncl = ""
        if isPluginProject == true then
            stdAddIncl = "$(ProjectDir)..\\"
        end
        filter "configurations:Release"
            buildcommands (pluginSdkToolBuildConfig("build", "LIB", "lib" .. outName .. ".a", "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib\\", "$(PLUGIN_SDK_DIR)\\output\\mingw\\obj\\$(Configuration)\\$(ProjectName)\\", stdAddIncl, "", "", "", "-m32 -Wall -O2", ""))
            rebuildcommands (pluginSdkToolBuildConfig("rebuild", "LIB", "lib" .. outName .. ".a", "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib\\", "$(PLUGIN_SDK_DIR)\\output\\mingw\\obj\\$(Configuration)\\$(ProjectName)\\", stdAddIncl, "", "", "", "-m32 -Wall -O2", ""))
            cleancommands (pluginSdkToolCleanConfig("lib" .. outName .. ".a", "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib\\", "$(PLUGIN_SDK_DIR)\\output\\mingw\\obj\\$(Configuration)\\$(ProjectName)\\"))
        filter "configurations:Debug"
            buildcommands (pluginSdkToolBuildConfig("build", "LIB", "lib" .. outName .. "_d.a", "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib\\", "$(PLUGIN_SDK_DIR)\\output\\mingw\\obj\\$(Configuration)\\$(ProjectName)\\", stdAddIncl, "", "", "", "-m32 -Wall -g", ""))
            rebuildcommands (pluginSdkToolBuildConfig("rebuild", "LIB", "lib" .. outName .. "_d.a", "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib\\", "$(PLUGIN_SDK_DIR)\\output\\mingw\\obj\\$(Configuration)\\$(ProjectName)\\", stdAddIncl, "", "", "", "-m32 -Wall -g", ""))
            cleancommands (pluginSdkToolCleanConfig("lib" .. outName .. "_d.a", "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib\\", "$(PLUGIN_SDK_DIR)\\output\\mingw\\obj\\$(Configuration)\\$(ProjectName)\\"))
        filter {}
    end
    
    if isPluginProject == true then
        location (projectPath .. "\\proj")
        dependson "paths"
        includedirs "$(ProjectDir)..\\"
        files {
            (projectPath .. "\\**.h"),
            (projectPath .. "\\**.cpp")
        }
        
        vpaths {
            
            ["events/*"] = (projectFile(projectPath, "events\\**.*")),
            ["extender/*"] = (projectFile(projectPath, "extender\\**.*")),
            ["extensions/*"] = (projectFile(projectPath, "extensions\\**.*")),
            ["plbase/*"] = (projectFile(projectPath, "plbase\\**.*")),
            ["comp/*"] = (projectFile(projectPath, "comp\\**.*")),
            
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
        if _ACTION == "codeblocks" then
            vpaths {
                ["plugin"] = (projectFile(projectPath, "plugin*.h")),
                [(gameName)] = (gameFile(projectPath, gameName, "*.*"))
            }
        else
            vpaths {
                [""] = (projectFile(projectPath, "plugin*.h"))
            }
        end
    else
        location (projectPath)
        files {
            (projectPath .. "\\**.h"),
            (projectPath .. "\\**.cpp")
        }
    end
end

function getExamplePluginDefines(gameId, pluginHeader, laSupport, commandLine, additionalDefines, gameName, gameAbbr, gameAbbrLow, protagonistName, cityName)
    local counter = 1
    local aryDefines = {}
    local l1 = "\""
    local l2 = "\""
    if commandLine == true then
        l1 = "<>"
        l2 = "<>"
    elseif mingw then
        l1 = "\"\\\""
        l2 = "\\\"\""
    end
    if msbuild then
        aryDefines[counter] = "_USING_V110_SDK71_"
        aryDefines[counter + 1] = "_CRT_SECURE_NO_WARNINGS"
        aryDefines[counter + 2] = "_CRT_NON_CONFORMING_SWPRINTFS"
        counter = counter + 3
    end
    aryDefines[counter] = gameId
    aryDefines[counter + 1] = projectDefinition("GTAGAME_NAME", gameName, l1, l2)
    aryDefines[counter + 2] = projectDefinition("GTAGAME_ABBR", gameAbbr, l1, l2)
    aryDefines[counter + 3] = projectDefinition("GTAGAME_ABBRLOW", gameAbbrLow, l1, l2)
    aryDefines[counter + 4] = projectDefinition("GTAGAME_PROTAGONISTNAME", protagonistName, l1, l2)
    aryDefines[counter + 5] = projectDefinition("GTAGAME_CITYNAME", cityName, l1, l2)
    counter = counter + 6
    if flaSupport == true then
        aryDefines[counter] = "_LA_SUPPORT"
        counter = counter + 1
    end
    if additionalDefines ~= "" then
        aryDefines = splitStringAndPasteToArray(additionalDefines, ";", aryDefines, counter)
    end
    return aryDefines
end

function getExamplePluginIncludeFolders(pluginDir, gameDir, usesCleo, cleoDir, usesRwD3d9, additionalDirs, usesD3d9)
    local counter = 1
    local aryDirs = {}
    if usesD3d9 then
        if mingw or custombuild then
            aryDirs[counter] = "$(DIRECTX9_SDK_DIR)\\Include";
            counter = counter + 1
        end
    end
    aryDirs[counter] = ("$(PLUGIN_SDK_DIR)\\" .. pluginDir)
    aryDirs[counter + 1] = ("$(PLUGIN_SDK_DIR)\\" .. pluginDir .. "\\" .. gameDir)
    counter = counter + 2
    if usesCleo then
        aryDirs[counter] = cleoDir
        counter = counter + 1
    end
    if usesRwD3d9 then
        aryDirs[counter] = "$(RWD3D9_DIR)\\source"
        counter = counter + 1
    end
    if additionalDirs ~= "" then
        aryDirs = splitStringAndPasteToArray(additionalDirs, ";", aryDirs, counter)
    end
    return aryDirs
end

function getExamplePluginLibraryFolders(usesCleo, cleoDir, usesRwD3d9, additionalDirs, usesD3d9)
    local counter = 1
    local aryDirs = {}
    if usesD3d9 then
        if mingw or custombuild then
            aryDirs[counter] = "$(DIRECTX9_SDK_DIR)\\Lib\\x86"
            counter = counter + 1
        end
    end
    if mingw or custombuild then
        aryDirs[counter] = "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib"
    else
        aryDirs[counter] = "$(PLUGIN_SDK_DIR)\\output\\lib"
    end
    counter = counter + 1
    if usesCleo then
        aryDirs[counter] = cleoDir
        counter = counter + 1
    end
    if usesRwD3d9 then
        aryDirs[counter] = "$(RWD3D9_DIR)\\libs"
        counter = counter + 1
    end
    if additionalDirs ~= "" then
        aryDirs = splitStringAndPasteToArray(additionalDirs, ";", aryDirs, counter)
    end
    return aryDirs
end

function getExamplePluginLibraries(pluginLibName, usesCleo, cleoLibName, usesD3d9, usesRwD3d9, additionalLibs, isDebug)
    local counter = 3
    local aryLibs = {}
    if isDebug == true then
        aryLibs[1] = "paths_d"
        aryLibs[2] = (pluginLibName .. "_d")
    else
        aryLibs[1] = "paths"
        aryLibs[2] = pluginLibName
    end
    if usesCleo == true then
        aryLibs[3] = cleoLibName
        counter = counter + 1
    end
    if usesD3d9 == true then
        aryLibs[counter] = "d3d9"
        aryLibs[counter + 1] = "d3dx9"
        counter = counter + 2
    end
    if usesRwD3d9 == true then
        aryLibs[counter] = "rwd3d9"
        counter = counter + 1
    end
    if additionalLibs ~= "" then
        aryLibs = splitStringAndPasteToArray(additionalLibs, ";", aryLibs, counter)
    end
    return aryLibs
end

function pluginSdkExampleProject(projectName, gameSa, gameVc, game3, d3dSupport, cleoPlugin, laSupport, additionalIncludeDirs, additionalLibraryDirs, additionalLibraries, additionalDefinitions)
    workspace (projectName)
    local projDir = (sdkdir .. "\\examples\\" .. projectName)
    location (projDir)
    configurations { "Release", "Debug" }
    local supportedGames = {}
    local gameCounter = 1
    if gameSa == true then
        supportedGames[gameCounter] = "GTASA"
        gameCounter = gameCounter + 1
    end
    if gameVc == true then
        supportedGames[gameCounter] = "GTAVC"
        gameCounter = gameCounter + 1
    end
    if game3 == true then
        supportedGames[gameCounter] = "GTA3"
        gameCounter = gameCounter + 1
    end
    platforms (supportedGames)
    project (projectName)
    location (projDir)
    language "C++"
    architecture "x32"
    characterset ("MBCS")
    flags { "StaticRuntime", "NoImportLib" }
    if msbuild then
        buildoptions { "/Zc:threadSafeInit-" }
        linkoptions "/LTCG"
    end
    local strTargetDir = "$(PLUGIN_SDK_DIR)\\output\\examples\\"
    targetdir (strTargetDir)
    objdir ("$(PLUGIN_SDK_DIR)\\output\\obj\\examples\\" .. projectName .. "\\")
    local strMingwObjDir = ("$(PLUGIN_SDK_DIR)\\output\\mingw\\obj\\examples\\" .. projectName .. "\\")
    local ext = ".asi"
    if cleoPlugin == true then
        ext = ".cleo"
    end
    targetextension (ext)
    filter "Release"
        optimize "On"
        symbols "Off"
        if msbuild then
            flags "LinkTimeOptimization"
        end
    filter "Debug"
        symbols "On"
    filter {}

    setToolset()

    if not custombuild then
        kind "SharedLib"

        if d3dSupport == true then
            if msbuild then
               sysincludedirs { "$(IncludePath)", "$(DIRECTX9_SDK_DIR)\\Include" }
               syslibdirs { "$(LibraryPath)", "$(DIRECTX9_SDK_DIR)\\Lib\\x86" }
            end
        end

        if gameSa == true then
            filter "platforms:GTASA"
                includedirs (getExamplePluginIncludeFolders("plugin_sa", "game_sa", cleoPlugin, "$(CLEO_SDK_SA_DIR)", false, additionalIncludeDirs, d3dSupport))
                libdirs (getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_SA_DIR)", false, additionalLibraryDirs, d3dSupport))
                defines (getExamplePluginDefines("GTASA", "plugin.h", laSupport, false, additionalDefinitions, "San Andreas", "SA", "sa", "CJ", "San Andreas"))
            filter { "Release", "platforms:GTASA" }
                links (getExamplePluginLibraries("plugin", cleoPlugin, "cleo", d3dSupport, false, additionalLibraries, false))
                targetname (projectName .. ".SA")
            filter { "Debug", "platforms:GTASA" }
                links (getExamplePluginLibraries("plugin", cleoPlugin, "cleo", d3dSupport, false, additionalLibraries, true))
                targetname (projectName .. ".SA_d")
        end
        if gameVc == true then
            filter "platforms:GTAVC"
                includedirs (getExamplePluginIncludeFolders("plugin_vc", "game_vc", cleoPlugin, "$(CLEO_SDK_VC_DIR)", d3dSupport, additionalIncludeDirs, d3dSupport))
                libdirs (getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_VC_DIR)", d3dSupport, additionalLibraryDirs, d3dSupport))
                defines (getExamplePluginDefines("GTAVC", "plugin_vc.h", laSupport, false, additionalDefinitions, "Vice City", "VC", "vc", "Tommy", "Vice City"))
            filter { "Release", "platforms:GTAVC" }
                links (getExamplePluginLibraries("plugin_vc", cleoPlugin, "VC.CLEO", d3dSupport, d3dSupport, additionalLibraries, false))
                targetname (projectName .. ".VC")
            filter { "Debug", "platforms:GTAVC" }
                links (getExamplePluginLibraries("plugin_vc", cleoPlugin, "VC.CLEO", d3dSupport, d3dSupport, additionalLibraries, true))
                targetname (projectName .. ".VC_d")
        end
        if game3 == true then
            filter "platforms:GTA3"
                includedirs (getExamplePluginIncludeFolders("plugin_iii", "game_iii", cleoPlugin, "$(CLEO_SDK_III_DIR)", d3dSupport, additionalIncludeDirs, d3dSupport))
                libdirs (getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_III_DIR)", d3dSupport, additionalLibraryDirs, d3dSupport))
                defines (getExamplePluginDefines("GTA3", "plugin_iii.h", laSupport, false, additionalDefinitions, "3", "3", "3", "Claude", "Liberty City"))
            filter { "Release", "platforms:GTA3" }
                links (getExamplePluginLibraries("plugin_iii", cleoPlugin, "III.CLEO", d3dSupport, d3dSupport, additionalLibraries, false))
                targetname (projectName .. ".III")
            filter { "Debug", "platforms:GTA3" }
                links (getExamplePluginLibraries("plugin_iii", cleoPlugin, "III.CLEO", d3dSupport, d3dSupport, additionalLibraries, true))
                targetname (projectName .. ".III_d")
        end
        filter {}
    else
        kind "Makefile"
        
        if gameSa == true then
            filter "platforms:GTASA"
                includedirs (getExamplePluginIncludeFolders("plugin_sa", "game_sa", cleoPlugin, "$(CLEO_SDK_SA_DIR)", false, additionalIncludeDirs, d3dSupport))
                defines (getExamplePluginDefines("GTASA", "plugin.h", laSupport, false, additionalDefinitions, "San Andreas", "SA", "sa", "CJ", "San Andreas"))
            filter { "Release", "platforms:GTASA" }
                targetname (projectName .. ".SA")
                local targetNameSuf = ".SA"
                local incDirAry = getExamplePluginIncludeFolders("plugin_sa", "game_sa", cleoPlugin, "$(CLEO_SDK_SA_DIR)", false, additionalIncludeDirs, d3dSupport)
                local strIincludeDirs = table.concat(incDirAry, ";")
                local libDirAry = getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_SA_DIR)", false, additionalLibraryDirs, d3dSupport)
                local strLibraryDirs = table.concat(libDirAry, ";")
                local definesAry = getExamplePluginDefines("GTASA", "plugin.h", laSupport, true, additionalDefinitions, "San Andreas", "SA", "sa", "CJ", "San Andreas")
                local strDefines = table.concat(definesAry, ";")
                local strLibsRelease = table.concat(getExamplePluginLibraries("plugin", cleoPlugin, "cleo", d3dSupport, false, additionalLibraries, false), ";")
                buildcommands (pluginSdkToolBuildConfig("build", "DLL", (projectName .. targetNameSuf .. ext), strTargetDir, (strMingwObjDir .. "$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsRelease, strDefines, "-m32 -O2 -fpermissive", "-m32 -s"))
                rebuildcommands (pluginSdkToolBuildConfig("rebuild", "DLL", (projectName .. targetNameSuf .. ext), strTargetDir, (strMingwObjDir .. "$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsRelease, strDefines, "-m32 -O2 -fpermissive", "-m32 -s"))
                cleancommands (pluginSdkToolCleanConfig((projectName .. targetNameSuf .. ext), strTargetDir, (strMingwObjDir .. "$(Configuration)\\")))
            filter { "Debug", "platforms:GTASA" }
                targetname (projectName .. ".SA_d")
                local targetNameSuf = ".SA"
                local incDirAry = getExamplePluginIncludeFolders("plugin_sa", "game_sa", cleoPlugin, "$(CLEO_SDK_SA_DIR)", false, additionalIncludeDirs, d3dSupport)
                local strIincludeDirs = table.concat(incDirAry, ";")
                local libDirAry = getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_SA_DIR)", false, additionalLibraryDirs, d3dSupport)
                local strLibraryDirs = table.concat(libDirAry, ";")
                local definesAry = getExamplePluginDefines("GTASA", "plugin.h", laSupport, true, additionalDefinitions, "San Andreas", "SA", "sa", "CJ", "San Andreas")
                local strDefines = table.concat(definesAry, ";")
                local strLibsDebug = table.concat(getExamplePluginLibraries("plugin", cleoPlugin, "cleo", d3dSupport, false, additionalLibraries, true), ";")
                buildcommands (pluginSdkToolBuildConfig("build", "DLL", (projectName .. targetNameSuf .. "_d" .. ext), strTargetDir, (strMingwObjDir .. "$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsDebug, strDefines, "-m32 -g -fpermissive", "-m32"))
                rebuildcommands (pluginSdkToolBuildConfig("rebuild", "DLL", (projectName .. targetNameSuf .. "_d" .. ext), strTargetDir, (strMingwObjDir .. "$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsDebug, strDefines, "-m32 -g -fpermissive", "-m32"))
                cleancommands (pluginSdkToolCleanConfig((projectName .. targetNameSuf .. "_d" .. ext), strTargetDir, (strMingwObjDir .. "$(Configuration)\\")))
        end
        if gameVc == true then
            filter "platforms:GTAVC"
                includedirs (getExamplePluginIncludeFolders("plugin_vc", "game_vc", cleoPlugin, "$(CLEO_SDK_VC_DIR)", d3dSupport, additionalIncludeDirs, d3dSupport))
                defines (getExamplePluginDefines("GTAVC", "plugin_vc.h", laSupport, false, additionalDefinitions, "Vice City", "VC", "vc", "Tommy", "Vice City"))
            filter { "Release", "platforms:GTAVC" }
                targetname (projectName .. ".VC")
                local targetNameSuf = ".VC"
                local incDirAry = getExamplePluginIncludeFolders("plugin_vc", "game_vc", cleoPlugin, "$(CLEO_SDK_VC_DIR)", d3dSupport, additionalIncludeDirs, d3dSupport)
                local strIincludeDirs = table.concat(incDirAry, ";")
                local libDirAry = getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_VC_DIR)", d3dSupport, additionalLibraryDirs, d3dSupport)
                local strLibraryDirs = table.concat(libDirAry, ";")
                local definesAry = getExamplePluginDefines("GTAVC", "plugin_vc.h", laSupport, true, additionalDefinitions, "Vice City", "VC", "vc", "Tommy", "Vice City")
                local strDefines = table.concat(definesAry, ";")
                local strLibsRelease = table.concat(getExamplePluginLibraries("plugin_vc", cleoPlugin, "VC.CLEO", d3dSupport, d3dSupport, additionalLibraries, false), ";")
                buildcommands (pluginSdkToolBuildConfig("build", "DLL", (projectName .. targetNameSuf .. ext), strTargetDir, (strMingwObjDir .. "$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsRelease, strDefines, "-m32 -O2 -fpermissive", "-m32 -s"))
                rebuildcommands (pluginSdkToolBuildConfig("rebuild", "DLL", (projectName .. targetNameSuf .. ext), strTargetDir, (strMingwObjDir .. "$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsRelease, strDefines, "-m32 -O2 -fpermissive", "-m32 -s"))
                cleancommands (pluginSdkToolCleanConfig((projectName .. targetNameSuf .. ext), strTargetDir, (strMingwObjDir .. "$(Configuration)\\")))
            filter { "Debug", "platforms:GTAVC" }
                targetname (projectName .. ".VC_d")
                local targetNameSuf = ".VC"
                local incDirAry = getExamplePluginIncludeFolders("plugin_vc", "game_vc", cleoPlugin, "$(CLEO_SDK_VC_DIR)", d3dSupport, additionalIncludeDirs, d3dSupport)
                local strIincludeDirs = table.concat(incDirAry, ";")
                local libDirAry = getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_VC_DIR)", d3dSupport, additionalLibraryDirs, d3dSupport)
                local strLibraryDirs = table.concat(libDirAry, ";")
                local definesAry = getExamplePluginDefines("GTAVC", "plugin_vc.h", laSupport, true, additionalDefinitions, "Vice City", "VC", "vc", "Tommy", "Vice City")
                local strDefines = table.concat(definesAry, ";")
                local strLibsDebug = table.concat(getExamplePluginLibraries("plugin_vc", cleoPlugin, "VC.CLEO", d3dSupport, d3dSupport, additionalLibraries, true), ";")
                buildcommands (pluginSdkToolBuildConfig("build", "DLL", (projectName .. targetNameSuf .. "_d" .. ext), strTargetDir, (strMingwObjDir .. "$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsDebug, strDefines, "-m32 -g -fpermissive", "-m32"))
                rebuildcommands (pluginSdkToolBuildConfig("rebuild", "DLL", (projectName .. targetNameSuf .. "_d" .. ext), strTargetDir, (strMingwObjDir .. "$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsDebug, strDefines, "-m32 -g -fpermissive", "-m32"))
                cleancommands (pluginSdkToolCleanConfig((projectName .. targetNameSuf .. "_d" .. ext), strTargetDir, (strMingwObjDir .. "$(Configuration)\\")))
        end
        if game3 == true then
            filter "platforms:GTA3"
                includedirs (getExamplePluginIncludeFolders("plugin_iii", "game_iii", cleoPlugin, "$(CLEO_SDK_III_DIR)", d3dSupport, additionalIncludeDirs, d3dSupport))
                defines (getExamplePluginDefines("GTA3", "plugin_iii.h", laSupport, false, additionalDefinitions, "3", "3", "3", "Claude", "Liberty City"))
            filter { "Release", "platforms:GTA3" }
                targetname (projectName .. ".III")
                local targetNameSuf = ".III"
                local incDirAry = getExamplePluginIncludeFolders("plugin_iii", "game_iii", cleoPlugin, "$(CLEO_SDK_III_DIR)", d3dSupport, additionalIncludeDirs, d3dSupport)
                local strIincludeDirs = table.concat(incDirAry, ";")
                local libDirAry = getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_III_DIR)", d3dSupport, additionalLibraryDirs, d3dSupport)
                local strLibraryDirs = table.concat(libDirAry, ";")
                local definesAry = getExamplePluginDefines("GTA3", "plugin_iii.h", laSupport, true, additionalDefinitions, "3", "3", "3", "Claude", "Liberty City")
                local strDefines = table.concat(definesAry, ";")
                local strLibsRelease = table.concat(getExamplePluginLibraries("plugin_iii", cleoPlugin, "III.CLEO", d3dSupport, d3dSupport, additionalLibraries, false), ";")
                buildcommands (pluginSdkToolBuildConfig("build", "DLL", (projectName .. targetNameSuf .. ext), strTargetDir, (strMingwObjDir .. "$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsRelease, strDefines, "-m32 -O2 -fpermissive", "-m32 -s"))
                rebuildcommands (pluginSdkToolBuildConfig("rebuild", "DLL", (projectName .. targetNameSuf .. ext), strTargetDir, (strMingwObjDir .. "$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsRelease, strDefines, "-m32 -O2 -fpermissive", "-m32 -s"))
                cleancommands (pluginSdkToolCleanConfig((projectName .. targetNameSuf .. ext), strTargetDir, (strMingwObjDir .. "$(Configuration)\\")))
            filter { "Debug", "platforms:GTA3" }
                targetname (projectName .. ".III_d")
                local targetNameSuf = ".III"
                local incDirAry = getExamplePluginIncludeFolders("plugin_iii", "game_iii", cleoPlugin, "$(CLEO_SDK_III_DIR)", d3dSupport, additionalIncludeDirs, d3dSupport)
                local strIincludeDirs = table.concat(incDirAry, ";")
                local libDirAry = getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_III_DIR)", d3dSupport, additionalLibraryDirs, d3dSupport)
                local strLibraryDirs = table.concat(libDirAry, ";")
                local definesAry = getExamplePluginDefines("GTA3", "plugin_iii.h", laSupport, true, additionalDefinitions, "3", "3", "3", "Claude", "Liberty City")
                local strDefines = table.concat(definesAry, ";")
                local strLibsDebug = table.concat(getExamplePluginLibraries("plugin_iii", cleoPlugin, "III.CLEO", d3dSupport, d3dSupport, additionalLibraries, true), ";")
                buildcommands (pluginSdkToolBuildConfig("build", "DLL", (projectName .. targetNameSuf .. "_d" .. ext), strTargetDir, (strMingwObjDir .. "$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsDebug, strDefines, "-m32 -g -fpermissive", "-m32"))
                rebuildcommands (pluginSdkToolBuildConfig("rebuild", "DLL", (projectName .. targetNameSuf .. "_d" .. ext), strTargetDir, (strMingwObjDir .. "$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsDebug, strDefines, "-m32 -g -fpermissive", "-m32"))
                cleancommands (pluginSdkToolCleanConfig((projectName .. targetNameSuf .. "_d" .. ext), strTargetDir, (strMingwObjDir .. "$(Configuration)\\")))
        end
        filter {}
    end

    files {
        (projDir .. "\\**.h"),
        (projDir .. "\\**.cpp"),
        (projDir .. "\\*.md")
    }
    vpaths {
        ["Source/*"] = { (projDir .. "\\**.h"),
                         (projDir .. "\\**.cpp") }
    }
end

if sdkdir == nil or sdkdir == "" then
    print("\nERROR!\nCan't locate plugin-sdk directory. Environment variable 'PLUGIN_SDK_DIR' is invalid or not set\n")
else
    print("Deleting temporary files...")
    cleanProjectsDirectory(sdkdir .. "\\examples")
    cleanProjectsDirectory(sdkdir .. "\\shared")
    cleanProjectsDirectory(sdkdir .. "\\plugin_sa")
    cleanProjectsDirectory(sdkdir .. "\\plugin_vc")
    cleanProjectsDirectory(sdkdir .. "\\plugin_iii")
    os.remove(sdkdir .. "\\plugin.sln")
    os.remove(sdkdir .. "\\plugin.suo")
    os.remove(sdkdir .. "\\plugin.sdf")
    os.remove(sdkdir .. "\\plugin.workspace")
    os.remove(sdkdir .. "\\plugin.workspace.layout")
    deleteAllFoldersWithName(sdkdir, ".vs")
    print("Done")
    
    if _ACTION ~= "clean" then
    
        workspace "plugin"
            location (sdkdir)
            configurations { "Release", "Debug" }
        
        group "shared"
            pluginSdkStaticLibProject("paths", sdkdir .. "\\shared\\paths", "paths", false, "")
            if _ACTION ~= "codeblocks" then
                project "shared_files"
                location (sdkdir .. "\\shared")
                kind "None"
                files (sdkdir .. "\\shared\\**.h")
                removefiles (sdkdir .. "\\shared\\paths\\**.h")
            end
        group ""
            pluginSdkStaticLibProject("plugin_sa", sdkdir .. "\\plugin_sa", "plugin", true, "game_sa")
            pluginSdkStaticLibProject("plugin_vc", sdkdir .. "\\plugin_vc", "plugin_vc", true, "game_vc")
            pluginSdkStaticLibProject("plugin_iii", sdkdir .. "\\plugin_III", "plugin_iii", true, "game_III")
        
        local f = io.open(sdkdir .. "\\examples\\examples.csv", "rb")
        if f then
            f:close()
            local firstLine = true
            for line in io.lines(sdkdir .. "\\examples\\examples.csv") do 
                if firstLine ~= true then
                    if line ~= "" then
                        local params = splitString(line, ",")
                        local i = 1
                        for str in (line .. ","):gmatch("([^,]*),") do
                            params[i] = str
                            i = i + 1
                        end
                        pluginSdkExampleProject(params[1], params[2] == "GTASA", params[3] == "GTAVC", params[4] == "GTA3", params[5] == "D3D", params[6] == "CLEO", params[7] == "LA", params[8], params[9], params[10], params[11])
                    end
                else
                    firstLine = false
                end
            end
        end
    end
end