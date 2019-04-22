/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CVehicle.h"

bool& CVehicle::m_bDisableMouseSteering = *(bool *)0x60252C;
bool& CVehicle::bWheelsOnlyCheat = *(bool *)0x95CD78;
bool& CVehicle::bAllDodosCheat = *(bool *)0x95CD75;
bool& CVehicle::bCheat3 = *(bool *)0x95CD66;
bool& CVehicle::bCheat4 = *(bool *)0x95CD65;
bool& CVehicle::bCheat5 = *(bool *)0x95CD64;
bool& CVehicle::bAlreadySkidding = *(bool *)0x64D062;
bool& CVehicle::bBraking = *(bool *)0x64D060;
bool& CVehicle::bDriving = *(bool *)0x64D061;

float &fBurstTyreMod = *(float *)0x602538;
float &fBurstSpeedMax = *(float *)0x60253C;
float &fSpeedResistanceY  = *(float *)0x6025A4;
float &fSpeedResistanceZ  = *(float *)0x6025A8;
float &fThrustVar         = *(float *)0x6025AC;
float &fRotorFallOff      = *(float *)0x6025B0;
float &fStabiliseVar      = *(float *)0x6025B4;
float &fPitchVar          = *(float *)0x6025B8;
float &fRollVar           = *(float *)0x6025BC;
float &fYawVar            = *(float *)0x6025C0;
float &fPitchBrake        = *(float *)0x6025C4;
float &fRollBrake         = *(float *)0x6025C8;
float &fSpinSpeedRes      = *(float *)0x6025CC;
float &fRCAeroThrust      = *(float *)0x6025D0;
float &fRCPropFallOff     = *(float *)0x6025D4;
float &fRCYawMult         = *(float *)0x6025D8;
float &fRCRudderMult      = *(float *)0x6025DC;
float &fRCSideSlipMult    = *(float *)0x6025E0;
float &fRCRollMult        = *(float *)0x6025E4;
float &fRCRollStabilise   = *(float *)0x6025E8;
float &fRCPitchMult       = *(float *)0x6025EC;
float &fRCTailMult        = *(float *)0x6025F0;
float &fRCFormLiftMult    = *(float *)0x6025F4;
float &fRCAttackLiftMult  = *(float *)0x6025F8;
float &fSeaThrust         = *(float *)0x6025FC;
float &fSeaPropFallOff    = *(float *)0x602600;
float &fSeaYawMult        = *(float *)0x602604;
float &fSeaRudderMult     = *(float *)0x602608;
float &fSeaSideSlipMult   = *(float *)0x60260C;
float &fSeaRollMult       = *(float *)0x602610;
float &fSeaRollStabilise  = *(float *)0x602614;
float &fSeaPitchMult      = *(float *)0x602618;
float &fSeaTailMult       = *(float *)0x60261C;
float &fSeaFormLiftMult   = *(float *)0x602620;
float &fSeaAttackLiftMult = *(float *)0x602624;

// Converted from void CVehicle::ProcessControlInputs(uchar playerNum) 0x54B150
void CVehicle::ProcessControlInputs(unsigned char playerNum) {
    plugin::CallVirtualMethod<18, CVehicle *, unsigned char>(this, playerNum);
}

// Converted from void CVehicle::GetComponentWorldPosition(int componentId, CVector &posnOut) 0x4E4650
void CVehicle::GetComponentWorldPosition(int componentId, CVector& posnOut) {
    plugin::CallVirtualMethod<19, CVehicle *, int, CVector&>(this, componentId, posnOut);
}

// Converted from bool CVehicle::IsComponentPresent(int componentId) 0x54B160
bool CVehicle::IsComponentPresent(int componentId) {
    return plugin::CallVirtualMethodAndReturn<bool, 20, CVehicle *, int>(this, componentId);
}

// Converted from void CVehicle::SetComponentRotation(int componentId, CVector rotation) 0x542620
void CVehicle::SetComponentRotation(int componentId, CVector rotation) {
    plugin::CallVirtualMethod<21, CVehicle *, int, CVector>(this, componentId, rotation);
}

