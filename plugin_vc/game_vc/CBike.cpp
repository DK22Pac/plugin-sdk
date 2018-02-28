/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CBike.h"

// Converted from thiscall void CBike::AddDamagedVehicleParticles(void) 0x60DD20
void CBike::AddDamagedVehicleParticles() {
    plugin::CallMethod<0x60DD20, CBike *>(this);
}

// Converted from thiscall bool CBike::AddWheelDirtAndWater(CColPoint &colPoint, uint) 0x60D7F0
bool CBike::AddWheelDirtAndWater(CColPoint& colPoint, unsigned int arg1) {
    return plugin::CallMethodAndReturn<bool, 0x60D7F0, CBike *, CColPoint&, unsigned int>(this, colPoint, arg1);
}

// Converted from thiscall void CBike::CBike(int modelIndex, uchar createdBy) 0x615740
CBike::CBike(int modelIndex, unsigned char createdBy) : CVehicle(plugin::dummy) {
    plugin::CallMethod<0x615740, CBike *, int, unsigned char>(this, modelIndex, createdBy);
}

// Converted from thiscall void CBike::CalculateLeanMatrix(void) 0x609C90
void CBike::CalculateLeanMatrix() {
    plugin::CallMethod<0x609C90, CBike *>(this);
}

// Converted from thiscall void CBike::DoDriveByShootings(void) 0x5C91E0
void CBike::DoDriveByShootings() {
    plugin::CallMethod<0x5C91E0, CBike *>(this);
}

// Converted from thiscall void CBike::Fix(void) 0x609F00
void CBike::Fix() {
    plugin::CallMethod<0x609F00, CBike *>(this);
}

// Converted from thiscall void CBike::GetCorrectedWorldDoorPosition(CVector &out, CVector, CVector) 0x609720
void CBike::GetCorrectedWorldDoorPosition(CVector& out, CVector arg1, CVector arg2) {
    plugin::CallMethod<0x609720, CBike *, CVector&, CVector, CVector>(this, out, arg1, arg2);
}

// Converted from thiscall CPed* CBike::KnockOffRider(eWeaponType, uchar, CPed *, bool) 0x613920
CPed* CBike::KnockOffRider(eWeaponType arg0, unsigned char arg1, CPed* arg2, bool arg3) {
    return plugin::CallMethodAndReturn<CPed*, 0x613920, CBike *, eWeaponType, unsigned char, CPed*, bool>(this, arg0, arg1, arg2, arg3);
}

// Converted from thiscall void CBike::PlayHornIfNecessary(void) 0x609E10
void CBike::PlayHornIfNecessary() {
    plugin::CallMethod<0x609E10, CBike *>(this);
}

// Converted from thiscall void CBike::ProcessBuoyancy(void) 0x613540
void CBike::ProcessBuoyancy() {
    plugin::CallMethod<0x613540, CBike *>(this);
}

// Converted from thiscall void CBike::ReduceHornCounter(void) 0x613910
void CBike::ReduceHornCounter() {
    plugin::CallMethod<0x613910, CBike *>(this);
}

// Converted from thiscall void CBike::SetupSuspensionLines(void) 0x615080
void CBike::SetupSuspensionLines() {
    plugin::CallMethod<0x615080, CBike *>(this);
}

// Converted from thiscall void CBike::VehicleDamage(void) 0x614860
void CBike::VehicleDamage() {
    plugin::CallMethod<0x614860, CBike *>(this);
}
