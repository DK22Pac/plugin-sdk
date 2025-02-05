/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CAutomobile.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE bool &CAutomobile::m_sAllTaxiLights = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD21, 0x95CED9, 0x96D019));
PLUGIN_VARIABLE CVector &vecDAMAGE_ENGINE_POS_BIG = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x64C8C8, 0x64C8C8, 0x65C8D0));
PLUGIN_VARIABLE CVector &vecDAMAGE_ENGINE_POS_SMALL = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x64C8D4, 0x64C8D4, 0x65C8DC));
PLUGIN_VARIABLE CColPoint(&aTempPedColPts)[32] = *reinterpret_cast<CColPoint(*)[32]>(GLOBAL_ADDRESS_BY_VERSION(0x64C8E0, 0x64C8E0, 0x65C8E8));
PLUGIN_VARIABLE bool &bAllCarCheat = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD4B, 0x95CF03, 0x96D043));

int ctor_addr_o(CAutomobile, void(int, unsigned char)) = ADDRESS_BY_VERSION(0x52C6B0, 0x52C8F0, 0x52C880);
int ctor_gaddr_o(CAutomobile, void(int, unsigned char)) = GLOBAL_ADDRESS_BY_VERSION(0x52C6B0, 0x52C8F0, 0x52C880);

int dtor_addr(CAutomobile) = ADDRESS_BY_VERSION(0x52D170, 0x52D3B0, 0x52D340);
int dtor_gaddr(CAutomobile) = GLOBAL_ADDRESS_BY_VERSION(0x52D170, 0x52D3B0, 0x52D340);

int del_dtor_addr(CAutomobile) = ADDRESS_BY_VERSION(0x4202A0, 0x4202A0, 0x4202A0);
int del_dtor_gaddr(CAutomobile) = GLOBAL_ADDRESS_BY_VERSION(0x4202A0, 0x4202A0, 0x4202A0);

int addrof(CAutomobile::SetModelIndex) = ADDRESS_BY_VERSION(0x52D190, 0x52D3D0, 0x52D360);
int gaddrof(CAutomobile::SetModelIndex) = GLOBAL_ADDRESS_BY_VERSION(0x52D190, 0x52D3D0, 0x52D360);

void CAutomobile::SetModelIndex(unsigned int modelIndex) {
    plugin::CallVirtualMethod<3, CAutomobile *, unsigned int>(this, modelIndex);
}

int addrof(CAutomobile::ProcessControl) = ADDRESS_BY_VERSION(0x531470, 0x5316B0, 0x531640);
int gaddrof(CAutomobile::ProcessControl) = GLOBAL_ADDRESS_BY_VERSION(0x531470, 0x5316B0, 0x531640);

void CAutomobile::ProcessControl() {
    plugin::CallVirtualMethod<8, CAutomobile *>(this);
}

int addrof(CAutomobile::Teleport) = ADDRESS_BY_VERSION(0x535180, 0x5353C0, 0x535350);
int gaddrof(CAutomobile::Teleport) = GLOBAL_ADDRESS_BY_VERSION(0x535180, 0x5353C0, 0x535350);

void CAutomobile::Teleport(CVector pos) {
    plugin::CallVirtualMethod<11, CAutomobile *, CVector>(this, pos);
}

int addrof(CAutomobile::PreRender) = ADDRESS_BY_VERSION(0x535B40, 0x535D80, 0x535D10);
int gaddrof(CAutomobile::PreRender) = GLOBAL_ADDRESS_BY_VERSION(0x535B40, 0x535D80, 0x535D10);

void CAutomobile::PreRender() {
    plugin::CallVirtualMethod<12, CAutomobile *>(this);
}

int addrof(CAutomobile::Render) = ADDRESS_BY_VERSION(0x539EA0, 0x53A0E0, 0x53A090);
int gaddrof(CAutomobile::Render) = GLOBAL_ADDRESS_BY_VERSION(0x539EA0, 0x53A0E0, 0x53A090);

void CAutomobile::Render() {
    plugin::CallVirtualMethod<13, CAutomobile *>(this);
}

int addrof(CAutomobile::ProcessEntityCollision) = ADDRESS_BY_VERSION(0x53B270, 0x53B4B0, 0x53B460);
int gaddrof(CAutomobile::ProcessEntityCollision) = GLOBAL_ADDRESS_BY_VERSION(0x53B270, 0x53B4B0, 0x53B460);

