/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CPhysical.h"
#include "audVehicleAudioEntity.h"
#include "CPools.h"
#include "cHandlingDataMgr.h"

class CPed;

struct tDoor {
    uint32_t boneID;
    char field_4;
    char boneIndex;
    char field_6[46];
};

struct tDoors {
    tDoor m_Doors[6];
};

enum eVehicleType {
    VEHICLETYPE_AUTOMOBILE = 0x0,
    VEHICLETYPE_BIKE = 0x1,
    VEHICLETYPE_BOAT = 0x2,
    VEHICLETYPE_TRAIN = 0x3,
    VEHICLETYPE_HELI = 0x4,
    VEHICLETYPE_PLANE = 0x5,
};

enum eVehicleCreatedBy {
    RANDOM_VEHICLE = 0x1,
    MISSION_VEHICLE = 0x2,
    PARKED_VEHICLE = 0x3,
    PERMANENT_VEHICLE = 0x4,
};

class CVehicle : public CPhysical {
public:
    audVehicleAudioEntity* m_pVehicleAudioEntity;
    uint8_t field_1[150];
    uint8_t m_nColor1;
    uint8_t m_nColor2;
    uint8_t m_nColor3;
    uint8_t m_nColor4;
    uint8_t field_146[2701];
    uint8_t m_ForcePlayerStation;
    uint8_t field_156[140];
    tHandlingData* m_pHandlingData;
    uint32_t m_nHandlingFlags;
    uint8_t field_157[67];
    void* m_pVehicleFrag;
    void* field_192;

    // Veh Flags 1
    uint32_t m_bSmoothCompresn : 1;
    uint32_t m_bVehicleFlags1_2 : 1;
    uint32_t m_bNpcAntiRoll : 1;
    uint32_t m_bNpcNeutralHandl : 1;
    uint32_t m_bNoHandbrake : 1;
    uint32_t m_bSteerRearwheels : 1;
    uint32_t m_bHbRearwheelSteer : 1;
    uint32_t m_bAltSteerOpt : 1;
    uint32_t m_bWheelFNarrow2 : 1;
    uint32_t m_bWheelFNarrow : 1;
    uint32_t m_bWheelFWide : 1;
    uint32_t m_bWheelFWide2 : 1;
    uint32_t m_bWheelRNarrow2 : 1;
    uint32_t m_bWheelRNarrow : 1;
    uint32_t m_bWheelRWide : 1;
    uint32_t m_bWheelRWide2 : 1;
    uint32_t m_bHydraulicGeom : 1;
    uint32_t m_bHydraulicInst : 1;
    uint32_t m_bHydraulicNone : 1;
    uint32_t m_bNosInst : 1;
    uint32_t m_bOffroadAbility : 1;
    uint32_t m_bOffroadAbility2 : 1;
    uint32_t m_bHalogenLights : 1;
    uint32_t m_bProcRearwheel1st : 1;
    uint32_t m_bUseMaxspLimit : 1;
    uint32_t m_bLowRider : 1;
    uint32_t m_bStreetRacer : 1;
    uint32_t m_bVehicleFlags1_27 : 1;
    uint32_t m_bSwingingChassis : 1;
    uint32_t m_bOldPhysics : 1;
    uint32_t m_bVehicleFlags1_30 : 1;
    uint32_t m_bVehicleFlags1_31 : 1;

    uint8_t field_200[252];

    // Veh Flags 2
    uint32_t m_bVehicleFlags2_1 : 1;
    uint32_t m_bVehicleFlags2_2 : 1;
    uint32_t m_bVehicleFlags2_3 : 1;
    uint32_t m_bVehicleFlags2_4 : 1;
    uint32_t m_bIsVehicleHot : 1;
    uint32_t m_bIsPoliceVehicle : 1;
    uint32_t m_bVehicleFlags2_7 : 1;
    uint32_t m_bVehicleFlags2_8 : 1;
    uint32_t m_bVehicleFlags2_9 : 1;
    uint32_t m_bVehicleFlags2_10 : 1;
    uint32_t m_bVehicleFlags2_11 : 1;
    uint32_t m_bVehicleFlags2_12 : 1;
    uint32_t m_bVehicleFlags2_13 : 1;
    uint32_t m_bVehicleFlags2_14 : 1;
    uint32_t m_bVehicleFlags2_15 : 1;
    uint32_t m_bVehicleFlags2_16 : 1;
    uint32_t m_bVehicleFlags2_17 : 1;
    uint32_t m_bVehicleFlags2_18 : 1;
    uint32_t m_bVehicleFlags2_19 : 1;
    uint32_t m_bVehicleFlags2_20 : 1;
    uint32_t m_bVehicleFlags2_21 : 1;
    uint32_t m_bVehicleFlags2_22 : 1;
    uint32_t m_bVehicleFlags2_23 : 1;
    uint32_t m_bVehicleFlags2_24 : 1;
    uint32_t m_bVehicleFlags2_25 : 1;
    uint32_t m_bVehicleFlags2_26 : 1;
    uint32_t m_bVehicleFlags2_27 : 1;
    uint32_t m_bVehicleFlags2_28 : 1;
    uint32_t m_bVehicleFlags2_29 : 1;
    uint32_t m_bVehicleFlags2_30 : 1;
    uint32_t m_bVehicleFlags2_31 : 1;

    uint8_t field_1000[48];
    CPed* m_pDriver;
    CPed* m_pPassengers[8];
    uint8_t field_912[252];
    int8_t m_nMaxPassengers;
    uint8_t field_1100[71];
    uint8_t m_nCreatedBy;
    uint8_t field_1200[558];
    uint8_t m_nVehicleWeapon;
    uint8_t field_2000[28];
    uint32_t m_nVehicleType;
    uint8_t field_3304[3448];

public:
    CVehicle(uint8_t owner);
    virtual ~CVehicle() { plugin::CallVirtualMethod<0>(this, 0); }

    static void* operator new(size_t size) {
        return CPools::ms_pVehiclePool->New();
    }

    static void operator delete(void* ptr) {
        CPools::ms_pVehiclePool->Delete((CVehicle*)ptr);
    }

public:
    void SetPosition(rage::Vector3 const& pos, bool arg2, bool arg3);
    void FlyingControl(int32_t flyingModel, float leftRightSkid, float steeringUpDown, float steeringLeftRight, float accelerationBreakStatus, float arg6, float arg7);

public:
    void Fix() { plugin::CallVirtualMethod<101>(this); }
    void SetHealth(float health, int32_t arg2) { plugin::CallVirtualMethod<61>(this, health, arg2); }
};

VALIDATE_SIZE(CVehicle, 0x2080);
