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

function pluginSdkToolBuildConfig(buildAction, buildType, outName, outDir, objDir, includeDirs, libraryDirs, libraries, definitions, options)
    if includeDirs ~= "" then
	    includeDirs = ("," .. includeDirs)
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
    return ("\"$(PLUGIN_SDK_DIR)\\tools\\pluginsdk-build\\pluginsdk-build.exe\" " .. buildAction .. " buildtype:(" .. buildType .. ") projectdir:\"($(ProjectDir))\" projectname:\"($(ProjectName))\" targetname:\"(" .. outName .. ")\" outdir:\"(" .. outDir .. ")\" intdir:\"(" .. objDir .. ")\" includeDirs:\"($(ProjectDir)..\\" .. includeDirs .. ")\"" .. libraryDirs .. libraries .. definitions .. " additional:\"(-std=c++14 -m32" .. options .. "\")")
end

function pluginSdkToolCleanConfig(outName, outDir, objDir)
    return ("\"$(PLUGIN_SDK_DIR)\\tools\\pluginsdk-build\\pluginsdk-build.exe\" clean projectdir:\"($(ProjectDir))\" projectname:\"($(ProjectName))\" targetname:\"(" .. outName .. ")\" outdir:\"(" .. outDir .. ")\" intdir:\"(" .. objDir .. ")")
end

function pluginSdkStaticLibProject(projectName, projectPath, outName, isPluginProject, gameName)
    project (projectName)
	language "C++"
    characterset ("MBCS")
	flags "StaticRuntime"
	defines { "_USING_V110_SDK71_", "_CRT_SECURE_NO_WARNINGS", "_CRT_NON_CONFORMING_SWPRINTFS" }
	buildoptions { "/Zc:threadSafeInit-" }
	filter "configurations:Release"
	    targetname (outName)
        optimize "On"
		flags "LinkTimeOptimization"
		symbols "Off"
	filter "configurations:Debug"
		targetname (outName .. "_d")
		symbols "On"
	filter {}
	
    if _ACTION == "vs2015" or _ACTION == "vs2017" then
        kind "StaticLib"
		targetdir "$(PLUGIN_SDK_DIR)/output/lib"
	    objdir "$(PLUGIN_SDK_DIR)/output/obj"
	    targetextension ".lib"
        if _ACTION == "vs2015" then
            toolset "v140_xp"
        elseif _ACTION == "vs2017" then
            toolset "v141_xp"
        end
    else
        kind "Makefile"
		targetdir "$(PLUGIN_SDK_DIR)/output/mingw/lib"
	    objdir "$(PLUGIN_SDK_DIR)/output/mingw/obj"
	    targetextension ".a"
		filter "configurations:Release"
            buildcommands (pluginSdkToolBuildConfig("build", "LIB", "lib" .. outName .. ".a", "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib\\", "$(PLUGIN_SDK_DIR)\\output\\mingw\\obj\\$(Configuration)\\$(ProjectName)\\", "", "", "", "", ""))
            rebuildcommands (pluginSdkToolBuildConfig("rebuild", "LIB", "lib" .. outName .. ".a", "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib\\", "$(PLUGIN_SDK_DIR)\\output\\mingw\\obj\\$(Configuration)\\$(ProjectName)\\", "", "", "", "", ""))
            cleancommands (pluginSdkToolCleanConfig("lib" .. outName .. ".a", "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib\\", "$(PLUGIN_SDK_DIR)\\output\\mingw\\obj\\$(Configuration)\\$(ProjectName)\\"))
		filter "configurations:Debug"
		    buildcommands (pluginSdkToolBuildConfig("build", "LIB", "lib" .. outName .. "_d.a", "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib\\", "$(PLUGIN_SDK_DIR)\\output\\mingw\\obj\\$(Configuration)\\$(ProjectName)\\", "", "", "", "", ""))
            rebuildcommands (pluginSdkToolBuildConfig("rebuild", "LIB", "lib" .. outName .. "_d.a", "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib\\", "$(PLUGIN_SDK_DIR)\\output\\mingw\\obj\\$(Configuration)\\$(ProjectName)\\", "", "", "", "", ""))
            cleancommands (pluginSdkToolCleanConfig("lib" .. outName .. "_d.a", "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib\\", "$(PLUGIN_SDK_DIR)\\output\\mingw\\obj\\$(Configuration)\\$(ProjectName)\\"))
		filter {}
    end
	
    if isPluginProject then
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

