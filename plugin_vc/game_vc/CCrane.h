/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CCrane {
public:
    SUPPORTED_10EN_11EN_STEAM static void RotateCarriedCarProperly();
    SUPPORTED_10EN_11EN_STEAM static void SetHookMatrix();
    SUPPORTED_10EN_11EN_STEAM static void Update();
};

#include "meta/meta.CCrane.h"
