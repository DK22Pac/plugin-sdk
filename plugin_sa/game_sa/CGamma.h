#pragma once

#include "plbase/PluginBase.h"

class PLUGIN_API CGamma
{
public:
	unsigned int field_0;
	float field_4;
	float field_8;
	float field_C;

	void SetGamma(float arg1, char arg2);
};

VALIDATE_SIZE(CGamma, 0x10);

extern PLUGIN_API CGamma &gamma;