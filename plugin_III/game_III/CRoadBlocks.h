/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"

class PLUGIN_API CRoadBlocks {
public:
    SUPPORTED_10EN_11EN_STEAM static short(&RoadBlockObject)[600]; // static short RoadBlockObject[600]
    SUPPORTED_10EN_11EN_STEAM static bool(&InOrOut)[600]; // static bool InOrOut[600]
    SUPPORTED_10EN_11EN_STEAM static short &NumRoadBlocks;

    SUPPORTED_10EN_11EN_STEAM static void GenerateRoadBlockCopsForCar(CVehicle *vehicle, int roadBlockType, short roadBlockNode);
    SUPPORTED_10EN_11EN_STEAM static void GenerateRoadBlocks();
    SUPPORTED_10EN_11EN_STEAM static void Init();
};

#include "meta/meta.CRoadBlocks.h"
