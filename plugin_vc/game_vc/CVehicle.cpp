/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CVehicle.h"


float &fBurstTyreMod = *(float *)0x69C614;
float &fBurstSpeedMax = *(float *)0x69C618;
float &fBurstBikeTyreMod = *(float *)0x69C61C;
float &fBurstBikeSpeedMax = *(float *)0x69C620;
float &fTweakBikeWheelTurnForce = *(float *)0x69C624;
float &ROTOR_SEMI_THICKNESS = *(float *)0x69C628;
float &ROTOR_TURN_SPEED = *(float *)0x69C62C;
float &ROTOR_DISGUARD_MULT = *(float *)0x69C630;
float &ROTOR_COL_ELASTICITY = *(float *)0x69C634;
float &ROTOR_DEFAULT_DAMAGE = *(float *)0x69C63C;
float &ROTOR_COL_TURNMULT = *(float *)0x69C638;

// Converted from void CVehicle::ProcessControlInputs(uchar playerNum) 0x69CA3C
void CVehicle::ProcessControlInputs(unsigned char playerNum) {
    plugin::CallVirtualMethod<18, CVehicle *, unsigned char>(this, playerNum);
}

// Converted from void CVehicle::GetComponentWorldPosition(int componentId, CVector &posnOut) 0x69CA40
void CVehicle::GetComponentWorldPosition(int componentId, CVector& posnOut) {
    plugin::CallVirtualMethod<19, CVehicle *, int, CVector&>(this, componentId, posnOut);
}

// Converted from bool CVehicle::IsComponentPresent(int componentId) 0x69CA44
bool CVehicle::IsComponentPresent(int componentId) {
    return plugin::CallVirtualMethodAndReturn<bool, 20, CVehicle *, int>(this, componentId);
}

// Converted from void CVehicle::SetComponentRotation(int componentId, CVector) 0x69CA48
void CVehicle::SetComponentRotation(int componentId, CVector arg1) {
    plugin::CallVirtualMethod<21, CVehicle *, int, CVector>(this, componentId, arg1);
}

// Converted from void CVehicle::OpenDoor(int componentId, eDoors door, float doorOpenRatio) 0x69CA4C
void CVehicle::OpenDoor(int componentId, eDoors door, float doorOpenRatio) {
    plugin::CallVirtualMethod<22, CVehicle *, int, eDoors, float>(this, componentId, door, doorOpenRatio);
}

// Converted from void CVehicle::ProcessOpenDoor(uint, uint, float) 0x69CA50
void CVehicle::ProcessOpenDoor(unsigned int arg0, unsigned int arg1, float arg2) {
    plugin::CallVirtualMethod<23, CVehicle *, unsigned int, unsigned int, float>(this, arg0, arg1, arg2);
}

// Converted from bool CVehicle::IsDoorReady(eDoors door) 0x69CA54
bool CVehicle::IsDoorReady(eDoors door) {
    return plugin::CallVirtualMethodAndReturn<bool, 24, CVehicle *, eDoors>(this, door);
}

// Converted from bool CVehicle::IsDoorFullyOpen(eDoors door) 0x69CA58
bool CVehicle::IsDoorFullyOpen(eDoors door) {
    return plugin::CallVirtualMethodAndReturn<bool, 25, CVehicle *, eDoors>(this, door);
}

// Converted from bool CVehicle::IsDoorClosed(eDoors door) 0x69CA5C
bool CVehicle::IsDoorClosed(eDoors door) {
    return plugin::CallVirtualMethodAndReturn<bool, 26, CVehicle *, eDoors>(this, door);
}

// Converted from bool CVehicle::IsDoorMissing(eDoors door) 0x69CA60
bool CVehicle::IsDoorMissing(eDoors door) {
    return plugin::CallVirtualMethodAndReturn<bool, 27, CVehicle *, eDoors>(this, door);
}

// Converted from bool CVehicle::IsDoorReady(uint door) 0x69CA64
bool CVehicle::IsDoorReady(unsigned int door) {
    return plugin::CallVirtualMethodAndReturn<bool, 28, CVehicle *, unsigned int>(this, door);
}

// Converted from bool CVehicle::IsDoorMissing(uint door) 0x69CA68
bool CVehicle::IsDoorMissing(unsigned int door) {
    return plugin::CallVirtualMethodAndReturn<bool, 29, CVehicle *, unsigned int>(this, door);
}

// Converted from bool CVehicle::IsOpenTopCar(void) 0x69CA6C
bool CVehicle::IsOpenTopCar() {
    return plugin::CallVirtualMethodAndReturn<bool, 30, CVehicle *>(this);
}

