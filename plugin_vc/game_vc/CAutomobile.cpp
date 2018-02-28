/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CAutomobile.h"

bool &CAutomobile::m_sAllTaxiLights = *(bool *)0xA10ABB;
unsigned int &CAutomobile::nGenerateRaindrops = *(unsigned int *)0x77F754;
unsigned int &CAutomobile::nGenerateWaterCircles = *(unsigned int *)0x77F75C;
CMatrix *CAutomobile::matW2B = (CMatrix *)0x77F7D0;

// Converted from thiscall void CAutomobile::AddDamagedVehicleParticles(void) 0x5920A0
void CAutomobile::AddDamagedVehicleParticles() {
    plugin::CallMethod<0x5920A0, CAutomobile *>(this);
}

// Converted from thiscall bool CAutomobile::AddWheelDirtAndWater(CColPoint &colPoint, uint) 0x591B90
bool CAutomobile::AddWheelDirtAndWater(CColPoint& colPoint, unsigned int arg1) {
    return plugin::CallMethodAndReturn<bool, 0x591B90, CAutomobile *, CColPoint&, unsigned int>(this, colPoint, arg1);
}

// Converted from thiscall void CAutomobile::BlowUpCarsInPath(void) 0x5863D0
void CAutomobile::BlowUpCarsInPath() {
    plugin::CallMethod<0x5863D0, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::CAutomobile(int modelIndex, uchar) 0x59E620
CAutomobile::CAutomobile(int modelIndex, unsigned char createdBy) : CVehicle(plugin::dummy) {
    plugin::CallMethod<0x59E620, CAutomobile *, int, unsigned char>(this, modelIndex, createdBy);
}

// Converted from thiscall void CAutomobile::ClearHeliOrientation(void) 0x59B490
void CAutomobile::ClearHeliOrientation() {
    plugin::CallMethod<0x59B490, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::CloseBoot(void) 0x585D80
void CAutomobile::CloseBoot() {
    plugin::CallMethod<0x585D80, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::DoDriveByShootings(void) 0x5C97B0
void CAutomobile::DoDriveByShootings() {
    plugin::CallMethod<0x5C97B0, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::DoHoverSuspensionRatios(void) 0x585B60
void CAutomobile::DoHoverSuspensionRatios() {
    plugin::CallMethod<0x585B60, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::FireTruckControl(float) 0x57AB30
void CAutomobile::FireTruckControl(float arg0) {
    plugin::CallMethod<0x57AB30, CAutomobile *, float>(this, arg0);
}

// Converted from thiscall void CAutomobile::Fix(void) 0x588530
void CAutomobile::Fix() {
    plugin::CallMethod<0x588530, CAutomobile *>(this);
}

// Converted from thiscall bool CAutomobile::HasCarStoppedBecauseOfLight(void) 0x435570
bool CAutomobile::HasCarStoppedBecauseOfLight() {
    return plugin::CallMethodAndReturn<bool, 0x435570, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::HydraulicControl(void) 0x59D260
void CAutomobile::HydraulicControl() {
    plugin::CallMethod<0x59D260, CAutomobile *>(this);
}

// Converted from thiscall CPed* CAutomobile::KnockPedOutCar(eWeaponType weapon, ushort, CPed * ped) 0x585F20
CPed* CAutomobile::KnockPedOutCar(eWeaponType weapon, unsigned short arg1, CPed* ped) {
    return plugin::CallMethodAndReturn<CPed*, 0x585F20, CAutomobile *, eWeaponType, unsigned short, CPed*>(this, weapon, arg1, ped);
}

// Converted from thiscall void CAutomobile::PlaceOnRoadProperly(void) 0x586110
void CAutomobile::PlaceOnRoadProperly() {
    plugin::CallMethod<0x586110, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::PlayHornIfNecessary(void) 0x5881F0
void CAutomobile::PlayHornIfNecessary() {
    plugin::CallMethod<0x5881F0, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::PopBoot(void) 0x585E60
void CAutomobile::PopBoot() {
    plugin::CallMethod<0x585E60, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::PopBootUsingPhysics(void) 0x585E20
void CAutomobile::PopBootUsingPhysics() {
    plugin::CallMethod<0x585E20, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::ProcessAutoBusDoors(void) 0x586EC0
void CAutomobile::ProcessAutoBusDoors() {
    plugin::CallMethod<0x586EC0, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::ProcessBuoyancy(void) 0x599B30
void CAutomobile::ProcessBuoyancy() {
    plugin::CallMethod<0x599B30, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::ProcessSwingingDoor(int nodeIndex, eDoors door) 0x592C40
void CAutomobile::ProcessSwingingDoor(int nodeIndex, eDoors door) {
    plugin::CallMethod<0x592C40, CAutomobile *, int, eDoors>(this, nodeIndex, door);
}

// Converted from thiscall bool CAutomobile::RcbanditCheck1CarWheels(CPtrList &ptrlist) 0x5878E0
bool CAutomobile::RcbanditCheck1CarWheels(CPtrList& ptrlist) {
    return plugin::CallMethodAndReturn<bool, 0x5878E0, CAutomobile *, CPtrList&>(this, ptrlist);
}

// Converted from thiscall bool CAutomobile::RcbanditCheckHitWheels(void) 0x587B40
bool CAutomobile::RcbanditCheckHitWheels() {
    return plugin::CallMethodAndReturn<bool, 0x587B40, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::ReduceHornCounter(void) 0x59AA90
void CAutomobile::ReduceHornCounter() {
    plugin::CallMethod<0x59AA90, CAutomobile *>(this);
}

// Converted from thiscall CObject* CAutomobile::RemoveBonnetInPedCollision(void) 0x592BA0
CObject* CAutomobile::RemoveBonnetInPedCollision() {
    return plugin::CallMethodAndReturn<CObject*, 0x592BA0, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::ScanForCrimes(void) 0x588120
void CAutomobile::ScanForCrimes() {
    plugin::CallMethod<0x588120, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::SetBumperDamage(int, ePanels panel, bool withoutVisualEffect) 0x59B370
void CAutomobile::SetBumperDamage(int arg0, ePanels panel, bool withoutVisualEffect) {
    plugin::CallMethod<0x59B370, CAutomobile *, int, ePanels, bool>(this, arg0, panel, withoutVisualEffect);
}

// Converted from thiscall void CAutomobile::SetBusDoorTimer(uint time, uchar) 0x587080
void CAutomobile::SetBusDoorTimer(unsigned int time, unsigned char arg1) {
    plugin::CallMethod<0x587080, CAutomobile *, unsigned int, unsigned char>(this, time, arg1);
}

// Converted from thiscall void CAutomobile::SetDoorDamage(int nodeIndex, eDoors door, bool withoutVisualEffect) 0x59B150
void CAutomobile::SetDoorDamage(int nodeIndex, eDoors door, bool withoutVisualEffect) {
    plugin::CallMethod<0x59B150, CAutomobile *, int, eDoors, bool>(this, nodeIndex, door, withoutVisualEffect);
}

// Converted from thiscall void CAutomobile::SetHeliOrientation(float angle) 0x59B4A0
void CAutomobile::SetHeliOrientation(float angle) {
    plugin::CallMethod<0x59B4A0, CAutomobile *, float>(this, angle);
}

// Converted from thiscall void CAutomobile::SetPanelDamage(int nodeIndex, ePanels panel, bool createWindowGlass) 0x59B2A0
void CAutomobile::SetPanelDamage(int nodeIndex, ePanels panel, bool createWindowGlass) {
    plugin::CallMethod<0x59B2A0, CAutomobile *, int, ePanels, bool>(this, nodeIndex, panel, createWindowGlass);
}

// Converted from thiscall void CAutomobile::SetTaxiLight(bool enable) 0x5882F0
void CAutomobile::SetTaxiLight(bool enable) {
    plugin::CallMethod<0x5882F0, CAutomobile *, bool>(this, enable);
}

// Converted from thiscall void CAutomobile::SetupDamageAfterLoad(void) 0x588310
void CAutomobile::SetupDamageAfterLoad() {
    plugin::CallMethod<0x588310, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::SetupSuspensionLines(void) 0x59E2B0
void CAutomobile::SetupSuspensionLines() {
    plugin::CallMethod<0x59E2B0, CAutomobile *>(this);
}

// Converted from thiscall CObject* CAutomobile::SpawnFlyingComponent(int nodeIndex, uint collisionType) 0x59AAA0
CObject* CAutomobile::SpawnFlyingComponent(int nodeIndex, unsigned int collisionType) {
    return plugin::CallMethodAndReturn<CObject*, 0x59AAA0, CAutomobile *, int, unsigned int>(this, nodeIndex, collisionType);
}

// Converted from thiscall void CAutomobile::TankControl(void) 0x5864C0
void CAutomobile::TankControl() {
    plugin::CallMethod<0x5864C0, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::TellHeliToGoToCoors(float x, float y, float z, uchar) 0x59B4B0
void CAutomobile::TellHeliToGoToCoors(float x, float y, float z, unsigned char arg3) {
    plugin::CallMethod<0x59B4B0, CAutomobile *, float, float, float, unsigned char>(this, x, y, z, arg3);
}

// Converted from thiscall void CAutomobile::TellPlaneToGoToCoors(float x, float y, float z, uchar) 0x59B420
void CAutomobile::TellPlaneToGoToCoors(float x, float y, float z, unsigned char arg3) {
    plugin::CallMethod<0x59B420, CAutomobile *, float, float, float, unsigned char>(this, x, y, z, arg3);
}

// Converted from thiscall void CAutomobile::VehicleDamage(float damageIntensity, int) 0x59B550
void CAutomobile::VehicleDamage(float damageIntensity, int arg1) {
    plugin::CallMethod<0x59B550, CAutomobile *, float, int>(this, damageIntensity, arg1);
}

// Converted from thiscall void CAutomobile::dmgDrawCarCollidingParticles(CVector const& position, float force) 0x59C480
void CAutomobile::dmgDrawCarCollidingParticles(CVector const& position, float force) {
    plugin::CallMethod<0x59C480, CAutomobile *, CVector const&, float>(this, position, force);
}