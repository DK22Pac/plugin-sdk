/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CEntity.h"
#include "CVehicle.h"
#include "CPed.h"

class PLUGIN_API CPedPlacement {
public:
    SUPPORTED_10US static bool FindZCoorForPed(CVector *pos);
    SUPPORTED_10US static bool IsPositionClearForPed(CVector const *pos, float radius, int maxNumObjects, CEntity **pObjectList, unsigned char bCheckVehicles, unsigned char bCheckPeds, unsigned char bCheckObjects);
    SUPPORTED_10US static CVehicle *IsPositionClearOfCars(CVector const *pos);
    SUPPORTED_10US static CVehicle *IsPositionClearOfCars(CPed const *ped);
};

#include "meta/meta.CPedPlacement.h"
