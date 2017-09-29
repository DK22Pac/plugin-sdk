newoption {
   trigger     = "custombuildtool",
   description = "Use plugin-sdk build tool (mingw compiler) instead of MSBuild"
}

newoption {
   trigger     = "codeblocksportability",
   description = "Generate a Visual Studio project to be imported in Code::Blocks"
}

function deleteProject(projectName, projectPath)
    os.remove(projectPath .. "/" .. projectName .. ".vcxproj")
    os.remove(projectPath .. "/" .. projectName .. ".vcxproj.filters")
    os.remove(projectPath .. "/" .. projectName .. ".vcxproj.user")
end

function projectFile(projectPath, fileName)
    return (projectPath .. "/" .. fileName)
end

function gameFile(projectPath, gameName, fileName)
    return (projectPath .. "/" .. gameName .. "/" .. fileName)
end

function gameFileTaskAtoZ(projectPath, gameName, fileName)
    local alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    local strary = {}
    for i = 1, #alphabet do
        local c = alphabet:sub(i,i)
        strary[i] = (projectPath .. "/" .. gameName .. "/" .. fileName .. c .. "*.*")
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
        options = (" " .. options)
    end
    if linkOptions ~= "" then
        linkOptions = (" linkadditional:\"" .. options .. ")\"")
    end
    return ("\"$(PLUGIN_SDK_DIR)\\tools\\pluginsdk-build\\pluginsdk-build.exe\" " .. buildAction .. " buildtype:(" .. buildType .. ") projectdir:\"($(ProjectDir))\" projectname:\"($(ProjectName))\" targetname:\"(" .. outName .. ")\" outdir:\"(" .. outDir .. ")\" intdir:\"(" .. objDir .. ")\" includeDirs:\"($(ProjectDir)" .. includeDirs .. ")\"" .. libraryDirs .. libraries .. definitions .. " additional:\"(-std=c++14 -m32" .. options .. ")\"" .. linkOptions)
end

function pluginSdkToolCleanConfig(outName, outDir, objDir)
    return ("\"$(PLUGIN_SDK_DIR)\\tools\\pluginsdk-build\\pluginsdk-build.exe\" clean projectdir:\"($(ProjectDir))\" projectname:\"($(ProjectName))\" targetname:\"(" .. outName .. ")\" outdir:\"(" .. outDir .. ")\" intdir:\"(" .. objDir .. ")\"")
end

