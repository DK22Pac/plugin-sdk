/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVehicle.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE bool &CVehicle::m_bDisableMouseSteering = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x60252C, 0x601EF4, 0x60EEEC));
PLUGIN_VARIABLE bool &CVehicle::bCheat5 = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD64, 0x95CF1C, 0x96D05C));
PLUGIN_VARIABLE bool &CVehicle::bCheat4 = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD65, 0x95CF1D, 0x96D05D));
PLUGIN_VARIABLE bool &CVehicle::bCheat3 = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD66, 0x95CF1E, 0x96D05E));
PLUGIN_VARIABLE bool &CVehicle::bAllDodosCheat = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD75, 0x95CF2D, 0x96D06D));
PLUGIN_VARIABLE bool &CVehicle::bWheelsOnlyCheat = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD78, 0x95CF30, 0x96D070));
PLUGIN_VARIABLE float &fBurstTyreMod = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x602538, 0x601F00, 0x60EEF8));
PLUGIN_VARIABLE float &fBurstSpeedMax = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x60253C, 0x601F04, 0x60EEFC));
PLUGIN_VARIABLE float &fSpeedResistanceY = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025A4, 0x601F6C, 0x60EF64));
PLUGIN_VARIABLE float &fSpeedResistanceZ = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025A8, 0x601F70, 0x60EF68));
PLUGIN_VARIABLE float &fThrustVar = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025AC, 0x601F74, 0x60EF6C));
PLUGIN_VARIABLE float &fRotorFallOff = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025B0, 0x601F78, 0x60EF70));
PLUGIN_VARIABLE float &fStabiliseVar = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025B4, 0x601F7C, 0x60EF74));
PLUGIN_VARIABLE float &fPitchVar = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025B8, 0x601F80, 0x60EF78));
PLUGIN_VARIABLE float &fRollVar = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025BC, 0x601F84, 0x60EF7C));
PLUGIN_VARIABLE float &fYawVar = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025C0, 0x601F88, 0x60EF80));
PLUGIN_VARIABLE float &fPitchBrake = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025C4, 0x601F8C, 0x60EF84));
PLUGIN_VARIABLE float &fRollBrake = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025C8, 0x601F90, 0x60EF88));
PLUGIN_VARIABLE float &fSpinSpeedRes = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025CC, 0x601F94, 0x60EF8C));
PLUGIN_VARIABLE float &fRCAeroThrust = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025D0, 0x601F98, 0x60EF90));
PLUGIN_VARIABLE float &fRCPropFallOff = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025D4, 0x601F9C, 0x60EF94));
PLUGIN_VARIABLE float &fRCYawMult = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025D8, 0x601FA0, 0x60EF98));
PLUGIN_VARIABLE float &fRCRudderMult = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025DC, 0x601FA4, 0x60EF9C));
PLUGIN_VARIABLE float &fRCSideSlipMult = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025E0, 0x601FA8, 0x60EFA0));
PLUGIN_VARIABLE float &fRCRollMult = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025E4, 0x601FAC, 0x60EFA4));
PLUGIN_VARIABLE float &fRCRollStabilise = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025E8, 0x601FB0, 0x60EFA8));
PLUGIN_VARIABLE float &fRCPitchMult = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025EC, 0x601FB4, 0x60EFAC));
PLUGIN_VARIABLE float &fRCTailMult = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025F0, 0x601FB8, 0x60EFB0));
PLUGIN_VARIABLE float &fRCFormLiftMult = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025F4, 0x601FBC, 0x60EFB4));
PLUGIN_VARIABLE float &fRCAttackLiftMult = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025F8, 0x601FC0, 0x60EFB8));
PLUGIN_VARIABLE float &fSeaThrust = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6025FC, 0x601FC4, 0x60EFBC));
PLUGIN_VARIABLE float &fSeaPropFallOff = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x602600, 0x601FC8, 0x60EFC0));
PLUGIN_VARIABLE float &fSeaYawMult = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x602604, 0x601FCC, 0x60EFC4));
PLUGIN_VARIABLE float &fSeaRudderMult = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x602608, 0x601FD0, 0x60EFC8));
PLUGIN_VARIABLE float &fSeaSideSlipMult = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x60260C, 0x601FD4, 0x60EFCC));
PLUGIN_VARIABLE float &fSeaRollMult = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x602610, 0x601FD8, 0x60EFD0));
PLUGIN_VARIABLE float &fSeaRollStabilise = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x602614, 0x601FDC, 0x60EFD4));
PLUGIN_VARIABLE float &fSeaPitchMult = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x602618, 0x601FE0, 0x60EFD8));
PLUGIN_VARIABLE float &fSeaTailMult = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x60261C, 0x601FE4, 0x60EFDC));
PLUGIN_VARIABLE float &fSeaFormLiftMult = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x602620, 0x601FE8, 0x60EFE0));
PLUGIN_VARIABLE float &fSeaAttackLiftMult = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x602624, 0x601FEC, 0x60EFE4));
PLUGIN_VARIABLE CVector &vecHeliMoveRes = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x885AE4, 0x885A94, 0x895BD4));
PLUGIN_VARIABLE CVector &vecRCAeroResistance = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x885B60, 0x885B10, 0x895C50));
PLUGIN_VARIABLE CVector &vecRCHeliMoveRes = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2A70, 0x8E2B24, 0x8F2C64));
PLUGIN_VARIABLE CVector &vecHeliResistance = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2C9C, 0x8F2D50, 0x902E90));
PLUGIN_VARIABLE CVector &vecRCHeliResistance = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x8F4344, 0x8F43F8, 0x904538));
PLUGIN_VARIABLE CVector &vecSeaAeroResistance = *reinterpret_cast<CVector *>(GLOBAL_ADDRESS_BY_VERSION(0x9405C0, 0x940778, 0x9508B8));