function getExamplePluginDefines(gameId, laSupport, additionalDefines)
    local counter = 5
	local aryDefines = { "_USING_V110_SDK71_", "_CRT_SECURE_NO_WARNINGS", "_CRT_NON_CONFORMING_SWPRINTFS", gameId }
	if flaSupport == true then
	    aryDirs[5] = "_LA_SUPPORT"
		counter = counter + 1
	end
	if additionalDefines ~= "" then
	    aryDefines = splitStringAndPasteToArray(additionalDefines, ",", aryDefines, counter)
	end
	return aryDefines
end

function getExamplePluginIncludeFolders(multiProject, pluginDir, gameDir, usesCleo, cleoDir, additionalDirs)
    local counter = 2
	local aryDirs = {}
	aryDirs[1] = ("$(PLUGIN_SDK_DIR)\\" .. pluginDir)
	if multiProject then
	    aryDirs[2] = ("$(PLUGIN_SDK_DIR)\\" .. pluginDir .. "\\" .. gameDir)
	    counter = counter + 1
	end
	if usesCleo then
	    aryDirs[counter] = cleoDir
		counter = counter + 1
	end
	if additionalDirs ~= "" then
	    aryDirs = splitStringAndPasteToArray(additionalDirs, ",", aryDirs, counter)
	end
	return aryDirs
end

function getExamplePluginLibraryFolders(usesCleo, cleoDir, additionalDirs, isMingw)
    local counter = 2
	local aryDirs = {}
	if isMingw == true then
	    aryDirs[1] = "$(PLUGIN_SDK_DIR)\\output\\mingw\\lib"
	else
	    aryDirs[1] = "$(PLUGIN_SDK_DIR)\\output\\lib"
	end
	if usesCleo then
	    aryDirs[2] = cleoDir
		counter = counter + 1
	end
	if additionalDirs ~= "" then
	    aryDirs = splitStringAndPasteToArray(additionalDirs, ",", aryDirs, counter)
	end
	return aryDirs
end

function getExamplePluginLibraries(pluginLibName, usesCleo, usesD3d9, usesD3d8, additionalLibs, isMingw, isDebug)
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
	    aryLibs[3] = "cleo"
		counter = counter + 1
	end
	if usesD3d9 == true then
	    aryLibs[counter] = "d3d9"
		aryLibs[counter + 1] = "d3dx9"
		counter = counter + 2
	elseif usesD3d8 == true then
	    aryLibs[counter] = "legacy_stdio_definitions"
	    aryLibs[counter + 1] = "d3d8"
		aryLibs[counter + 2] = "d3dx8"
		counter = counter + 3
	end
	if additionalLibs ~= "" then
	    aryLibs = splitStringAndPasteToArray(additionalLibs, ",", aryLibs, counter)
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

