/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPickup.h"

// Converted from thiscall void CPickup::SetPosn(float x,float y,float z) 0x454960
void CPickup::SetPosn(float x, float y, float z) {
    plugin::CallMethod<0x454960, CPickup *, float, float, float>(this, x, y, z);
}

// Converted from thiscall CVector CPickup::GetPosn(void) 0x4549A0
CVector CPickup::GetPosn() {
    CVector result;
    plugin::CallMethod<0x4549A0, CPickup *, CVector*>(this, &result);
    return result;
}

// Converted from thiscall float CPickup::GetXCoord(void) 0x4549F0
float CPickup::GetXCoord() {
    return plugin::CallMethodAndReturn<float, 0x4549F0, CPickup *>(this);
}

// Converted from thiscall float CPickup::GetYCoord(void) 0x454A10
float CPickup::GetYCoord() {
    return plugin::CallMethodAndReturn<float, 0x454A10, CPickup *>(this);
}

// Converted from thiscall float CPickup::GetZCoord(void) 0x454A30
float CPickup::GetZCoord() {
    return plugin::CallMethodAndReturn<float, 0x454A30, CPickup *>(this);
}

// Converted from thiscall void CPickup::ExtractAmmoFromPickup(CPlayerPed *playerPed) 0x454BE0
void CPickup::ExtractAmmoFromPickup(CPlayerPed* playerPed) {
    plugin::CallMethod<0x454BE0, CPickup *, CPlayerPed*>(this, playerPed);
}

// Converted from thiscall bool CPickup::IsVisible(void) 0x454C70
bool CPickup::IsVisible() {
    return plugin::CallMethodAndReturn<bool, 0x454C70, CPickup *>(this);
}

// Converted from thiscall void CPickup::GetRidOfObjects(void) 0x454CF0
void CPickup::GetRidOfObjects() {
    plugin::CallMethod<0x454CF0, CPickup *>(this);
}

// Converted from thiscall bool CPickup::PickUpShouldBeInvisible(void) 0x454D20
bool CPickup::PickUpShouldBeInvisible() {
    return plugin::CallMethodAndReturn<bool, 0x454D20, CPickup *>(this);
}

// Converted from cdecl void CPickup::FindTextIndexForString(char *message) 0x455500
void CPickup::FindTextIndexForString(char* message) {
    plugin::Call<0x455500, char*>(message);
}

// Converted from cdecl char* CPickup::FindStringForTextIndex(int index) 0x455540
char const *CPickup::FindStringForTextIndex(int index) {
    return plugin::CallAndReturn<char const *, 0x455540, int>(index);
}

// Converted from thiscall void CPickup::Remove(void) 0x4556C0
void CPickup::Remove() {
    plugin::CallMethod<0x4556C0, CPickup *>(this);
}

// Converted from thiscall void CPickup::GiveUsAPickUpObject(CObject **pObject,int objectPoolSlotIndex) 0x4567E0
void CPickup::GiveUsAPickUpObject(CObject** pObject, int objectPoolSlotIndex) {
    plugin::CallMethod<0x4567E0, CPickup *, CObject**, int>(this, pObject, objectPoolSlotIndex);
}

// Converted from thiscall void CPickup::Update(CPlayerPed *playerPed,CVehicle *vehicle,int playerId) 0x457410
bool CPickup::Update(CPlayerPed* playerPed, CVehicle* vehicle, int playerId) {
    return plugin::CallMethodAndReturn<bool,0x457410, CPickup *, CPlayerPed*, CVehicle*, int>(this, playerPed, vehicle, playerId);
}

// Converted from thiscall void CPickup::ProcessGunShot(CVector *origin,CVector *target) 0x4588B0
void CPickup::ProcessGunShot(CVector* origin, CVector* target) {
    plugin::CallMethod<0x4588B0, CPickup *, CVector*, CVector*>(this, origin, target);
}