int ctor_addr_o(CVehicle, void(unsigned char)) = ADDRESS_BY_VERSION(0x550A60, 0x550BA0, 0x550B50);
int ctor_gaddr_o(CVehicle, void(unsigned char)) = GLOBAL_ADDRESS_BY_VERSION(0x550A60, 0x550BA0, 0x550B50);

int dtor_addr(CVehicle) = ADDRESS_BY_VERSION(0x551040, 0x551180, 0x551130);
int dtor_gaddr(CVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x551040, 0x551180, 0x551130);

int op_new_addr(CVehicle) = ADDRESS_BY_VERSION(0x551120, 0x551260, 0x551210);
int op_new_gaddr(CVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x551120, 0x551260, 0x551210);

int op_new_addr_o(CVehicle, void *(unsigned int, int)) = ADDRESS_BY_VERSION(0x551130, 0x551270, 0x551220);
int op_new_gaddr_o(CVehicle, void *(unsigned int, int)) = GLOBAL_ADDRESS_BY_VERSION(0x551130, 0x551270, 0x551220);

int op_delete_addr(CVehicle) = ADDRESS_BY_VERSION(0x551150, 0x551290, 0x551240);
int op_delete_gaddr(CVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x551150, 0x551290, 0x551240);

int del_dtor_addr(CVehicle) = ADDRESS_BY_VERSION(0x417E80, 0x417E80, 0x417E80);
int del_dtor_gaddr(CVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x417E80, 0x417E80, 0x417E80);

int addrof(CVehicle::SetModelIndex) = ADDRESS_BY_VERSION(0x551170, 0x5512B0, 0x551260);
int gaddrof(CVehicle::SetModelIndex) = GLOBAL_ADDRESS_BY_VERSION(0x551170, 0x5512B0, 0x551260);

void CVehicle::SetModelIndex(unsigned int modelIndex) {
    plugin::CallVirtualMethod<3, CVehicle *, unsigned int>(this, modelIndex);
}

int addrof(CVehicle::SetupLighting) = ADDRESS_BY_VERSION(0x4A7DD0, 0x4A7EC0, 0x4A7E50);
int gaddrof(CVehicle::SetupLighting) = GLOBAL_ADDRESS_BY_VERSION(0x4A7DD0, 0x4A7EC0, 0x4A7E50);

bool CVehicle::SetupLighting() {
    return plugin::CallVirtualMethodAndReturn<bool, 14, CVehicle *>(this);
}

