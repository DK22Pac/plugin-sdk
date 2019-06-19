/*
    Plugin-SDK (Grand Theft Auto 3) source file
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

void CPed::GiveWeapon(eWeaponType weaponType, unsigned int ammo)
{
    ((void(__thiscall *)(CPed*, eWeaponType, unsigned int))0x4CF9B0)(this, weaponType, ammo);
}

void CPed::SetCurrentWeapon(int slot) {
    plugin::CallMethod<0x4CFA60, CPed *, int>(this, slot);
}

void CPed::SetObjective(eObjective objective) {
    plugin::CallMethod<0x4D82C0, CPed *, eObjective>(this, objective);
}

void CPed::SetObjective(eObjective objective, CVector const& arg1) {
    plugin::CallMethod<0x4D8A90, CPed *, eObjective, CVector>(this, objective, arg1);
}

void CPed::SetObjective(eObjective objective, CVector arg1, float arg2) {
    plugin::CallMethod<0x4D8770, CPed *, eObjective, CVector, float>(this, objective, arg1, arg2);
}

void CPed::SetObjective(eObjective objective, short arg1, short arg2) {
    plugin::CallMethod<0x4D89A0, CPed *, eObjective, short, short>(this, objective, arg1, arg2);
}

void CPed::SetObjective(eObjective objective, void* arg1) {
    plugin::CallMethod<0x4D83E0, CPed *, eObjective, void*>(this, objective, arg1);
}

void CPed::SetObjectiveTimer(unsigned int time) {
    plugin::CallMethod<0x4D81E0, CPed *, unsigned int>(this, time);
}

void CPed::WarpPedIntoCar(CVehicle* vehicle) {
    plugin::CallMethod<0x4D7D20, CPed *, CVehicle*>(this, vehicle);
}

void CPed::operator delete(void* data) {
    plugin::Call<0x4C5250, void*>(data);
}

void* CPed::operator new(unsigned int size) {
    return plugin::CallAndReturn<void*, 0x4C5220, unsigned int>(size);
}

void* CPed::operator new(unsigned int size, int arg1) {
    return plugin::CallAndReturn<void*, 0x4C5230, unsigned int, int>(size, arg1);
}

// Converted from thiscall void CPed::RemoveWeaponModel(int modelIndex) 0x4CF980
void CPed::RemoveWeaponModel(int modelIndex) {
    plugin::CallMethod<0x4CF980, CPed *, int>(this, modelIndex);
}

// Converted from thiscall void CPed::StopNonPartialAnims(void) 0x4C5D50 
void CPed::StopNonPartialAnims() {
    plugin::CallMethod<0x4C5D50, CPed *>(this);
}
