/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CFire.h"

#define MAX_NUM_FIRES 40

class CFireManager {
public:
    unsigned int m_nMaxFireGenerationsAllowed; 
    CFire m_aFires[MAX_NUM_FIRES];
    
    //funcs
    CFireManager();
    void ExtinguishPoint(CVector point, float range);
    CFire* FindFurthestFire_NeverMindFireMen(CVector arg0, float arg1, float arg2);
    CFire* FindNearestFire(CVector position, float arg1); 
    CFire* GetNextFreeFire();
    bool IsScriptFireExtinguished(short fireIndex);
    void RemoveAllScriptFires();
    void RemoveScriptFire(short fireIndex);
    void SetScriptFireAudio(short fireIndex, bool enable);
    void StartFire(CEntity* target, CEntity* creator, float size, unsigned char arg3);
    void StartFire(CVector point, float size, unsigned char arg2);
    int StartScriptFire(CVector const& point, CEntity* target, float size, unsigned char arg3);
    void Update();
    ~CFireManager();
};

VALIDATE_SIZE(CFireManager, 0x784);

extern CFireManager &gFireManager;