// Converted from void CVehicle::RemoveRefsToVehicle(CEntity *entity) 0x69CA70
void CVehicle::RemoveRefsToVehicle(CEntity* entity) {
    plugin::CallVirtualMethod<31, CVehicle *, CEntity*>(this, entity);
}

// Converted from void CVehicle::BlowUpCar(CEntity *damager) 0x69CA74
void CVehicle::BlowUpCar(CEntity* damager) {
    plugin::CallVirtualMethod<32, CVehicle *, CEntity*>(this, damager);
}

// Converted from bool CVehicle::SetUpWheelColModel(CColModel *wheelCol) 0x69CA78
bool CVehicle::SetUpWheelColModel(CColModel* wheelCol) {
    return plugin::CallVirtualMethodAndReturn<bool, 33, CVehicle *, CColModel*>(this, wheelCol);
}

// Converted from bool CVehicle::BurstTyre(uchar tyreComponentId, bool bPhysicalEffect) 0x69CA7C
bool CVehicle::BurstTyre(unsigned char tyreComponentId, bool bPhysicalEffect) {
    return plugin::CallVirtualMethodAndReturn<bool, 34, CVehicle *, unsigned char, bool>(this, tyreComponentId, bPhysicalEffect);
}

// Converted from bool CVehicle::IsRoomForPedToLeaveCar(uint, CVector *) 0x69CA80
bool CVehicle::IsRoomForPedToLeaveCar(unsigned int arg0, CVector* arg1) {
    return plugin::CallVirtualMethodAndReturn<bool, 35, CVehicle *, unsigned int, CVector*>(this, arg0, arg1);
}

// Converted from bool CVehicle::IsClearToDriveAway(void) 0x69CA84
bool CVehicle::IsClearToDriveAway() {
    return plugin::CallVirtualMethodAndReturn<bool, 36, CVehicle *>(this);
}

// Converted from float CVehicle::GetHeightAboveRoad(void) 0x69CA88
float CVehicle::GetHeightAboveRoad() {
    return plugin::CallVirtualMethodAndReturn<float, 37, CVehicle *>(this);
}

// Converted from void CVehicle::PlayCarHorn(void) 0x69CA8C
void CVehicle::PlayCarHorn() {
    plugin::CallVirtualMethod<38, CVehicle *>(this);
}

// Converted from thiscall void CVehicle::ActivateBomb(void) 0x5B79E0
void CVehicle::ActivateBomb() {
    plugin::CallMethod<0x5B79E0, CVehicle *>(this);
}

// Converted from thiscall void CVehicle::ActivateBombWhenEntered(void) 0x5B7950
void CVehicle::ActivateBombWhenEntered() {
    plugin::CallMethod<0x5B7950, CVehicle *>(this);
}

// Converted from thiscall bool CVehicle::AddPassenger(CPed *passenger) 0x5B8E60
bool CVehicle::AddPassenger(CPed* passenger) {
    return plugin::CallMethodAndReturn<bool, 0x5B8E60, CVehicle *, CPed*>(this, passenger);
}

// Converted from thiscall bool CVehicle::AddPassenger(CPed *passenger, uchar seatNumber) 0x5B8D50
bool CVehicle::AddPassenger(CPed* passenger, unsigned char seatNumber) {
    return plugin::CallMethodAndReturn<bool, 0x5B8D50, CVehicle *, CPed*, unsigned char>(this, passenger, seatNumber);
}

// Converted from thiscall void CVehicle::BladeColSectorList(CPtrList &ptrList, CColModel &colModel, CMatrix &matrix, short, float) 0x5B4610
void CVehicle::BladeColSectorList(CPtrList& ptrList, CColModel& colModel, CMatrix& matrix, short arg3, float arg4) {
    plugin::CallMethod<0x5B4610, CVehicle *, CPtrList&, CColModel&, CMatrix&, short, float>(this, ptrList, colModel, matrix, arg3, arg4);
}

// Converted from thiscall bool CVehicle::CanBeDeleted(void) 0x5BA960
bool CVehicle::CanBeDeleted() {
    return plugin::CallMethodAndReturn<bool, 0x5BA960, CVehicle *>(this);
}

// Converted from thiscall bool CVehicle::CanDoorsBeDamaged(void) 0x5B8440
bool CVehicle::CanDoorsBeDamaged() {
    return plugin::CallMethodAndReturn<bool, 0x5B8440, CVehicle *>(this);
}

