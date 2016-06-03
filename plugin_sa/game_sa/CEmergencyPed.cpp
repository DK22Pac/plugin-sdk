#include "CEmergencyPed.h"

CEmergencyPed::CEmergencyPed(unsigned int pedType, unsigned int modelIndex) : CPed(plugin::dummy) {
    ((void(__thiscall *)(CEmergencyPed *, unsigned int, unsigned int))0x5DE340)(this, pedType, modelIndex);
}

bool CEmergencyPed::InRange(CPed *ped)
{
	return ((bool (__thiscall *)(CPed *, CPed *))0x5DE470)(this, ped);
}