int addrof(CVehicle::RemoveLighting) = ADDRESS_BY_VERSION(0x4A7E60, 0x4A7F50, 0x4A7EE0);
int gaddrof(CVehicle::RemoveLighting) = GLOBAL_ADDRESS_BY_VERSION(0x4A7E60, 0x4A7F50, 0x4A7EE0);

void CVehicle::RemoveLighting(bool reset) {
    plugin::CallVirtualMethod<15, CVehicle *, bool>(this, reset);
}

int addrof(CVehicle::FlagToDestroyWhenNextProcessed) = ADDRESS_BY_VERSION(0x53E350, 0x53E590, 0x53E540);
int gaddrof(CVehicle::FlagToDestroyWhenNextProcessed) = GLOBAL_ADDRESS_BY_VERSION(0x53E350, 0x53E590, 0x53E540);

void CVehicle::FlagToDestroyWhenNextProcessed() {
    plugin::CallVirtualMethod<16, CVehicle *>(this);
}

int addrof(CVehicle::ProcessControlInputs) = ADDRESS_BY_VERSION(0x54B150, 0x54B2D0, 0x54B280);
int gaddrof(CVehicle::ProcessControlInputs) = GLOBAL_ADDRESS_BY_VERSION(0x54B150, 0x54B2D0, 0x54B280);

void CVehicle::ProcessControlInputs(unsigned char padNumber) {
    plugin::CallVirtualMethod<18, CVehicle *, unsigned char>(this, padNumber);
}

int addrof(CVehicle::GetComponentWorldPosition) = ADDRESS_BY_VERSION(0x4E4650, 0x4E4700, 0x4E4690);
int gaddrof(CVehicle::GetComponentWorldPosition) = GLOBAL_ADDRESS_BY_VERSION(0x4E4650, 0x4E4700, 0x4E4690);

void CVehicle::GetComponentWorldPosition(int component, CVector &pos) {
    plugin::CallVirtualMethod<19, CVehicle *, int, CVector &>(this, component, pos);
}

int addrof(CVehicle::IsComponentPresent) = ADDRESS_BY_VERSION(0x54B160, 0x54B2E0, 0x54B290);
int gaddrof(CVehicle::IsComponentPresent) = GLOBAL_ADDRESS_BY_VERSION(0x54B160, 0x54B2E0, 0x54B290);

bool CVehicle::IsComponentPresent(int component) {
    return plugin::CallVirtualMethodAndReturn<bool, 20, CVehicle *, int>(this, component);
}

int addrof(CVehicle::SetComponentRotation) = ADDRESS_BY_VERSION(0x542620, 0x542860, 0x542810);
int gaddrof(CVehicle::SetComponentRotation) = GLOBAL_ADDRESS_BY_VERSION(0x542620, 0x542860, 0x542810);

void CVehicle::SetComponentRotation(int component, CVector rotation) {
    plugin::CallVirtualMethod<21, CVehicle *, int, CVector>(this, component, rotation);
}

int addrof(CVehicle::OpenDoor) = ADDRESS_BY_VERSION(0x542630, 0x542870, 0x542820);
int gaddrof(CVehicle::OpenDoor) = GLOBAL_ADDRESS_BY_VERSION(0x542630, 0x542870, 0x542820);

void CVehicle::OpenDoor(int component, eDoors door, float angle) {
    plugin::CallVirtualMethod<22, CVehicle *, int, eDoors, float>(this, component, door, angle);
}

int addrof(CVehicle::ProcessOpenDoor) = ADDRESS_BY_VERSION(0x4DEAE0, 0x4DEB90, 0x4DEB20);
int gaddrof(CVehicle::ProcessOpenDoor) = GLOBAL_ADDRESS_BY_VERSION(0x4DEAE0, 0x4DEB90, 0x4DEB20);

void CVehicle::ProcessOpenDoor(unsigned int component, unsigned int anim, float angle) {
    plugin::CallVirtualMethod<23, CVehicle *, unsigned int, unsigned int, float>(this, component, anim, angle);
}

