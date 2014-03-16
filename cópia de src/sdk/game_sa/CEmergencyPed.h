#pragma once

#include "plugin/plugin.h"
#include "CPed.h"

class PLUGIN_API CEmergencyPed : public CPed
{
	CEmergencyPed();
	~CEmergencyPed();

	bool InRange(CPed *ped);
};

VALIDATE_SIZE(CEmergencyPed, 0x79C);