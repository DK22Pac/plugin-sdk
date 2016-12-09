/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"

enum eZoneType {
    
};


enum eLevelName {
    
};

#pragma pack(push, 1)
struct CZone {
    char name[8];
    char text[8];
    __int16 x1;
    __int16 y1;
    __int16 z1;
    __int16 x2;
    __int16 y2;
    __int16 z2;
    __int16 _zoneExtraIndexInfo;
    char type;
    char townNumber;

    // Returns pointer to GXT name string.
    const char* GetTranslatedName();
};
#pragma pack(pop)

VALIDATE_SIZE(CZone, 0x20);