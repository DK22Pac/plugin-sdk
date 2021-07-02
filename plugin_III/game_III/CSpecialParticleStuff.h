/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CMatrix.h"

class PLUGIN_API CSpecialParticleStuff {
public:
    SUPPORTED_10EN_11EN_STEAM static unsigned int &BoatFoamStart;

    SUPPORTED_10EN_11EN_STEAM static void CreateFoamAroundObject(CMatrix *matrix, float x, float y, float z, int particles);
    SUPPORTED_10EN_11EN_STEAM static void StartBoatFoamAnimation();
    SUPPORTED_10EN_11EN_STEAM static void UpdateBoatFoamAnimation(CMatrix *matrix);
};

#include "meta/meta.CSpecialParticleStuff.h"
