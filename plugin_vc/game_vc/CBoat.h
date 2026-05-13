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
VALIDATE_OFFSET(CBoat, m_fPropRotation, 0x2A0);
VALIDATE_OFFSET(CBoat, m_fPropSpeed, 0x2A4);
VALIDATE_OFFSET(CBoat, field_2A8, 0x2A8);
VALIDATE_OFFSET(CBoat, m_aBoatNodes, 0x2AC);
VALIDATE_OFFSET(CBoat, m_boatDoor, 0x2CC);
VALIDATE_OFFSET(CBoat, m_pBoatHandling, 0x2F0);
VALIDATE_OFFSET(CBoat, m_nBoatFlags, 0x2F4);
VALIDATE_OFFSET(CBoat, field_2F5, 0x2F5);
VALIDATE_OFFSET(CBoat, gap_2F6, 0x2F6);
VALIDATE_OFFSET(CBoat, m_fForcedZRotation, 0x2F8);
VALIDATE_OFFSET(CBoat, m_nAttackPlayerTime, 0x2FC);
VALIDATE_OFFSET(CBoat, field_300, 0x300);
VALIDATE_OFFSET(CBoat, m_fBurningTimer, 0x304);
VALIDATE_OFFSET(CBoat, m_pWhoDestroyedMe, 0x308);
VALIDATE_OFFSET(CBoat, field_30C, 0x30C);
VALIDATE_OFFSET(CBoat, field_310, 0x310);
VALIDATE_OFFSET(CBoat, m_fBoatGasPedal, 0x314);
VALIDATE_OFFSET(CBoat, m_fBoatBrakePedal, 0x318);
VALIDATE_OFFSET(CBoat, m_fBoatSteeringLeftRight, 0x31C);
VALIDATE_OFFSET(CBoat, m_nPadNumber, 0x320);
VALIDATE_OFFSET(CBoat, field_321, 0x321);
VALIDATE_OFFSET(CBoat, gap_324, 0x324);
VALIDATE_OFFSET(CBoat, field_328, 0x328);
VALIDATE_OFFSET(CBoat, field_32C, 0x32C);
VALIDATE_OFFSET(CBoat, field_330, 0x330);
VALIDATE_OFFSET(CBoat, field_334, 0x334);
VALIDATE_OFFSET(CBoat, field_338, 0x338);
VALIDATE_OFFSET(CBoat, field_33C, 0x33C);
VALIDATE_OFFSET(CBoat, m_nNumWaterTrailPoints, 0x33E);
VALIDATE_OFFSET(CBoat, m_avecWakePoints, 0x340);
VALIDATE_OFFSET(CBoat, m_afWakePointLifeTime, 0x440);
VALIDATE_SIZE(CBoat, 0x4C0);