function setToolset()
    if _ACTION == "vs2017" then
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
    characterset ("MBCS")
    flags "StaticRuntime"
    defines { "_USING_V110_SDK71_", "_CRT_SECURE_NO_WARNINGS", "_CRT_NON_CONFORMING_SWPRINTFS" }
    if isPluginProject == true and directX9Installed() == true then
        sysincludedirs { "$(IncludePath)", "$(DIRECTX9_SDK_DIR)\\Include" }
        defines "_DX9_SDK_INSTALLED"
    end
    buildoptions { "/Zc:threadSafeInit-" }
    filter "Release"
        optimize "On"
        flags "LinkTimeOptimization"
        symbols "Off"
    filter "Debug"
        symbols "On"
    filter {}
    
    if _OPTIONS["custombuildtool"] or _OPTIONS["codeblocksportability"] then
        targetdir "$(PLUGIN_SDK_DIR)/output/mingw/lib"
        objdir "$(PLUGIN_SDK_DIR)/output/mingw/obj"
    else
        targetdir "$(PLUGIN_SDK_DIR)/output/lib"
        objdir "$(PLUGIN_SDK_DIR)/output/obj"
    end
    
    if not _OPTIONS["custombuildtool"] then
        kind "StaticLib"
        filter "Release"
            targetname (outName)
        filter "Debug"
            targetname (outName .. "_d")
        symbols "On"
        filter {}
        targetextension ".lib"
        setToolset()
    else
        kind "Makefile"
        filter "Release"
            targetname ("lib" .. outName)
        filter "Debug"
            targetname ("lib" .. outName .. "_d")
        filter {}
        targetextension ".a"
        local stdAddIncl = ""
        if isPluginProject == true then
            stdAddIncl = "$(ProjectDir)..\\"
        end
        filter "configurations:Release"
            buildcommands (pluginSdkToolBuildConfig("build", "LIB", "lib" .. outName .. ".a", "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib\\", "$(PLUGIN_SDK_DIR)\\output\\mingw\\obj\\$(Configuration)\\$(ProjectName)\\", stdAddIncl, "", "", "", "-Os", ""))
            rebuildcommands (pluginSdkToolBuildConfig("rebuild", "LIB", "lib" .. outName .. ".a", "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib\\", "$(PLUGIN_SDK_DIR)\\output\\mingw\\obj\\$(Configuration)\\$(ProjectName)\\", stdAddIncl, "", "", "", "-Os", ""))
            cleancommands (pluginSdkToolCleanConfig("lib" .. outName .. ".a", "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib\\", "$(PLUGIN_SDK_DIR)\\output\\mingw\\obj\\$(Configuration)\\$(ProjectName)\\"))
        filter "configurations:Debug"
            buildcommands (pluginSdkToolBuildConfig("build", "LIB", "lib" .. outName .. "_d.a", "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib\\", "$(PLUGIN_SDK_DIR)\\output\\mingw\\obj\\$(Configuration)\\$(ProjectName)\\", stdAddIncl, "", "", "", "", ""))
            rebuildcommands (pluginSdkToolBuildConfig("rebuild", "LIB", "lib" .. outName .. "_d.a", "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib\\", "$(PLUGIN_SDK_DIR)\\output\\mingw\\obj\\$(Configuration)\\$(ProjectName)\\", stdAddIncl, "", "", "", "", ""))
            cleancommands (pluginSdkToolCleanConfig("lib" .. outName .. "_d.a", "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib\\", "$(PLUGIN_SDK_DIR)\\output\\mingw\\obj\\$(Configuration)\\$(ProjectName)\\"))
        filter {}
    end
    
    if isPluginProject == true then
        location (projectPath .. "/proj")
        dependson "paths"
        includedirs ("$(SolutionDir)" .. projectName)
        
        files {
            (projectPath .. "/**.h"),
            (projectPath .. "/**.cpp")
        }
        vpaths {
            [""] = (projectFile(projectPath, "plugin*.h")),
            ["events/*"] = (projectFile(projectPath, "events/**.*")),
            ["extender/*"] = (projectFile(projectPath, "extender/**.*")),
            ["extensions/*"] = (projectFile(projectPath, "extensions/**.*")),
            ["plbase/*"] = (projectFile(projectPath, "plbase/**.*")),
            ["comp/*"] = (projectFile(projectPath, "comp/**.*")),
            
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
    else
        location (projectPath)
        files {
            (projectPath .. "/**.h"),
            (projectPath .. "/**.cpp")
        }
    end
end

function getExamplePluginDefines(gameId, pluginHeader, laSupport, additionalDefines, isMingw, gameName, gameAbbr, gameAbbrLow, protagonistName, cityName)
    local counter = 11
    local l1 = "\""
    local l2 = "\""
    if isMingw == true then
        l1 = "<>"
        l2 = "<>"
    end
    local aryDefines = { "_USING_V110_SDK71_", "_CRT_SECURE_NO_WARNINGS", "_CRT_NON_CONFORMING_SWPRINTFS", gameId,
        projectDefinition("plugin_header", pluginHeader, l1, l2),
        projectDefinition("GTAGAME_NAME", gameName, l1, l2),
        projectDefinition("GTAGAME_ABBR", gameAbbr, l1, l2),
        projectDefinition("GTAGAME_ABBRLOW", gameAbbrLow, l1, l2),
        projectDefinition("GTAGAME_PROTAGONISTNAME", protagonistName, l1, l2),
        projectDefinition("GTAGAME_CITYNAME", cityName, l1, l2) }
    if flaSupport == true then
        aryDirs[counter] = "_LA_SUPPORT"
        counter = counter + 1
    end
    if additionalDefines ~= "" then
        aryDefines = splitStringAndPasteToArray(additionalDefines, ";", aryDefines, counter)
    end
    return aryDefines
end

function getExamplePluginIncludeFolders(pluginDir, gameDir, usesCleo, cleoDir, usesRwD3d9, additionalDirs, includeD3dHeaders)
    local counter = 1
    local aryDirs = {}
    if includeD3dHeaders == true then
        aryDirs[counter] = "$(DIRECTX9_SDK_DIR)\\Include";
        counter = counter + 1
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

function getExamplePluginLibraryFolders(usesCleo, cleoDir, usesRwD3d9, additionalDirs, isMingw, addD3dLibs)
    local counter = 1
    local aryDirs = {}
    if addD3dLibs == true then
        aryDirs[counter] = "$(DIRECTX9_SDK_DIR)\\Lib\\x86"
        counter = counter + 1
    end
    if isMingw == true or _OPTIONS["codeblocksportability"] then
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

function getExamplePluginLibraries(pluginLibName, usesCleo, cleoLibName, usesD3d9, usesRwD3d9, additionalLibs, isMingw, isDebug)
    local counter = 3
    local aryLibs = {}
    if isMingw == true then
        if isDebug == true then
            aryLibs[1] = "libpaths_d.a"
            aryLibs[2] = ("lib" .. pluginLibName .. "_d.a")
        else
            aryLibs[1] = "libpaths.a"
            aryLibs[2] = ("lib" .. pluginLibName .. ".a")
        end
    else
        if isDebug == true then
            aryLibs[1] = "paths_d"
            aryLibs[2] = (pluginLibName .. "_d")
        else
            aryLibs[1] = "paths"
            aryLibs[2] = pluginLibName
        end
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
    if isMingw == true then
        for i = 1, #aryLibs do
            if i > 2 then
                aryLibs[i] = (aryLibs[i] .. ".lib")
            end
        end
    end
    return aryLibs
end

function pluginSdkExampleProject(projectName, gameSa, gameVc, game3, d3dSupport, cleoPlugin, laSupport, additionalIncludeDirs, additionalLibraryDirs, additionalLibraries, additionalDefinitions)
    workspace (projectName)
    location ("examples/" .. projectName)
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
    location ("examples/" .. projectName)
    language "C++"
    characterset ("MBCS")
    flags { "StaticRuntime" }
    buildoptions { "/Zc:threadSafeInit-" }
    local strTargetDir = "$(PLUGIN_SDK_DIR)\\output\\examples\\"
    targetdir (strTargetDir)
    local strObjDir = ("$(PLUGIN_SDK_DIR)\\output\\obj\\examples\\" .. projectName .. "\\")
    objdir (strObjDir)
    local ext = ".asi"
    if cleoPlugin == true then
        ext = ".cleo"
    end
    targetextension (ext)
    filter "Release"
        optimize "On"
        flags "LinkTimeOptimization"
        linkoptions "/LTCG"
        symbols "Off"
    filter "Debug"
        symbols "On"
    filter {}
    
    if not _OPTIONS["custombuildtool"] then
        kind "SharedLib"
        
        setToolset()
        
        if d3dSupport == true then
           sysincludedirs { "$(IncludePath)", "$(DIRECTX9_SDK_DIR)\\Include" }
           syslibdirs { "$(LibraryPath)", "$(DIRECTX9_SDK_DIR)\\Lib\\x86" }
        end
       
        if gameSa == true then
            filter "platforms:GTASA"
                includedirs (getExamplePluginIncludeFolders("plugin_sa", "game_sa", cleoPlugin, "$(CLEO_SDK_SA_DIR)", false, additionalIncludeDirs, false))
                libdirs (getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_SA_DIR)", false, additionalLibraryDirs, false, false))
                defines (getExamplePluginDefines("GTASA", "plugin.h", laSupport, additionalDefinitions, false, "San Andreas", "SA", "sa", "CJ", "San Andreas"))
            filter { "Release", "platforms:GTASA" }
                links (getExamplePluginLibraries("plugin", cleoPlugin, "cleo", d3dSupport, false, additionalLibraries, false, false))
                targetname (projectName .. ".SA")
            filter { "Debug", "platforms:GTASA" }
                links (getExamplePluginLibraries("plugin", cleoPlugin, "cleo", d3dSupport, false, additionalLibraries, false, true))
                targetname (projectName .. ".SA_d")
        end
        if gameVc == true then
            filter "platforms:GTAVC"
                includedirs (getExamplePluginIncludeFolders("plugin_vc", "game_vc", cleoPlugin, "$(CLEO_SDK_VC_DIR)", d3dSupport, additionalIncludeDirs, false))
                libdirs (getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_VC_DIR)", d3dSupport, additionalLibraryDirs, false, false))
                defines (getExamplePluginDefines("GTAVC", "plugin_vc.h", laSupport, additionalDefinitions, false, "Vice City", "VC", "vc", "Tommy", "Vice City"))
            filter { "Release", "platforms:GTAVC" }
                links (getExamplePluginLibraries("plugin_vc", cleoPlugin, "VC.CLEO", d3dSupport, d3dSupport, additionalLibraries, false, false))
                targetname (projectName .. ".VC")
            filter { "Debug", "platforms:GTAVC" }
                links (getExamplePluginLibraries("plugin_vc", cleoPlugin, "VC.CLEO", d3dSupport, d3dSupport, additionalLibraries, false, true))
                targetname (projectName .. ".VC_d")
        end
        if game3 == true then
            filter "platforms:GTA3"
                includedirs (getExamplePluginIncludeFolders("plugin_iii", "game_iii", cleoPlugin, "$(CLEO_SDK_III_DIR)", d3dSupport, additionalIncludeDirs, false))
                libdirs (getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_III_DIR)", d3dSupport, additionalLibraryDirs, false, false))
                defines (getExamplePluginDefines("GTA3", "plugin_iii.h", laSupport, additionalDefinitions, false, "3", "3", "3", "Claude", "Liberty City"))
            filter { "Release", "platforms:GTA3" }
                links (getExamplePluginLibraries("plugin_iii", cleoPlugin, "III.CLEO", d3dSupport, d3dSupport, additionalLibraries, false, false))
                targetname (projectName .. ".III")
            filter { "Debug", "platforms:GTA3" }
                links (getExamplePluginLibraries("plugin_iii", cleoPlugin, "III.CLEO", d3dSupport, d3dSupport, additionalLibraries, false, true))
                targetname (projectName .. ".III_d")
        end
        filter {}
    else
        kind "Makefile"
        
        if gameSa == true then
            filter "platforms:GTASA"
                includedirs (getExamplePluginIncludeFolders("plugin_sa", "game_sa", cleoPlugin, "$(CLEO_SDK_SA_DIR)", false, additionalIncludeDirs, d3dSupport))
                defines (getExamplePluginDefines("GTASA", "plugin.h", laSupport, additionalDefinitions, false, "San Andreas", "SA", "sa", "CJ", "San Andreas"))
            filter { "Release", "platforms:GTASA" }
                targetname (projectName .. ".SA")
                local targetNameSuf = ".SA"
                local incDirAry = getExamplePluginIncludeFolders("plugin_sa", "game_sa", cleoPlugin, "$(CLEO_SDK_SA_DIR)", false, additionalIncludeDirs, d3dSupport)
                local strIincludeDirs = table.concat(incDirAry, ";")
                local libDirAry = getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_SA_DIR)", false, additionalLibraryDirs, true, d3dSupport)
                local strLibraryDirs = table.concat(libDirAry, ";")
                local definesAry = getExamplePluginDefines("GTASA", "plugin.h", laSupport, additionalDefinitions, true, "San Andreas", "SA", "sa", "CJ", "San Andreas")
                local strDefines = table.concat(definesAry, ";")
                local strLibsRelease = table.concat(getExamplePluginLibraries("plugin", cleoPlugin, "cleo", d3dSupport, false, additionalLibraries, true, false), ";")
                buildcommands (pluginSdkToolBuildConfig("build", "DLL", (projectName .. targetNameSuf .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsRelease, strDefines, "-Os", ""))
                rebuildcommands (pluginSdkToolBuildConfig("rebuild", "DLL", (projectName .. targetNameSuf .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsRelease, strDefines, "-Os", ""))
                cleancommands (pluginSdkToolCleanConfig((projectName .. targetNameSuf .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\")))
            filter { "Debug", "platforms:GTASA" }
                targetname (projectName .. ".SA_d")
                local targetNameSuf = ".SA"
                local incDirAry = getExamplePluginIncludeFolders("plugin_sa", "game_sa", cleoPlugin, "$(CLEO_SDK_SA_DIR)", false, additionalIncludeDirs, d3dSupport)
                local strIincludeDirs = table.concat(incDirAry, ";")
                local libDirAry = getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_SA_DIR)", false, additionalLibraryDirs, true, d3dSupport)
                local strLibraryDirs = table.concat(libDirAry, ";")
                local definesAry = getExamplePluginDefines("GTASA", "plugin.h", laSupport, additionalDefinitions, true, "San Andreas", "SA", "sa", "CJ", "San Andreas")
                local strDefines = table.concat(definesAry, ";")
                local strLibsDebug = table.concat(getExamplePluginLibraries("plugin", cleoPlugin, "cleo", d3dSupport, false, additionalLibraries, true, true), ";")
                buildcommands (pluginSdkToolBuildConfig("build", "DLL", (projectName .. targetNameSuf .. "_d" .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsDebug, strDefines, "", ""))
                rebuildcommands (pluginSdkToolBuildConfig("rebuild", "DLL", (projectName .. targetNameSuf .. "_d" .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsDebug, strDefines, "", ""))
                cleancommands (pluginSdkToolCleanConfig((projectName .. targetNameSuf .. "_d" .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\")))
        end
        if gameVc == true then
            filter "platforms:GTAVC"
                includedirs (getExamplePluginIncludeFolders("plugin_vc", "game_vc", cleoPlugin, "$(CLEO_SDK_VC_DIR)", d3dSupport, additionalIncludeDirs, d3dSupport))
                defines (getExamplePluginDefines("GTAVC", "plugin_vc.h", laSupport, additionalDefinitions, false, "Vice City", "VC", "vc", "Tommy", "Vice City"))
            filter { "Release", "platforms:GTAVC" }
                targetname (projectName .. ".VC")
                local targetNameSuf = ".VC"
                local incDirAry = getExamplePluginIncludeFolders("plugin_vc", "game_vc", cleoPlugin, "$(CLEO_SDK_VC_DIR)", d3dSupport, additionalIncludeDirs, d3dSupport)
                local strIincludeDirs = table.concat(incDirAry, ";")
                local libDirAry = getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_VC_DIR)", d3dSupport, additionalLibraryDirs, true, d3dSupport)
                local strLibraryDirs = table.concat(libDirAry, ";")
                local definesAry = getExamplePluginDefines("GTAVC", "plugin_vc.h", laSupport, additionalDefinitions, true, "Vice City", "VC", "vc", "Tommy", "Vice City")
                local strDefines = table.concat(definesAry, ";")
                local strLibsRelease = table.concat(getExamplePluginLibraries("plugin_vc", cleoPlugin, "VC.CLEO", d3dSupport, d3dSupport, additionalLibraries, true, false), ";")
                buildcommands (pluginSdkToolBuildConfig("build", "DLL", (projectName .. targetNameSuf .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsRelease, strDefines, "-Os", ""))
                rebuildcommands (pluginSdkToolBuildConfig("rebuild", "DLL", (projectName .. targetNameSuf .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsRelease, strDefines, "-Os", ""))
                cleancommands (pluginSdkToolCleanConfig((projectName .. targetNameSuf .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\")))
            filter { "Debug", "platforms:GTAVC" }
                targetname (projectName .. ".VC_d")
                local targetNameSuf = ".VC"
                local incDirAry = getExamplePluginIncludeFolders("plugin_vc", "game_vc", cleoPlugin, "$(CLEO_SDK_VC_DIR)", d3dSupport, additionalIncludeDirs, d3dSupport)
                local strIincludeDirs = table.concat(incDirAry, ";")
                local libDirAry = getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_VC_DIR)", d3dSupport, additionalLibraryDirs, true, d3dSupport)
                local strLibraryDirs = table.concat(libDirAry, ";")
                local definesAry = getExamplePluginDefines("GTAVC", "plugin_vc.h", laSupport, additionalDefinitions, true, "Vice City", "VC", "vc", "Tommy", "Vice City")
                local strDefines = table.concat(definesAry, ";")
                local strLibsDebug = table.concat(getExamplePluginLibraries("plugin_vc", cleoPlugin, "VC.CLEO", d3dSupport, d3dSupport, additionalLibraries, true, true), ";")
                buildcommands (pluginSdkToolBuildConfig("build", "DLL", (projectName .. targetNameSuf .. "_d" .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsDebug, strDefines, "", ""))
                rebuildcommands (pluginSdkToolBuildConfig("rebuild", "DLL", (projectName .. targetNameSuf .. "_d" .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsDebug, strDefines, "", ""))
                cleancommands (pluginSdkToolCleanConfig((projectName .. targetNameSuf .. "_d" .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\")))
        end
        if game3 == true then
            filter "platforms:GTA3"
                includedirs (getExamplePluginIncludeFolders("plugin_iii", "game_iii", cleoPlugin, "$(CLEO_SDK_III_DIR)", d3dSupport, additionalIncludeDirs, d3dSupport))
                defines (getExamplePluginDefines("GTA3", "plugin_iii.h", laSupport, additionalDefinitions, false, "3", "3", "3", "Claude", "Liberty City"))
            filter { "Release", "platforms:GTA3" }
                targetname (projectName .. ".III")
                local targetNameSuf = ".III"
                local incDirAry = getExamplePluginIncludeFolders("plugin_iii", "game_iii", cleoPlugin, "$(CLEO_SDK_III_DIR)", d3dSupport, additionalIncludeDirs, d3dSupport)
                local strIincludeDirs = table.concat(incDirAry, ";")
                local libDirAry = getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_III_DIR)", d3dSupport, additionalLibraryDirs, true, d3dSupport)
                local strLibraryDirs = table.concat(libDirAry, ";")
                local definesAry = getExamplePluginDefines("GTA3", "plugin_iii.h", laSupport, additionalDefinitions, true, "3", "3", "3", "Claude", "Liberty City")
                local strDefines = table.concat(definesAry, ";")
                local strLibsRelease = table.concat(getExamplePluginLibraries("plugin_iii", cleoPlugin, "III.CLEO", d3dSupport, d3dSupport, additionalLibraries, true, false), ";")
                buildcommands (pluginSdkToolBuildConfig("build", "DLL", (projectName .. targetNameSuf .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsRelease, strDefines, "-Os", ""))
                rebuildcommands (pluginSdkToolBuildConfig("rebuild", "DLL", (projectName .. targetNameSuf .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsRelease, strDefines, "-Os", ""))
                cleancommands (pluginSdkToolCleanConfig((projectName .. targetNameSuf .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\")))
            filter { "Debug", "platforms:GTA3" }
                targetname (projectName .. ".III_d")
                local targetNameSuf = ".III"
                local incDirAry = getExamplePluginIncludeFolders("plugin_iii", "game_iii", cleoPlugin, "$(CLEO_SDK_III_DIR)", d3dSupport, additionalIncludeDirs, d3dSupport)
                local strIincludeDirs = table.concat(incDirAry, ";")
                local libDirAry = getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_III_DIR)", d3dSupport, additionalLibraryDirs, true, d3dSupport)
                local strLibraryDirs = table.concat(libDirAry, ";")
                local definesAry = getExamplePluginDefines("GTA3", "plugin_iii.h", laSupport, additionalDefinitions, true, "3", "3", "3", "Claude", "Liberty City")
                local strDefines = table.concat(definesAry, ";")
                local strLibsDebug = table.concat(getExamplePluginLibraries("plugin_iii", cleoPlugin, "III.CLEO", d3dSupport, d3dSupport, additionalLibraries, true, true), ";")
                buildcommands (pluginSdkToolBuildConfig("build", "DLL", (projectName .. targetNameSuf .. "_d" .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsDebug, strDefines, "", ""))
                rebuildcommands (pluginSdkToolBuildConfig("rebuild", "DLL", (projectName .. targetNameSuf .. "_d" .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibsDebug, strDefines, "", ""))
                cleancommands (pluginSdkToolCleanConfig((projectName .. targetNameSuf .. "_d" .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\")))
        end
        filter {}
    end

    files {
        ("examples/" .. projectName .. "/**.h"),
        ("examples/" .. projectName .. "/**.cpp"),
        ("examples/" .. projectName .. "/*.md")
    }
    vpaths {
        ["Source/*"] = { ("examples/" .. projectName .. "/**.h"),
                         ("examples/" .. projectName .. "/**.cpp") }
    }
end

print("Deleting temporary files...")
deleteProject("paths", "shared/paths")
deleteProject("shared_files", "shared")
deleteProject("plugin_sa", "plugin_sa/proj")
deleteProject("plugin_vc", "plugin_vc/proj")
deleteProject("plugin_iii", "plugin_iii/proj")
os.remove("plugin.sln")
os.remove("plugin.suo")
os.remove("plugin.sdf")
print("Deleting temporary .vs directory:")
os.execute("rd /s /q .vs")
print("Done with deleting temporary .vs directory")
print("Deleting example projects:")
os.execute("del /s examples\\*.vcxproj")
os.execute("del /s examples\\*.vcxproj.filters")
os.execute("del /s examples\\*.vcxproj.user")
print("Done with deleting example projects")

if _ACTION ~= "clean" then

    workspace "plugin"
        configurations { "Release", "Debug" }
    
    group "shared"
        pluginSdkStaticLibProject("paths", "shared/paths", "paths", false, "")
        if not _OPTIONS["codeblocksportability"] then
            project "shared_files"
            location "shared"
            kind "None"
            files "shared/**.h"
            removefiles "shared/paths/**.h"
        end
    group ""
        pluginSdkStaticLibProject("plugin_sa", "plugin_sa", "plugin", true, "game_sa")
        pluginSdkStaticLibProject("plugin_vc", "plugin_vc", "plugin_vc", true, "game_vc")
        pluginSdkStaticLibProject("plugin_iii", "plugin_III", "plugin_iii", true, "game_III")
    
end

local f = io.open("examples/examples.csv", "rb")
if f then
    f:close()
    local firstLine = true
    for line in io.lines("examples/examples.csv") do 
        if firstLine ~= true then
            if line ~= "" then
                local params = splitString(line, ",")
                local i = 1
                for str in (line .. ","):gmatch("([^,]*),") do
                    params[i] = str
                    i = i + 1
                end
                print("Deleting temporary .vs directory (project " .. params[1] .. ":")
                os.execute("rd /s /q \"examples/" .. params[1] .. "/.vs\"")
                print("Done with deleting temporary .vs directory")
                if _ACTION ~= "clean" then
                    pluginSdkExampleProject(params[1], params[2] == "GTASA", params[3] == "GTAVC", params[4] == "GTA3", params[5] == "D3D", params[6] == "CLEO", params[7] == "LA", params[8], params[9], params[10], params[11])
                end
            end
        else
            firstLine = false
        end
    end
end
