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
#include "CVector.h"

class PLUGIN_API CBulletInfo {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CBulletInfo)

public:
    eWeaponType m_nWeaponType;
    CEntity *m_pSource;
    float m_fTimer; //!< big mistake
    bool m_bExist;
    CVector m_vecPosition;
    CVector m_vecSpeed;
    short m_nDamage;

    SUPPORTED_10EN_11EN_STEAM static CBulletInfo(&aBulletInfos)[100]; // static CBulletInfo aBulletInfos[100]

    SUPPORTED_10EN_11EN_STEAM static void AddBullet(CEntity *pSource, eWeaponType type, CVector pos, CVector speed);
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static void Shutdown();
    SUPPORTED_10EN_11EN_STEAM static bool TestForSniperBullet(float x1, float x2, float y1, float y2, float z1, float z2);
    SUPPORTED_10EN_11EN_STEAM static void Update();
};

SUPPORTED_10EN_11EN_STEAM extern CVector &PlayerSniperBulletStart;
SUPPORTED_10EN_11EN_STEAM extern CVector &PlayerSniperBulletEnd;
SUPPORTED_10EN_11EN_STEAM extern bool &bPlayerSniperBullet;

VALIDATE_SIZE(CBulletInfo, 0x2C);

#include "meta/meta.CBulletInfo.h"
