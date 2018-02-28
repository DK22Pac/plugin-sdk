/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CCivilianPed.h"

// Converted from thiscall void CCivilianPed::CCivilianPed(ePedType pedType,uint modelIndex) 0x4BFF30
CCivilianPed::CCivilianPed(ePedType pedType, unsigned int modelIndex) : CPed(plugin::dummy) {
    plugin::CallMethod<0x4BFF30, CCivilianPed *, ePedType, unsigned int>(this, pedType, modelIndex);
}

// Converted from thiscall void CCivilianPed::CivilianAI(void) 0x4C07A0 
void CCivilianPed::CivilianAI() {
    plugin::CallMethod<0x4C07A0, CCivilianPed *>(this);
}
