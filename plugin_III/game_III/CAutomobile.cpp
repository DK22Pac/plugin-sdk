/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CAutomobile.h"

bool &CAutomobile::m_sAllTaxiLights = *(bool *)0x95CD21;
unsigned int &CAutomobile::nGenerateRaindrops = *(unsigned int *)0x64CDEC;
unsigned int &CAutomobile::nGenerateWaterCircles = *(unsigned int *)0x64CDF4;
CMatrix *CAutomobile::matW2B = (CMatrix *)0x64CE54;

// Converted from thiscall void CAutomobile::AddDamagedVehicleParticles(void) 0x535450 
void CAutomobile::AddDamagedVehicleParticles() {
    plugin::CallMethod<0x535450, CAutomobile *>(this);
}

// Converted from thiscall bool CAutomobile::AddWheelDirtAndWater(CColPoint &colPoint,uint) 0x5357D0
bool CAutomobile::AddWheelDirtAndWater(CColPoint& colPoint, unsigned int arg1) {
    return plugin::CallMethodAndReturn<bool, 0x5357D0, CAutomobile *, CColPoint&, unsigned int>(this, colPoint, arg1);
}

// Converted from thiscall void CAutomobile::BlowUpCarsInPath(void) 0x53E000 
void CAutomobile::BlowUpCarsInPath() {
    plugin::CallMethod<0x53E000, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::CAutomobile(int modelIndex,uchar createdBy) 0x52C6B0
CAutomobile::CAutomobile(int modelIndex, unsigned char createdBy) : CVehicle(plugin::dummy) {
    plugin::CallMethod<0x52C6B0, CAutomobile *, int, unsigned char>(this, modelIndex, createdBy);
}

// Converted from thiscall void CAutomobile::DoDriveByShootings(void) 0x564000 
void CAutomobile::DoDriveByShootings() {
    plugin::CallMethod<0x564000, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::FireTruckControl(void) 0x522590 
void CAutomobile::FireTruckControl() {
    plugin::CallMethod<0x522590, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::Fix(void) 0x53C240 
void CAutomobile::Fix() {
    plugin::CallMethod<0x53C240, CAutomobile *>(this);
}

// Converted from thiscall bool CAutomobile::GetAllWheelsOffGround(void) 0x53BC40 
bool CAutomobile::GetAllWheelsOffGround() {
    return plugin::CallMethodAndReturn<bool, 0x53BC40, CAutomobile *>(this);
}

// Converted from thiscall bool CAutomobile::HasCarStoppedBecauseOfLight(void) 0x42E220 
bool CAutomobile::HasCarStoppedBecauseOfLight() {
    return plugin::CallMethodAndReturn<bool, 0x42E220, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::HideAllComps(void) 0x5300C0 
void CAutomobile::HideAllComps() {
    plugin::CallMethod<0x5300C0, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::HydraulicControl(void) 0x52D4E0 
void CAutomobile::HydraulicControl() {
    plugin::CallMethod<0x52D4E0, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::PlaceOnRoadProperly(void) 0x53E090 
void CAutomobile::PlaceOnRoadProperly() {
    plugin::CallMethod<0x53E090, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::PlayHornIfNecessary(void) 0x53C4B0 
void CAutomobile::PlayHornIfNecessary() {
    plugin::CallMethod<0x53C4B0, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::ProcessAutoBusDoors(void) 0x53D370 
void CAutomobile::ProcessAutoBusDoors() {
    plugin::CallMethod<0x53D370, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::ProcessBuoyancy(void) 0x5308D0 
void CAutomobile::ProcessBuoyancy() {
    plugin::CallMethod<0x5308D0, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::ProcessSwingingDoor(int nodeIndex, eDoors door) 0x535250
void CAutomobile::ProcessSwingingDoor(int nodeIndex, eDoors door) {
    plugin::CallMethod<0x535250, CAutomobile *, int, eDoors>(this, nodeIndex, door);
}

// Converted from thiscall bool CAutomobile::RcbanditCheck1CarWheels(CPtrList &ptrlist) 0x53CBA0
bool CAutomobile::RcbanditCheck1CarWheels(CPtrList& ptrlist) {
    return plugin::CallMethodAndReturn<bool, 0x53CBA0, CAutomobile *, CPtrList&>(this, ptrlist);
}

// Converted from thiscall bool CAutomobile::RcbanditCheckHitWheels(void) 0x53C990 
bool CAutomobile::RcbanditCheckHitWheels() {
    return plugin::CallMethodAndReturn<bool, 0x53C990, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::ReduceHornCounter(void) 0x5308C0 
void CAutomobile::ReduceHornCounter() {
    plugin::CallMethod<0x5308C0, CAutomobile *>(this);
}

// Converted from thiscall CObject* CAutomobile::RemoveBonnetInPedCollision(void) 0x535320
CObject* CAutomobile::RemoveBonnetInPedCollision() {
    return plugin::CallMethodAndReturn<CObject*, 0x535320, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::ResetSuspension(void) 0x5353A0 
void CAutomobile::ResetSuspension() {
    plugin::CallMethod<0x5353A0, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::ScanForCrimes(void) 0x53C4F0 
void CAutomobile::ScanForCrimes() {
    plugin::CallMethod<0x53C4F0, CAutomobile *>(this);
}

// Converted from cdecl void CAutomobile::SetAllTaxiLights(bool enable) 0x53C440
void CAutomobile::SetAllTaxiLights(bool enable) {
    plugin::Call<0x53C440, bool>(enable);
}

// Converted from thiscall void CAutomobile::SetBumperDamage(int nodeIndex,ePanels panel,bool withoutVisualEffect) 0x530120
void CAutomobile::SetBumperDamage(int nodeIndex, ePanels panel, bool withoutVisualEffect) {
    plugin::CallMethod<0x530120, CAutomobile *, int, ePanels, bool>(this, nodeIndex, panel, withoutVisualEffect);
}

// Converted from thiscall void CAutomobile::SetBusDoorTimer(uint time,uchar) 0x53D320
void CAutomobile::SetBusDoorTimer(unsigned int time, unsigned char arg1) {
    plugin::CallMethod<0x53D320, CAutomobile *, unsigned int, unsigned char>(this, time, arg1);
}

// Converted from thiscall void CAutomobile::SetComponentVisibility(RwFrame *frame,uint) 0x5300E0 
void CAutomobile::SetComponentVisibility(RwFrame* frame, unsigned int arg1) {
    plugin::CallMethod<0x5300E0, CAutomobile *, RwFrame*, unsigned int>(this, frame, arg1);
}

// Converted from thiscall void CAutomobile::SetDoorDamage(int nodeIndex, eDoors door, bool withoutVisualEffect) 0x530200
void CAutomobile::SetDoorDamage(int nodeIndex, eDoors door, bool withoutVisualEffect) {
    plugin::CallMethod<0x530200, CAutomobile *, int, eDoors, bool>(this, nodeIndex, door, withoutVisualEffect);
}

// Converted from thiscall void CAutomobile::SetPanelDamage(int nodeIndex, ePanels panel, bool createWindowGlass) 0x5301A0
void CAutomobile::SetPanelDamage(int nodeIndex, ePanels panel, bool createWindowGlass) {
    plugin::CallMethod<0x5301A0, CAutomobile *, int, ePanels, bool>(this, nodeIndex, panel, createWindowGlass);
}

// Converted from thiscall void CAutomobile::SetTaxiLight(bool enable) 0x53C420
void CAutomobile::SetTaxiLight(bool enable) {
    plugin::CallMethod<0x53C420, CAutomobile *, bool>(this, enable);
}

// Converted from thiscall void CAutomobile::SetupDamageAfterLoad(void) 0x53C310 
void CAutomobile::SetupDamageAfterLoad() {
    plugin::CallMethod<0x53C310, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::SetupModelNodes(void) 0x52D1B0 
void CAutomobile::SetupModelNodes() {
    plugin::CallMethod<0x52D1B0, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::SetupSuspensionLines(void) 0x52D210 
void CAutomobile::SetupSuspensionLines() {
    plugin::CallMethod<0x52D210, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::ShowAllComps(void) 0x5300D0 
void CAutomobile::ShowAllComps() {
    plugin::CallMethod<0x5300D0, CAutomobile *>(this);
}

// Converted from thiscall CObject* CAutomobile::SpawnFlyingComponent(int nodeIndex, uint collisionType) 0x530300
CObject* CAutomobile::SpawnFlyingComponent(int nodeIndex, unsigned int collisionType) {
    return plugin::CallMethodAndReturn<CObject*, 0x530300, CAutomobile *, int, unsigned int>(this, nodeIndex, collisionType);
}

// Converted from thiscall void CAutomobile::TankControl(void) 0x53D530 
void CAutomobile::TankControl() {
    plugin::CallMethod<0x53D530, CAutomobile *>(this);
}

// Converted from thiscall void CAutomobile::VehicleDamage(float damageIntensity,ushort) 0x52F390
void CAutomobile::VehicleDamage(float damageIntensity, unsigned short arg1) {
    plugin::CallMethod<0x52F390, CAutomobile *, float, unsigned short>(this, damageIntensity, arg1);
}

// Converted from thiscall void CAutomobile::dmgDrawCarCollidingParticles(CVector const& position, float force) 0x52F030
void CAutomobile::dmgDrawCarCollidingParticles(CVector const& position, float force) {
    plugin::CallMethod<0x52F030, CAutomobile *, CVector const&, float>(this, position, force);
}