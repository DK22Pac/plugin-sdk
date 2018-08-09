/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "tParticleSystemData.h"

class PLUGIN_API cParticleSystemMgr {
public:
    tParticleSystemData m_systems[83];

    SUPPORTED_10EN_11EN_STEAM void Initialise();
    SUPPORTED_10EN_11EN_STEAM void LoadParticleData();
};

SUPPORTED_10EN_11EN_STEAM extern cParticleSystemMgr &mod_ParticleSystemManager;

VALIDATE_SIZE(cParticleSystemMgr, 0x2FFC);

#include "meta/meta.cParticleSystemMgr.h"