int addrof(CVehicle::IsDoorReady) = ADDRESS_BY_VERSION(0x4E03E0, 0x4E0490, 0x4E0420);
int gaddrof(CVehicle::IsDoorReady) = GLOBAL_ADDRESS_BY_VERSION(0x4E03E0, 0x4E0490, 0x4E0420);

bool CVehicle::IsDoorReady(eDoors door) {
    return plugin::CallVirtualMethodAndReturn<bool, 24, CVehicle *, eDoors>(this, door);
}

int addrof(CVehicle::IsDoorFullyOpen) = ADDRESS_BY_VERSION(0x4DE4E0, 0x4DE590, 0x4DE520);
int gaddrof(CVehicle::IsDoorFullyOpen) = GLOBAL_ADDRESS_BY_VERSION(0x4DE4E0, 0x4DE590, 0x4DE520);

bool CVehicle::IsDoorFullyOpen(eDoors door) {
    return plugin::CallVirtualMethodAndReturn<bool, 25, CVehicle *, eDoors>(this, door);
}

int addrof(CVehicle::IsDoorClosed) = ADDRESS_BY_VERSION(0x542640, 0x542880, 0x542830);
int gaddrof(CVehicle::IsDoorClosed) = GLOBAL_ADDRESS_BY_VERSION(0x542640, 0x542880, 0x542830);

bool CVehicle::IsDoorClosed(eDoors door) {
    return plugin::CallVirtualMethodAndReturn<bool, 26, CVehicle *, eDoors>(this, door);
}

int addrof(CVehicle::IsDoorMissing) = ADDRESS_BY_VERSION(0x4DE4F0, 0x4DE5A0, 0x4DE530);
int gaddrof(CVehicle::IsDoorMissing) = GLOBAL_ADDRESS_BY_VERSION(0x4DE4F0, 0x4DE5A0, 0x4DE530);

bool CVehicle::IsDoorMissing(eDoors door) {
    return plugin::CallVirtualMethodAndReturn<bool, 27, CVehicle *, eDoors>(this, door);
}

int addrof(CVehicle::RemoveRefsToVehicle) = ADDRESS_BY_VERSION(0x4B3D20, 0x4B3E10, 0x4B3DA0);
int gaddrof(CVehicle::RemoveRefsToVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x4B3D20, 0x4B3E10, 0x4B3DA0);

void CVehicle::RemoveRefsToVehicle(CEntity *entity) {
    plugin::CallVirtualMethod<28, CVehicle *, CEntity *>(this, entity);
}

int addrof(CVehicle::BlowUpCar) = ADDRESS_BY_VERSION(0x444B10, 0x444B10, 0x444B10);
int gaddrof(CVehicle::BlowUpCar) = GLOBAL_ADDRESS_BY_VERSION(0x444B10, 0x444B10, 0x444B10);

void CVehicle::BlowUpCar(CEntity *entity) {
    plugin::CallVirtualMethod<29, CVehicle *, CEntity *>(this, entity);
}

int addrof(CVehicle::SetUpWheelColModel) = ADDRESS_BY_VERSION(0x542650, 0x542890, 0x542840);
int gaddrof(CVehicle::SetUpWheelColModel) = GLOBAL_ADDRESS_BY_VERSION(0x542650, 0x542890, 0x542840);

bool CVehicle::SetUpWheelColModel(CColModel *colModel) {
    return plugin::CallVirtualMethodAndReturn<bool, 30, CVehicle *, CColModel *>(this, colModel);
}

int addrof(CVehicle::BurstTyre) = ADDRESS_BY_VERSION(0x542660, 0x5428A0, 0x542850);
int gaddrof(CVehicle::BurstTyre) = GLOBAL_ADDRESS_BY_VERSION(0x542660, 0x5428A0, 0x542850);

void CVehicle::BurstTyre(unsigned char wheel) {
    plugin::CallVirtualMethod<31, CVehicle *, unsigned char>(this, wheel);
}

int addrof(CVehicle::IsRoomForPedToLeaveCar) = ADDRESS_BY_VERSION(0x4C7330, 0x4C73D0, 0x4C7360);
int gaddrof(CVehicle::IsRoomForPedToLeaveCar) = GLOBAL_ADDRESS_BY_VERSION(0x4C7330, 0x4C73D0, 0x4C7360);

