/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CEntity.h"

class PLUGIN_API CPedPlacement {
public:
    SUPPORTED_10EN_11EN_STEAM static void FindZCoorForPed(CVector *position);
    SUPPORTED_10EN_11EN_STEAM static bool IsPositionClearForPed(CVector *position);
    SUPPORTED_10EN_11EN_STEAM static CEntity *IsPositionClearOfCars(CVector *position);
};

#include "meta/meta.CPedPlacement.h"
