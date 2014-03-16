#include "CEmergencyPed.h"

bool CEmergencyPed::InRange(CPed *ped)
{
	return ((bool (__thiscall *)(CPed *, CPed *))0x5DE470)(this, ped);
}