bool CVehicle::IsRoomForPedToLeaveCar(unsigned int component, CVector *doorOffset) {
    return plugin::CallVirtualMethodAndReturn<bool, 32, CVehicle *, unsigned int, CVector *>(this, component, doorOffset);
}

int addrof(CVehicle::GetHeightAboveRoad) = ADDRESS_BY_VERSION(0x417E60, 0x417E60, 0x417E60);
int gaddrof(CVehicle::GetHeightAboveRoad) = GLOBAL_ADDRESS_BY_VERSION(0x417E60, 0x417E60, 0x417E60);

float CVehicle::GetHeightAboveRoad() {
    return plugin::CallVirtualMethodAndReturn<float, 33, CVehicle *>(this);
}

int addrof(CVehicle::PlayCarHorn) = ADDRESS_BY_VERSION(0x415AF0, 0x415AF0, 0x415AF0);
int gaddrof(CVehicle::PlayCarHorn) = GLOBAL_ADDRESS_BY_VERSION(0x415AF0, 0x415AF0, 0x415AF0);

void CVehicle::PlayCarHorn() {
    plugin::CallVirtualMethod<34, CVehicle *>(this);
}

int addrof_o(CVehicle::AddPassenger, bool (CVehicle::*)(CPed *)) = ADDRESS_BY_VERSION(0x551D90, 0x551ED0, 0x551E80);
int gaddrof_o(CVehicle::AddPassenger, bool (CVehicle::*)(CPed *)) = GLOBAL_ADDRESS_BY_VERSION(0x551D90, 0x551ED0, 0x551E80);

bool CVehicle::AddPassenger(CPed *passenger) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CVehicle *, CPed *>(gaddrof_o(CVehicle::AddPassenger, bool (CVehicle::*)(CPed *)), this, passenger);
}

int addrof_o(CVehicle::AddPassenger, bool (CVehicle::*)(CPed *, unsigned char)) = ADDRESS_BY_VERSION(0x551E10, 0x551F50, 0x551F00);
int gaddrof_o(CVehicle::AddPassenger, bool (CVehicle::*)(CPed *, unsigned char)) = GLOBAL_ADDRESS_BY_VERSION(0x551E10, 0x551F50, 0x551F00);

bool CVehicle::AddPassenger(CPed *passenger, unsigned char number) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CVehicle *, CPed *, unsigned char>(gaddrof_o(CVehicle::AddPassenger, bool (CVehicle::*)(CPed *, unsigned char)), this, passenger, number);
}

int addrof(CVehicle::CanBeDeleted) = ADDRESS_BY_VERSION(0x5511B0, 0x5512F0, 0x5512A0);
int gaddrof(CVehicle::CanBeDeleted) = GLOBAL_ADDRESS_BY_VERSION(0x5511B0, 0x5512F0, 0x5512A0);

bool CVehicle::CanBeDeleted() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CVehicle *>(gaddrof(CVehicle::CanBeDeleted), this);
}

int addrof(CVehicle::CanPedEnterCar) = ADDRESS_BY_VERSION(0x5522F0, 0x552430, 0x5523E0);
int gaddrof(CVehicle::CanPedEnterCar) = GLOBAL_ADDRESS_BY_VERSION(0x5522F0, 0x552430, 0x5523E0);

bool CVehicle::CanPedEnterCar() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CVehicle *>(gaddrof(CVehicle::CanPedEnterCar), this);
}

int addrof(CVehicle::CanPedExitCar) = ADDRESS_BY_VERSION(0x5523C0, 0x552500, 0x5524B0);
int gaddrof(CVehicle::CanPedExitCar) = GLOBAL_ADDRESS_BY_VERSION(0x5523C0, 0x552500, 0x5524B0);

bool CVehicle::CanPedExitCar() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CVehicle *>(gaddrof(CVehicle::CanPedExitCar), this);
}

int addrof(CVehicle::CanPedOpenLocks) = ADDRESS_BY_VERSION(0x5522A0, 0x5523E0, 0x552390);
int gaddrof(CVehicle::CanPedOpenLocks) = GLOBAL_ADDRESS_BY_VERSION(0x5522A0, 0x5523E0, 0x552390);

