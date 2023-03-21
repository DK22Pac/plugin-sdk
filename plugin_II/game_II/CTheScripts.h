/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CTheScripts {
public:
    unsigned int field_0;
    unsigned char field_1[832];
    unsigned int* OnAMissionFlag;
    unsigned char field_4[288];
    unsigned int field_5;
    unsigned char gap[12000];
    unsigned char missionScript[65536];
    unsigned char gap2[715612];

public:
    CTheScripts();
    void Save(const char* saveName);
};

VALIDATE_SIZE(CTheScripts, 0xC1EA8);

extern CTheScripts** TheScripts;
extern CTheScripts* GetTheScripts();
