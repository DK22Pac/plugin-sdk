/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CIniFile {
public:
    //! 1.0f
    SUPPORTED_10EN_11EN_STEAM static float &PedNumberMultiplier;
    //! 1.0f
    SUPPORTED_10EN_11EN_STEAM static float &CarNumberMultiplier;

    SUPPORTED_10EN_11EN_STEAM static void LoadIniFile();
};

#include "meta/meta.CIniFile.h"
