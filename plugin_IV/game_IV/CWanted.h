/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

enum eWantedLevel : int32_t {
    WANTED_CLEAN = 0x0,
    WANTED_LEVEL1 = 0x1,
    WANTED_LEVEL2 = 0x2,
    WANTED_LEVEL3 = 0x3,
    WANTED_LEVEL4 = 0x4,
    WANTED_LEVEL5 = 0x5,
    WANTED_LEVEL_LAST = 0x6,
};

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

    uint8_t m_PoliceBackOff : 1;
    uint8_t m_PoliceBackOffGarage : 1;
    uint8_t m_EverybodyBackOff : 1;
    uint8_t m_AllRandomsFlee : 1;
    uint8_t m_AllNeutralRandomsFlee : 1;
    uint8_t m_AllRandomsOnlyAttackWithGuns : 1;
    uint8_t m_IgnoreLowPriorityShockingEvents : 1;
    uint8_t m_DontDispatchCopsForThisPlayer : 1;

    uint8_t m_MaintainFlashingStarAfterOffence : 1;
    uint8_t m_CenterWantedPosition : 1;
    uint8_t m_SuppressLosingWantedLevelIfHiddenThisFrame : 1;
    uint8_t m_AllowEvasionHUDIfDisablingHiddenEvasionThisFrame : 1;
    uint8_t m_HasLeftInitialSearchArea : 1;
    uint8_t m_DisableCallPoliceThisFrame : 1;
    uint8_t m_LawPedCanAttackNonWantedPlayer : 1;

    uint8_t field_76[14];
    uint32_t m_nFlashingAfterOffence;
    uint8_t field_574[574];
    uint8_t field_750[210];
    eWantedLevel m_WantedLevelOld;
    eWantedLevel m_WantedLevel;

public:
    static void SetMaximumWantedLevel(int32_t level);
};
VALIDATE_OFFSET(CWanted, field_1, 0x0);
VALIDATE_OFFSET(CWanted, m_nLastWantedLevelChange, 0x8);
VALIDATE_OFFSET(CWanted, field_8, 0xC);
VALIDATE_OFFSET(CWanted, m_fMultiplier, 0x1C);
VALIDATE_OFFSET(CWanted, field_58, 0x20);
VALIDATE_OFFSET(CWanted, m_nLastTimeWantedDecreased, 0x50);
VALIDATE_OFFSET(CWanted, field_72, 0x54);
VALIDATE_OFFSET(CWanted, m_nShockingEvents, 0x58);
VALIDATE_OFFSET(CWanted, field_73, 0x59);
VALIDATE_OFFSET(CWanted, field_76, 0x5C);
VALIDATE_OFFSET(CWanted, m_nFlashingAfterOffence, 0x6C);
VALIDATE_OFFSET(CWanted, field_574, 0x70);
VALIDATE_OFFSET(CWanted, field_750, 0x2AE);
VALIDATE_OFFSET(CWanted, m_WantedLevelOld, 0x380);
VALIDATE_OFFSET(CWanted, m_WantedLevel, 0x384);
VALIDATE_SIZE(CWanted, 0x388);
