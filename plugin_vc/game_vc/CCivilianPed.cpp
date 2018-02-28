/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CCivilianPed.h"

// Converted from thiscall void CCivilianPed::CCivilianPed(ePedType pedType,uint modelIndex) 0x4EAE00
CCivilianPed::CCivilianPed(ePedType pedType, unsigned int modelIndex) : CPed(plugin::dummy) {
    plugin::CallMethod<0x4EAE00, CCivilianPed *, ePedType, unsigned int>(this, pedType, modelIndex);
}

// Converted from thiscall void CCivilianPed::CivilianAI(void) 0x4E8E20 
void CCivilianPed::CivilianAI() {
    plugin::CallMethod<0x4E8E20, CCivilianPed *>(this);
}

// Converted from thiscall void CCivilianPed::EnterVacantNearbyCars(void) 0x4E99C0 
void CCivilianPed::EnterVacantNearbyCars() {
    plugin::CallMethod<0x4E99C0, CCivilianPed *>(this);
}

// Converted from thiscall void CCivilianPed::UseNearbyAttractors(void) 0x4E9E90 
void CCivilianPed::UseNearbyAttractors() {
    plugin::CallMethod<0x4E9E90, CCivilianPed *>(this);
}