// Converted from void CVehicle::OpenDoor(int componentId, eDoors door, float doorOpenRatio) 0x542630
void CVehicle::OpenDoor(int componentId, eDoors door, float doorOpenRatio) {
    plugin::CallVirtualMethod<22, CVehicle *, int, eDoors, float>(this, componentId, door, doorOpenRatio);
}

// Converted from void CVehicle::ProcessOpenDoor(uint nodeIndex, uint, float angle) 0x4DEAE0
void CVehicle::ProcessOpenDoor(unsigned int nodeIndex, unsigned int arg1, float angle) {
    plugin::CallVirtualMethod<23, CVehicle *, unsigned int, unsigned int, float>(this, nodeIndex, arg1, angle);
}

// Converted from bool CVehicle::IsDoorReady(eDoors door) 0x4E03E0
bool CVehicle::IsDoorReady(eDoors door) {
    return plugin::CallVirtualMethodAndReturn<bool, 24, CVehicle *, eDoors>(this, door);
}

// Converted from bool CVehicle::IsDoorFullyOpen(eDoors door) 0x4DE4E0
bool CVehicle::IsDoorFullyOpen(eDoors door) {
    return plugin::CallVirtualMethodAndReturn<bool, 25, CVehicle *, eDoors>(this, door);
}

// Converted from bool CVehicle::IsDoorClosed(eDoors door) 0x542640
bool CVehicle::IsDoorClosed(eDoors door) {
    return plugin::CallVirtualMethodAndReturn<bool, 26, CVehicle *, eDoors>(this, door);
}

// Converted from bool CVehicle::IsDoorMissing(eDoors door) 0x4DE4F0
bool CVehicle::IsDoorMissing(eDoors door) {
    return plugin::CallVirtualMethodAndReturn<bool, 27, CVehicle *, eDoors>(this, door);
}

// Converted from void CVehicle::RemoveRefsToVehicle(CEntity *entity) 0x4B3D20
void CVehicle::RemoveRefsToVehicle(CEntity* entity) {
    plugin::CallVirtualMethod<28, CVehicle *, CEntity*>(this, entity);
}

// Converted from void CVehicle::BlowUpCar(CEntity *damager) 0x444B10
void CVehicle::BlowUpCar(CEntity* damager) {
    plugin::CallVirtualMethod<29, CVehicle *, CEntity*>(this, damager);
}

// Converted from bool CVehicle::SetUpWheelColModel(CColModel *wheelCol) 0x542650
bool CVehicle::SetUpWheelColModel(CColModel* wheelCol) {
    return plugin::CallVirtualMethodAndReturn<bool, 30, CVehicle *, CColModel*>(this, wheelCol);
}

// Converted from void CVehicle::BurstTyre(uchar tyreComponentId) 0x542660
void CVehicle::BurstTyre(unsigned char tyreComponentId) {
    plugin::CallVirtualMethod<31, CVehicle *, unsigned char>(this, tyreComponentId);
}

// Converted from bool CVehicle::IsRoomForPedToLeaveCar(uint door, CVector * point) 0x4C7330
bool CVehicle::IsRoomForPedToLeaveCar(unsigned int door, CVector* point) {
    return plugin::CallVirtualMethodAndReturn<bool, 32, CVehicle *, unsigned int, CVector*>(this, door, point);
}

// Converted from float CVehicle::GetHeightAboveRoad(void) 0x417E60
float CVehicle::GetHeightAboveRoad() {
    return plugin::CallVirtualMethodAndReturn<float, 33, CVehicle *>(this);
}

// Converted from void CVehicle::PlayCarHorn(void) 0x415AF0
void CVehicle::PlayCarHorn() {
    plugin::CallVirtualMethod<34, CVehicle *>(this);
}

// Converted from thiscall bool CVehicle::AddPassenger(CPed *passenger) 0x551D90
bool CVehicle::AddPassenger(CPed* passenger) {
    return plugin::CallMethodAndReturn<bool, 0x551D90, CVehicle *, CPed*>(this, passenger);
}

