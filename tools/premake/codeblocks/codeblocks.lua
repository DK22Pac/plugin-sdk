--
-- Name:		codeblocks/codeblocks.lua
-- Purpose:		Generate a Code::Blocks workspace.
-- Author:		
-- Modified by:	
-- Created:		
-- Copyright:	(c) 2009-2018 Jason Perkins and the Premake project
--

	local p = premake

	p.modules.codeblocks = {}
	p.modules.codeblocks._VERSION = "1.0.0-dev"

	local codeblocks = p.modules.codeblocks
	codeblocks.workspace = {}

	local project = p.project
	codeblocks.project = {}

	function codeblocks.cfgname(cfg)
		local cfgname = cfg.buildcfg
		if codeblocks.workspace.multiplePlatforms then
			cfgname = string.format("%s | %s", cfg.platform, cfg.buildcfg)
		end
		return cfgname
	end

	function codeblocks.esc(value)
		local result = value:gsub('"', '&quot;')
		result = result:gsub('<', '&lt;')
		result = result:gsub('>', '&gt;')
		return result
	end

	function codeblocks.generateWorkspace(wks)
		p.eol("\r\n")
		p.indent("\t")
		p.escaper(codeblocks.esc)

		p.generate(wks, ".workspace", codeblocks.workspace.generate)
	end

	function codeblocks.generateProject(prj)
		p.eol("\r\n")
		p.indent("\t")
		p.escaper(codeblocks.esc)
		if project.isc(prj) or project.iscpp(prj) then
			p.generate(prj, ".cbp", codeblocks.project.generate)
		end
	end

	function codeblocks.cleanWorkspace(wks)
		p.clean.file(wks, wks.name .. ".workspace")
		p.clean.file(wks, wks.name .. ".workspace.layout")
	end

	function codeblocks.cleanProject(prj)
		p.clean.file(prj, prj.name .. ".workspace")
		p.clean.file(prj, prj.name .. ".depend")
		p.clean.file(prj, prj.name .. ".layout")
	end

	function codeblocks.cleanTarget(tgt)
		-- TODO
	end

	include("codeblocks_workspace.lua")
	include("codeblocks_cbp.lua")

	-- Way to go if not embedded ?
	include("_preload.lua")

	print("Code::Blocks module loaded.")
	return codeblocks
