/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CEmergencyPed.h"

// Converted from thiscall void CEmergencyPed::CEmergencyPed(uint) 0x4EEB40 
CEmergencyPed::CEmergencyPed(unsigned int emergencyType) : CPed(plugin::dummy) {
    plugin::CallMethod<0x4EEB40, CEmergencyPed *, unsigned int>(this, emergencyType);
}

// Converted from thiscall void CEmergencyPed::FiremanAI(void) 0x4EDA80 
void CEmergencyPed::FiremanAI() {
    plugin::CallMethod<0x4EDA80, CEmergencyPed *>(this);
}

// Converted from thiscall void CEmergencyPed::MedicAI(void) 0x4EDC90 
void CEmergencyPed::MedicAI() {
    plugin::CallMethod<0x4EDC90, CEmergencyPed *>(this);
}