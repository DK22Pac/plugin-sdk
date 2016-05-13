#pragma once

#include "plbase/PluginBase.h"
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