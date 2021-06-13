/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CGangInfo.h"

class PLUGIN_API CGangs {
public:
    SUPPORTED_10EN_11EN_STEAM static CGangInfo(&Gang)[9]; // static CGangInfo Gang[9]

    SUPPORTED_10EN_11EN_STEAM static char GetGangPedModelOverride(short gang);
    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static void LoadAllGangData(unsigned char *buf, unsigned int size);
    SUPPORTED_10EN_11EN_STEAM static void SaveAllGangData(unsigned char *buf, unsigned int *size);
    SUPPORTED_10EN_11EN_STEAM static void SetGangPedModelOverride(short gang, char ovrd);
    SUPPORTED_10EN_11EN_STEAM static void SetGangVehicleModel(short gang, int model);
    SUPPORTED_10EN_11EN_STEAM static void SetGangWeapons(short gang, int weaponOne, int weaponTwo);
};

#include "meta/meta.CGangs.h"
