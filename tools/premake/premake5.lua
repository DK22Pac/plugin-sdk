require "codeblocks"
newoption {
   trigger     = "pluginsdkdir",
   description = "Plugin-SDK directory (optional)"
}

newoption {
   trigger     = "winxp",
   description = "Windows XP support (optional)"
}

sdkdir = _OPTIONS["pluginsdkdir"]
if sdkdir == nil then
    sdkdir = os.getenv("PLUGIN_SDK_DIR")
end
winxp = _OPTIONS["winxp"]
if winxp == nil then
    winxp = false
end
mingw = _ACTION == "codeblocks"
msbuild = not mingw

function deleteAllFoldersWithName(pathToDir, folderName)
    os.execute("for /d /r \"" .. pathToDir .. "\" %d in (" .. folderName .. ") do @if exist \"%d\" rd /s/q \"%d\" 2>NUL")
end

function cleanProjectsDirectory(pathToDir)
    os.execute("del /s \"" .. pathToDir .. "\\*.sln\" 2>NUL")
    os.execute("del /s \"" .. pathToDir .. "\\*.suo\" 2>NUL")
    os.execute("del /s \"" .. pathToDir .. "\\*.sdf\" 2>NUL")
    os.execute("del /s \"" .. pathToDir .. "\\*.opensdf\" 2>NUL")
    os.execute("del /s \"" .. pathToDir .. "\\*.vcxproj\" 2>NUL")
    os.execute("del /s \"" .. pathToDir .. "\\*.vcxproj.filters\" 2>NUL")
    os.execute("del /s \"" .. pathToDir .. "\\*.vcxproj.user\" 2>NUL")
    os.execute("del /s \"" .. pathToDir .. "\\*.workspace\" 2>NUL")
    os.execute("del /s \"" .. pathToDir .. "\\*.cbp\" 2>NUL")
    os.execute("del /s \"" .. pathToDir .. "\\*.project\" 2>NUL")
    os.execute("del /s \"" .. pathToDir .. "\\*.depend\" 2>NUL")
    os.execute("del /s \"" .. pathToDir .. "\\*.layout\" 2>NUL")
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
	return true
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

function setToolset()
    if _ACTION == "codeblocks" then
        toolset "gcc"
        buildoptions "-std=gnu++17"
    elseif _ACTION == "vs2019" or _ACTION == "vs2017" or _ACTION == "vs2015" then
        if winxp then
            if _ACTION == "vs2015" then
                toolset "v140_xp"
            else
                toolset "v141_xp"
            end
            if _ACTION ~= "vs2019" then
                systemversion "7.0"
            end
        else
            if _ACTION == "vs2017" then
                systemversion "latest"
            end
        end
        buildoptions "/std:c++latest"
    end
end

