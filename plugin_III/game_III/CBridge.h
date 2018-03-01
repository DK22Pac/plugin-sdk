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

class CBridge {
public:
    // static variables
    static float &DefaultZLiftPart;
    static float &DefaultZLiftRoad;
    static float &DefaultZLiftWeight;
    static float &OldLift;
    static eBridgeState &OldState;
    static eBridgeState &State;
    static unsigned int &TimeOfBridgeBecomingOperational;
    static  CBuilding **pLiftPart;
    static  CBuilding **pLiftRoad;
    static  CBuilding **pWeight;

    // static functions
    static void Init();
    static void Update();
    static bool ShouldLightsBeFlashing();
    static void FindBridgeEntities();
    static bool ThisIsABridgeObjectMovingUp(unsigned int modelIndex);
};
