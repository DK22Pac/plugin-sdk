/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "CVector.h"

class PLUGIN_API FxMemoryPool_c
{
public:
	char *data;
	unsigned int size;
	unsigned int position;

	void Optimise();
};
VALIDATE_OFFSET(FxMemoryPool_c, data, 0x0);
VALIDATE_OFFSET(FxMemoryPool_c, size, 0x4);
VALIDATE_OFFSET(FxMemoryPool_c, position, 0x8);
VALIDATE_SIZE(FxMemoryPool_c, 0xC);