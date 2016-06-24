#pragma once

#include "plbase/PluginBase_SA.h"
#include "CPed.h"

class PLUGIN_API CEmergencyPed : public CPed
{
	CEmergencyPed(unsigned int pedType, unsigned int modelIndex);

	bool InRange(CPed *ped);
};

VALIDATE_SIZE(CEmergencyPed, 0x79C);