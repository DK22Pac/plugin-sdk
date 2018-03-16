/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CFire.h"

#define MAX_NUM_FIRES 58

class CFireManager {
public:
    CFire m_aFires[MAX_NUM_FIRES];
    unsigned int m_nMaxFireGenerationsAllowed;

    ~CFireManager();
    CFire* FindNearestFire(CVector const& position, float* range);
    CFire* FindFurthestFire_NeverMindFireMen(CVector posn, float range1, float range2);

    void ExtinguishPoint(CVector point, float range);
    bool ExtinguishPointWithWater(CVector point, float range);
    bool IsScriptFireExtinguished(short fireIndex);
    void RemoveScriptFire(short fireIndex);
    void RemoveAllScriptFires();
    CFire* StartFire(CVector point, float size,bool bMoves);
    CFire* StartFire(CEntity* target, CEntity* creator, float size, bool bMoves);
    int StartScriptFire(CVector const& point, CEntity* target);
    void Update();
};

VALIDATE_SIZE(CFireManager, 0xAE4);

extern CFireManager &gFireManager;