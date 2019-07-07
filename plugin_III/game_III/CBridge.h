/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CBuilding.h"
#include "eBridgeState.h"

class PLUGIN_API CBridge {
public:
    SUPPORTED_10EN_11EN_STEAM static CBuilding *&pWeight;
    SUPPORTED_10EN_11EN_STEAM static CBuilding *&pLiftRoad;
    SUPPORTED_10EN_11EN_STEAM static CBuilding *&pLiftPart;
    SUPPORTED_10EN_11EN_STEAM static float &DefaultZLiftWeight;
    SUPPORTED_10EN_11EN_STEAM static eBridgeState &State;
    SUPPORTED_10EN_11EN_STEAM static eBridgeState &OldState;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &TimeOfBridgeBecomingOperational;
    SUPPORTED_10EN_11EN_STEAM static float &OldLift;
    SUPPORTED_10EN_11EN_STEAM static float &DefaultZLiftRoad;
    SUPPORTED_10EN_11EN_STEAM static float &DefaultZLiftPart;

    SUPPORTED_10EN_11EN_STEAM static void FindBridgeEntities();
    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static bool ShouldLightsBeFlashing();
    SUPPORTED_10EN_11EN_STEAM static bool ThisIsABridgeObjectMovingUp(unsigned int modelIndex);
    SUPPORTED_10EN_11EN_STEAM static void Update();
};

#include "meta/meta.CBridge.h"
