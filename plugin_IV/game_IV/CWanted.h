/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CWanted {
public:
    uint8_t field_1[8];
    int32_t m_nLastWantedLevelChange;
    uint8_t field_8[16];
    float m_fMultiplier;
    uint8_t field_58[48];
    uint32_t m_nLastTimeWantedDecreased;
    int32_t field_72;
    uint8_t m_nShockingEvents;
    uint8_t field_73;

    uint8_t m_bIgnoredByPolice : 1;
    uint8_t m_nWantedFlags1_2 : 1;
    uint8_t m_bIgnoredByEveryone : 1;
    uint8_t m_bIgnoredByLowPriorityEvents : 1;
    uint8_t m_nWantedFlags1_5 : 1;
    uint8_t m_nWantedFlags1_6 : 1;
    uint8_t m_nWantedFlags1_7 : 1;
    uint8_t m_nWantedFlags1_8 : 1;

    uint8_t m_nFlags;
    uint8_t field_76[14];
    uint32_t m_nFlashingAfterOffence;
    uint8_t field_574[574];
    uint8_t field_750[214];
    int32_t m_nWantedLevel;

public:
    static void SetMaximumWantedLevel(int32_t level);
};

VALIDATE_SIZE(CWanted, 0x388);
