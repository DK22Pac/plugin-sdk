/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CPager {
public:
    SUPPORTED_10EN_11EN_STEAM static void ClearMessages();
    SUPPORTED_10EN_11EN_STEAM static void Display();
    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static void Process();
};

#include "meta/meta.CPager.h"