function pluginSdkStaticLibProject(projectName, sdkdir, outName, isPluginProject, gameName)
    project (projectName)
    language "C++"

	if projectName:sub(-#"_unreal") == "_unreal" then
		architecture "x64"
		defines "_WIN64"
	else
		architecture "x32"
	end
    characterset "MBCS"
    staticruntime "On"	
	
    local projectPath = (sdkdir .. "\\" .. projectName)
    
    if msbuild then
        if winxp then
            defines "_USING_V110_SDK71_"
            buildoptions { "/Zc:threadSafeInit-" }
			cppdialect "C++17"
		else	
			cppdialect "C++latest"
        end
        defines { "_CRT_SECURE_NO_WARNINGS", "_CRT_NON_CONFORMING_SWPRINTFS", "_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING" }
        buildoptions { "/sdl-" }
        disablewarnings "4073"
    end
    if mingw then
        buildoptions "-fpermissive"
    end
    
    if isPluginProject == true and directX9Installed() == true then
        if msbuild then
            sysincludedirs { "$(IncludePath)", "$(PLUGIN_SDK_DIR)\\shared\\dxsdk" }
        else
            includedirs "$(PLUGIN_SDK_DIR)\\shared\\dxsdk"
        end
        defines "_DX9_SDK_INSTALLED"
    end
    
    --TODO: add all game versions when it will be possible
    if isPluginProject == true then
        if projectName == "plugin_sa" then
            defines { "GTASA", "PLUGIN_SGV_10US", "RW" }
        elseif projectName == "plugin_vc" then
            defines { "GTAVC", "PLUGIN_SGV_10EN", "RW" }
        elseif projectName == "plugin_iii" then
            defines { "GTA3", "PLUGIN_SGV_10EN", "RW" }
		elseif projectName == "plugin_ii" then
            defines { "GTA2", "PLUGIN_SGV_96EN", "GBH" }
		elseif projectName == "plugin_iv" then
            defines { "GTAIV", "PLUGIN_SGV_CE", "RAGE" }
			
		elseif projectName == "plugin_sa_unreal" then
            defines { "GTASA_UNREAL", "PLUGIN_UNREAL", "UNREAL" }
		elseif projectName == "plugin_vc_unreal" then
            defines { "GTAVC_UNREAL", "PLUGIN_UNREAL", "UNREAL" }
		elseif projectName == "plugin_iii_unreal" then
            defines { "GTA3_UNREAL", "PLUGIN_UNREAL", "UNREAL" }	
        end
    end
    
    filter "Release"
        optimize "On"
        if msbuild then
            flags "LinkTimeOptimization"
        end
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
    
    if isPluginProject == true then
        os.execute("mkdir \"" .. projectPath .. "\"")
        location (projectPath)
        includedirs {
            ("$(PLUGIN_SDK_DIR)\\" .. projectName),
            ("$(PLUGIN_SDK_DIR)\\" .. projectName .. "\\" .. gameName),
            "$(PLUGIN_SDK_DIR)\\shared",
            "$(PLUGIN_SDK_DIR)\\shared\\game"
        }
		
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
		
		includedirs {
			(sdkdir .. "\\safetyhook"),
		}
        
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
    else
        location (projectPath)
        files {
            (projectPath .. "\\**.h"),
            (projectPath .. "\\**.cpp")
        }
    end
end

function getExamplePluginDefines(projName, game, projectType, laSupport, d3dSupport, additionalDefines, gameName, gameAbbr, gameAbbrLow, protagonistName, cityName)
    local counter = 1
    local aryDefines = {}
    local l1 = "\""
    local l2 = "\""
    if mingw then
        l1 = "\"\\\""
        l2 = "\\\"\""
    end
    if msbuild then
        if winxp then
            aryDefines[counter] = "_USING_V110_SDK71_"
            counter = counter + 1
        end
        aryDefines[counter] = "_CRT_SECURE_NO_WARNINGS"
        aryDefines[counter + 1] = "_CRT_NON_CONFORMING_SWPRINTFS"
        counter = counter + 2
    end
    aryDefines[counter] = game
    aryDefines[counter + 1] = projectDefinition("GTAGAME_NAME", gameName, l1, l2)
    aryDefines[counter + 2] = projectDefinition("GTAGAME_ABBR", gameAbbr, l1, l2)
    aryDefines[counter + 3] = projectDefinition("GTAGAME_ABBRLOW", gameAbbrLow, l1, l2)
    aryDefines[counter + 4] = projectDefinition("GTAGAME_PROTAGONISTNAME", protagonistName, l1, l2)
    aryDefines[counter + 5] = projectDefinition("GTAGAME_CITYNAME", cityName, l1, l2)
    counter = counter + 6
    if projectType == "MOON" then
        aryDefines[counter] = "LUA_BUILD_AS_DLL"
        aryDefines[counter + 1] = projectDefinition("MODULE_NAME", projName, "\"", "\"")
        counter = counter + 2
    end
    if laSupport == true then
        aryDefines[counter] = "_PLUGIN_LA_COMP"
        counter = counter + 1
    end
    if d3dSupport == true then
        aryDefines[counter] = "_DX9_SDK_INSTALLED"
        counter = counter + 1
    end
    if game == "GTASA" then
        aryDefines[counter] = "PLUGIN_SGV_10US"
        counter = counter + 1
    elseif game == "GTAVC" then
        aryDefines[counter] = "PLUGIN_SGV_10EN"
        counter = counter + 1
    elseif game == "GTA3" then
        aryDefines[counter] = "PLUGIN_SGV_10EN"
        counter = counter + 1
    elseif game == "GTA2" then
        aryDefines[counter] = "PLUGIN_SGV_96EN"
        counter = counter + 1
	elseif game == "GTAIV" then
        aryDefines[counter] = "PLUGIN_SGV_CE"
        counter = counter + 1
    end
    if additionalDefines ~= "" then
        aryDefines = splitStringAndPasteToArray(additionalDefines, ";", aryDefines, counter)
    end
    return aryDefines
end

function getExamplePluginIncludeFolders(pluginDir, gameDir, projectType, cleoDir, usesRwD3d9, additionalDirs, usesD3d9)
    local counter = 1
    local aryDirs = {}
    if usesD3d9 then
        if mingw then
            aryDirs[counter] = "$(PLUGIN_SDK_DIR)\\shared\\dxsdk";
            counter = counter + 1
        end
    end
    aryDirs[counter] = ("$(PLUGIN_SDK_DIR)\\" .. pluginDir)
    aryDirs[counter + 1] = ("$(PLUGIN_SDK_DIR)\\" .. pluginDir .. "\\" .. gameDir)
    aryDirs[counter + 2] = "$(PLUGIN_SDK_DIR)\\shared"
    aryDirs[counter + 3] = "$(PLUGIN_SDK_DIR)\\shared\\game"
    counter = counter + 4
    if projectType == "MOON" then
        aryDirs[counter] = "$(MOONLOADER_SDK_SA_DIR)\\src"
        aryDirs[counter + 1] = "$(MOONLOADER_SDK_SA_DIR)\\src\\libs\\lua"
        aryDirs[counter + 2] = "$(MOONLOADER_SDK_SA_DIR)\\src\\libs\\sol2"
        counter = counter + 3
    elseif projectType == "CLEO" then
        aryDirs[counter] = cleoDir
        counter = counter + 1
    end
    if usesRwD3d9 then
        aryDirs[counter] = "$(PLUGIN_SDK_DIR)\\shared\\rwd3d9"
        counter = counter + 1
    end
    if additionalDirs ~= "" then
        aryDirs = splitStringAndPasteToArray(additionalDirs, ";", aryDirs, counter)
    end
    return aryDirs
end

function getExamplePluginLibraryFolders(projectType, cleoDir, usesRwD3d9, additionalDirs, usesD3d9)
    local counter = 1
    local aryDirs = {}
    if usesD3d9 then
        if mingw then
            aryDirs[counter] = "$(PLUGIN_SDK_DIR)\\shared\\dxsdk"
            counter = counter + 1
        end
    end
    if mingw then
        aryDirs[counter] = "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib"
    else
        aryDirs[counter] = "$(PLUGIN_SDK_DIR)\\output\\lib"
    end
    counter = counter + 1
    if projectType == "MOON" then
        aryDirs[counter] = "$(MOONLOADER_SDK_SA_DIR)\\src\\libs\\lua"
        counter = counter + 1
    elseif projectType == "CLEO" then
        aryDirs[counter] = cleoDir
        counter = counter + 1
    end
    if usesRwD3d9 then
        aryDirs[counter] = "$(PLUGIN_SDK_DIR)\\shared\\rwd3d9"
        counter = counter + 1
    end
    if additionalDirs ~= "" then
        aryDirs = splitStringAndPasteToArray(additionalDirs, ";", aryDirs, counter)
    end
    return aryDirs
end

function getExamplePluginLibraries(pluginLibName, projectType, cleoLibName, usesD3d9, usesRwD3d9, additionalLibs, isDebug)
    local counter = 1
    local aryLibs = {}
    if isDebug == true then
        aryLibs[counter] = (pluginLibName .. "_d")
        counter = counter + 1
    else
        aryLibs[counter] = pluginLibName
        counter = counter + 1
    end
    if projectType == "MOON" then
        aryLibs[counter] = "lua51"
        counter = counter + 1
    elseif projectType == "CLEO" then
        aryLibs[counter] = cleoLibName
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

function pluginSdkExampleProject(projectName, projectType, gameSa, gameVc, game3, d3dSupport, laSupport, additionalIncludeDirs, additionalLibraryDirs, additionalLibraries, additionalDefinitions)
    workspace (projectName)
    local projDir = (sdkdir .. "\\examples\\" .. projectName)
    location (projDir)
    configurations { "Release", "zDebug" }
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
	if game2 == true then
        supportedGames[gameCounter] = "GTA2"
        gameCounter = gameCounter + 1
    end
	if gameIv == true then
        supportedGames[gameCounter] = "GTAIV"
        gameCounter = gameCounter + 1
    end
    platforms (supportedGames)
    project (projectName)
    location (projDir)
    language "C++"
    architecture "x32"
    characterset ("MBCS")
    staticruntime "On"
    flags { "NoImportLib" }
	cppdialect "C++latest"
	defines { "_CRT_SECURE_NO_WARNINGS" }

    if msbuild then
        if winxp then
            buildoptions { "/Zc:threadSafeInit-" }
        end
        buildoptions { "/sdl-" }
    end
    if mingw then
        buildoptions "-fpermissive"
        linkoptions { "-static-libgcc", "-static-libstdc++" }
    end
    local strTargetDir = "$(PLUGIN_SDK_DIR)\\output\\examples\\"
    targetdir (strTargetDir)
    local strMingwObjDir = ("$(PLUGIN_SDK_DIR)\\output\\mingw\\obj\\examples\\$(ProjectName)\\")
    local ext = ".asi"
    if projectType == "CLEO" then
        ext = ".cleo"
    elseif projectType == "MOON" or projectType == "DLL" then
        ext = ".dll"
    end
    targetextension (ext)
    filter "Release"
        if mingw then
            objdir (strMingwObjDir .. "Release\\")
        else
            objdir ("!$(PLUGIN_SDK_DIR)\\output\\obj\\examples\\$(ProjectName)\\Release\\")
        end
        optimize "On"
        symbols "Off"
        if msbuild then
            flags "LinkTimeOptimization"
        end
    filter "zDebug"
        if mingw then
            objdir (strMingwObjDir .. "Debug\\")
        else
            objdir ("!$(PLUGIN_SDK_DIR)\\output\\obj\\examples\\$(ProjectName)\\Debug\\")
        end
        symbols "On"
    filter {}

    setToolset()
    kind "SharedLib"

    if d3dSupport == true then
        if msbuild then
           sysincludedirs { "$(IncludePath)", "$(PLUGIN_SDK_DIR)\\shared\\dxsdk" }
           syslibdirs { "$(LibraryPath)", "$(PLUGIN_SDK_DIR)\\shared\\dxsdk" }
        end
    end
	
    if gameSa == true then
        filter "platforms:GTASA"
            includedirs (getExamplePluginIncludeFolders("plugin_sa", "game_sa", projectType, "$(CLEO_SDK_SA_DIR)", false, additionalIncludeDirs, d3dSupport))
            libdirs (getExamplePluginLibraryFolders(projectType, "$(CLEO_SDK_SA_DIR)", false, additionalLibraryDirs, d3dSupport))
            defines (getExamplePluginDefines(projectName, "GTASA", projectType, laSupport, d3dSupport, additionalDefinitions, "San Andreas", "SA", "sa", "CJ", "San Andreas"))
        filter { "Release", "platforms:GTASA" }
            links (getExamplePluginLibraries("plugin", projectType, "cleo", d3dSupport, false, additionalLibraries, false))
            targetname (projectName .. ".SA")
        filter { "zDebug", "platforms:GTASA" }
            links (getExamplePluginLibraries("plugin", projectType, "cleo", d3dSupport, false, additionalLibraries, true))
            targetname (projectName .. ".SA_d")
    end
    if gameVc == true then
        filter "platforms:GTAVC"
            includedirs (getExamplePluginIncludeFolders("plugin_vc", "game_vc", projectType, "$(CLEO_SDK_VC_DIR)", d3dSupport, additionalIncludeDirs, d3dSupport))
            libdirs (getExamplePluginLibraryFolders(projectType, "$(CLEO_SDK_VC_DIR)", d3dSupport, additionalLibraryDirs, d3dSupport))
            defines (getExamplePluginDefines(projectName, "GTAVC", projectType, laSupport, d3dSupport, additionalDefinitions, "Vice City", "VC", "vc", "Tommy", "Vice City"))
        filter { "Release", "platforms:GTAVC" }
            links (getExamplePluginLibraries("plugin_vc", projectType, "VC.CLEO", d3dSupport, d3dSupport, additionalLibraries, false))
            targetname (projectName .. ".VC")
        filter { "zDebug", "platforms:GTAVC" }
            links (getExamplePluginLibraries("plugin_vc", projectType, "VC.CLEO", d3dSupport, d3dSupport, additionalLibraries, true))
            targetname (projectName .. ".VC_d")
    end
    if game3 == true then
        filter "platforms:GTA3"
            includedirs (getExamplePluginIncludeFolders("plugin_iii", "game_iii", projectType, "$(CLEO_SDK_III_DIR)", d3dSupport, additionalIncludeDirs, d3dSupport))
            libdirs (getExamplePluginLibraryFolders(projectType, "$(CLEO_SDK_III_DIR)", d3dSupport, additionalLibraryDirs, d3dSupport))
            defines (getExamplePluginDefines(projectName, "GTA3", projectType, laSupport, d3dSupport, additionalDefinitions, "3", "3", "3", "Claude", "Liberty City"))
        filter { "Release", "platforms:GTA3" }
            links (getExamplePluginLibraries("plugin_iii", projectType, "III.CLEO", d3dSupport, d3dSupport, additionalLibraries, false))
            targetname (projectName .. ".III")
        filter { "zDebug", "platforms:GTA3" }
            links (getExamplePluginLibraries("plugin_iii", projectType, "III.CLEO", d3dSupport, d3dSupport, additionalLibraries, true))
            targetname (projectName .. ".III_d")
    end
	if game2 == true then
        filter "platforms:GTA2"
            includedirs (getExamplePluginIncludeFolders("plugin_ii", "game_ii", projectType, "$(CLEO_SDK_II_DIR)", d3dSupport, additionalIncludeDirs, d3dSupport))
            libdirs (getExamplePluginLibraryFolders(projectType, "$(CLEO_SDK_II_DIR)", d3dSupport, additionalLibraryDirs, d3dSupport))
            defines (getExamplePluginDefines(projectName, "GTA2", projectType, laSupport, d3dSupport, additionalDefinitions, "2", "2", "2", "Claude", "Anywhere City"))
        filter { "Release", "platforms:GTA2" }
            links (getExamplePluginLibraries("plugin_ii", projectType, "II.CLEO", d3dSupport, d3dSupport, additionalLibraries, false))
            targetname (projectName .. ".II")
        filter { "zDebug", "platforms:GTA2" }
            links (getExamplePluginLibraries("plugin_ii", projectType, "II.CLEO", d3dSupport, d3dSupport, additionalLibraries, true))
            targetname (projectName .. ".II_d")
    end
	if gameIv == true then
        filter "platforms:GTAIV"
            includedirs (getExamplePluginIncludeFolders("plugin_iv", "game_iv", projectType, "$(CLEO_SDK_IV_DIR)", d3dSupport, additionalIncludeDirs, d3dSupport))
            libdirs (getExamplePluginLibraryFolders(projectType, "$(CLEO_SDK_IV_DIR)", d3dSupport, additionalLibraryDirs, d3dSupport))
            defines (getExamplePluginDefines(projectName, "GTAIV", projectType, laSupport, d3dSupport, additionalDefinitions, "4", "4", "4", "Niko", "Liberty City"))
        filter { "Release", "platforms:GTAIV" }
            links (getExamplePluginLibraries("plugin_iv", projectType, "IV.CLEO", d3dSupport, d3dSupport, additionalLibraries, false))
            targetname (projectName .. ".IV")
        filter { "zDebug", "platforms:GTAIV" }
            links (getExamplePluginLibraries("plugin_iv", projectType, "IV.CLEO", d3dSupport, d3dSupport, additionalLibraries, true))
            targetname (projectName .. ".IV_d")
    end
    filter {}

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
    print("\nERROR!\nCan't locate plugin-sdk directory\n")
else
    print("Deleting temporary files...")
    cleanProjectsDirectory(sdkdir .. "\\examples")
    cleanProjectsDirectory(sdkdir .. "\\plugin_sa")
    cleanProjectsDirectory(sdkdir .. "\\plugin_vc")
    cleanProjectsDirectory(sdkdir .. "\\plugin_iii")
	cleanProjectsDirectory(sdkdir .. "\\plugin_ii")
	cleanProjectsDirectory(sdkdir .. "\\plugin_iv")
	
	cleanProjectsDirectory(sdkdir .. "\\plugin_sa_unreal")
	cleanProjectsDirectory(sdkdir .. "\\plugin_vc_unreal")
	cleanProjectsDirectory(sdkdir .. "\\plugin_iii_unreal")

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
            configurations { "Release", "zDebug" }
        
        group ""
            pluginSdkStaticLibProject("plugin_sa", sdkdir, "plugin", true, "game_sa")
            pluginSdkStaticLibProject("plugin_vc", sdkdir, "plugin_vc", true, "game_vc")
            pluginSdkStaticLibProject("plugin_iii", sdkdir, "plugin_iii", true, "game_III")
			pluginSdkStaticLibProject("plugin_ii", sdkdir, "plugin_ii", true, "game_II")
			pluginSdkStaticLibProject("plugin_iv", sdkdir, "plugin_iv", true, "game_IV")
			
			pluginSdkStaticLibProject("plugin_sa_unreal", sdkdir, "plugin_unreal", true, "game_sa_unreal")
			pluginSdkStaticLibProject("plugin_vc_unreal", sdkdir, "plugin_vc_unreal", true, "game_vc_unreal")
			pluginSdkStaticLibProject("plugin_iii_unreal", sdkdir, "plugin_iii_unreal", true, "game_iii_unreal")

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
                        pluginSdkExampleProject(params[1], params[2], params[3] == "GTASA", params[4] == "GTAVC", params[5] == "GTA3", params[6] == "D3D", params[7] == "LA", params[8], params[9], params[10], params[11])
                    end
                else
                    firstLine = false
                end
            end
        end
    end
end
