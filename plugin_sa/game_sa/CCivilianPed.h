#pragma once

#include "plbase/PluginBase.h"
#include "CPed.h"

class PLUGIN_API CCivilianPed : public CPed
{
	CCivilianPed(ePedType type, int model);
	~CCivilianPed();
};

VALIDATE_SIZE(CCivilianPed, 0x79C);