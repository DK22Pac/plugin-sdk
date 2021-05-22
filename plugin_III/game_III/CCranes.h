/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CEntity.h"
#include "CVehicle.h"
#include "CCrane.h"

class PLUGIN_API CCranes {
public:
    SUPPORTED_10EN_11EN_STEAM static CCrane(&aCranes)[8]; // static CCrane aCranes[8]
    SUPPORTED_10EN_11EN_STEAM static int &NumCranes;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &CarsCollectedMilitaryCrane;

    SUPPORTED_10EN_11EN_STEAM static void ActivateCrane(float infX, float supX, float infY, float supY, float dropOffX, float dropOffY, float dropOffZ, float heading, bool isCrusher, bool isMilitary, float posX, float posY);
    SUPPORTED_10EN_11EN_STEAM static void AddThisOneCrane(CEntity *entity);
    SUPPORTED_10EN_11EN_STEAM static void DeActivateCrane(float x, float y);
    SUPPORTED_10EN_11EN_STEAM static bool DoesMilitaryCraneHaveThisOneAlready(unsigned int vehicleModelIndex);
    SUPPORTED_10EN_11EN_STEAM static bool HaveAllCarsBeenCollectedByMilitaryCrane();
    SUPPORTED_10EN_11EN_STEAM static void InitCranes();
    SUPPORTED_10EN_11EN_STEAM static bool IsThisCarBeingCarriedByAnyCrane(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static bool IsThisCarBeingTargettedByAnyCrane(CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static bool IsThisCarPickedUp(float x, float y, CVehicle *vehicle);
    SUPPORTED_10EN_11EN_STEAM static void RegisterCarForMilitaryCrane(unsigned int vehicleModelIndex);
    SUPPORTED_10EN_11EN_STEAM static void Save(unsigned char *buf, unsigned int *size);
    SUPPORTED_10EN_11EN_STEAM static void UpdateCranes();
};

SUPPORTED_10EN_11EN_STEAM void CranesLoad(unsigned char *buf, unsigned int size);

#include "meta/meta.CCranes.h"
