/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CEmergencyPed.h"

// Converted from thiscall void CEmergencyPed::CEmergencyPed(uint modelIndex) 0x4C2E40
CEmergencyPed::CEmergencyPed(unsigned int modelIndex) : CPed(plugin::dummy) {
    plugin::CallMethod<0x4C2E40, CEmergencyPed *, unsigned int>(this, modelIndex);
}

// Converted from thiscall void CEmergencyPed::FiremanAI(void) 0x4C3CE0 
void CEmergencyPed::FiremanAI() {
    plugin::CallMethod<0x4C3CE0, CEmergencyPed *>(this);
}

// Converted from thiscall bool CEmergencyPed::InRange(CPed *ped) 0x4C3EC0 
bool CEmergencyPed::InRange(CPed* ped) {
    return plugin::CallMethodAndReturn<bool, 0x4C3EC0, CEmergencyPed *, CPed*>(this, ped);
}

// Converted from thiscall void CEmergencyPed::MedicAI(void) 0x4C30A0 
void CEmergencyPed::MedicAI() {
    plugin::CallMethod<0x4C30A0, CEmergencyPed *>(this);
}