// Converted from thiscall bool CVehicle::AddPassenger(CPed *passenger, uchar seatNumber) 0x551E10
bool CVehicle::AddPassenger(CPed* passenger, unsigned char seatNumber) {
    return plugin::CallMethodAndReturn<bool, 0x551E10, CVehicle *, CPed*, unsigned char>(this, passenger, seatNumber);
}

// Converted from thiscall bool CVehicle::CanBeDeleted(void) 0x5511B0
bool CVehicle::CanBeDeleted() {
    return plugin::CallMethodAndReturn<bool, 0x5511B0, CVehicle *>(this);
}

// Converted from thiscall bool CVehicle::CanPedEnterCar(void) 0x5522F0
bool CVehicle::CanPedEnterCar() {
    return plugin::CallMethodAndReturn<bool, 0x5522F0, CVehicle *>(this);
}

// Converted from thiscall bool CVehicle::CanPedExitCar(void) 0x5523C0
bool CVehicle::CanPedExitCar() {
    return plugin::CallMethodAndReturn<bool, 0x5523C0, CVehicle *>(this);
}

// Converted from thiscall bool CVehicle::CanPedOpenLocks(CPed const*ped) 0x5522A0
bool CVehicle::CanPedOpenLocks(CPed const* ped) {
    return plugin::CallMethodAndReturn<bool, 0x5522A0, CVehicle *, CPed const*>(this, ped);
}

// Converted from thiscall bool CVehicle::CarHasRoof(void) 0x552B70
bool CVehicle::CarHasRoof() {
    return plugin::CallMethodAndReturn<bool, 0x552B70, CVehicle *>(this);
}

// Converted from thiscall void CVehicle::ChangeLawEnforcerState(uchar state) 0x552820
void CVehicle::ChangeLawEnforcerState(unsigned char state) {
    plugin::CallMethod<0x552820, CVehicle *, unsigned char>(this, state);
}

// Converted from thiscall void CVehicle::DoFixedMachineGuns(void) 0x564300
void CVehicle::DoFixedMachineGuns() {
    plugin::CallMethod<0x564300, CVehicle *>(this);
}

// Converted from thiscall void CVehicle::ExtinguishCarFire(void) 0x552AF0
void CVehicle::ExtinguishCarFire() {
    plugin::CallMethod<0x552AF0, CVehicle *>(this);
}

// Converted from thiscall void CVehicle::FlyingControl(eFlightModel flightModel) 0x552BB0
void CVehicle::FlyingControl(eFlightModel flightModel) {
    plugin::CallMethod<0x552BB0, CVehicle *, eFlightModel>(this, flightModel);
}

// Converted from thiscall void CVehicle::InflictDamage(CEntity *damager, eWeaponType weapon, float intensity, CVector coords) 0x551950
void CVehicle::InflictDamage(CEntity* damager, eWeaponType weapon, float intensity, CVector coords) {
    plugin::CallMethod<0x551950, CVehicle *, CEntity*, eWeaponType, float, CVector>(this, damager, weapon, intensity, coords);
}

// Converted from thiscall bool CVehicle::IsLawEnforcementVehicle(void) 0x552880
bool CVehicle::IsLawEnforcementVehicle() {
    return plugin::CallMethodAndReturn<bool, 0x552880, CVehicle *>(this);
}

// Converted from thiscall bool CVehicle::IsOnItsSide(void) 0x552260
bool CVehicle::IsOnItsSide() {
    return plugin::CallMethodAndReturn<bool, 0x552260, CVehicle *>(this);
}

// Converted from thiscall bool CVehicle::IsSphereTouchingVehicle(float x, float y, float z, float radius) 0x552620
bool CVehicle::IsSphereTouchingVehicle(float x, float y, float z, float radius) {
    return plugin::CallMethodAndReturn<bool, 0x552620, CVehicle *, float, float, float, float>(this, x, y, z, radius);
}

// Converted from thiscall bool CVehicle::IsUpsideDown(void) 0x552230
bool CVehicle::IsUpsideDown() {
    return plugin::CallMethodAndReturn<bool, 0x552230, CVehicle *>(this);
}

