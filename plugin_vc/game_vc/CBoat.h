/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVehicle.h"
#include "CVector2D.h"
#include "CDoor.h"
#include "tBoatHandlingData.h"

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
    float m_fPropRotation;
    float m_fPropSpeed;
    int field_2A8;
    RwFrame *m_aBoatNodes[8];
    CDoor m_boatDoor;
    tBoatHandlingData *m_pBoatHandling;
    union
    {
        struct
        {
            unsigned char bUnknownBoatFlagsA : 1; 
            unsigned char bIsBoatInWater : 1; 
            unsigned char bUnknownBoatFlagsB : 6; 

        } m_nBoatFlags;
    };
    char field_2F5;
    char gap_2F6[2];
    float m_fForcedZRotation;
    int m_nAttackPlayerTime;
    int field_300;
    float m_fBurningTimer;
    CEntity *m_pWhoDestroyedMe;
    float field_30C;
    int field_310;
    float m_fBoatGasPedal;
    float m_fBoatBrakePedal;
    float m_fBoatSteeringLeftRight;
    unsigned char m_nPadNumber;
    char field_321[3];
    char gap_324[4];
    float field_328;
    float field_32C; // x
    float field_330; // y
    float field_334; // z
    float field_338;
    short field_33C;
    unsigned short m_nNumWaterTrailPoints;
    CVector2D m_avecWakePoints[32];
    float m_afWakePointLifeTime[32];

    static float &WAKE_LIFETIME; // 150.0
    static float &MIN_WAKE_INTERVAL; // 2.0
    
    //funcs

    void AddWakePoint(CVector posn);
    void ApplyWaterResistance();
    CBoat(int modelIndex, unsigned char createdBy);
    void DoDriveByShootings();
    static void FillBoatList();
    void PruneWakeTrail();
};

VALIDATE_SIZE(CBoat, 0x4C0);