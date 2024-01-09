--
-- Name:		codeblocks/_preload.lua
-- Purpose:		Define Code::Blocks action.
-- Author:		
-- Modified by:	Christophe Marc BERTONCINI
-- Created:		
-- Copyright:	(c) 2002-2018 Jason Perkins and the Premake project
--

	local p = premake

	newaction
	{
		trigger         = "codeblocks",
		shortname       = "Code::Blocks",
		description     = "Generate Code::Blocks project files",
		toolset         = "gcc",

		valid_kinds     = { "ConsoleApp", "WindowedApp", "StaticLib", "SharedLib" },
		valid_languages = { "C", "C++" },
		valid_tools     =
		{
			cc	= { "clang", "gcc", "msc" },
		},

		onWorkspace = function(wks)
			p.modules.codeblocks.generateWorkspace(wks)
		end,

		onProject = function(prj)
			p.modules.codeblocks.generateProject(prj)
		end,

		onCleanWorkspace = function(wks)
			p.modules.codeblocks.cleanWorkspace(wks)
		end,

		onCleanProject = function(prj)
			p.modules.codeblocks.cleanProject(prj)
		end,

		onCleanTarget = function(tgt)
			p.modules.codeblocks.cleanTarget(tgt)
		end
	}

	-- Decide when the full module should be loaded.
	return function(cfg)
		return (_ACTION == "codeblocks")
	end
