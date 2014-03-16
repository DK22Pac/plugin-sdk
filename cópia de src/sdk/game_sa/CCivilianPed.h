#pragma once

#include "plugin/plugin.h"
#include "CPed.h"

class PLUGIN_API CCivilianPed : public CPed
{
	CCivilianPed();
	~CCivilianPed();
};

VALIDATE_SIZE(CCivilianPed, 0x79C);