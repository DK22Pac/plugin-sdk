/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFireManager.h"

CFireManager &gFireManager = *(CFireManager *)0xB71F80;

// Converted from thiscall void CFireManager::~CFireManager() 0x538BB0
CFireManager::~CFireManager() {
    ((void(__thiscall *)(CFireManager*))0x538BB0)(this);
}

// Converted from thiscall void CFireManager::Init(void) 0x538BC0
void CFireManager::Init() {
    ((void(__thiscall *)(CFireManager*))0x538BC0)(this);
}

// Converted from thiscall uint CFireManager::GetNumOfNonScriptFires(void) 0x538F10
unsigned int CFireManager::GetNumOfNonScriptFires() {
    return ((unsigned int(__thiscall *)(CFireManager*))0x538F10)(this);
}

// Converted from thiscall CFire* CFireManager::FindNearestFire(CVector const& position,bool notBeingExtinguished,bool notScript) 0x538F40
CFire* CFireManager::FindNearestFire(CVector const& position, bool notBeingExtinguished, bool notScript) {
    return ((CFire* (__thiscall *)(CFireManager*, CVector const&, bool, bool))0x538F40)(this, position, notBeingExtinguished, notScript);
}

// Converted from thiscall bool CFireManager::PlentyFiresAvailable(void) 0x539340
bool CFireManager::PlentyFiresAvailable() {
    return ((bool(__thiscall *)(CFireManager*))0x539340)(this);
}

// Converted from thiscall void CFireManager::ExtinguishPoint(CVector point,float range) 0x539450
void CFireManager::ExtinguishPoint(CVector point, float range) {
    ((void(__thiscall *)(CFireManager*, CVector, float))0x539450)(this, point, range);
}

// Converted from thiscall bool CFireManager::ExtinguishPointWithWater(CVector point,float range,float fireSizeMp) 0x5394C0
bool CFireManager::ExtinguishPointWithWater(CVector point, float range, float fireSizeMp) {
    return ((bool(__thiscall *)(CFireManager*, CVector, float, float))0x5394C0)(this, point, range, fireSizeMp);
}

// Converted from thiscall bool CFireManager::IsScriptFireExtinguished(short fireIndex) 0x5396E0
bool CFireManager::IsScriptFireExtinguished(short fireIndex) {
    return ((bool(__thiscall *)(CFireManager*, short))0x5396E0)(this, fireIndex);
}

// Converted from thiscall void CFireManager::RemoveScriptFire(short fireIndex) 0x539700
void CFireManager::RemoveScriptFire(short fireIndex) {
    ((void(__thiscall *)(CFireManager*, short))0x539700)(this, fireIndex);
}

// Converted from thiscall void CFireManager::RemoveAllScriptFires(void) 0x539720
void CFireManager::RemoveAllScriptFires() {
    ((void(__thiscall *)(CFireManager*))0x539720)(this);
}

// Converted from thiscall void CFireManager::ClearAllScriptFireFlags(void) 0x5397A0
void CFireManager::ClearAllScriptFireFlags() {
    ((void(__thiscall *)(CFireManager*))0x5397A0)(this);
}

// Converted from thiscall void CFireManager::SetScriptFireAudio(short fireIndex,bool enable) 0x5397B0
void CFireManager::SetScriptFireAudio(short fireIndex, bool enable) {
    ((void(__thiscall *)(CFireManager*, short, bool))0x5397B0)(this, fireIndex, enable);
}

// Converted from thiscall CVector* CFireManager::GetScriptFireCoords(short fireIndex) 0x5397E0
CVector* CFireManager::GetScriptFireCoords(short fireIndex) {
    return ((CVector* (__thiscall *)(CFireManager*, short))0x5397E0)(this, fireIndex);
}

// Converted from thiscall uint CFireManager::GetNumFiresInRange(CVector *point,float range) 0x5397F0
unsigned int CFireManager::GetNumFiresInRange(CVector* point, float range) {
    return ((unsigned int(__thiscall *)(CFireManager*, CVector*, float))0x5397F0)(this, point, range);
}