function pluginSdkExampleProject(projectName, gameSa, gameVc, game3, d3dSupport, usesD3d8to9, cleoPlugin, laSupport, additionalIncludeDirs, additionalLibraryDirs, additionalLibraries, additionalDefinitions)
    workspace (projectName)
	location ("examples/" .. projectName)
    configurations { "Release", "Debug" }
	local supportedGames = {}
	local gameCounter = 1
	if gameSa == true then
	    supportedGames[1] = "GTASA"
		gameCounter = 2
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
	local strObjDir = ("$(PLUGIN_SDK_DIR)\\output\\examples\\" .. projectName .. "\\")
	objdir (strObjDir)
	local ext = ".asi"
	if cleoPlugin == true then
	    ext = ".cleo"
	end
	targetextension (ext)
	filter "Release"
	    targetname (projectName)
        optimize "On"
		flags "LinkTimeOptimization"
		linkoptions "/LTCG"
		symbols "Off"
	filter "Debug"
		targetname (projectName .. "_d")
		symbols "On"
	filter {}
	
    if _ACTION == "vs2015" or _ACTION == "vs2017" then
        kind "SharedLib"
		
        if _ACTION == "vs2015" then
            toolset "v140_xp"
        elseif _ACTION == "vs2017" then
            toolset "v141_xp"
        end
		
		if gameSa == true then
	        filter "platforms:GTASA"
                includedirs (getExamplePluginIncludeFolders(gameCounter > 2, "plugin_sa", "game_sa", cleoPlugin, "$(CLEO_SDK_SA_DIR)", additionalIncludeDirs))
	    		libdirs (getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_SA_DIR)", additionalLibraryDirs, false))
	    		defines (getExamplePluginDefines("GTASA", laSupport, additionalDefinitions))
	    		if d3dSupport == true then
	    		    sysincludedirs { "$(IncludePath)", "$(DIRECTX9_SDK_DIR)\\Include" }
	    			syslibdirs { "$(LibraryPath)", "$(DIRECTX9_SDK_DIR)\\Lib\\x86" }
	    		end
	    	filter { "Release", "platforms:GTASA" }
	    		links (getExamplePluginLibraries("plugin", cleoPlugin, d3dSupport, false, additionalLibraries, false, false))
	    	filter { "Debug", "platforms:GTASA" }
	    		links (getExamplePluginLibraries("plugin", cleoPlugin, d3dSupport, false, additionalLibraries, false, true))
	    end
	    if gameVc == true then
	        filter "platforms:GTAVC"
                includedirs (getExamplePluginIncludeFolders(gameCounter > 2, "plugin_vc", "game_vc", cleoPlugin, "$(CLEO_SDK_VC_DIR)", additionalIncludeDirs))
	    		libdirs (getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_VC_DIR)", additionalLibraryDirs, false))
	    		defines (getExamplePluginDefines("GTAVC", laSupport, additionalDefinitions))
	    		if usesD3d8to9 == true then
	    		    sysincludedirs { "$(IncludePath)", "$(DIRECTX9_SDK_DIR)\\Include" }
	    			syslibdirs { "$(LibraryPath)", "$(DIRECTX9_SDK_DIR)\\Lib\\x86" }
	    		elseif d3dSupport == true then
	    		    sysincludedirs { "$(IncludePath)", "$(DIRECTX8_SDK_DIR)\\include" }
	    			syslibdirs { "$(LibraryPath)", "$(DIRECTX8_SDK_DIR)\\lib" }
	    			linkoptions "/SAFESEH:NO"
	    		end
	    	filter { "Release", "platforms:GTAVC" }
	    		links (getExamplePluginLibraries("plugin_vc", cleoPlugin, usesD3d8to9, d3dSupport, additionalLibraries, false, false))
	    	filter { "Debug", "platforms:GTAVC" }
	    		links (getExamplePluginLibraries("plugin_vc", cleoPlugin, usesD3d8to9, d3dSupport, additionalLibraries, false, true))
	    end
	    if game3 == true then
	        filter "platforms:GTA3"
                includedirs (getExamplePluginIncludeFolders(gameCounter > 2, "plugin_vc", "game_vc", cleoPlugin, "$(CLEO_SDK_III_DIR)", additionalIncludeDirs))
	    		libdirs (getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_III_DIR)", additionalLibraryDirs, false))
	    		defines (getExamplePluginDefines("GTA3", laSupport, additionalDefinitions))
	    		if usesD3d8to9 == true then
	    		    sysincludedirs { "$(IncludePath)", "$(DIRECTX9_SDK_DIR)\\Include" }
	    			syslibdirs { "$(LibraryPath)", "$(DIRECTX9_SDK_DIR)\\Lib\\x86" }
	    		elseif d3dSupport == true then
	    		    sysincludedirs { "$(IncludePath)", "$(DIRECTX8_SDK_DIR)\\include" }
	    			syslibdirs { "$(LibraryPath)", "$(DIRECTX8_SDK_DIR)\\lib" }
	    			linkoptions "/SAFESEH:NO"
	    		end
	    	filter { "Release", "platforms:GTA3" }
	    		links (getExamplePluginLibraries("plugin_iii", cleoPlugin, usesD3d8to9, d3dSupport, additionalLibraries, false, false))
	    	filter { "Debug", "platforms:GTA3" }
	    		links (getExamplePluginLibraries("plugin_iii", cleoPlugin, usesD3d8to9, d3dSupport, additionalLibraries, false, true))
	    end
	    filter {}
    else
        kind "Makefile"
		local strIincludeDirs = ""
		local strLibraryDirs = ""
		local strDefines = ""
		local strLibs = ""
		
		if gameSa == true then
	        filter "platforms:GTASA"
				if d3dSupport == true then
	    		    strIincludeDirs = "$(DIRECTX9_SDK_DIR)\\Include";
	    			strLibraryDirs = "$(DIRECTX9_SDK_DIR)\\Lib\\x86";
	    		end
				local incDirAry = getExamplePluginIncludeFolders(gameCounter > 2, "plugin_sa", "game_sa", cleoPlugin, "$(CLEO_SDK_SA_DIR)", additionalIncludeDirs)
				strIincludeDirs = (strIincludeDirs .. "," .. table.concat(incDirAry, ","))
	    		local libDirAry = getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_SA_DIR)", additionalLibraryDirs, true)
				strLibraryDirs = (strLibraryDirs .. "," .. table.concat(libDirAry, ","))
	    		local definesAry = getExamplePluginDefines("GTASA", laSupport, additionalDefinitions)
				strDefines = table.concat(definesAry, ",")
	    		local libsAry = {}
	    	filter { "Release", "platforms:GTASA" }
	    		libsAry = getExamplePluginLibraries("plugin", cleoPlugin, d3dSupport, false, additionalLibraries, true, false)
	    	filter { "Debug", "platforms:GTASA" }
	    		libsAry = getExamplePluginLibraries("plugin", cleoPlugin, d3dSupport, false, additionalLibraries, true, true)
			filter "platforms:GTASA"	
			    strLibs = table.concat(libsAry, ",")
	    end
	    if gameVc == true then
		    filter "platforms:GTAVC"
				if usesD3d8to9 == true then
	    		    strIincludeDirs = "$(DIRECTX9_SDK_DIR)\\Include";
	    			strLibraryDirs = "$(DIRECTX9_SDK_DIR)\\Lib\\x86";
	    		elseif d3dSupport == true then
	    		    strIincludeDirs = "$(DIRECTX8_SDK_DIR)\\include"
	    			strLibraryDirs = "$(DIRECTX8_SDK_DIR)\\lib"
	    		end
				local incDirAry = getExamplePluginIncludeFolders(gameCounter > 2, "plugin_vc", "game_vc", cleoPlugin, "$(CLEO_SDK_VC_DIR)", additionalIncludeDirs)
				strIincludeDirs = (strIincludeDirs .. "," .. table.concat(incDirAry, ","))
	    		local libDirAry = getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_VC_DIR)", additionalLibraryDirs, true)
				strLibraryDirs = (strLibraryDirs .. "," .. table.concat(libDirAry, ","))
	    		local definesAry = getExamplePluginDefines("GTAVC", laSupport, additionalDefinitions)
				strDefines = table.concat(definesAry, ",")
	    		local libsAry = {}
	    	filter { "Release", "platforms:GTAVC" }
	    		libsAry = getExamplePluginLibraries("plugin_vc", cleoPlugin, usesD3d8to9, d3dSupport, additionalLibraries, true, false)
	    	filter { "Debug", "platforms:GTAVC" }
	    		libsAry = getExamplePluginLibraries("plugin_vc", cleoPlugin, usesD3d8to9, d3dSupport, additionalLibraries, true, true)
			filter "platforms:GTASA"	
			    strLibs = table.concat(libsAry, ",")
	    end
	    if game3 == true then
		    filter "platforms:GTA3"
				if usesD3d8to9 == true then
	    		    strIincludeDirs = "$(DIRECTX9_SDK_DIR)\\Include";
	    			strLibraryDirs = "$(DIRECTX9_SDK_DIR)\\Lib\\x86";
	    		elseif d3dSupport == true then
	    		    strIincludeDirs = "$(DIRECTX8_SDK_DIR)\\include"
	    			strLibraryDirs = "$(DIRECTX8_SDK_DIR)\\lib"
	    		end
				local incDirAry = getExamplePluginIncludeFolders(gameCounter > 2, "plugin_iii", "game_iii", cleoPlugin, "$(CLEO_SDK_III_DIR)", additionalIncludeDirs)
				strIincludeDirs = (strIincludeDirs .. "," .. table.concat(incDirAry, ","))
	    		local libDirAry = getExamplePluginLibraryFolders(cleoPlugin, "$(CLEO_SDK_III_DIR)", additionalLibraryDirs, true)
				strLibraryDirs = (strLibraryDirs .. "," .. table.concat(libDirAry, ","))
	    		local definesAry = getExamplePluginDefines("GTA3", laSupport, additionalDefinitions)
				strDefines = table.concat(definesAry, ",")
	    		local libsAry = {}
	    	filter { "Release", "platforms:GTA3" }
	    		libsAry = getExamplePluginLibraries("plugin_iii", cleoPlugin, usesD3d8to9, d3dSupport, additionalLibraries, true, false)
	    	filter { "Debug", "platforms:GTA3" }
	    		libsAry = getExamplePluginLibraries("plugin_iii", cleoPlugin, usesD3d8to9, d3dSupport, additionalLibraries, true, true)
			filter "platforms:GTASA"	
			    strLibs = table.concat(libsAry, ",")
	    end
	    filter {}
		
		filter "Release"
            buildcommands (pluginSdkToolBuildConfig("build", "DLL", (projectName .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibs, strDefines, ""))
            rebuildcommands (pluginSdkToolBuildConfig("rebuild", "DLL", (projectName .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibs, strDefines, ""))
            cleancommands (pluginSdkToolCleanConfig((projectName .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\")))
		filter "Debug"
		    buildcommands (pluginSdkToolBuildConfig("build", "DLL", (projectName .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibs, strDefines, ""))
            rebuildcommands (pluginSdkToolBuildConfig("rebuild", "DLL", (projectName .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\"), strIincludeDirs, strLibraryDirs, strLibs, strDefines, ""))
            cleancommands (pluginSdkToolCleanConfig((projectName .. ext), strTargetDir, (strObjDir .. "$(ProjectName)\\$(Configuration)\\")))
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

workspace "plugin"
    configurations { "Release", "Debug" }

group "shared"
    pluginSdkStaticLibProject("paths", "shared/paths", "paths", false, "")
    project "shared_files"
    location "shared"
    kind "None"
    files "shared/**.h"
    removefiles "shared/paths/**.h"
group ""
    pluginSdkStaticLibProject("plugin_sa", "plugin_sa", "plugin", true, "game_sa")
    pluginSdkStaticLibProject("plugin_vc", "plugin_vc", "plugin_vc", true, "game_vc")
    pluginSdkStaticLibProject("plugin_iii", "plugin_III", "plugin_iii", true, "game_III")

local f = io.open("examples/examples.csv", "rb")
if f then
    f:close()
	local firstLine = true
    for line in io.lines("examples/examples.csv") do 
        if firstLine ~= true then
		    if line ~= "" then
                local params = splitString(line, ";")
			    local i = 1
                for str in (line .. ";"):gmatch("([^;]*);") do
                    params[i] = str
                    i = i + 1
                end
				print("Deleting temporary .vs directory (project " .. params[1] .. ":")
                os.execute("rd /s /q \"examples/" .. params[1] .. "/.vs\"")
                print("Done with deleting temporary .vs directory")
				pluginSdkExampleProject(params[1], params[2] == "GTASA", params[3] == "GTAVC", params[4] == "GTA3", params[5] == "D3D", params[6] == "D3D8TO9", params[7] == "CLEO", params[8] == "LA", params[9], params[10], params[11], params[12])
            end
		else
		    firstLine = false
		end
    end
end