/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CTimeCycle {
public:
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static void StopExtraColour(bool arg1);
    SUPPORTED_10EN_11EN_STEAM static void Update();
};

#include "meta/meta.CTimeCycle.h"
