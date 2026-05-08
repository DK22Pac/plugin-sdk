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
VALIDATE_OFFSET(tDoor, boneID, 0x0);
VALIDATE_OFFSET(tDoor, field_4, 0x4);
VALIDATE_OFFSET(tDoor, boneIndex, 0x5);
VALIDATE_OFFSET(tDoor, field_6, 0x6);
VALIDATE_SIZE(tDoor, 0x34);

struct tDoors {
    tDoor m_Doors[6];
};
VALIDATE_OFFSET(tDoors, m_Doors, 0x0);
VALIDATE_SIZE(tDoors, 0x138);

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

    uint8_t m_bVehicleFlags3_1 : 1;
    uint8_t m_bCanBeVisiblyDamaged : 1;
    uint8_t m_bVehicleFlags3_3 : 1;
    uint8_t m_bVehicleFlags3_4 : 1;

    uint8_t field_1000[47];
    CPed* m_pDriver;
    CPed* m_pPassengers[8];
    uint8_t field_912[252];
    int8_t m_nMaxPassengers;
    uint8_t field_1100[71];
    uint8_t m_nCreatedBy;
    uint8_t field_1200[15];
    float m_fDirtLevel;
    uint8_t field_1201[539];
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
        CPools::ms_pVehiclePool->Delete(ptr);
    }

public:
    void SetPosition(rage::Vector3 const& pos, bool arg2, bool arg3);
    void FlyingControl(int32_t flyingModel, float leftRightSkid, float steeringUpDown, float steeringLeftRight, float accelerationBreakStatus, float arg6, float arg7);

public:
    void Fix() { plugin::CallVirtualMethod<101>(this); }
    void SetHealth(float health, int32_t arg2) { plugin::CallVirtualMethod<61>(this, health, arg2); }
};
VALIDATE_OFFSET(CVehicle, m_pVehicleAudioEntity, 0x210);
VALIDATE_OFFSET(CVehicle, field_1, 0x214);
VALIDATE_OFFSET(CVehicle, m_nColor1, 0x2AA);
VALIDATE_OFFSET(CVehicle, m_nColor2, 0x2AB);
VALIDATE_OFFSET(CVehicle, m_nColor3, 0x2AC);
VALIDATE_OFFSET(CVehicle, m_nColor4, 0x2AD);
VALIDATE_OFFSET(CVehicle, field_146, 0x2AE);
VALIDATE_OFFSET(CVehicle, m_ForcePlayerStation, 0xD3B);
VALIDATE_OFFSET(CVehicle, field_156, 0xD3C);
VALIDATE_OFFSET(CVehicle, m_pHandlingData, 0xDC8);
VALIDATE_OFFSET(CVehicle, m_nHandlingFlags, 0xDCC);
VALIDATE_OFFSET(CVehicle, field_157, 0xDD0);
VALIDATE_OFFSET(CVehicle, m_pVehicleFrag, 0xE14);
VALIDATE_OFFSET(CVehicle, field_192, 0xE18);
VALIDATE_OFFSET(CVehicle, field_200, 0xE20);
VALIDATE_OFFSET(CVehicle, field_1000, 0xF21);
VALIDATE_OFFSET(CVehicle, m_pDriver, 0xF50);
VALIDATE_OFFSET(CVehicle, m_pPassengers, 0xF54);
VALIDATE_OFFSET(CVehicle, field_912, 0xF74);
VALIDATE_OFFSET(CVehicle, m_nMaxPassengers, 0x1070);
VALIDATE_OFFSET(CVehicle, field_1100, 0x1071);
VALIDATE_OFFSET(CVehicle, m_nCreatedBy, 0x10B8);
VALIDATE_OFFSET(CVehicle, field_1200, 0x10B9);
VALIDATE_OFFSET(CVehicle, m_fDirtLevel, 0x10C8);
VALIDATE_OFFSET(CVehicle, field_1201, 0x10CC);
VALIDATE_OFFSET(CVehicle, m_nVehicleWeapon, 0x12E7);
VALIDATE_OFFSET(CVehicle, field_2000, 0x12E8);
VALIDATE_OFFSET(CVehicle, m_nVehicleType, 0x1304);
VALIDATE_OFFSET(CVehicle, field_3304, 0x1308);
VALIDATE_SIZE(CVehicle, 0x2080);
