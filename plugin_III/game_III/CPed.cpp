/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPed.h"

CVector *vecPedCarDoorAnimOffset = (CVector *)0x62E030;
CVector *vecPedCarDoorLoAnimOffset = (CVector *)0x62E03C;
CVector *vecPedVanRearDoorAnimOffset = (CVector *)0x62E048;
CVector *vecPedTrainDoorAnimOffset = (CVector *)0x62E054;
CVector *vecPedDraggedOutCarAnimOffset = (CVector *)0x62E060;
CVector *vecPedQuickDraggedOutCarAnimOffset = (CVector *)0x62E06C;

// Converted from thiscall void CPed::CPed(uint modelIndex) 0x4C41C0
CPed::CPed(unsigned int modelIndex) : CPhysical(plugin::dummy), m_aWeapons{ plugin::dummy, plugin::dummy,
plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy,
plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy, plugin::dummy } {
    plugin::CallMethod<0x4C41C0, CPed *, unsigned int>(this, modelIndex);
}

void CPed::SetAimFlag(CEntity* aimingTo) {
    plugin::CallMethod<0x4C69E0, CPed *, CEntity*>(this, aimingTo);
}

void CPed::SetAimFlag(float heading) {
    plugin::CallMethod<0x4C6960, CPed *, float>(this, heading);
}

void CPed::SetAttack(CEntity* entity) {
    plugin::CallMethod<0x4E6220, CPed *, CEntity*>(this, entity);
}

void CPed::SetAttackTimer(unsigned int time) {
    plugin::CallMethod<0x4D1300, CPed *, unsigned int>(this, time);
}

void CPed::SetPointGunAt(CEntity* entity) {
    plugin::CallMethod<0x4E5F70, CPed *, CEntity*>(this, entity);
}

void CPed::ClearAimFlag() {
    plugin::CallMethod<0x4C6A50, CPed *>(this);
}

void CPed::RestorePreviousState() {
    plugin::CallMethod<0x4C5E30, CPed *>(this);
}

void CPed::ClearPointGunAt() {
    plugin::CallMethod<0x4E6180, CPed *>(this);
}

char CPed::ClearLookFlag() {
    return plugin::CallMethodAndReturn<char, 0x4C64F0, CPed *>(this);
}