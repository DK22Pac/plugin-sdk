/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "eWeaponType.h"
#include "CEntity.h"


class CShotInfo {
public:
    eWeaponType weaponType;
    CVector m_vecOrigin;
    CVector m_vecTargetOffset;
    float m_fRange;
    CEntity *m_pCreator;
    int m_nDestroyTime;
    bool m_bExist;
    bool m_bExecuted;

    static float *ms_afRandTable; // [20]

    static bool AddShot(CEntity* creator, eWeaponType weaponType, CVector origin, CVector target);
    CShotInfo();
    static void Initialise();
    static void Shutdown();
    static void Update();
};

VALIDATE_SIZE(CShotInfo, 0x2C);

extern CShotInfo *aShotInfo; // [100]
