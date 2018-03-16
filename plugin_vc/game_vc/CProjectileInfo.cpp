/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CProjectileInfo.h"

CProjectileInfo* CProjectileInfo::ms_apProjectile = (CProjectileInfo*)0x7DB888;

// Converted from cdecl void CProjectileInfo::Shutdown(void)	0x5C7C10	
void CProjectileInfo::Shutdown() {
    plugin::Call<0x5C7C10>();
}

// Converted from cdecl void CProjectileInfo::Update(void)	0x5C6A20	
void CProjectileInfo::Update() {
    plugin::Call<0x5C6A20>();
}

// Converted from cdecl void CProjectileInfo::RemoveNotAdd(CEntity *pEntity ,eWeaponType weapontype,CVector posn)	0x5C7180	
void CProjectileInfo::RemoveNotAdd(CEntity* pEntity, eWeaponType weapontype, CVector posn) {
    plugin::Call<0x5C7180, CEntity*, eWeaponType, CVector>(pEntity, weapontype, posn);
}

// Converted from cdecl bool CProjectileInfo::RemoveIfThisIsAProjectile(CObject *pObject)	0x5C6970	
bool CProjectileInfo::RemoveIfThisIsAProjectile(CObject* pObject) {
    return plugin::CallAndReturn<bool, 0x5C6970, CObject*>(pObject);
}

// Converted from cdecl void CProjectileInfo::RemoveDetonatorProjectiles(void)	0x5C71D0	
void CProjectileInfo::RemoveDetonatorProjectiles() {
    plugin::Call<0x5C71D0>();
}

// Converted from cdecl void CProjectileInfo::RemoveAllProjectiles(void)	0x5C69D0	
void CProjectileInfo::RemoveAllProjectiles() {
    plugin::Call<0x5C69D0>();
}

// Converted from cdecl void CProjectileInfo::Initialise(void)	0x5C7C30	
void CProjectileInfo::Initialise() {
    plugin::Call<0x5C7C30>();
}

// Converted from cdecl CProjectileInfo* CProjectileInfo::GetProjectileInfo(int ProjIndex)	0x5C7BF0	
CProjectileInfo* CProjectileInfo::GetProjectileInfo(int ProjIndex) {
    return plugin::CallAndReturn<CProjectileInfo*, 0x5C7BF0, int>(ProjIndex);
}

// Converted from cdecl bool CProjectileInfo::AddProjectile(CEntity *pEntity,eWeaponType weapontype,CVector posn,float fPower)	0x5C7250	
bool CProjectileInfo::AddProjectile(CEntity* pEntity, eWeaponType weapontype, CVector posn, float fPower) {
    return plugin::CallAndReturn<bool, 0x5C7250, CEntity*, eWeaponType, CVector, float>(pEntity, weapontype, posn, fPower);
}