int CAutomobile::ProcessEntityCollision(CEntity *entity, CColPoint *colPoint) {
    return plugin::CallVirtualMethodAndReturn<int, 17, CAutomobile *, CEntity *, CColPoint *>(this, entity, colPoint);
}

int addrof(CAutomobile::ProcessControlInputs) = ADDRESS_BY_VERSION(0x53B660, 0x53B8A0, 0x53B850);
int gaddrof(CAutomobile::ProcessControlInputs) = GLOBAL_ADDRESS_BY_VERSION(0x53B660, 0x53B8A0, 0x53B850);

void CAutomobile::ProcessControlInputs(unsigned char pad) {
    plugin::CallVirtualMethod<18, CAutomobile *, unsigned char>(this, pad);
}

int addrof(CAutomobile::GetComponentWorldPosition) = ADDRESS_BY_VERSION(0x52E5F0, 0x52E830, 0x52E7C0);
int gaddrof(CAutomobile::GetComponentWorldPosition) = GLOBAL_ADDRESS_BY_VERSION(0x52E5F0, 0x52E830, 0x52E7C0);

void CAutomobile::GetComponentWorldPosition(int component, CVector &pos) {
    plugin::CallVirtualMethod<19, CAutomobile *, int, CVector &>(this, component, pos);
}

int addrof(CAutomobile::IsComponentPresent) = ADDRESS_BY_VERSION(0x52E660, 0x52E8A0, 0x52E830);
int gaddrof(CAutomobile::IsComponentPresent) = GLOBAL_ADDRESS_BY_VERSION(0x52E660, 0x52E8A0, 0x52E830);

bool CAutomobile::IsComponentPresent(int component) {
    return plugin::CallVirtualMethodAndReturn<bool, 20, CAutomobile *, int>(this, component);
}

int addrof(CAutomobile::SetComponentRotation) = ADDRESS_BY_VERSION(0x52E680, 0x52E8C0, 0x52E850);
int gaddrof(CAutomobile::SetComponentRotation) = GLOBAL_ADDRESS_BY_VERSION(0x52E680, 0x52E8C0, 0x52E850);

void CAutomobile::SetComponentRotation(int component, CVector rotation) {
    plugin::CallVirtualMethod<21, CAutomobile *, int, CVector>(this, component, rotation);
}

int addrof(CAutomobile::OpenDoor) = ADDRESS_BY_VERSION(0x52E750, 0x52E990, 0x52E920);
int gaddrof(CAutomobile::OpenDoor) = GLOBAL_ADDRESS_BY_VERSION(0x52E750, 0x52E990, 0x52E920);

void CAutomobile::OpenDoor(int component, eDoors door, float angle) {
    plugin::CallVirtualMethod<22, CAutomobile *, int, eDoors, float>(this, component, door, angle);
}

int addrof(CAutomobile::ProcessOpenDoor) = ADDRESS_BY_VERSION(0x52E910, 0x52EB50, 0x52EAE0);
int gaddrof(CAutomobile::ProcessOpenDoor) = GLOBAL_ADDRESS_BY_VERSION(0x52E910, 0x52EB50, 0x52EAE0);

void CAutomobile::ProcessOpenDoor(unsigned int component, unsigned int anim, float angle) {
    plugin::CallVirtualMethod<23, CAutomobile *, unsigned int, unsigned int, float>(this, component, anim, angle);
}

int addrof(CAutomobile::IsDoorReady) = ADDRESS_BY_VERSION(0x52EF10, 0x52F150, 0x52F0E0);
int gaddrof(CAutomobile::IsDoorReady) = GLOBAL_ADDRESS_BY_VERSION(0x52EF10, 0x52F150, 0x52F0E0);

bool CAutomobile::IsDoorReady(eDoors door) {
    return plugin::CallVirtualMethodAndReturn<bool, 24, CAutomobile *, eDoors>(this, door);
}

int addrof(CAutomobile::IsDoorFullyOpen) = ADDRESS_BY_VERSION(0x52EF90, 0x52F1D0, 0x52F160);
int gaddrof(CAutomobile::IsDoorFullyOpen) = GLOBAL_ADDRESS_BY_VERSION(0x52EF90, 0x52F1D0, 0x52F160);