bool CVehicle::CanPedOpenLocks(CPed *ped) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CVehicle *, CPed *>(gaddrof(CVehicle::CanPedOpenLocks), this, ped);
}

int addrof(CVehicle::CarHasRoof) = ADDRESS_BY_VERSION(0x552B70, 0x552CB0, 0x552C60);
int gaddrof(CVehicle::CarHasRoof) = GLOBAL_ADDRESS_BY_VERSION(0x552B70, 0x552CB0, 0x552C60);

bool CVehicle::CarHasRoof() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CVehicle *>(gaddrof(CVehicle::CarHasRoof), this);
}

int addrof(CVehicle::ChangeLawEnforcerState) = ADDRESS_BY_VERSION(0x552820, 0x552960, 0x552910);
int gaddrof(CVehicle::ChangeLawEnforcerState) = GLOBAL_ADDRESS_BY_VERSION(0x552820, 0x552960, 0x552910);

void CVehicle::ChangeLawEnforcerState(unsigned char enable) {
    plugin::CallMethodDynGlobal<CVehicle *, unsigned char>(gaddrof(CVehicle::ChangeLawEnforcerState), this, enable);
}

int addrof(CVehicle::DoFixedMachineGuns) = ADDRESS_BY_VERSION(0x564300, 0x564430, 0x5643E0);
int gaddrof(CVehicle::DoFixedMachineGuns) = GLOBAL_ADDRESS_BY_VERSION(0x564300, 0x564430, 0x5643E0);

void CVehicle::DoFixedMachineGuns() {
    plugin::CallMethodDynGlobal<CVehicle *>(gaddrof(CVehicle::DoFixedMachineGuns), this);
}

int addrof(CVehicle::ExtinguishCarFire) = ADDRESS_BY_VERSION(0x552AF0, 0x552C30, 0x552BE0);
int gaddrof(CVehicle::ExtinguishCarFire) = GLOBAL_ADDRESS_BY_VERSION(0x552AF0, 0x552C30, 0x552BE0);

void CVehicle::ExtinguishCarFire() {
    plugin::CallMethodDynGlobal<CVehicle *>(gaddrof(CVehicle::ExtinguishCarFire), this);
}

int addrof(CVehicle::FlyingControl) = ADDRESS_BY_VERSION(0x552BB0, 0x552CF0, 0x552CA0);
int gaddrof(CVehicle::FlyingControl) = GLOBAL_ADDRESS_BY_VERSION(0x552BB0, 0x552CF0, 0x552CA0);

void CVehicle::FlyingControl(eFlightModel flightModel) {
    plugin::CallMethodDynGlobal<CVehicle *, eFlightModel>(gaddrof(CVehicle::FlyingControl), this, flightModel);
}

int addrof(CVehicle::InflictDamage) = ADDRESS_BY_VERSION(0x551950, 0x551A90, 0x551A40);
int gaddrof(CVehicle::InflictDamage) = GLOBAL_ADDRESS_BY_VERSION(0x551950, 0x551A90, 0x551A40);

void CVehicle::InflictDamage(CEntity *entity, eWeaponType weaponType, float damage) {
    plugin::CallMethodDynGlobal<CVehicle *, CEntity *, eWeaponType, float>(gaddrof(CVehicle::InflictDamage), this, entity, weaponType, damage);
}

int addrof(CVehicle::IsLawEnforcementVehicle) = ADDRESS_BY_VERSION(0x552880, 0x5529C0, 0x552970);
int gaddrof(CVehicle::IsLawEnforcementVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x552880, 0x5529C0, 0x552970);

bool CVehicle::IsLawEnforcementVehicle() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CVehicle *>(gaddrof(CVehicle::IsLawEnforcementVehicle), this);
}

int addrof(CVehicle::IsOnItsSide) = ADDRESS_BY_VERSION(0x552260, 0x5523A0, 0x552350);
int gaddrof(CVehicle::IsOnItsSide) = GLOBAL_ADDRESS_BY_VERSION(0x552260, 0x5523A0, 0x552350);

