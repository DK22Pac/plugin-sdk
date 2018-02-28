/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
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
private:
    char _pad0D[3];
public:
    CVector      m_vecPosition;
    CVector      m_vecVelocity;
    short        m_nDamage;
private:
    char _pad2A[2];
public:

    //funcs
    static void AddBullet(CEntity* creator, eWeaponType weaponType, CVector position, CVector velocity);
    CBulletInfo();
    static void Initialise();
    static void Shutdown();
    static void TestForSniperBullet(float x1, float y1, float z1, float x2, float y2, float z2);
    static void Update();
};

VALIDATE_SIZE(CBulletInfo, 0x2C);

extern unsigned int MAX_BULLET_INFOS; // default 100
extern CBulletInfo *aBulletInfos; // CBulletInfo aBulletInfos[MAX_BULLET_INFOS]
