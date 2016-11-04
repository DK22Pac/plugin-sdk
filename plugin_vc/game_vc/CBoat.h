/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"
#include "CVehicle.h"

enum eBoatNodes {
    BOAT_NODE_NONE = 0,
    BOAT_MOVING = 1,
    BOAT_WINDSCREEN = 2,
    BOAT_RUDDER = 3,
    BOAT_FLAP_LEFT = 4,
    BOAT_FLAP_RIGHT = 5,
    BOAT_REARFLAP_LEFT = 6,
    BOAT_REARFLAP_RIGHT = 7,
    BOAT_NUM_NODES
};

class CBoat : public CVehicle {
protected:
    CBoat(plugin::dummy_func_t) : CVehicle(plugin::dummy) {}
public:
    int field_2A0;
    int field_2A4;
    char gap_2A8[8];
    RwFrame *m_aBoatNodes[7];
    int field_2CC[9];
    int pBoatHandling;
    char field_2F4;
    char field_2F5;
    char gap_2F6[2];
    int field_2F8;
    int field_2FC;
    int field_300;
    int field_304;
    int field_308;
    int field_30C;
    int field_310;
    int field_314;
    int field_318;
    int field_31C;
    int field_320;
    char gap_324[4];
    int field_328;
    int field_32C;
    int field_330;
    int field_334;
    int field_338;
    __int16 field_33C;
    __int16 field_33E;
    char field_340[256];
    int field_440[32];

    static float &WAKE_LIFETIME; // 150.0
    static float &MIN_WAKE_INTERVAL; // 2.0
    
    //funcs

    void AddWakePoint(CVector posn);
    static void ApplyWaterResistance();
    CBoat(int modelIndex, unsigned char createdBy);
    void DoDriveByShootings();
    static void FillBoatList();
    void PruneWakeTrail();
};

VALIDATE_SIZE(CBoat, 0x4C0);