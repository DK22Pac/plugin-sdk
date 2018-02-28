/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CProjectileInfo.h"

CProjectile **CProjectileInfo::ms_apProjectile = (CProjectile **)0x87C748;
CProjectileInfo *gaProjectileInfo = (CProjectileInfo *)0x64ED50;

// Converted from cdecl bool CProjectileInfo::AddProjectile(CEntity *creator, eWeaponType weaponType, CVector posn, float force) 0x55B030
bool CProjectileInfo::AddProjectile(CEntity* creator, eWeaponType weaponType, CVector posn, float force) {
    return plugin::CallAndReturn<bool, 0x55B030, CEntity*, eWeaponType, CVector, float>(creator, weaponType, posn, force);
}

// Converted from thiscall void CProjectileInfo::CProjectileInfo(void) 0x55BC50
CProjectileInfo::CProjectileInfo() {
    plugin::CallMethod<0x55BC50, CProjectileInfo *>(this);
}

// Converted from cdecl CProjectileInfo* CProjectileInfo::GetProjectileInfo(int index) 0x55B010
CProjectileInfo* CProjectileInfo::GetProjectileInfo(int index) {
    return plugin::CallAndReturn<CProjectileInfo*, 0x55B010, int>(index);
}

// Converted from cdecl void CProjectileInfo::Initialise(void) 0x55ADF0
void CProjectileInfo::Initialise() {
    plugin::Call<0x55ADF0>();
}

// Converted from cdecl bool CProjectileInfo::IsProjectileInRange(float x1, float y1, float z1, float x2, float y2, float z2, bool bDestroy) 0x55BA50
bool CProjectileInfo::IsProjectileInRange(float x1, float y1, float z1, float x2, float y2, float z2, bool bDestroy) {
    return plugin::CallAndReturn<bool, 0x55BA50, float, float, float, float, float, float, bool>(x1, y1, z1, x2, y2, z2, bDestroy);
}

// Converted from cdecl void CProjectileInfo::RemoveAllProjectiles(void) 0x55BB80
void CProjectileInfo::RemoveAllProjectiles() {
    plugin::Call<0x55BB80>();
}

// Converted from cdecl bool CProjectileInfo::RemoveIfThisIsAProjectile(CObject *object) 0x55BBD0
bool CProjectileInfo::RemoveIfThisIsAProjectile(CObject* object) {
    return plugin::CallAndReturn<bool, 0x55BBD0, CObject*>(object);
}

// Converted from cdecl void CProjectileInfo::RemoveNotAdd(CEntity *creator, eWeaponType weaponType, CVector posn) 0x55B770
void CProjectileInfo::RemoveNotAdd(CEntity* creator, eWeaponType weaponType, CVector posn) {
    plugin::Call<0x55B770, CEntity*, eWeaponType, CVector>(creator, weaponType, posn);
}

// Converted from cdecl void CProjectileInfo::RemoveProjectile(CProjectileInfo *info, CProjectile *projectileObject) 0x55B700
void CProjectileInfo::RemoveProjectile(CProjectileInfo* info, CProjectile* projectileObject) {
    plugin::Call<0x55B700, CProjectileInfo*, CProjectile*>(info, projectileObject);
}

// Converted from cdecl void CProjectileInfo::Shutdown(void) 0x55AFF0
void CProjectileInfo::Shutdown() {
    plugin::Call<0x55AFF0>();
}

// Converted from cdecl void CProjectileInfo::Update(void) 0x55B7C0
void CProjectileInfo::Update() {
    plugin::Call<0x55B7C0>();
}
