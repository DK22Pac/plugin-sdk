/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"
#include "CEntity.h"

class PLUGIN_API CCranes {
public:
    SUPPORTED_10EN_11EN_STEAM static int AddThisOneCrane(CEntity *pEnity);
    SUPPORTED_10EN_11EN_STEAM static bool DoesMilitaryCraneHaveThisOneAlready(unsigned short arg1);
    SUPPORTED_10EN_11EN_STEAM static void InitCranes();
    SUPPORTED_10EN_11EN_STEAM static bool IsThisCarBeingCarriedByAnyCrane(CVehicle *pVehicle);
    SUPPORTED_10EN_11EN_STEAM static bool IsThisCarBeingTargettedByAnyCrane(CVehicle *pVehicle);
    SUPPORTED_10EN_11EN_STEAM static void RegisterCarForMilitaryCrane(unsigned short arg1);
    SUPPORTED_10EN_11EN_STEAM static void UpdateCranes();
};

#include "meta/meta.CCranes.h"
