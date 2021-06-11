/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFireManager.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CFireManager &gFireManager = *reinterpret_cast<CFireManager *>(GLOBAL_ADDRESS_BY_VERSION(0x8F31D0, 0x8F3284, 0x9033C4));

int ctor_addr(CFireManager) = ADDRESS_BY_VERSION(0x479290, 0x479290, 0x479290);
int ctor_gaddr(CFireManager) = GLOBAL_ADDRESS_BY_VERSION(0x479290, 0x479290, 0x479290);

int dtor_addr(CFireManager) = ADDRESS_BY_VERSION(0x4792C0, 0x4792C0, 0x4792C0);
int dtor_gaddr(CFireManager) = GLOBAL_ADDRESS_BY_VERSION(0x4792C0, 0x4792C0, 0x4792C0);

int addrof(CFireManager::ExtinguishPoint) = ADDRESS_BY_VERSION(0x479DB0, 0x479DB0, 0x479DB0);
int gaddrof(CFireManager::ExtinguishPoint) = GLOBAL_ADDRESS_BY_VERSION(0x479DB0, 0x479DB0, 0x479DB0);

void CFireManager::ExtinguishPoint(CVector point, float range) {
    plugin::CallMethodDynGlobal<CFireManager *, CVector, float>(gaddrof(CFireManager::ExtinguishPoint), this, point, range);
}

int addrof(CFireManager::FindFurthestFire_NeverMindFireMen) = ADDRESS_BY_VERSION(0x479430, 0x479430, 0x479430);
int gaddrof(CFireManager::FindFurthestFire_NeverMindFireMen) = GLOBAL_ADDRESS_BY_VERSION(0x479430, 0x479430, 0x479430);

CFire *CFireManager::FindFurthestFire_NeverMindFireMen(CVector pos, float minRange, float maxRange) {
    return plugin::CallMethodAndReturnDynGlobal<CFire *, CFireManager *, CVector, float, float>(gaddrof(CFireManager::FindFurthestFire_NeverMindFireMen), this, pos, minRange, maxRange);
}

int addrof(CFireManager::FindNearestFire) = ADDRESS_BY_VERSION(0x479340, 0x479340, 0x479340);
int gaddrof(CFireManager::FindNearestFire) = GLOBAL_ADDRESS_BY_VERSION(0x479340, 0x479340, 0x479340);

CFire *CFireManager::FindNearestFire(CVector pos, float *pDistance) {
    return plugin::CallMethodAndReturnDynGlobal<CFire *, CFireManager *, CVector, float *>(gaddrof(CFireManager::FindNearestFire), this, pos, pDistance);
}

int addrof(CFireManager::GetNextFreeFire) = ADDRESS_BY_VERSION(0x4792E0, 0x4792E0, 0x4792E0);
int gaddrof(CFireManager::GetNextFreeFire) = GLOBAL_ADDRESS_BY_VERSION(0x4792E0, 0x4792E0, 0x4792E0);

CFire *CFireManager::GetNextFreeFire() {
    return plugin::CallMethodAndReturnDynGlobal<CFire *, CFireManager *>(gaddrof(CFireManager::GetNextFreeFire), this);
}

int addrof(CFireManager::IsScriptFireExtinguished) = ADDRESS_BY_VERSION(0x479FC0, 0x479FC0, 0x479FC0);
int gaddrof(CFireManager::IsScriptFireExtinguished) = GLOBAL_ADDRESS_BY_VERSION(0x479FC0, 0x479FC0, 0x479FC0);

bool CFireManager::IsScriptFireExtinguished(short fireIndex) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CFireManager *, short>(gaddrof(CFireManager::IsScriptFireExtinguished), this, fireIndex);
}

int addrof(CFireManager::RemoveAllScriptFires) = ADDRESS_BY_VERSION(0x47A000, 0x47A000, 0x47A000);
int gaddrof(CFireManager::RemoveAllScriptFires) = GLOBAL_ADDRESS_BY_VERSION(0x47A000, 0x47A000, 0x47A000);

