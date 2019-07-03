/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVehicle.h"
#include "tBikeHandlingData.h"



enum eBikeNodes {
    BIKE_NODE_NONE = 0,
    BIKE_CHASSIS = 1,
    BIKE_FORKS_FRONT = 2,
    BIKE_FORKS_REAR = 3,
    BIKE_WHEEL_FRONT = 4,
    BIKE_WHEEL_REAR = 5,
    BIKE_MUDGUARD = 6,
    BIKE_HANDLEBARS = 7,
    BIKE_NUM_NODES
};

class CBike : public CVehicle {
protected:
    CBike(plugin::dummy_func_t) : CVehicle(plugin::dummy) {}
public:
    RwFrame *m_aBikeNodes[9];
    CMatrix field_2C4;
    char gap_30C[24];
    tBikeHandlingData* pBikeHandling;
    int nBikeAnimGroup;
    char tireStatus[2];
    char gap_32E[2];
    char field_330[160];
    int field_3D0[4];
    int field_3E0[4];
    int field_3F0[4];
    int field_400;
    int field_404;
    int field_408;
    char field_40C;
    char field_40D;
    char field_40E;
    char field_40F;
    int field_410;
    int field_414;
    int field_418;
    int field_41C;
    char gap_420[8];
    int field_428;
    int field_42C;
    char gap_430[32];
    int field_450;
    int field_454;
    int field_458;
    int field_45C;
    int field_460;
    int field_464;
    int field_468;
    int field_46C;
    int field_470;
    int field_474;
    int field_478;
    int field_47C;
    char field_480;
    char gap_481[3];
    unsigned char m_nDamageFlags;
    char gap_485[1];
    short field_486;
    int field_488;
    int field_48C;
    int field_490;
    int field_494;
    int field_498[4];
    RwV3d field_4A8[4];
    int field_4D8;
    char field_4DC;
    char field_4DD;
    char field_4DE;
    char gap_4DF[1];
    int field_4E0;
    int field_4E4;
    int field_4E8;

    //funcs

    void AddDamagedVehicleParticles();
    bool AddWheelDirtAndWater(CColPoint& colPoint, unsigned int arg1);
    CBike(int modelIndex, unsigned char createdBy);
    void CalculateLeanMatrix();
    void DoDriveByShootings();
    void Fix();
    void GetCorrectedWorldDoorPosition(CVector& out, CVector arg1, CVector arg2);
    CPed* KnockOffRider(eWeaponType arg0, unsigned char arg1, CPed* arg2, bool arg3);
    void PlayHornIfNecessary();
    void ProcessBuoyancy();
    void ReduceHornCounter();
    void SetupSuspensionLines();
    void VehicleDamage();
};

VALIDATE_SIZE(CBike, 0x4EC);