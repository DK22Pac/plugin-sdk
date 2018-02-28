/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVehicle.h"

enum eTrainNodes {
    TRAIN_NODE_NONE = 0,
    TRAIN_DOOR_LHS = 1,
    TRAIN_DOOR_RHS = 2,
    TRAIN_NUM_NODES
};

class CTrain : public CVehicle {
protected:
    CTrain(plugin::dummy_func_t) : CVehicle(plugin::dummy) {}
public:
    char gap_2A0[32];
    char field_2C0[48];
    char gap_2F0[11];
    char field_2FB;

    //funcs
    // Empty function
    void AddPassenger(CPed* ped);
    CTrain(int modelIndex, unsigned char createdBy);
    // Empty function
    static void InitTrains();
    // Empty function
    static void Shutdown();
    // Empty function
    static void UpdateTrains();
};

VALIDATE_SIZE(CTrain, 0x2FC);