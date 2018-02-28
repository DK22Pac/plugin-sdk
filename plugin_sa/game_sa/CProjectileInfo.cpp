/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CProjectileInfo.h"

unsigned int MAX_PROJECTILES = 32;
CProjectile **CProjectileInfo::ms_apProjectile = (CProjectile **)0xC89110;
unsigned int MAX_PROJECTILE_INFOS = 32;
CProjectileInfo *gaProjectileInfo = (CProjectileInfo *)0xC891A8;

// Converted from cdecl void CProjectileInfo::Initialise(void) 0x737B40
void CProjectileInfo::Initialise() {
    plugin::Call<0x737B40>();
}

// Converted from cdecl void CProjectileInfo::RemoveFXSystem(uchar bInstantly) 0x737B80
void CProjectileInfo::RemoveFXSystem(unsigned char bInstantly) {
    plugin::Call<0x737B80, unsigned char>(bInstantly);
}

// Converted from cdecl void CProjectileInfo::Shutdown(void) 0x737BC0
void CProjectileInfo::Shutdown() {
    plugin::Call<0x737BC0>();
}

// Converted from cdecl CProjectileInfo* CProjectileInfo::GetProjectileInfo(int infoId) 0x737BF0
CProjectileInfo* CProjectileInfo::GetProjectileInfo(int infoId) {
    return plugin::CallAndReturn<CProjectileInfo*, 0x737BF0, int>(infoId);
}

// Converted from cdecl void CProjectileInfo::RemoveNotAdd(CEntity *creator,eWeaponType weaponType,CVector posn) 0x737C00
void CProjectileInfo::RemoveNotAdd(CEntity* creator, eWeaponType weaponType, CVector posn) {
    plugin::Call<0x737C00, CEntity*, eWeaponType, CVector>(creator, weaponType, posn);
}

// Converted from cdecl bool CProjectileInfo::AddProjectile(CEntity *creator,eWeaponType weaponType,CVector posn,float force,CVector *direction,CEntity *victim) 0x737C80
bool CProjectileInfo::AddProjectile(CEntity* creator, eWeaponType weaponType, CVector posn, float force, CVector* direction, CEntity* victim) {
    return plugin::CallAndReturn<bool, 0x737C80, CEntity*, eWeaponType, CVector, float, CVector*, CEntity*>(creator, weaponType, posn, force, direction, victim);
}

// Converted from cdecl void CProjectileInfo::RemoveDetonatorProjectiles(void) 0x738860
void CProjectileInfo::RemoveDetonatorProjectiles() {
    plugin::Call<0x738860>();
}

// Converted from cdecl void CProjectileInfo::RemoveProjectile(CProjectileInfo*projectileInfo,CProjectile *projectileObject) 0x7388F0
void CProjectileInfo::RemoveProjectile(CProjectileInfo* projectileInfo, CProjectile* projectileObject) {
    plugin::Call<0x7388F0, CProjectileInfo*, CProjectile*>(projectileInfo, projectileObject);
}

// Converted from cdecl void CProjectileInfo::Update(void) 0x738B20
void CProjectileInfo::Update() {
    plugin::Call<0x738B20>();
}

// Converted from cdecl bool CProjectileInfo::IsProjectileInRange(float x1,float y1,float z1,float x2,float y2,float z2,bool bDestroy) 0x739860
bool CProjectileInfo::IsProjectileInRange(float x1, float y1, float z1, float x2, float y2, float z2, bool bDestroy) {
    return plugin::CallAndReturn<bool, 0x739860, float, float, float, float, float, float, bool>(x1, y1, z1, x2, y2, z2, bDestroy);
}

// Converted from cdecl void CProjectileInfo::RemoveAllProjectiles(void) 0x7399B0
void CProjectileInfo::RemoveAllProjectiles() {
    plugin::Call<0x7399B0>();
}

// Converted from cdecl bool CProjectileInfo::RemoveIfThisIsAProjectile(CObject *object) 0x739A40
bool CProjectileInfo::RemoveIfThisIsAProjectile(CObject* object) {
    return plugin::CallAndReturn<bool, 0x739A40, CObject*>(object);
}