bool CVehicle::IsOnItsSide() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CVehicle *>(gaddrof(CVehicle::IsOnItsSide), this);
}

int addrof(CVehicle::IsSphereTouchingVehicle) = ADDRESS_BY_VERSION(0x552620, 0x552760, 0x552710);
int gaddrof(CVehicle::IsSphereTouchingVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x552620, 0x552760, 0x552710);

bool CVehicle::IsSphereTouchingVehicle(float x, float y, float z, float radius) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CVehicle *, float, float, float, float>(gaddrof(CVehicle::IsSphereTouchingVehicle), this, x, y, z, radius);
}

int addrof(CVehicle::IsUpsideDown) = ADDRESS_BY_VERSION(0x552230, 0x552370, 0x552320);
int gaddrof(CVehicle::IsUpsideDown) = GLOBAL_ADDRESS_BY_VERSION(0x552230, 0x552370, 0x552320);

bool CVehicle::IsUpsideDown() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CVehicle *>(gaddrof(CVehicle::IsUpsideDown), this);
}

int addrof(CVehicle::IsVehicleNormal) = ADDRESS_BY_VERSION(0x5527E0, 0x552920, 0x5528D0);
int gaddrof(CVehicle::IsVehicleNormal) = GLOBAL_ADDRESS_BY_VERSION(0x5527E0, 0x552920, 0x5528D0);

bool CVehicle::IsVehicleNormal() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CVehicle *>(gaddrof(CVehicle::IsVehicleNormal), this);
}

int addrof(CVehicle::ProcessCarAlarm) = ADDRESS_BY_VERSION(0x5525A0, 0x5526E0, 0x552690);
int gaddrof(CVehicle::ProcessCarAlarm) = GLOBAL_ADDRESS_BY_VERSION(0x5525A0, 0x5526E0, 0x552690);

void CVehicle::ProcessCarAlarm() {
    plugin::CallMethodDynGlobal<CVehicle *>(gaddrof(CVehicle::ProcessCarAlarm), this);
}

int addrof(CVehicle::ProcessDelayedExplosion) = ADDRESS_BY_VERSION(0x551C90, 0x551DD0, 0x551D80);
int gaddrof(CVehicle::ProcessDelayedExplosion) = GLOBAL_ADDRESS_BY_VERSION(0x551C90, 0x551DD0, 0x551D80);

void CVehicle::ProcessDelayedExplosion() {
    plugin::CallMethodDynGlobal<CVehicle *>(gaddrof(CVehicle::ProcessDelayedExplosion), this);
}

int addrof(CVehicle::ProcessWheel) = ADDRESS_BY_VERSION(0x5512E0, 0x551420, 0x5513D0);
int gaddrof(CVehicle::ProcessWheel) = GLOBAL_ADDRESS_BY_VERSION(0x5512E0, 0x551420, 0x5513D0);

void CVehicle::ProcessWheel(CVector &wheelFwd, CVector &wheelRight, CVector &wheelContactSpeed, CVector &wheelContactPoint, int wheelsOnGround, float thrust, float brake, float adhesion, char wheelId, float *wheelSpeed, tWheelState *wheelState, unsigned short wheelStatus) {
    plugin::CallMethodDynGlobal<CVehicle *, CVector &, CVector &, CVector &, CVector &, int, float, float, float, char, float *, tWheelState *, unsigned short>(gaddrof(CVehicle::ProcessWheel), this, wheelFwd, wheelRight, wheelContactSpeed, wheelContactPoint, wheelsOnGround, thrust, brake, adhesion, wheelId, wheelSpeed, wheelState, wheelStatus);
}

int addrof(CVehicle::ProcessWheelRotation) = ADDRESS_BY_VERSION(0x551280, 0x5513C0, 0x551370);
int gaddrof(CVehicle::ProcessWheelRotation) = GLOBAL_ADDRESS_BY_VERSION(0x551280, 0x5513C0, 0x551370);

float CVehicle::ProcessWheelRotation(tWheelState state, CVector const &fwd, CVector const &speed, float radius) {
    return plugin::CallMethodAndReturnDynGlobal<float, CVehicle *, tWheelState, CVector const &, CVector const &, float>(gaddrof(CVehicle::ProcessWheelRotation), this, state, fwd, speed, radius);
}

