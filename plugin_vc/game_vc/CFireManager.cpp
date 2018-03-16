/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFireManager.h"

CFireManager &gFireManager = *(CFireManager *)0x97F8A0;

CFireManager::~CFireManager() {
    ((void(__thiscall *)(CFireManager*))0x538BB0)(this);
}

CFire* CFireManager::FindNearestFire(CVector const& position, float* range) {
    return ((CFire* (__thiscall *)(CFireManager*, CVector const&,float*))0x48F170)(this, position,range);
}

CFire* CFireManager::FindFurthestFire_NeverMindFireMen(CVector posn, float range1, float range2) {
    return ((CFire* (__thiscall *)(CFireManager*, CVector const&, float,float))0x48F0A0)(this, posn, range1,range2);
}


void CFireManager::ExtinguishPoint(CVector point, float range) {
    ((void(__thiscall *)(CFireManager*, CVector, float))0x48E520)(this, point, range);
}


bool CFireManager::ExtinguishPointWithWater(CVector point, float range) {
    return ((bool(__thiscall *)(CFireManager*, CVector, float))0x48E350)(this, point, range);
}

bool CFireManager::IsScriptFireExtinguished(short fireIndex) {
    return ((bool(__thiscall *)(CFireManager*, short))0x48E190)(this, fireIndex);
}

void CFireManager::RemoveScriptFire(short fireIndex) {
    ((void(__thiscall *)(CFireManager*, short))0x48E170)(this, fireIndex);
}

void CFireManager::RemoveAllScriptFires() {
    ((void(__thiscall *)(CFireManager*))0x48E130)(this);
}

CFire* CFireManager::StartFire(CVector point, float size, bool bMoves) {
    return ((CFire* (__thiscall *)(CFireManager*, CVector, float, bool))0x48EFE0)(this, point, size,bMoves);
}

CFire* CFireManager::StartFire(CEntity* target, CEntity* creator, float size, bool bMoves) {
    return ((CFire* (__thiscall *)(CFireManager*, CEntity*, CEntity*, float, bool))0x48EC30)(this, target, creator, size, bMoves);
}

int CFireManager::StartScriptFire(CVector const& point, CEntity* target) {
    return ((int(__thiscall *)(CFireManager*, CVector const&, CEntity*))0x48E1B0)(this, point, target);
}

void CFireManager::Update() {
    ((void(__thiscall *)(CFireManager*))0x48F230)(this);
}