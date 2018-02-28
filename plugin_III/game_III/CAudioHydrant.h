/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_III.h"
class CParticleObject;

class CAudioHydrant {
public:
    int m_nAudioEntity;
    CParticleObject *m_pObject;

    CAudioHydrant();
    static bool Add(CParticleObject* object);
    static void Remove(CParticleObject* object);
};

VALIDATE_SIZE(CAudioHydrant, 0x8);
