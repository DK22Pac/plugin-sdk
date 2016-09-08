/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"

class PLUGIN_API CGame
{
public:
	// Current number of area
	static __int32& currArea;

	static void TidyUpMemory(bool arg1, bool arg2);
};