// Converted from thiscall uint CFireManager::GetNumFiresInArea(float cornerA_x,float cornerA_y,float cornerA_z,float cornerB_x,float cornerB_y,float cornerB_z) 0x539860
unsigned int CFireManager::GetNumFiresInArea(float cornerA_x, float cornerA_y, float cornerA_z, float cornerB_x, float cornerB_y, float cornerB_z) {
    return ((unsigned int(__thiscall *)(CFireManager*, float, float, float, float, float, float))0x539860)(this, cornerA_x, cornerA_y, cornerA_z, cornerB_x, cornerB_y, cornerB_z);
}

// Converted from thiscall void CFireManager::DestroyAllFxSystems(void) 0x539D10
void CFireManager::DestroyAllFxSystems() {
    ((void(__thiscall *)(CFireManager*))0x539D10)(this);
}

// Converted from thiscall void CFireManager::CreateAllFxSystems(void) 0x539D50
void CFireManager::CreateAllFxSystems() {
    ((void(__thiscall *)(CFireManager*))0x539D50)(this);
}

// Converted from thiscall void CFireManager::CFireManager(void) 0x539DA0
CFireManager::CFireManager() {
    ((void(__thiscall *)(CFireManager*))0x539DA0)(this);
}

// Converted from thiscall void CFireManager::Shutdown(void) 0x539DD0
void CFireManager::Shutdown() {
    ((void(__thiscall *)(CFireManager*))0x539DD0)(this);
}

// Converted from thiscall void CFireManager::GetNextFreeFire(uchar bAllowDeletingOldFire) 0x539E50
void CFireManager::GetNextFreeFire(unsigned char bAllowDeletingOldFire) {
    ((void(__thiscall *)(CFireManager*, unsigned char))0x539E50)(this, bAllowDeletingOldFire);
}

// Converted from thiscall CFire* CFireManager::StartFire(CVector point,float size,uchar,CEntity *creator,uint time,signed char numGenerations,uchar) 0x539F00
CFire* CFireManager::StartFire(CVector point, _IGNORED_ float size, _IGNORED_ unsigned char arg2, CEntity* creator, unsigned int time, signed char numGenerations, _IGNORED_ unsigned char arg6) {
    return ((CFire* (__thiscall *)(CFireManager*, CVector, float, unsigned char, CEntity*, unsigned int, signed char, unsigned char))0x539F00)(this, point, size, arg2, creator, time, numGenerations, arg6);
}

// Converted from thiscall CFire* CFireManager::StartFire(CEntity *target,CEntity *creator,float size,uchar,uint time,signed char numGenerations) 0x53A050
CFire* CFireManager::StartFire(CEntity* target, CEntity* creator, _IGNORED_ float size, _IGNORED_ unsigned char arg3, unsigned int time, signed char numGenerations) {
    return ((CFire* (__thiscall *)(CFireManager*, CEntity*, CEntity*, float, unsigned char, unsigned int, signed char))0x53A050)(this, target, creator, size, arg3, time, numGenerations);
}

// Converted from thiscall int CFireManager::StartScriptFire(CVector const&point,CEntity *target,float,uchar,signed char numGenerations,int size) 0x53A270
int CFireManager::StartScriptFire(CVector const& point, CEntity* target, _IGNORED_ float arg2, _IGNORED_ unsigned char arg3, signed char numGenerations, int size) {
    return ((int(__thiscall *)(CFireManager*, CVector const&, CEntity*, float, unsigned char, signed char, int))0x53A270)(this, point, target, arg2, arg3, numGenerations, size);
}

// Converted from thiscall void CFireManager::Update(void) 0x53AF00
void CFireManager::Update() {
    ((void(__thiscall *)(CFireManager*))0x53AF00)(this);
}