bool CAutomobile::IsDoorFullyOpen(eDoors door) {
    return plugin::CallVirtualMethodAndReturn<bool, 25, CAutomobile *, eDoors>(this, door);
}

int addrof(CAutomobile::IsDoorClosed) = ADDRESS_BY_VERSION(0x52EFD0, 0x52F210, 0x52F1A0);
int gaddrof(CAutomobile::IsDoorClosed) = GLOBAL_ADDRESS_BY_VERSION(0x52EFD0, 0x52F210, 0x52F1A0);

bool CAutomobile::IsDoorClosed(eDoors door) {
    return plugin::CallVirtualMethodAndReturn<bool, 26, CAutomobile *, eDoors>(this, door);
}

int addrof(CAutomobile::IsDoorMissing) = ADDRESS_BY_VERSION(0x52F000, 0x52F240, 0x52F1D0);
int gaddrof(CAutomobile::IsDoorMissing) = GLOBAL_ADDRESS_BY_VERSION(0x52F000, 0x52F240, 0x52F1D0);

bool CAutomobile::IsDoorMissing(eDoors door) {
    return plugin::CallVirtualMethodAndReturn<bool, 27, CAutomobile *, eDoors>(this, door);
}

int addrof(CAutomobile::RemoveRefsToVehicle) = ADDRESS_BY_VERSION(0x53BF40, 0x53C180, 0x53C130);
int gaddrof(CAutomobile::RemoveRefsToVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x53BF40, 0x53C180, 0x53C130);

void CAutomobile::RemoveRefsToVehicle(CEntity *entity) {
    plugin::CallVirtualMethod<28, CAutomobile *, CEntity *>(this, entity);
}

int addrof(CAutomobile::BlowUpCar) = ADDRESS_BY_VERSION(0x53BC60, 0x53BEA0, 0x53BE50);
int gaddrof(CAutomobile::BlowUpCar) = GLOBAL_ADDRESS_BY_VERSION(0x53BC60, 0x53BEA0, 0x53BE50);

void CAutomobile::BlowUpCar(CEntity *culprit) {
    plugin::CallVirtualMethod<29, CAutomobile *, CEntity *>(this, culprit);
}

int addrof(CAutomobile::SetUpWheelColModel) = ADDRESS_BY_VERSION(0x53BF70, 0x53C1B0, 0x53C160);
int gaddrof(CAutomobile::SetUpWheelColModel) = GLOBAL_ADDRESS_BY_VERSION(0x53BF70, 0x53C1B0, 0x53C160);

bool CAutomobile::SetUpWheelColModel(CColModel *wheelCol) {
    return plugin::CallVirtualMethodAndReturn<bool, 30, CAutomobile *, CColModel *>(this, wheelCol);
}

int addrof(CAutomobile::BurstTyre) = ADDRESS_BY_VERSION(0x53C0E0, 0x53C320, 0x53C2D0);
int gaddrof(CAutomobile::BurstTyre) = GLOBAL_ADDRESS_BY_VERSION(0x53C0E0, 0x53C320, 0x53C2D0);

void CAutomobile::BurstTyre(unsigned char wheel) {
    plugin::CallVirtualMethod<31, CAutomobile *, unsigned char>(this, wheel);
}

int addrof(CAutomobile::IsRoomForPedToLeaveCar) = ADDRESS_BY_VERSION(0x53C5B0, 0x53C7F0, 0x53C7A0);
int gaddrof(CAutomobile::IsRoomForPedToLeaveCar) = GLOBAL_ADDRESS_BY_VERSION(0x53C5B0, 0x53C7F0, 0x53C7A0);

bool CAutomobile::IsRoomForPedToLeaveCar(unsigned int component, CVector *doorOffset) {
    return plugin::CallVirtualMethodAndReturn<bool, 32, CAutomobile *, unsigned int, CVector *>(this, component, doorOffset);
}

int addrof(CAutomobile::GetHeightAboveRoad) = ADDRESS_BY_VERSION(0x437690, 0x437690, 0x437690);
int gaddrof(CAutomobile::GetHeightAboveRoad) = GLOBAL_ADDRESS_BY_VERSION(0x437690, 0x437690, 0x437690);