// Converted from thiscall bool CVehicle::CanPedEnterCar(void) 0x5B8370
bool CVehicle::CanPedEnterCar() {
    return plugin::CallMethodAndReturn<bool, 0x5B8370, CVehicle *>(this);
}

// Converted from thiscall bool CVehicle::CanPedExitCar(bool) 0x5B8180
bool CVehicle::CanPedExitCar(bool arg0) {
    return plugin::CallMethodAndReturn<bool, 0x5B8180, CVehicle *, bool>(this, arg0);
}

// Converted from thiscall bool CVehicle::CanPedJumpOffBike(void) 0x5B8130
bool CVehicle::CanPedJumpOffBike() {
    return plugin::CallMethodAndReturn<bool, 0x5B8130, CVehicle *>(this);
}

// Converted from thiscall bool CVehicle::CanPedJumpOutCar(void) 0x5B80C0
bool CVehicle::CanPedJumpOutCar() {
    return plugin::CallMethodAndReturn<bool, 0x5B80C0, CVehicle *>(this);
}

// Converted from thiscall bool CVehicle::CanPedOpenLocks(CPed *ped) 0x5B8460
bool CVehicle::CanPedOpenLocks(CPed* ped) {
    return plugin::CallMethodAndReturn<bool, 0x5B8460, CVehicle *, CPed*>(this, ped);
}

// Converted from thiscall bool CVehicle::CarHasRoof(void) 0x5B7910
bool CVehicle::CarHasRoof() {
    return plugin::CallMethodAndReturn<bool, 0x5B7910, CVehicle *>(this);
}

// Converted from thiscall void CVehicle::ChangeLawEnforcerState(uchar state) 0x5B7D90
void CVehicle::ChangeLawEnforcerState(unsigned char state) {
    plugin::CallMethod<0x5B7D90, CVehicle *, unsigned char>(this, state);
}

// Converted from thiscall void CVehicle::DoBladeCollision(CVector, CMatrix &matrix, short, float, float) 0x5B5030
void CVehicle::DoBladeCollision(CVector arg0, CMatrix& matrix, short arg2, float arg3, float arg4) {
    plugin::CallMethod<0x5B5030, CVehicle *, CVector, CMatrix&, short, float, float>(this, arg0, matrix, arg2, arg3, arg4);
}

// Converted from thiscall void CVehicle::DoFixedMachineGuns(void) 0x5C9170
void CVehicle::DoFixedMachineGuns() {
    plugin::CallMethod<0x5C9170, CVehicle *>(this);
}

// Converted from thiscall void CVehicle::DoSunGlare(void) 0x5B3CD0
void CVehicle::DoSunGlare() {
    plugin::CallMethod<0x5B3CD0, CVehicle *>(this);
}

// Converted from thiscall void CVehicle::ExtinguishCarFire(void) 0x5B7A80
void CVehicle::ExtinguishCarFire() {
    plugin::CallMethod<0x5B7A80, CVehicle *>(this);
}

// Converted from thiscall int CVehicle::FindTyreNearestPoint(float x, float y) 0x5B96A0
int CVehicle::FindTyreNearestPoint(float x, float y) {
    return plugin::CallMethodAndReturn<int, 0x5B96A0, CVehicle *, float, float>(this, x, y);
}

// Converted from thiscall void CVehicle::FireFixedMachineGuns(void) 0x5C8E40
void CVehicle::FireFixedMachineGuns() {
    plugin::CallMethod<0x5C8E40, CVehicle *>(this);
}

// Converted from thiscall void CVehicle::FlyingControl(eFlightModel flightModel) 0x5B54C0
void CVehicle::FlyingControl(eFlightModel flightModel) {
    plugin::CallMethod<0x5B54C0, CVehicle *, eFlightModel>(this, flightModel);
}

// Converted from thiscall int CVehicle::GetVehicleAppearance(void) 0x5BAA80
int CVehicle::GetVehicleAppearance() {
    return plugin::CallMethodAndReturn<int, 0x5BAA80, CVehicle *>(this);
}

// Converted from cdecl void CVehicle::HeliDustGenerate(CEntity *, float, float, int) 0x5B3250
void CVehicle::HeliDustGenerate(CEntity* arg0, float arg1, float arg2, int arg3) {
    plugin::Call<0x5B3250, CEntity*, float, float, int>(arg0, arg1, arg2, arg3);
}

