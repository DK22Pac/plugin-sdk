#pragma once
#include <plugin/plugin.h>
#include "CRunningScript.h"

#define VAR_CTheScripts__ScriptSpace 0xA49960

class PLUGIN_API CTheScripts
{
public:
	// Script space, where main.scm MAIN section is loaded.
	// Size: 200000 bytes
	static char* ScriptSpace;
};