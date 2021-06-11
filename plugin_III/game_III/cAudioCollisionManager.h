/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "cAudioCollision.h"

class PLUGIN_API cAudioCollisionManager {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(cAudioCollisionManager)

public:
    cAudioCollision m_asCollisions1[10];
    cAudioCollision m_asCollisions2[10];
    unsigned char m_nIndicesTable[10];
    unsigned char m_nCollisionsInQueue;
    cAudioCollision m_sQueue;

    SUPPORTED_10EN_11EN_STEAM void AddCollisionToRequestedQueue();
};

VALIDATE_SIZE(cAudioCollisionManager, 0x354);

#include "meta/meta.cAudioCollisionManager.h"
