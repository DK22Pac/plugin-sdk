/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

//! Pretty sure this class is not used by the game
class PLUGIN_API CTimeStep {
public:
    SUPPORTED_10EN_11EN_STEAM static float &ms_fTimeStep;
    SUPPORTED_10EN_11EN_STEAM static float &ms_fFramesPerUpdate;
    SUPPORTED_10EN_11EN_STEAM static float &ms_fTimeScale;
};
