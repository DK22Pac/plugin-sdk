/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "eWeaponType.h"
#include "CProjectile.h"

class CProjectileInfo {
public:
    eWeaponType m_nWeaponType;
    CEntity *m_pCreator;
    int m_nDestroyTime;
    bool m_bActive;
    CVector m_vecLastPosn;

    static CProjectile **ms_apProjectile; // [32]

    static bool AddProjectile(CEntity* creator, eWeaponType weaponType, CVector posn, float force);
    CProjectileInfo();
    static CProjectileInfo* GetProjectileInfo(int index);
    static void Initialise();
    static bool IsProjectileInRange(float x1, float y1, float z1, float x2, float y2, float z2, bool bDestroy);
    static void RemoveAllProjectiles();
    static bool RemoveIfThisIsAProjectile(CObject* object);
    static void RemoveNotAdd(CEntity* creator, eWeaponType weaponType, CVector posn);
    static void RemoveProjectile(CProjectileInfo* info, CProjectile* projectileObject);
    static void Shutdown();
    static void Update();
};

VALIDATE_SIZE(CProjectileInfo, 0x1C);

extern CProjectileInfo *gaProjectileInfo; // [32]
