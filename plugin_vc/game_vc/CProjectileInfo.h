/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CObject.h"
#include "eWeaponType.h"

class CProjectileInfo {
public:

    int nWeaponId; //the weapon this projectile originates from
    CEntity* pSource; //source of this projectile, usually a ped
    uint32_t dwTimer; //the timer for this projectile (either for disappearing or triggering)
    bool bInUse; //shows if this slot is in use
private:
    char _pad[3];
public:
    CVector vecPos; //position of the projectile

    static CProjectileInfo* ms_apProjectile; // CProjectileInfo::ms_apProjectile[32]

    static void Shutdown();
    static void Update();
    static void RemoveNotAdd(CEntity* pEntity, eWeaponType weapontype, CVector posn);
    static bool RemoveIfThisIsAProjectile(CObject* pObject);
    static void RemoveDetonatorProjectiles();
    static void RemoveAllProjectiles();
    static void Initialise();
    static CProjectileInfo* GetProjectileInfo(int ProjIndex);
    static bool AddProjectile(CEntity* pEntity, eWeaponType weapontype, CVector posn, float fPower);

};

VALIDATE_SIZE(CProjectileInfo, 0x1C);