float CAutomobile::GetHeightAboveRoad() {
    return plugin::CallVirtualMethodAndReturn<float, 33, CAutomobile *>(this);
}

int addrof(CAutomobile::PlayCarHorn) = ADDRESS_BY_VERSION(0x53C450, 0x53C690, 0x53C640);
int gaddrof(CAutomobile::PlayCarHorn) = GLOBAL_ADDRESS_BY_VERSION(0x53C450, 0x53C690, 0x53C640);

void CAutomobile::PlayCarHorn() {
    plugin::CallVirtualMethod<34, CAutomobile *>(this);
}

int addrof(CAutomobile::AddDamagedVehicleParticles) = ADDRESS_BY_VERSION(0x535450, 0x535690, 0x535620);
int gaddrof(CAutomobile::AddDamagedVehicleParticles) = GLOBAL_ADDRESS_BY_VERSION(0x535450, 0x535690, 0x535620);

void CAutomobile::AddDamagedVehicleParticles() {
    plugin::CallMethodDynGlobal<CAutomobile *>(gaddrof(CAutomobile::AddDamagedVehicleParticles), this);
}

int addrof(CAutomobile::AddWheelDirtAndWater) = ADDRESS_BY_VERSION(0x5357D0, 0x535A10, 0x5359A0);
int gaddrof(CAutomobile::AddWheelDirtAndWater) = GLOBAL_ADDRESS_BY_VERSION(0x5357D0, 0x535A10, 0x5359A0);

bool CAutomobile::AddWheelDirtAndWater(CColPoint &point, unsigned int belowEffectSpeed) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CAutomobile *, CColPoint &, unsigned int>(gaddrof(CAutomobile::AddWheelDirtAndWater), this, point, belowEffectSpeed);
}

int addrof(CAutomobile::BlowUpCarsInPath) = ADDRESS_BY_VERSION(0x53E000, 0x53E240, 0x53E1F0);
int gaddrof(CAutomobile::BlowUpCarsInPath) = GLOBAL_ADDRESS_BY_VERSION(0x53E000, 0x53E240, 0x53E1F0);

void CAutomobile::BlowUpCarsInPath() {
    plugin::CallMethodDynGlobal<CAutomobile *>(gaddrof(CAutomobile::BlowUpCarsInPath), this);
}

int addrof(CAutomobile::DoDriveByShootings) = ADDRESS_BY_VERSION(0x564000, 0x564130, 0x5640E0);
int gaddrof(CAutomobile::DoDriveByShootings) = GLOBAL_ADDRESS_BY_VERSION(0x564000, 0x564130, 0x5640E0);

void CAutomobile::DoDriveByShootings() {
    plugin::CallMethodDynGlobal<CAutomobile *>(gaddrof(CAutomobile::DoDriveByShootings), this);
}

int addrof(CAutomobile::FireTruckControl) = ADDRESS_BY_VERSION(0x522590, 0x5227D0, 0x522760);
int gaddrof(CAutomobile::FireTruckControl) = GLOBAL_ADDRESS_BY_VERSION(0x522590, 0x5227D0, 0x522760);

void CAutomobile::FireTruckControl() {
    plugin::CallMethodDynGlobal<CAutomobile *>(gaddrof(CAutomobile::FireTruckControl), this);
}

int addrof(CAutomobile::Fix) = ADDRESS_BY_VERSION(0x53C240, 0x53C480, 0x53C430);
int gaddrof(CAutomobile::Fix) = GLOBAL_ADDRESS_BY_VERSION(0x53C240, 0x53C480, 0x53C430);

void CAutomobile::Fix() {
    plugin::CallMethodDynGlobal<CAutomobile *>(gaddrof(CAutomobile::Fix), this);
}

int addrof(CAutomobile::GetAllWheelsOffGround) = ADDRESS_BY_VERSION(0x53BC40, 0x53BE80, 0x53BE30);
int gaddrof(CAutomobile::GetAllWheelsOffGround) = GLOBAL_ADDRESS_BY_VERSION(0x53BC40, 0x53BE80, 0x53BE30);

bool CAutomobile::GetAllWheelsOffGround() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CAutomobile *>(gaddrof(CAutomobile::GetAllWheelsOffGround), this);
}