void CFireManager::RemoveAllScriptFires() {
    plugin::CallMethodDynGlobal<CFireManager *>(gaddrof(CFireManager::RemoveAllScriptFires), this);
}

int addrof(CFireManager::RemoveScriptFire) = ADDRESS_BY_VERSION(0x479FE0, 0x479FE0, 0x479FE0);
int gaddrof(CFireManager::RemoveScriptFire) = GLOBAL_ADDRESS_BY_VERSION(0x479FE0, 0x479FE0, 0x479FE0);

void CFireManager::RemoveScriptFire(short fireIndex) {
    plugin::CallMethodDynGlobal<CFireManager *, short>(gaddrof(CFireManager::RemoveScriptFire), this, fireIndex);
}

int addrof(CFireManager::SetScriptFireAudio) = ADDRESS_BY_VERSION(0x47A040, 0x47A040, 0x47A040);
int gaddrof(CFireManager::SetScriptFireAudio) = GLOBAL_ADDRESS_BY_VERSION(0x47A040, 0x47A040, 0x47A040);

void CFireManager::SetScriptFireAudio(short fireIndex, bool state) {
    plugin::CallMethodDynGlobal<CFireManager *, short, bool>(gaddrof(CFireManager::SetScriptFireAudio), this, fireIndex, state);
}

int addrof_o(CFireManager::StartFire, void (CFireManager::*)(CVector, float, unsigned char)) = ADDRESS_BY_VERSION(0x479500, 0x479500, 0x479500);
int gaddrof_o(CFireManager::StartFire, void (CFireManager::*)(CVector, float, unsigned char)) = GLOBAL_ADDRESS_BY_VERSION(0x479500, 0x479500, 0x479500);

void CFireManager::StartFire(CVector pos, float strength, unsigned char propagation) {
    plugin::CallMethodDynGlobal<CFireManager *, CVector, float, unsigned char>(gaddrof_o(CFireManager::StartFire, void (CFireManager::*)(CVector, float, unsigned char)), this, pos, strength, propagation);
}

int addrof_o(CFireManager::StartFire, void (CFireManager::*)(CEntity *, CEntity *, float, unsigned char)) = ADDRESS_BY_VERSION(0x479590, 0x479590, 0x479590);
int gaddrof_o(CFireManager::StartFire, void (CFireManager::*)(CEntity *, CEntity *, float, unsigned char)) = GLOBAL_ADDRESS_BY_VERSION(0x479590, 0x479590, 0x479590);

void CFireManager::StartFire(CEntity *entityOnFire, CEntity *fleeFrom, float strength, unsigned char propagation) {
    plugin::CallMethodDynGlobal<CFireManager *, CEntity *, CEntity *, float, unsigned char>(gaddrof_o(CFireManager::StartFire, void (CFireManager::*)(CEntity *, CEntity *, float, unsigned char)), this, entityOnFire, fleeFrom, strength, propagation);
}

int addrof(CFireManager::StartScriptFire) = ADDRESS_BY_VERSION(0x479E60, 0x479E60, 0x479E60);
int gaddrof(CFireManager::StartScriptFire) = GLOBAL_ADDRESS_BY_VERSION(0x479E60, 0x479E60, 0x479E60);

int CFireManager::StartScriptFire(CVector const &pos, CEntity *target, float strength, unsigned char propagation) {
    return plugin::CallMethodAndReturnDynGlobal<int, CFireManager *, CVector const &, CEntity *, float, unsigned char>(gaddrof(CFireManager::StartScriptFire), this, pos, target, strength, propagation);
}

int addrof(CFireManager::Update) = ADDRESS_BY_VERSION(0x479310, 0x479310, 0x479310);
int gaddrof(CFireManager::Update) = GLOBAL_ADDRESS_BY_VERSION(0x479310, 0x479310, 0x479310);

void CFireManager::Update() {
    plugin::CallMethodDynGlobal<CFireManager *>(gaddrof(CFireManager::Update), this);
}
