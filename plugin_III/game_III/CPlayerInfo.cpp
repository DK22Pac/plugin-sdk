/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPlayerInfo.h"

// Converted from thiscall void CPlayerInfo::ArrestPlayer(void) 0x4A1330 
void CPlayerInfo::ArrestPlayer() {
    plugin::CallMethod<0x4A1330, CPlayerInfo *>(this);
}

// Converted from thiscall void CPlayerInfo::AwardMoneyForExplosion(CVehicle *vehicle) 0x4A15F0
void CPlayerInfo::AwardMoneyForExplosion(CVehicle* vehicle) {
    plugin::CallMethod<0x4A15F0, CPlayerInfo *, CVehicle*>(this, vehicle);
}

// Converted from thiscall void CPlayerInfo::BlowUpRCBuggy(void) 0x4A15C0 
void CPlayerInfo::BlowUpRCBuggy() {
    plugin::CallMethod<0x4A15C0, CPlayerInfo *>(this);
}

// Converted from thiscall void CPlayerInfo::CancelPlayerEnteringCars(CVehicle *vehicle) 0x4A13B0
void CPlayerInfo::CancelPlayerEnteringCars(CVehicle* vehicle) {
    plugin::CallMethod<0x4A13B0, CPlayerInfo *, CVehicle*>(this, vehicle);
}

// Converted from thiscall void CPlayerInfo::Clear(void) 0x49FC10 
void CPlayerInfo::Clear() {
    plugin::CallMethod<0x49FC10, CPlayerInfo *>(this);
}

// Converted from thiscall void CPlayerInfo::DeletePlayerSkin(void) 0x4A1750 
void CPlayerInfo::DeletePlayerSkin() {
    plugin::CallMethod<0x4A1750, CPlayerInfo *>(this);
}

// Converted from thiscall void CPlayerInfo::EvaluateCarPosition(CEntity *entity,CPed *ped,float radius,float *dist,CVehicle **vehicle) 0x4A0EC0
void CPlayerInfo::EvaluateCarPosition(CEntity* entity, CPed* ped, float radius, float* dist, CVehicle** vehicle) {
    plugin::CallMethod<0x4A0EC0, CPlayerInfo *, CEntity*, CPed*, float, float*, CVehicle**>(this, entity, ped, radius, dist, vehicle);
}

// Converted from thiscall void CPlayerInfo::FindClosestCarSectorList(CPtrList &list,CPed *ped,float conrerAX,float cornerAY,float cornerBX,float cornerBY,float *dist,CVehicle **closestCar) 0x4A0CD0
void CPlayerInfo::FindClosestCarSectorList(CPtrList& list, CPed* ped, float conrerAX, float cornerAY, float cornerBX, float cornerBY, float* dist, CVehicle** closestCar) {
    plugin::CallMethod<0x4A0CD0, CPlayerInfo *, CPtrList&, CPed*, float, float, float, float, float*, CVehicle**>(this, list, ped, conrerAX, cornerAY, cornerBX, cornerBY, dist, closestCar);
}

// Converted from thiscall CVector* CPlayerInfo::GetPos(CVector *point) 0x4A0FE0
CVector* CPlayerInfo::GetPos(CVector* point) {
    return plugin::CallMethodAndReturn<CVector*, 0x4A0FE0, CPlayerInfo *, CVector*>(this, point);
}

// Converted from thiscall bool CPlayerInfo::IsPlayerInRemoteMode(void) 0x4A0930 
bool CPlayerInfo::IsPlayerInRemoteMode() {
    return plugin::CallMethodAndReturn<bool, 0x4A0930, CPlayerInfo *>(this);
}

// Converted from thiscall bool CPlayerInfo::IsRestartingAfterArrest(void) 0x4A12C0
bool CPlayerInfo::IsRestartingAfterArrest() {
    return plugin::CallMethodAndReturn<bool, 0x4A12C0, CPlayerInfo *>(this);
}

// Converted from thiscall bool CPlayerInfo::IsRestartingAfterDeath(void) 0x4A12A0
bool CPlayerInfo::IsRestartingAfterDeath() {
    return plugin::CallMethodAndReturn<bool, 0x4A12A0, CPlayerInfo *>(this);
}

// Converted from thiscall void CPlayerInfo::KillPlayer(void) 0x4A12E0 
void CPlayerInfo::KillPlayer() {
    plugin::CallMethod<0x4A12E0, CPlayerInfo *>(this);
}

// Converted from thiscall void CPlayerInfo::LoadPlayerInfo(uchar *bufferPointer,uint structSize) 0x4A0B20
void CPlayerInfo::LoadPlayerInfo(unsigned char* bufferPointer, unsigned int structSize) {
    plugin::CallMethod<0x4A0B20, CPlayerInfo *, unsigned char*, unsigned int>(this, bufferPointer, structSize);
}

// Converted from thiscall void CPlayerInfo::LoadPlayerSkin(void) 0x4A1700 
void CPlayerInfo::LoadPlayerSkin() {
    plugin::CallMethod<0x4A1700, CPlayerInfo *>(this);
}

// Converted from thiscall void CPlayerInfo::MakePlayerSafe(bool safe) 0x4A1400
void CPlayerInfo::MakePlayerSafe(bool safe) {
    plugin::CallMethod<0x4A1400, CPlayerInfo *, bool>(this, safe);
}

// Converted from thiscall void CPlayerInfo::PlayerFailedCriticalMission(void) 0x4A1380 
void CPlayerInfo::PlayerFailedCriticalMission() {
    plugin::CallMethod<0x4A1380, CPlayerInfo *>(this);
}

// Converted from thiscall void CPlayerInfo::Process(void) 0x49FD30 
void CPlayerInfo::Process() {
    plugin::CallMethod<0x49FD30, CPlayerInfo *>(this);
}

// Converted from thiscall void CPlayerInfo::SavePlayerInfo(uchar *bufferPointer,uint *structSize) 0x4A0960
void CPlayerInfo::SavePlayerInfo(unsigned char* bufferPointer, unsigned int* structSize) {
    plugin::CallMethod<0x4A0960, CPlayerInfo *, unsigned char*, unsigned int*>(this, bufferPointer, structSize);
}

// Converted from thiscall void CPlayerInfo::SetPlayerSkin(char const* skinName) 0x4A16D0
void CPlayerInfo::SetPlayerSkin(char const* skinName) {
    plugin::CallMethod<0x4A16D0, CPlayerInfo *, char const*>(this, skinName);
}

// Converted from thiscall void CPlayerInfo::~CPlayerInfo() 0x4B5DC0 
CPlayerInfo::~CPlayerInfo() {
    plugin::CallMethod<0x4B5DC0, CPlayerInfo *>(this);
}

