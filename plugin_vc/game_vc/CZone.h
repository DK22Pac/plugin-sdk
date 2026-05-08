/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "eLevelName.h"

enum eZoneType {
    ZONE_DEFAULT,
    ZONE_NAVIG,
    ZONE_INFO,
    ZONE_MAPZONE,
};

class CZone {
public:
    char name[8];
    char text[8];
    short x1;
    short y1;
    short z1;
    short x2;
    short y2;
    short z2;
    short _zoneExtraIndexInfo;
    char type;
    char townNumber;

    // Returns pointer to GXT name string.
    wchar_t* GetTranslatedName();
};
VALIDATE_OFFSET(CZone, name, 0x0);
VALIDATE_OFFSET(CZone, text, 0x8);
VALIDATE_OFFSET(CZone, x1, 0x10);
VALIDATE_OFFSET(CZone, y1, 0x12);
VALIDATE_OFFSET(CZone, z1, 0x14);
VALIDATE_OFFSET(CZone, x2, 0x16);
VALIDATE_OFFSET(CZone, y2, 0x18);
VALIDATE_OFFSET(CZone, z2, 0x1A);
VALIDATE_OFFSET(CZone, _zoneExtraIndexInfo, 0x1C);
VALIDATE_OFFSET(CZone, type, 0x1E);
VALIDATE_OFFSET(CZone, townNumber, 0x1F);
VALIDATE_SIZE(CZone, 0x20);