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

class PLUGIN_API CShotInfo {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CShotInfo)

public:
    eWeaponType weaponType;
    CVector m_vecStartPos;
    CVector m_vecAreaAffected;
    float m_fRadius;
    CEntity *m_pSourceEntity;
    float m_fTimeOut;
    bool m_bExist;
    bool m_bExecuted;

    SUPPORTED_10EN_11EN_STEAM static float(&ms_afRandTable)[20]; // static float ms_afRandTable[20]

    SUPPORTED_10EN_11EN_STEAM static bool AddShot(CEntity *sourceEntity, eWeaponType weaponType, CVector startPos, CVector endPos);
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static void Shutdown();
    SUPPORTED_10EN_11EN_STEAM static void Update();
};

SUPPORTED_10EN_11EN_STEAM extern CShotInfo(&gaShotInfo)[100]; // CShotInfo gaShotInfo[100]

VALIDATE_SIZE(CShotInfo, 0x2C);

#include "meta/meta.CShotInfo.h"