int addrof(CAutomobile::HasCarStoppedBecauseOfLight) = ADDRESS_BY_VERSION(0x42E220, 0x42E220, 0x42E220);
int gaddrof(CAutomobile::HasCarStoppedBecauseOfLight) = GLOBAL_ADDRESS_BY_VERSION(0x42E220, 0x42E220, 0x42E220);

bool CAutomobile::HasCarStoppedBecauseOfLight() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CAutomobile *>(gaddrof(CAutomobile::HasCarStoppedBecauseOfLight), this);
}

int addrof(CAutomobile::HideAllComps) = ADDRESS_BY_VERSION(0x5300C0, 0x530300, 0x530290);
int gaddrof(CAutomobile::HideAllComps) = GLOBAL_ADDRESS_BY_VERSION(0x5300C0, 0x530300, 0x530290);

void CAutomobile::HideAllComps() {
    plugin::CallMethodDynGlobal<CAutomobile *>(gaddrof(CAutomobile::HideAllComps), this);
}

int addrof(CAutomobile::HydraulicControl) = ADDRESS_BY_VERSION(0x52D4E0, 0x52D720, 0x52D6B0);
int gaddrof(CAutomobile::HydraulicControl) = GLOBAL_ADDRESS_BY_VERSION(0x52D4E0, 0x52D720, 0x52D6B0);

void CAutomobile::HydraulicControl() {
    plugin::CallMethodDynGlobal<CAutomobile *>(gaddrof(CAutomobile::HydraulicControl), this);
}

int addrof(CAutomobile::PlaceOnRoadProperly) = ADDRESS_BY_VERSION(0x53E090, 0x53E2D0, 0x53E280);
int gaddrof(CAutomobile::PlaceOnRoadProperly) = GLOBAL_ADDRESS_BY_VERSION(0x53E090, 0x53E2D0, 0x53E280);

void CAutomobile::PlaceOnRoadProperly() {
    plugin::CallMethodDynGlobal<CAutomobile *>(gaddrof(CAutomobile::PlaceOnRoadProperly), this);
}

int addrof(CAutomobile::PlayHornIfNecessary) = ADDRESS_BY_VERSION(0x53C4B0, 0x53C6F0, 0x53C6A0);
int gaddrof(CAutomobile::PlayHornIfNecessary) = GLOBAL_ADDRESS_BY_VERSION(0x53C4B0, 0x53C6F0, 0x53C6A0);

void CAutomobile::PlayHornIfNecessary() {
    plugin::CallMethodDynGlobal<CAutomobile *>(gaddrof(CAutomobile::PlayHornIfNecessary), this);
}

int addrof(CAutomobile::ProcessAutoBusDoors) = ADDRESS_BY_VERSION(0x53D370, 0x53D5B0, 0x53D560);
int gaddrof(CAutomobile::ProcessAutoBusDoors) = GLOBAL_ADDRESS_BY_VERSION(0x53D370, 0x53D5B0, 0x53D560);

void CAutomobile::ProcessAutoBusDoors() {
    plugin::CallMethodDynGlobal<CAutomobile *>(gaddrof(CAutomobile::ProcessAutoBusDoors), this);
}

int addrof(CAutomobile::ProcessBuoyancy) = ADDRESS_BY_VERSION(0x5308D0, 0x530B10, 0x530AA0);
int gaddrof(CAutomobile::ProcessBuoyancy) = GLOBAL_ADDRESS_BY_VERSION(0x5308D0, 0x530B10, 0x530AA0);

void CAutomobile::ProcessBuoyancy() {
    plugin::CallMethodDynGlobal<CAutomobile *>(gaddrof(CAutomobile::ProcessBuoyancy), this);
}

int addrof(CAutomobile::ProcessSwingingDoor) = ADDRESS_BY_VERSION(0x535250, 0x535490, 0x535420);
int gaddrof(CAutomobile::ProcessSwingingDoor) = GLOBAL_ADDRESS_BY_VERSION(0x535250, 0x535490, 0x535420);

void CAutomobile::ProcessSwingingDoor(int component, eDoors door) {
    plugin::CallMethodDynGlobal<CAutomobile *, int, eDoors>(gaddrof(CAutomobile::ProcessSwingingDoor), this, component, door);
}

