/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CGangWarsSaveStructure {
public:
    bool bGangWarsActive;
private:
    char _pad1[3];
public:
    unsigned int State;
    unsigned int TimeStarted;
    unsigned int GangWarZoneInfoIndex;
    unsigned int GangWarNavigationZoneIndex;
    CVector CoorsOfPlayerAtStartOfWar;
    unsigned int Gang1;
    unsigned int Gang2;
    unsigned int WarFerocity;
    unsigned int LastTimeInArea;
    unsigned int State2;
    float TimeTillNextAttack;
    CVector PointOfAttack;
    unsigned int FightTimer;
    unsigned int RadarBlip;
    bool bPlayerIsCloseby;
private:
    char _pad4D[3];
public:
    float TerritoryUnderControlPercentage;
    float Difficulty;

    SUPPORTED_10US void Construct();
    SUPPORTED_10US void Extract();
};
VALIDATE_OFFSET(CGangWarsSaveStructure, bGangWarsActive, 0x0);
VALIDATE_OFFSET(CGangWarsSaveStructure, State, 0x4);
VALIDATE_OFFSET(CGangWarsSaveStructure, TimeStarted, 0x8);
VALIDATE_OFFSET(CGangWarsSaveStructure, GangWarZoneInfoIndex, 0xC);
VALIDATE_OFFSET(CGangWarsSaveStructure, GangWarNavigationZoneIndex, 0x10);
VALIDATE_OFFSET(CGangWarsSaveStructure, CoorsOfPlayerAtStartOfWar, 0x14);
VALIDATE_OFFSET(CGangWarsSaveStructure, Gang1, 0x20);
VALIDATE_OFFSET(CGangWarsSaveStructure, Gang2, 0x24);
VALIDATE_OFFSET(CGangWarsSaveStructure, WarFerocity, 0x28);
VALIDATE_OFFSET(CGangWarsSaveStructure, LastTimeInArea, 0x2C);
VALIDATE_OFFSET(CGangWarsSaveStructure, State2, 0x30);
VALIDATE_OFFSET(CGangWarsSaveStructure, TimeTillNextAttack, 0x34);
VALIDATE_OFFSET(CGangWarsSaveStructure, PointOfAttack, 0x38);
VALIDATE_OFFSET(CGangWarsSaveStructure, FightTimer, 0x44);
VALIDATE_OFFSET(CGangWarsSaveStructure, RadarBlip, 0x48);
VALIDATE_OFFSET(CGangWarsSaveStructure, bPlayerIsCloseby, 0x4C);
VALIDATE_OFFSET(CGangWarsSaveStructure, TerritoryUnderControlPercentage, 0x50);
VALIDATE_OFFSET(CGangWarsSaveStructure, Difficulty, 0x54);
VALIDATE_SIZE(CGangWarsSaveStructure, 0x58);

#include "meta/meta.CGangWarsSaveStructure.h"
