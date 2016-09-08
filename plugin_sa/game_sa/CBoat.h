/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"
#include "CVehicle.h"
#include "CDoor.h"

enum eBoatNodes {
    BOAT_NODE_NONE = 0,
    BOAT_MOVING = 1,
    BOAT_WINDSCREEN = 2,
    BOAT_RUDDER = 3,
    BOAT_FLAP_LEFT = 4,
    BOAT_FLAP_RIGHT = 5,
    BOAT_REARFLAP_LEFT = 6,
    BOAT_REARFLAP_RIGHT = 7,
    BOAT_STATIC_PROP = 8,
    BOAT_MOVING_PROP = 9,
    BOAT_STATIC_PROP_2 = 10,
    BOAT_MOVING_PROP_2 = 11,
    BOAT_NUM_NODES
};

class CBoat : public CVehicle {
protected:
    CBoat(plugin::dummy_func_t) : CVehicle(plugin::dummy) {}
public:
    float           m_fMovingHiRotation;
    float           m_fPropSpeed; // propeller speed
    float           m_fPropRotation; // propeller rotation
    unsigned char   m_nBoatFlags; // 4 - FORCE_Z_ROTATION
    char _pad0[3];
    RwFrame        *m_aBoatNodes[BOAT_NUM_NODES];
    CDoor           m_marquisDoor;
    void           *m_pBoatHandling;
    float           m_fForcedZRotation; // used internally in CBoat::ProcessControl
    int             m_nAttackPlayerTime;
    int field_604;
    float           m_fBurningTimer; // starts when vehicle health is lower than 250.0, boat blows up when it hits 5000.0
    CEntity        *m_pWhoDestroyedMe;
    CVector field_610;
    CVector field_61C;
    void           *m_apPropSplashFx[2]; // FxSystem_c *
    CVector field_630;
    char field_63C;
    char            m_nPadNumber;
    char _pad1[2];
    float field_640; // initialised with 7.0f
    short           m_nNumWaterTrailPoints;
    char field_646;
    char field_647;
    CVector2D       m_avecWakePoints[32];
    float           m_afWakePointLifeTime[32];
    char field_7C8[32];

    static CBoat **apFrameWakeGeneratingBoats; // static CBoat *apFrameWakeGeneratingBoats[4]
    static float &MAX_WAKE_LENGTH; // 50.0
    static float &MIN_WAKE_INTERVAL; // 2.0
    static float &WAKE_LIFETIME; // 150.0

    //funcs

    CBoat(int modelIndex, unsigned char createdBy);

    void SetupModelNodes(); // fill m_aBoatNodes array
    void DebugCode();
    void PrintThrustAndRudderInfo(); // uses debug printing
    void ModifyHandlingValue(bool const& arg0);
    void PruneWakeTrail();
    void AddWakePoint(CVector posn);

    static bool IsSectorAffectedByWake(CVector2D arg0, float arg1, CBoat** arg2);
    static float IsVertexAffectedByWake(CVector arg0, CBoat* arg1, short arg2, bool arg3);
    static void CheckForSkippingCalculations();
    static void FillBoatList();
};

VALIDATE_SIZE(CBoat, 0x7E8);

extern float &fShapeLength; // 0.4
extern float &fShapeTime; // 0.05
extern float &fRangeMult; // 0.6

RwObject* GetBoatAtomicObjectCB(RwObject* object, void* data);