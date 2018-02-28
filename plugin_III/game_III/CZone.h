/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "eLevelName.h"

enum PLUGIN_API eZoneType {

};

class PLUGIN_API CZone {
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
    const wchar_t* GetTranslatedName();
};

VALIDATE_SIZE(CZone, 0x20);
