/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCopPed.h"

CCopPed::CCopPed(eCopType copType) : CPed(plugin::dummy) {
    ((void(__thiscall *)(CCopPed*, eCopType))0x5DDC60)(this, copType);
}

// Converted from thiscall void CCopPed::SetPartner(CCopPed *partner) 0x5DDE80
void CCopPed::SetPartner(CCopPed* partner)
{
	((void (__thiscall *)(CCopPed*, CCopPed*))0x5DDE80)(this, partner);
}

// Converted from thiscall void CCopPed::AddCriminalToKill(CPed *criminal) 0x5DDEB0
void CCopPed::AddCriminalToKill(CPed* criminal)
{
	((void (__thiscall *)(CCopPed*, CPed*))0x5DDEB0)(this, criminal);
}

// Converted from thiscall void CCopPed::RemoveCriminalToKill(CPed *,int criminalIdx) 0x5DE040
void CCopPed::RemoveCriminalToKill(CPed* arg0, int criminalIdx)
{
	((void (__thiscall *)(CCopPed*, CPed*, int))0x5DE040)(this, arg0, criminalIdx);
}

// Converted from thiscall void CCopPed::ClearCriminalsToKill(void) 0x5DE070
void CCopPed::ClearCriminalsToKill()
{
	((void (__thiscall *)(CCopPed*))0x5DE070)(this);
}