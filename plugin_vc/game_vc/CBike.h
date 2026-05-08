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
VALIDATE_OFFSET(CBike, m_aBikeNodes, 0x2A0);
VALIDATE_OFFSET(CBike, field_2C4, 0x2C4);
VALIDATE_OFFSET(CBike, gap_30C, 0x30C);
VALIDATE_OFFSET(CBike, pBikeHandling, 0x324);
VALIDATE_OFFSET(CBike, nBikeAnimGroup, 0x328);
VALIDATE_OFFSET(CBike, tireStatus, 0x32C);
VALIDATE_OFFSET(CBike, gap_32E, 0x32E);
VALIDATE_OFFSET(CBike, field_330, 0x330);
VALIDATE_OFFSET(CBike, field_3D0, 0x3D0);
VALIDATE_OFFSET(CBike, field_3E0, 0x3E0);
VALIDATE_OFFSET(CBike, field_3F0, 0x3F0);
VALIDATE_OFFSET(CBike, field_400, 0x400);
VALIDATE_OFFSET(CBike, field_404, 0x404);
VALIDATE_OFFSET(CBike, field_408, 0x408);
VALIDATE_OFFSET(CBike, field_40C, 0x40C);
VALIDATE_OFFSET(CBike, field_40D, 0x40D);
VALIDATE_OFFSET(CBike, field_40E, 0x40E);
VALIDATE_OFFSET(CBike, field_40F, 0x40F);
VALIDATE_OFFSET(CBike, field_410, 0x410);
VALIDATE_OFFSET(CBike, field_414, 0x414);
VALIDATE_OFFSET(CBike, field_418, 0x418);
VALIDATE_OFFSET(CBike, field_41C, 0x41C);
VALIDATE_OFFSET(CBike, gap_420, 0x420);
VALIDATE_OFFSET(CBike, field_428, 0x428);
VALIDATE_OFFSET(CBike, field_42C, 0x42C);
VALIDATE_OFFSET(CBike, gap_430, 0x430);
VALIDATE_OFFSET(CBike, field_450, 0x450);
VALIDATE_OFFSET(CBike, field_454, 0x454);
VALIDATE_OFFSET(CBike, field_458, 0x458);
VALIDATE_OFFSET(CBike, field_45C, 0x45C);
VALIDATE_OFFSET(CBike, field_460, 0x460);
VALIDATE_OFFSET(CBike, field_464, 0x464);
VALIDATE_OFFSET(CBike, field_468, 0x468);
VALIDATE_OFFSET(CBike, field_46C, 0x46C);
VALIDATE_OFFSET(CBike, field_470, 0x470);
VALIDATE_OFFSET(CBike, field_474, 0x474);
VALIDATE_OFFSET(CBike, field_478, 0x478);
VALIDATE_OFFSET(CBike, field_47C, 0x47C);
VALIDATE_OFFSET(CBike, field_480, 0x480);
VALIDATE_OFFSET(CBike, gap_481, 0x481);
VALIDATE_OFFSET(CBike, m_nDamageFlags, 0x484);
VALIDATE_OFFSET(CBike, gap_485, 0x485);
VALIDATE_OFFSET(CBike, field_486, 0x486);
VALIDATE_OFFSET(CBike, field_488, 0x488);
VALIDATE_OFFSET(CBike, field_48C, 0x48C);
VALIDATE_OFFSET(CBike, field_490, 0x490);
VALIDATE_OFFSET(CBike, field_494, 0x494);
VALIDATE_OFFSET(CBike, field_498, 0x498);
VALIDATE_OFFSET(CBike, field_4A8, 0x4A8);
VALIDATE_OFFSET(CBike, field_4D8, 0x4D8);
VALIDATE_OFFSET(CBike, field_4DC, 0x4DC);
VALIDATE_OFFSET(CBike, field_4DD, 0x4DD);
VALIDATE_OFFSET(CBike, field_4DE, 0x4DE);
VALIDATE_OFFSET(CBike, gap_4DF, 0x4DF);
VALIDATE_OFFSET(CBike, field_4E0, 0x4E0);
VALIDATE_OFFSET(CBike, field_4E4, 0x4E4);
VALIDATE_OFFSET(CBike, field_4E8, 0x4E8);
VALIDATE_SIZE(CBike, 0x4EC);