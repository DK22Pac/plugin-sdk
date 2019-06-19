/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "eGangType.h"
#include "eVehicleModel.h"
#include "eWeaponType.h"
#include "ePedModel.h"
#include "CGangInfo.h"

class CGangs {
public:
    static CGangInfo *Gang; // CGangs::Gang[9];

    static void Initialise();
    static void SetGangVehicleModel(eGangType gangType, eVehicleModel modelIndex);
    static void SetGangWeapons(eGangType gangType, eWeaponType weaponOne, eWeaponType weaponTwo);
    static void SetGangPedModelOverride(eGangType gangType, ePedModel modelIndex);
    static ePedModel GetGangPedModelOverride(eGangType gangType);
    static void SaveAllGangData(unsigned char* bufferPointer, unsigned int* structSize);
    static void LoadAllGangData(unsigned char* bufferPointer, unsigned int structSize);
};