// Converted from thiscall bool CVehicle::IsVehicleNormal(void) 0x5527E0
bool CVehicle::IsVehicleNormal() {
    return plugin::CallMethodAndReturn<bool, 0x5527E0, CVehicle *>(this);
}

// Converted from thiscall void CVehicle::ProcessCarAlarm(void) 0x5525A0
void CVehicle::ProcessCarAlarm() {
    plugin::CallMethod<0x5525A0, CVehicle *>(this);
}

// Converted from thiscall void CVehicle::ProcessDelayedExplosion(void) 0x551C90
void CVehicle::ProcessDelayedExplosion() {
    plugin::CallMethod<0x551C90, CVehicle *>(this);
}

// Converted from thiscall void CVehicle::ProcessWheel(CVector &, CVector &, CVector &, CVector &, int, float, float, float, char, float *, tWheelState *, ushort) 0x5512E0
void CVehicle::ProcessWheel(CVector& arg0, CVector& arg1, CVector& arg2, CVector& arg3, int arg4, float arg5, float arg6, float arg7, char arg8, float* arg9, tWheelState* arg10, unsigned short arg11) {
    plugin::CallMethod<0x5512E0, CVehicle *, CVector&, CVector&, CVector&, CVector&, int, float, float, float, char, float*, tWheelState*, unsigned short>(this, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}

// Converted from thiscall float CVehicle::ProcessWheelRotation(tWheelState wheelState, CVector const&, CVector const&, float) 0x551280
float CVehicle::ProcessWheelRotation(tWheelState wheelState, CVector const& arg1, CVector const& arg2, float arg3) {
    return plugin::CallMethodAndReturn<float, 0x551280, CVehicle *, tWheelState, CVector const&, CVector const&, float>(this, wheelState, arg1, arg2, arg3);
}

// Converted from thiscall void CVehicle::RemoveDriver(void) 0x5520A0
void CVehicle::RemoveDriver() {
    plugin::CallMethod<0x5520A0, CVehicle *>(this);
}

// Converted from thiscall void CVehicle::RemovePassenger(CPed *passenger) 0x551EB0
void CVehicle::RemovePassenger(CPed* passenger) {
    plugin::CallMethod<0x551EB0, CVehicle *, CPed*>(this, passenger);
}

// Converted from thiscall void CVehicle::SetDriver(CPed * driver) 0x551F20
void CVehicle::SetDriver(CPed* driver) {
    plugin::CallMethod<0x551F20, CVehicle *, CPed*>(this, driver);
}

// Converted from thiscall CPed* CVehicle::SetUpDriver(void) 0x5520C0
CPed* CVehicle::SetUpDriver() {
    return plugin::CallMethodAndReturn<CPed*, 0x5520C0, CVehicle *>(this);
}

// Converted from thiscall CPed* CVehicle::SetupPassenger(int seatNumber) 0x552160
CPed* CVehicle::SetupPassenger(int seatNumber) {
    return plugin::CallMethodAndReturn<CPed*, 0x552160, CVehicle *, int>(this, seatNumber);
}

// Converted from thiscall char CVehicle::ShufflePassengersToMakeSpace(void) 0x5528A0
char CVehicle::ShufflePassengersToMakeSpace() {
    return plugin::CallMethodAndReturn<char, 0x5528A0, CVehicle *>(this);
}

// Converted from thiscall bool CVehicle::UsesSiren(void) 0x552200
bool CVehicle::UsesSiren() {
    return plugin::CallMethodAndReturn<bool, 0x552200, CVehicle *>(this);
}

// Converted from cdecl void CVehicle::operator delete(void *data) 0x551150
void CVehicle::operator delete(void* data) {
    plugin::Call<0x551150, void*>(data);
}

// Converted from cdecl void* CVehicle::operator new(uint size) 0x551120
void* CVehicle::operator new(unsigned int size) {
    return plugin::CallAndReturn<void*, 0x551120, unsigned int>(size);
}

// Converted from cdecl void* CVehicle::operator new(uint size, int) 0x551130
void* CVehicle::operator new(unsigned int size, int arg1) {
    return plugin::CallAndReturn<void*, 0x551130, unsigned int, int>(size, arg1);
}