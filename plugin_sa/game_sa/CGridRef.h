/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CGridRef {
public:
    SUPPORTED_10US static char *GetAreaName(unsigned char sectorX, unsigned char sectorY);
    SUPPORTED_10US static unsigned int GetArtistBugstarID(unsigned char sectorX, unsigned char sectorY);
    SUPPORTED_10US static void GetGridRefPositions(CVector posn, unsigned char *outSectorX, unsigned char *outSectorY);
    SUPPORTED_10US static void GetGridRefPositions(unsigned char *outSectorX, unsigned char *outSectorY);
    SUPPORTED_10US static void Init();
};

SUPPORTED_10US extern char(&GridRefList)[10][10][32]; // char GridRefList[10][10][32]

#include "meta/meta.CGridRef.h"