// Converted from thiscall void CVehicle::InflictDamage(CEntity *damager, eWeaponType weapon, float intensity, CVector coords) 0x5B9020
void CVehicle::InflictDamage(CEntity* damager, eWeaponType weapon, float intensity, CVector coords) {
    plugin::CallMethod<0x5B9020, CVehicle *, CEntity*, eWeaponType, float, CVector>(this, damager, weapon, intensity, coords);
}

// Converted from thiscall bool CVehicle::IsDriver(CPed *ped) 0x5B8670
bool CVehicle::IsDriver(CPed* ped) {
    return plugin::CallMethodAndReturn<bool, 0x5B8670, CVehicle *, CPed*>(this, ped);
}

// Converted from thiscall bool CVehicle::IsDriver(int modelIndex) 0x5B8640
bool CVehicle::IsDriver(int modelIndex) {
    return plugin::CallMethodAndReturn<bool, 0x5B8640, CVehicle *, int>(this, modelIndex);
}

// Converted from thiscall bool CVehicle::IsLawEnforcementVehicle(void) 0x5B7D60
bool CVehicle::IsLawEnforcementVehicle() {
    return plugin::CallMethodAndReturn<bool, 0x5B7D60, CVehicle *>(this);
}

// Converted from thiscall bool CVehicle::IsOnItsSide(void) 0x5B84B0
bool CVehicle::IsOnItsSide() {
    return plugin::CallMethodAndReturn<bool, 0x5B84B0, CVehicle *>(this);
}

// Converted from thiscall bool CVehicle::IsPassenger(CPed *ped) 0x5B86D0
bool CVehicle::IsPassenger(CPed* ped) {
    return plugin::CallMethodAndReturn<bool, 0x5B86D0, CVehicle *, CPed*>(this, ped);
}

// Converted from thiscall bool CVehicle::IsPassenger(int modelIndex) 0x5B86A0
bool CVehicle::IsPassenger(int modelIndex) {
    return plugin::CallMethodAndReturn<bool, 0x5B86A0, CVehicle *, int>(this, modelIndex);
}

// Converted from thiscall bool CVehicle::IsSphereTouchingVehicle(float x, float y, float z, float radius) 0x5B7F00
bool CVehicle::IsSphereTouchingVehicle(float x, float y, float z, float radius) {
    return plugin::CallMethodAndReturn<bool, 0x5B7F00, CVehicle *, float, float, float, float>(this, x, y, z, radius);
}

// Converted from thiscall bool CVehicle::IsUpsideDown(void) 0x5B84F0
bool CVehicle::IsUpsideDown() {
    return plugin::CallMethodAndReturn<bool, 0x5B84F0, CVehicle *>(this);
}

// Converted from thiscall bool CVehicle::IsVehicleNormal(void) 0x5B7DF0
bool CVehicle::IsVehicleNormal() {
    return plugin::CallMethodAndReturn<bool, 0x5B7DF0, CVehicle *>(this);
}

// Converted from thiscall void CVehicle::KillPedsInVehicle(void) 0x5B8560
void CVehicle::KillPedsInVehicle() {
    plugin::CallMethod<0x5B8560, CVehicle *>(this);
}

// Converted from thiscall void CVehicle::MakeNonDraggedPedsLeaveVehicle(CPed *, CPed *, CPlayerPed *&, CCopPed *&) 0x5B3A30
void CVehicle::MakeNonDraggedPedsLeaveVehicle(CPed* arg0, CPed* arg1, CPlayerPed*& arg2, CCopPed*& arg3) {
    plugin::CallMethod<0x5B3A30, CVehicle *, CPed*, CPed*, CPlayerPed*&, CCopPed*&>(this, arg0, arg1, arg2, arg3);
}

