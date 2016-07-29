#pragma once
#include "plbase/PluginBase_SA.h"
#include "CRunningScript.h"

#define VAR_CTheScripts__ScriptSpace 0xA49960

union tScriptParam
{
	int iParam;
	float fParam;
};

class PLUGIN_API CTheScripts
{
public:
	// Script space, where main.scm MAIN section is loaded.
	// Size: 200000 bytes
	static char* ScriptSpace;

	static tScriptParam *ScriptParams;
    
    static CRunningScript *&pIdleScripts;
    static CRunningScript *&pActiveScripts;
};