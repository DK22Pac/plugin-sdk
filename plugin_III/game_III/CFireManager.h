/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CFire.h"

class PLUGIN_API CFireManager {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CFireManager)

public:
    unsigned int m_nTotalFires;
    CFire m_aFires[40];

    SUPPORTED_10EN_11EN_STEAM void ExtinguishPoint(CVector point, float range);
    SUPPORTED_10EN_11EN_STEAM CFire *FindFurthestFire_NeverMindFireMen(CVector pos, float minRange, float maxRange);
    SUPPORTED_10EN_11EN_STEAM CFire *FindNearestFire(CVector pos, float *pDistance);
    SUPPORTED_10EN_11EN_STEAM CFire *GetNextFreeFire();
    SUPPORTED_10EN_11EN_STEAM bool IsScriptFireExtinguished(short fireIndex);
    SUPPORTED_10EN_11EN_STEAM void RemoveAllScriptFires();
    SUPPORTED_10EN_11EN_STEAM void RemoveScriptFire(short fireIndex);
    SUPPORTED_10EN_11EN_STEAM void SetScriptFireAudio(short fireIndex, bool state);
    SUPPORTED_10EN_11EN_STEAM void StartFire(CVector pos, float strength, unsigned char propagation);
    SUPPORTED_10EN_11EN_STEAM void StartFire(CEntity *entityOnFire, CEntity *fleeFrom, float strength, unsigned char propagation);
    SUPPORTED_10EN_11EN_STEAM int StartScriptFire(CVector const &pos, CEntity *target, float strength, unsigned char propagation);
    SUPPORTED_10EN_11EN_STEAM void Update();
};

SUPPORTED_10EN_11EN_STEAM extern CFireManager &gFireManager;

VALIDATE_SIZE(CFireManager, 0x784);

#include "meta/meta.CFireManager.h"
