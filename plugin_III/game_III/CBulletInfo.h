/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "eWeaponType.h"
#include "CEntity.h"


class CBulletInfo {
public:
    eWeaponType  m_nWeaponType;
    CEntity     *m_pCreator;
    unsigned int m_nDestroyTime;
    bool         m_bExists;
    CVector      m_vecPosition;
    CVector      m_vecVelocity;
    short        m_nDamage;

    //funcs
    CBulletInfo();
    static bool AddBullet(CEntity* creator, eWeaponType weaponType, CVector position, CVector velocity);
    static void Initialise();
    static void Shutdown();
    static bool TestForSniperBullet(float x1, float y1, float z1, float x2, float y2, float z2);
    static void Update();
};

VALIDATE_SIZE(CBulletInfo, 0x2C);

extern CBulletInfo *aBulletInfos; // [100]
extern bool &bPlayerSniperBullet;
extern CVector *PlayerSniperBulletStart;
extern CVector *PlayerSniperBulletEnd;