int addrof(CAutomobile::RcbanditCheck1CarWheels) = ADDRESS_BY_VERSION(0x53CBA0, 0x53CDE0, 0x53CD90);
int gaddrof(CAutomobile::RcbanditCheck1CarWheels) = GLOBAL_ADDRESS_BY_VERSION(0x53CBA0, 0x53CDE0, 0x53CD90);

bool CAutomobile::RcbanditCheck1CarWheels(CPtrList &list) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CAutomobile *, CPtrList &>(gaddrof(CAutomobile::RcbanditCheck1CarWheels), this, list);
}

int addrof(CAutomobile::RcbanditCheckHitWheels) = ADDRESS_BY_VERSION(0x53C990, 0x53CBD0, 0x53CB80);
int gaddrof(CAutomobile::RcbanditCheckHitWheels) = GLOBAL_ADDRESS_BY_VERSION(0x53C990, 0x53CBD0, 0x53CB80);

bool CAutomobile::RcbanditCheckHitWheels() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CAutomobile *>(gaddrof(CAutomobile::RcbanditCheckHitWheels), this);
}

int addrof(CAutomobile::ReduceHornCounter) = ADDRESS_BY_VERSION(0x5308C0, 0x530B00, 0x530A90);
int gaddrof(CAutomobile::ReduceHornCounter) = GLOBAL_ADDRESS_BY_VERSION(0x5308C0, 0x530B00, 0x530A90);

void CAutomobile::ReduceHornCounter() {
    plugin::CallMethodDynGlobal<CAutomobile *>(gaddrof(CAutomobile::ReduceHornCounter), this);
}

int addrof(CAutomobile::RemoveBonnetInPedCollision) = ADDRESS_BY_VERSION(0x535320, 0x535560, 0x5354F0);
int gaddrof(CAutomobile::RemoveBonnetInPedCollision) = GLOBAL_ADDRESS_BY_VERSION(0x535320, 0x535560, 0x5354F0);

CObject *CAutomobile::RemoveBonnetInPedCollision() {
    return plugin::CallMethodAndReturnDynGlobal<CObject *, CAutomobile *>(gaddrof(CAutomobile::RemoveBonnetInPedCollision), this);
}

int addrof(CAutomobile::ResetSuspension) = ADDRESS_BY_VERSION(0x5353A0, 0x5355E0, 0x535570);
int gaddrof(CAutomobile::ResetSuspension) = GLOBAL_ADDRESS_BY_VERSION(0x5353A0, 0x5355E0, 0x535570);

void CAutomobile::ResetSuspension() {
    plugin::CallMethodDynGlobal<CAutomobile *>(gaddrof(CAutomobile::ResetSuspension), this);
}

int addrof(CAutomobile::ScanForCrimes) = ADDRESS_BY_VERSION(0x53C4F0, 0x53C730, 0x53C6E0);
int gaddrof(CAutomobile::ScanForCrimes) = GLOBAL_ADDRESS_BY_VERSION(0x53C4F0, 0x53C730, 0x53C6E0);

void CAutomobile::ScanForCrimes() {
    plugin::CallMethodDynGlobal<CAutomobile *>(gaddrof(CAutomobile::ScanForCrimes), this);
}

int addrof(CAutomobile::SetBumperDamage) = ADDRESS_BY_VERSION(0x530120, 0x530360, 0x5302F0);
int gaddrof(CAutomobile::SetBumperDamage) = GLOBAL_ADDRESS_BY_VERSION(0x530120, 0x530360, 0x5302F0);

void CAutomobile::SetBumperDamage(int component, ePanels panel, bool noFlyingComponents) {
    plugin::CallMethodDynGlobal<CAutomobile *, int, ePanels, bool>(gaddrof(CAutomobile::SetBumperDamage), this, component, panel, noFlyingComponents);
}

int addrof(CAutomobile::SetBusDoorTimer) = ADDRESS_BY_VERSION(0x53D320, 0x53D560, 0x53D510);
int gaddrof(CAutomobile::SetBusDoorTimer) = GLOBAL_ADDRESS_BY_VERSION(0x53D320, 0x53D560, 0x53D510);

