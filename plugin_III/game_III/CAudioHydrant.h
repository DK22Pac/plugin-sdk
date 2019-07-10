/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
//#include "CParticleObject.h"
class CParticleObject;

class PLUGIN_API CAudioHydrant {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CAudioHydrant)

public:
    int m_nAudioEntity;
    CParticleObject *m_pObject;

    SUPPORTED_10EN_11EN_STEAM static void Add(CParticleObject *object);
    SUPPORTED_10EN_11EN_STEAM static void Remove(CParticleObject *object);
};

VALIDATE_SIZE(CAudioHydrant, 0x8);

#include "meta/meta.CAudioHydrant.h"