int addrof(CVehicle::RemoveDriver) = ADDRESS_BY_VERSION(0x5520A0, 0x5521E0, 0x552190);
int gaddrof(CVehicle::RemoveDriver) = GLOBAL_ADDRESS_BY_VERSION(0x5520A0, 0x5521E0, 0x552190);

void CVehicle::RemoveDriver() {
    plugin::CallMethodDynGlobal<CVehicle *>(gaddrof(CVehicle::RemoveDriver), this);
}

int addrof(CVehicle::RemovePassenger) = ADDRESS_BY_VERSION(0x551EB0, 0x551FF0, 0x551FA0);
int gaddrof(CVehicle::RemovePassenger) = GLOBAL_ADDRESS_BY_VERSION(0x551EB0, 0x551FF0, 0x551FA0);

void CVehicle::RemovePassenger(CPed *passenger) {
    plugin::CallMethodDynGlobal<CVehicle *, CPed *>(gaddrof(CVehicle::RemovePassenger), this, passenger);
}

int addrof(CVehicle::SetDriver) = ADDRESS_BY_VERSION(0x551F20, 0x552060, 0x552010);
int gaddrof(CVehicle::SetDriver) = GLOBAL_ADDRESS_BY_VERSION(0x551F20, 0x552060, 0x552010);

void CVehicle::SetDriver(CPed *driver) {
    plugin::CallMethodDynGlobal<CVehicle *, CPed *>(gaddrof(CVehicle::SetDriver), this, driver);
}

int addrof(CVehicle::SetUpDriver) = ADDRESS_BY_VERSION(0x5520C0, 0x552200, 0x5521B0);
int gaddrof(CVehicle::SetUpDriver) = GLOBAL_ADDRESS_BY_VERSION(0x5520C0, 0x552200, 0x5521B0);

CPed *CVehicle::SetUpDriver() {
    return plugin::CallMethodAndReturnDynGlobal<CPed *, CVehicle *>(gaddrof(CVehicle::SetUpDriver), this);
}

int addrof(CVehicle::SetupPassenger) = ADDRESS_BY_VERSION(0x552160, 0x5522A0, 0x552250);
int gaddrof(CVehicle::SetupPassenger) = GLOBAL_ADDRESS_BY_VERSION(0x552160, 0x5522A0, 0x552250);

CPed *CVehicle::SetupPassenger(int number) {
    return plugin::CallMethodAndReturnDynGlobal<CPed *, CVehicle *, int>(gaddrof(CVehicle::SetupPassenger), this, number);
}

int addrof(CVehicle::ShufflePassengersToMakeSpace) = ADDRESS_BY_VERSION(0x5528A0, 0x5529E0, 0x552990);
int gaddrof(CVehicle::ShufflePassengersToMakeSpace) = GLOBAL_ADDRESS_BY_VERSION(0x5528A0, 0x5529E0, 0x552990);

bool CVehicle::ShufflePassengersToMakeSpace() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CVehicle *>(gaddrof(CVehicle::ShufflePassengersToMakeSpace), this);
}

int addrof(CVehicle::UsesSiren) = ADDRESS_BY_VERSION(0x552200, 0x552340, 0x5522F0);
int gaddrof(CVehicle::UsesSiren) = GLOBAL_ADDRESS_BY_VERSION(0x552200, 0x552340, 0x5522F0);

bool CVehicle::UsesSiren(unsigned int vehicleModel) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CVehicle *, unsigned int>(gaddrof(CVehicle::UsesSiren), this, vehicleModel);
}

int addrof(DestroyVehicleAndDriverAndPassengers) = ADDRESS_BY_VERSION(0x552760, 0x5528A0, 0x552850);
int gaddrof(DestroyVehicleAndDriverAndPassengers) = GLOBAL_ADDRESS_BY_VERSION(0x552760, 0x5528A0, 0x552850);

void DestroyVehicleAndDriverAndPassengers(CVehicle *vehicle) {
    plugin::CallDynGlobal<CVehicle *>(gaddrof(DestroyVehicleAndDriverAndPassengers), vehicle);
}