// Converted from thiscall void CVehicle::ProcessBikeWheel(CVector &, CVector &, CVector &, CVector &, int, float, float, float, float, char, float *, tWheelState *, eBikeWheelSpecial, ushort) 0x5B9770
void CVehicle::ProcessBikeWheel(CVector& arg0, CVector& arg1, CVector& arg2, CVector& arg3, int arg4, float arg5, float arg6, float arg7, float arg8, char arg9, float* arg10, tWheelState* arg11, eBikeWheelSpecial arg12, unsigned short arg13) {
    plugin::CallMethod<0x5B9770, CVehicle *, CVector&, CVector&, CVector&, CVector&, int, float, float, float, float, char, float*, tWheelState*, eBikeWheelSpecial, unsigned short>(this, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
}

// Converted from thiscall void CVehicle::ProcessCarAlarm(void) 0x5B8040
void CVehicle::ProcessCarAlarm() {
    plugin::CallMethod<0x5B8040, CVehicle *>(this);
}

// Converted from thiscall void CVehicle::ProcessDelayedExplosion(void) 0x5B8F50
void CVehicle::ProcessDelayedExplosion() {
    plugin::CallMethod<0x5B8F50, CVehicle *>(this);
}

// Converted from thiscall void CVehicle::ProcessWheel(CVector &, CVector &, CVector &, CVector &, int, float, float, float, char, float *, tWheelState *, ushort) 0x5BA070
void CVehicle::ProcessWheel(CVector& arg0, CVector& arg1, CVector& arg2, CVector& arg3, int arg4, float arg5, float arg6, float arg7, char arg8, float* arg9, tWheelState* arg10, unsigned short arg11) {
    plugin::CallMethod<0x5BA070, CVehicle *, CVector&, CVector&, CVector&, CVector&, int, float, float, float, char, float*, tWheelState*, unsigned short>(this, arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}

// Converted from thiscall float CVehicle::ProcessWheelRotation(tWheelState wheelState, CVector const&, CVector const&, float) 0x5BA900
float CVehicle::ProcessWheelRotation(tWheelState wheelState, CVector const& arg1, CVector const& arg2, float arg3) {
    return plugin::CallMethodAndReturn<float, 0x5BA900, CVehicle *, tWheelState, CVector const&, CVector const&, float>(this, wheelState, arg1, arg2, arg3);
}

// Converted from thiscall void CVehicle::RemoveDriver(bool) 0x5B8920
void CVehicle::RemoveDriver(bool arg0) {
    plugin::CallMethod<0x5B8920, CVehicle *, bool>(this, arg0);
}

// Converted from thiscall void CVehicle::RemovePassenger(CPed *passenger) 0x5B8CE0
void CVehicle::RemovePassenger(CPed* passenger) {
    plugin::CallMethod<0x5B8CE0, CVehicle *, CPed*>(this, passenger);
}

// Converted from thiscall void CVehicle::SetComponentAtomicAlpha(RpAtomic *atomic, int alpha) 0x5B45D0
void CVehicle::SetComponentAtomicAlpha(RpAtomic* atomic, int alpha) {
    plugin::CallMethod<0x5B45D0, CVehicle *, RpAtomic*, int>(this, atomic, alpha);
}

// Converted from thiscall void CVehicle::SetDriver(CPed *driver) 0x5B89F0
void CVehicle::SetDriver(CPed* driver) {
    plugin::CallMethod<0x5B89F0, CVehicle *, CPed*>(this, driver);
}

// Converted from thiscall CPed* CVehicle::SetUpDriver(void) 0x5B8870
CPed* CVehicle::SetUpDriver() {
    return plugin::CallMethodAndReturn<CPed*, 0x5B8870, CVehicle *>(this);
}

// Converted from thiscall CPed* CVehicle::SetupPassenger(int) 0x5B8700
CPed* CVehicle::SetupPassenger(int arg0) {
    return plugin::CallMethodAndReturn<CPed*, 0x5B8700, CVehicle *, int>(this, arg0);
}

// Converted from thiscall bool CVehicle::ShufflePassengersToMakeSpace(void) 0x5B7B10
bool CVehicle::ShufflePassengersToMakeSpace() {
    return plugin::CallMethodAndReturn<bool, 0x5B7B10, CVehicle *>(this);
}

// Converted from thiscall void CVehicle::UpdateClumpAlpha(void) 0x5B4580
void CVehicle::UpdateClumpAlpha() {
    plugin::CallMethod<0x5B4580, CVehicle *>(this);
}

// Converted from thiscall void CVehicle::UpdatePassengerList(void) 0x5B39F0
void CVehicle::UpdatePassengerList() {
    plugin::CallMethod<0x5B39F0, CVehicle *>(this);
}

// Converted from thiscall bool CVehicle::UsesSiren(void) 0x5B8520
bool CVehicle::UsesSiren() {
    return plugin::CallMethodAndReturn<bool, 0x5B8520, CVehicle *>(this);
}


void* CVehicle::operator new(unsigned int size) {
    return ((void*(__cdecl *)(unsigned int))0x5BAB20)(size);
}

void* CVehicle::operator new(unsigned int size, int arg1) {
    return ((void*(__cdecl *)(unsigned int, int))0x5BAB00)(size, arg1);
}

void CVehicle::operator delete(void* data) {
    ((void(__cdecl *)(void*))0x5BAAE0)(data);
}