void CAutomobile::SetBusDoorTimer(unsigned int timer, unsigned char type) {
    plugin::CallMethodDynGlobal<CAutomobile *, unsigned int, unsigned char>(gaddrof(CAutomobile::SetBusDoorTimer), this, timer, type);
}

int addrof(CAutomobile::SetComponentVisibility) = ADDRESS_BY_VERSION(0x5300E0, 0x530320, 0x5302B0);
int gaddrof(CAutomobile::SetComponentVisibility) = GLOBAL_ADDRESS_BY_VERSION(0x5300E0, 0x530320, 0x5302B0);

void CAutomobile::SetComponentVisibility(RwFrame *frame, unsigned int flag) {
    plugin::CallMethodDynGlobal<CAutomobile *, RwFrame *, unsigned int>(gaddrof(CAutomobile::SetComponentVisibility), this, frame, flag);
}

int addrof(CAutomobile::SetDoorDamage) = ADDRESS_BY_VERSION(0x530200, 0x530440, 0x5303D0);
int gaddrof(CAutomobile::SetDoorDamage) = GLOBAL_ADDRESS_BY_VERSION(0x530200, 0x530440, 0x5303D0);

void CAutomobile::SetDoorDamage(int component, eDoors door, bool noFlyingComponents) {
    plugin::CallMethodDynGlobal<CAutomobile *, int, eDoors, bool>(gaddrof(CAutomobile::SetDoorDamage), this, component, door, noFlyingComponents);
}

int addrof(CAutomobile::SetPanelDamage) = ADDRESS_BY_VERSION(0x5301A0, 0x5303E0, 0x530370);
int gaddrof(CAutomobile::SetPanelDamage) = GLOBAL_ADDRESS_BY_VERSION(0x5301A0, 0x5303E0, 0x530370);

void CAutomobile::SetPanelDamage(int component, ePanels panel, bool noFlyingComponents) {
    plugin::CallMethodDynGlobal<CAutomobile *, int, ePanels, bool>(gaddrof(CAutomobile::SetPanelDamage), this, component, panel, noFlyingComponents);
}

int addrof(CAutomobile::SetTaxiLight) = ADDRESS_BY_VERSION(0x53C420, 0x53C660, 0x53C610);
int gaddrof(CAutomobile::SetTaxiLight) = GLOBAL_ADDRESS_BY_VERSION(0x53C420, 0x53C660, 0x53C610);

void CAutomobile::SetTaxiLight(bool enable) {
    plugin::CallMethodDynGlobal<CAutomobile *, bool>(gaddrof(CAutomobile::SetTaxiLight), this, enable);
}

int addrof(CAutomobile::SetupDamageAfterLoad) = ADDRESS_BY_VERSION(0x53C310, 0x53C550, 0x53C500);
int gaddrof(CAutomobile::SetupDamageAfterLoad) = GLOBAL_ADDRESS_BY_VERSION(0x53C310, 0x53C550, 0x53C500);

void CAutomobile::SetupDamageAfterLoad() {
    plugin::CallMethodDynGlobal<CAutomobile *>(gaddrof(CAutomobile::SetupDamageAfterLoad), this);
}

int addrof(CAutomobile::SetupModelNodes) = ADDRESS_BY_VERSION(0x52D1B0, 0x52D3F0, 0x52D380);
int gaddrof(CAutomobile::SetupModelNodes) = GLOBAL_ADDRESS_BY_VERSION(0x52D1B0, 0x52D3F0, 0x52D380);

void CAutomobile::SetupModelNodes() {
    plugin::CallMethodDynGlobal<CAutomobile *>(gaddrof(CAutomobile::SetupModelNodes), this);
}

int addrof(CAutomobile::SetupSuspensionLines) = ADDRESS_BY_VERSION(0x52D210, 0x52D450, 0x52D3E0);
int gaddrof(CAutomobile::SetupSuspensionLines) = GLOBAL_ADDRESS_BY_VERSION(0x52D210, 0x52D450, 0x52D3E0);

void CAutomobile::SetupSuspensionLines() {
    plugin::CallMethodDynGlobal<CAutomobile *>(gaddrof(CAutomobile::SetupSuspensionLines), this);
}

int addrof(CAutomobile::ShowAllComps) = ADDRESS_BY_VERSION(0x5300D0, 0x530310, 0x5302A0);
int gaddrof(CAutomobile::ShowAllComps) = GLOBAL_ADDRESS_BY_VERSION(0x5300D0, 0x530310, 0x5302A0);

