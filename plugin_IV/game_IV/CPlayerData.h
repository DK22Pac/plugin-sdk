/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CWanted.h"

class CPlayerData {
public:
    CWanted m_Wanted;
    uint8_t field_760[6];

public:
    int32_t GetWantedLevel();
};

VALIDATE_SIZE(CPlayerData, 0x390);
