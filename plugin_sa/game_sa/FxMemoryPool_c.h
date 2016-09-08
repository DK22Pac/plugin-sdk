/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include <game_sa\RenderWare.h>
#include <game_sa\CVector.h>

class PLUGIN_API FxMemoryPool_c
{
public:
	char *data;
	unsigned int size;
	unsigned int position;

	void Optimise();
};

VALIDATE_SIZE(FxMemoryPool_c, 0xC);