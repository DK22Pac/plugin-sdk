/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVector.h"

enum eZoneAttributes : unsigned short {
    ATTRZONE_NONE = 0x0,
    ATTRZONE_CAMCLOSEIN = 0x1,
    ATTRZONE_STAIRS = 0x2,
    ATTRZONE_1STPERSONS = 0x4,
    ATTRZONE_NORAIN = 0x8,
    ATTRZONE_NOPOLICE = 0x10,
    ATTRZONE_DOINEEDCOLLISION = 0x40,
    ATTRZONE_POLICEABANDONCAR = 0x100,
    ATTRZONE_INROOMSFORAUDIO = 0x200,
    ATTRZONE_INROOMSFEWERPEDS = 0x400,
    ATTRZONE_MILITARYZONE = 0x1000,
    ATTRZONE_EXTRAAIRRESISTANCE = 0x4000,
    ATTRZONE_FEWERCARS = 0x8000,
};

struct CZoneDef {
    short x1;
    short y1;

    short x2;
    short y2;

    short x3;
    short y3;

    short z1;
    short z2;

    void Init(const CVector& center, float _x1, float _y1, float _z1, float _x2, float _y2, float _z2) {
        x1 = (short)(center.x - _x1 - _x2);
        y1 = (short)(center.y - _y1 - _y2);

        x2 = (short)(_x1 + _x1);
        y2 = (short)(_y1 + _y1);

        x3 = (short)(_x2 + _x2);
        y3 = (short)(_y2 + _y2);

        z1 = (short)(_z1);
        z2 = (short)(_z2);
    }

    bool IsPointWithin(const CVector& point);
};

VALIDATE_SIZE(CZoneDef, 0x10);

struct CCullZoneReflection {
    CZoneDef zoneDef;
    float cm;
    char vx;
    char vy;
    char vz;
    unsigned char flags;
};

VALIDATE_SIZE(CCullZoneReflection, 0x18);

struct CCullZone {
    CZoneDef zoneDef;
    eZoneAttributes flags;
};

VALIDATE_SIZE(CCullZone, 0x12);

class CCullZones {
public:
    static int& NumMirrorAttributeZones;
    static CCullZoneReflection(&aMirrorAttributeZones)[72];

    static int& NumTunnelAttributeZones;
    static CCullZone(&aTunnelAttributeZones)[40];

    static int& NumAttributeZones;
    static CCullZone(&aAttributeZones)[1300];

    static int& CurrentFlags_Player;
    static int& CurrentFlags_Camera;

    static bool& bMilitaryZonesDisabled;

public:
    static void Init();
    static void Update();

    static void AddCullZone(const CVector& center, float unk1, float _y1, float _z1, float _x2, float unk2, float _z2, ushort flags);
    static void AddTunnelAttributeZone(const CVector& center, float unk1, float _y1, float _z1, float _x2, float unk2, float _z2, ushort flags);
    static void AddMirrorAttributeZone(const CVector& center, float unk1, float _y1, float _z1, float _x2, float unk2, float _z2, eZoneAttributes flags, float cm, float vX, float vY, float vZ);

    static bool InRoomForAudio();
    static bool FewerCars();
    static bool CamNoRain();
    static bool PlayerNoRain();
    static bool FewerPeds();
    static bool NoPolice();
    static bool DoExtraAirResistanceForPlayer();

    static eZoneAttributes FindTunnelAttributesForCoors(CVector point);
    static CCullZoneReflection* FindMirrorAttributesForCoors(CVector cameraPosition);
    static CCullZone* FindZoneWithStairsAttributeForPlayer();
    static eZoneAttributes FindAttributesForCoors(CVector pos);
};
