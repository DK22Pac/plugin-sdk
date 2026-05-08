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

class CEntity;

class PLUGIN_API CShotInfo {
public:
    eWeaponType      m_nWeaponType;
    CVector  m_vecOrigin;
    CVector  m_vecTargetOffset;
    float    m_fRange;
    CEntity *m_pCreator;
    float fFlameVar; //this changes the shape/size of the flame
    bool bInUse;
private:
    char _pad2A[3];
public:

    static void Initialise();
    // dummy function
    static void Shutdown();
    static bool AddShot(CEntity* creator, eWeaponType weaponType, CVector origin, CVector target);
    static void Update();
};
VALIDATE_OFFSET(CShotInfo, m_nWeaponType, 0x0);
VALIDATE_OFFSET(CShotInfo, m_vecOrigin, 0x4);
VALIDATE_OFFSET(CShotInfo, m_vecTargetOffset, 0x10);
VALIDATE_OFFSET(CShotInfo, m_fRange, 0x1C);
VALIDATE_OFFSET(CShotInfo, m_pCreator, 0x20);
VALIDATE_OFFSET(CShotInfo, fFlameVar, 0x24);
VALIDATE_OFFSET(CShotInfo, bInUse, 0x28);
VALIDATE_SIZE(CShotInfo, 0x2C);

extern unsigned int MAX_SHOT_INFOS; // default 100
extern CShotInfo *aShotInfos; // CShotInfo aShotInfos[MAX_SHOT_INFOS]