/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"
#include "CObject.h"

class CGangs {
public:
    int nVehicleModel; //vehicle model index used by this gang
    int nPedModels[2]; //ped models used by the gang
    unsigned char uUnknown;                       
private:
    char _pad[3];
public:
    int nWeapons[2];  //weapons ids used by the gang


    static CGangs* Gang; // CGangs::Gang[9];
    static bool* GangAttackWithCops; // CGangs::GangAttackWithCops[19]

    static void SetWillAttackPlayerWithCops(ePedType pedtype, bool bAttackPlayerWithCops);
    static void SetGangWeapons(short gangId, int weapon1_Id, int weapon2_Id);
    static void SetGangVehicleModel(short gangId, int vehicleModelId);
    static void SetGangPedModels(short gangId, int pedModel1_Id, int pedModel2_Id);
    static void SaveAllGangData(unsigned char* arg0, unsigned int* arg1);
    static void Initialise();
    static int ChooseGangPedModel(short gangId);
    static bool GetWillAttackPlayerWithCops(ePedType pedtype);


};

VALIDATE_SIZE(CGangs, 0x18);