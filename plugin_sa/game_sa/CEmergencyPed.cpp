/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEmergencyPed.h"

CEmergencyPed::CEmergencyPed(unsigned int pedType, unsigned int modelIndex) : CPed(plugin::dummy) {
    ((void(__thiscall *)(CEmergencyPed *, unsigned int, unsigned int))0x5DE340)(this, pedType, modelIndex);
}

bool CEmergencyPed::InRange(CPed *ped)
{
	return ((bool (__thiscall *)(CPed *, CPed *))0x5DE470)(this, ped);
}

void CEmergencyPed::ProcessControl()
{
	((void(__thiscall *)(CEmergencyPed *))0x5DE400)(this);
	
}