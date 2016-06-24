#pragma once

#include "plbase/PluginBase_SA.h"

class PLUGIN_API CGame
{
public:
	// Current number of area
	static __int32& currArea;

	static void TidyUpMemory(bool arg1, bool arg2);
};