/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFireManager.h"

CFireManager &gFireManager = *(CFireManager *)0x8F31D0;

// Converted from thiscall void CFireManager::CFireManager(void) 0x479290 
CFireManager::CFireManager() {
    plugin::CallMethod<0x479290, CFireManager *>(this);
}

// Converted from thiscall void CFireManager::ExtinguishPoint(CVector point, float range) 0x479DB0
void CFireManager::ExtinguishPoint(CVector point, float range) {
    plugin::CallMethod<0x479DB0, CFireManager *, CVector, float>(this, point, range);
}

// Converted from thiscall CFire* CFireManager::FindFurthestFire_NeverMindFireMen(CVector, float, float) 0x479430 
CFire* CFireManager::FindFurthestFire_NeverMindFireMen(CVector arg0, float arg1, float arg2) {
    return plugin::CallMethodAndReturn<CFire*, 0x479430, CFireManager *, CVector, float, float>(this, arg0, arg1, arg2);
}

// Converted from thiscall CFire* CFireManager::FindNearestFire(CVector position, float ) 0x479340
CFire* CFireManager::FindNearestFire(CVector position, float arg1) {
    return plugin::CallMethodAndReturn<CFire*, 0x479340, CFireManager *, CVector, float>(this, position, arg1);
}

// Converted from thiscall CFire* CFireManager::GetNextFreeFire(void) 0x4792E0 
CFire* CFireManager::GetNextFreeFire() {
    return plugin::CallMethodAndReturn<CFire*, 0x4792E0, CFireManager *>(this);
}

// Converted from thiscall bool CFireManager::IsScriptFireExtinguished(short fireIndex) 0x479FC0
bool CFireManager::IsScriptFireExtinguished(short fireIndex) {
    return plugin::CallMethodAndReturn<bool, 0x479FC0, CFireManager *, short>(this, fireIndex);
}

// Converted from thiscall void CFireManager::RemoveAllScriptFires(void) 0x47A000 
void CFireManager::RemoveAllScriptFires() {
    plugin::CallMethod<0x47A000, CFireManager *>(this);
}

// Converted from thiscall void CFireManager::RemoveScriptFire(short fireIndex) 0x479FE0
void CFireManager::RemoveScriptFire(short fireIndex) {
    plugin::CallMethod<0x479FE0, CFireManager *, short>(this, fireIndex);
}

// Converted from thiscall void CFireManager::SetScriptFireAudio(short fireIndex, bool enable) 0x47A040
void CFireManager::SetScriptFireAudio(short fireIndex, bool enable) {
    plugin::CallMethod<0x47A040, CFireManager *, short, bool>(this, fireIndex, enable);
}

// Converted from thiscall void CFireManager::StartFire(CEntity *target, CEntity *creator, float size, uchar) 0x479590
void CFireManager::StartFire(CEntity* target, CEntity* creator, float size, unsigned char arg3) {
    plugin::CallMethod<0x479590, CFireManager *, CEntity*, CEntity*, float, unsigned char>(this, target, creator, size, arg3);
}

// Converted from thiscall void CFireManager::StartFire(CVector point, float size, uchar) 0x479500
void CFireManager::StartFire(CVector point, float size, unsigned char arg2) {
    plugin::CallMethod<0x479500, CFireManager *, CVector, float, unsigned char>(this, point, size, arg2);
}

// Converted from thiscall int CFireManager::StartScriptFire(CVector const& point, CEntity *target, float size, uchar) 0x479E60
int CFireManager::StartScriptFire(CVector const& point, CEntity* target, float size, unsigned char arg3) {
    return plugin::CallMethodAndReturn<int, 0x479E60, CFireManager *, CVector const&, CEntity*, float, unsigned char>(this, point, target, size, arg3);
}

// Converted from thiscall void CFireManager::Update(void) 0x479310 
void CFireManager::Update() {
    plugin::CallMethod<0x479310, CFireManager *>(this);
}

// Converted from thiscall void CFireManager::~CFireManager() 0x4792C0 
CFireManager::~CFireManager() {
    plugin::CallMethod<0x4792C0, CFireManager *>(this);
}