void CAutomobile::ShowAllComps() {
    plugin::CallMethodDynGlobal<CAutomobile *>(gaddrof(CAutomobile::ShowAllComps), this);
}

int addrof(CAutomobile::SpawnFlyingComponent) = ADDRESS_BY_VERSION(0x530300, 0x530540, 0x5304D0);
int gaddrof(CAutomobile::SpawnFlyingComponent) = GLOBAL_ADDRESS_BY_VERSION(0x530300, 0x530540, 0x5304D0);

CObject *CAutomobile::SpawnFlyingComponent(int component, unsigned int type) {
    return plugin::CallMethodAndReturnDynGlobal<CObject *, CAutomobile *, int, unsigned int>(gaddrof(CAutomobile::SpawnFlyingComponent), this, component, type);
}

int addrof(CAutomobile::TankControl) = ADDRESS_BY_VERSION(0x53D530, 0x53D770, 0x53D720);
int gaddrof(CAutomobile::TankControl) = GLOBAL_ADDRESS_BY_VERSION(0x53D530, 0x53D770, 0x53D720);

void CAutomobile::TankControl() {
    plugin::CallMethodDynGlobal<CAutomobile *>(gaddrof(CAutomobile::TankControl), this);
}

int addrof(CAutomobile::VehicleDamage) = ADDRESS_BY_VERSION(0x52F390, 0x52F5D0, 0x52F560);
int gaddrof(CAutomobile::VehicleDamage) = GLOBAL_ADDRESS_BY_VERSION(0x52F390, 0x52F5D0, 0x52F560);

void CAutomobile::VehicleDamage(float impulse, unsigned short damagedPiece) {
    plugin::CallMethodDynGlobal<CAutomobile *, float, unsigned short>(gaddrof(CAutomobile::VehicleDamage), this, impulse, damagedPiece);
}

int addrof(CAutomobile::dmgDrawCarCollidingParticles) = ADDRESS_BY_VERSION(0x52F030, 0x52F270, 0x52F200);
int gaddrof(CAutomobile::dmgDrawCarCollidingParticles) = GLOBAL_ADDRESS_BY_VERSION(0x52F030, 0x52F270, 0x52F200);

void CAutomobile::dmgDrawCarCollidingParticles(CVector const &pos, float amount) {
    plugin::CallMethodDynGlobal<CAutomobile *, CVector const &, float>(gaddrof(CAutomobile::dmgDrawCarCollidingParticles), this, pos, amount);
}

int addrof(CAutomobile::SetAllTaxiLights) = ADDRESS_BY_VERSION(0x53C440, 0x53C680, 0x53C630);
int gaddrof(CAutomobile::SetAllTaxiLights) = GLOBAL_ADDRESS_BY_VERSION(0x53C440, 0x53C680, 0x53C630);

void CAutomobile::SetAllTaxiLights(bool enable) {
    plugin::CallDynGlobal<bool>(gaddrof(CAutomobile::SetAllTaxiLights), enable);
}

int addrof(SetVehicleAtomicVisibilityCB) = ADDRESS_BY_VERSION(0x52C660, 0x52C8A0, 0x52C830);
int gaddrof(SetVehicleAtomicVisibilityCB) = GLOBAL_ADDRESS_BY_VERSION(0x52C660, 0x52C8A0, 0x52C830);

RwObject *SetVehicleAtomicVisibilityCB(RwObject *object, void *data) {
    return plugin::CallAndReturnDynGlobal<RwObject *, RwObject *, void *>(gaddrof(SetVehicleAtomicVisibilityCB), object, data);
}

int addrof(GetCurrentAtomicObjectCB) = ADDRESS_BY_VERSION(0x52C690, 0x52C8D0, 0x52C860);
int gaddrof(GetCurrentAtomicObjectCB) = GLOBAL_ADDRESS_BY_VERSION(0x52C690, 0x52C8D0, 0x52C860);

RwObject *GetCurrentAtomicObjectCB(RwObject *object, void *data) {
    return plugin::CallAndReturnDynGlobal<RwObject *, RwObject *, void *>(gaddrof(GetCurrentAtomicObjectCB), object, data);
}
