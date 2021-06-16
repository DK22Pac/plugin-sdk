/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CWaterCannon.h"

class PLUGIN_API CWaterCannons {
public:
    SUPPORTED_10EN_11EN_STEAM static CWaterCannon(&aCannons)[3]; // static CWaterCannon aCannons[3]

    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static void Render();
    SUPPORTED_10EN_11EN_STEAM static void Update();
    SUPPORTED_10EN_11EN_STEAM static void UpdateOne(unsigned int id, CVector *pos, CVector *dir);
};

#include "meta/meta.CWaterCannons.h"
