/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CPlayerPed.h"
#include "CPlayerData.h"

enum ePlayerComponents {
    COMPONENT_HEAD = 0,
    COMPONENT_UPPER_BODY = 1,
    COMPONENT_LOWER_BODY = 2,
    COMPONENT_BAGS = 3,
    COMPONENT_HAND = 4,
    COMPONENT_FEET = 5,
    COMPONENT_JACKET = 6,
    COMPONENT_HAIR = 7,
    COMPONENT_UNKNOWN = 8,
    COMPONENT_TEETH = 9,
    COMPONENT_FACE = 10
};

enum ePlayerState {
    PLAYERSTATE_PLAYING = 0,
    PLAYERSTATE_1 = 1,
    PLAYERSTATE_2 = 2,
    PLAYERSTATE_DEAD = 3,
};

struct CPlayerComponents {
    uint8_t bodyParts[16];
};

VALIDATE_SIZE(CPlayerComponents, 0x10);

class CPlayerInfo {
public:
    static uint32_t& ms_nTimeSinceLastDeath;
    static uint32_t& ms_nTimeSinceLastArrest;
    static uint32_t* ms_aModelsKilled;
    static CPlayerComponents& ms_PlayerComponents;

public:
    rage::Color32 m_RGBColor;
    unsigned __int8 field_1[88];
    char m_sName[17];
    uint8_t m_nFlag1;
    CPlayerData m_PlayerData;
    uint8_t field_1100[64];
    uint32_t m_nObjFlags;
    uint8_t field_1111[64];
    uint8_t m_bDisableSprint;
    uint8_t field_1112[2];
    uint8_t m_bForceInteriorLighting;
    uint8_t field_1150[22];
    uint32_t m_nTimeSincePlayerHitCar;
    uint32_t m_nTimeSincePlayerHitPed;
    uint32_t m_nTimeSincePlayerHitBuilding;
    uint32_t m_nTimeSincePlayerHitObject;
    uint32_t m_nTimeSinceDroveOnPavement;
    uint32_t m_nTimeSincePlayerRanLight;
    uint32_t m_nTimeSinceDroveAgainstTraffic;
    uint8_t field_1152[12];
    
    // Player Info Flags 1
    uint32_t m_nPlayerInfoFlags1_1 : 1;
    uint32_t m_nPlayerInfoFlags1_2 : 1;
    uint32_t m_nPlayerInfoFlags1_3 : 1;
    uint32_t m_nPlayerInfoFlags1_4 : 1;
    uint32_t m_bDisableControls : 1;
    uint32_t m_nPlayerInfoFlags1_6 : 1;
    uint32_t m_nPlayerInfoFlags1_7 : 1;
    uint32_t m_nPlayerInfoFlags1_8 : 1;
    uint32_t m_nPlayerInfoFlags1_9 : 1;
    uint32_t m_nPlayerInfoFlags1_10 : 1;
    uint32_t m_nPlayerInfoFlags1_11 : 1;
    uint32_t m_nPlayerInfoFlags1_12 : 1;
    uint32_t m_nPlayerInfoFlags1_13 : 1;
    uint32_t m_nPlayerInfoFlags1_14 : 1;
    uint32_t m_nPlayerInfoFlags1_15 : 1;
    uint32_t m_nPlayerInfoFlags1_16 : 1;
    uint32_t m_nPlayerInfoFlags1_17 : 1;
    uint32_t m_nPlayerInfoFlags1_18 : 1;
    uint32_t m_nPlayerInfoFlags1_19 : 1;
    uint32_t m_nPlayerInfoFlags1_20 : 1;
    uint32_t m_nPlayerInfoFlags1_21 : 1;
    uint32_t m_nPlayerInfoFlags1_22 : 1;
    uint32_t m_nPlayerInfoFlags1_23 : 1;
    uint32_t m_nPlayerInfoFlags1_24 : 1;
    uint32_t m_nPlayerInfoFlags1_25 : 1;
    uint32_t m_nPlayerInfoFlags1_26 : 1;
    uint32_t m_nPlayerInfoFlags1_27 : 1;
    uint32_t m_nPlayerInfoFlags1_28 : 1;
    uint32_t m_nPlayerInfoFlags1_29 : 1;
    uint32_t m_nPlayerInfoFlags1_30 : 1;
    uint32_t m_nPlayerInfoFlags1_31 : 1;

    uint8_t field_1154[12];
    float m_fAirDragMultForCar;
    uint8_t field_1156[4];
    int8_t field_1251;
    int8_t field_1252;
    int8_t field_1253;
    int8_t field_1254;
    int8_t m_nPlayerId;
    int32_t m_nPlayerState;
    int16_t field_1255;
    int8_t field_1256;
    int8_t field_1257;
    unsigned __int8 field_1258[36];
    uint32_t m_nTimeSincePerformingWheelie;
    uint32_t m_nTimeSinceSomethingIdk;
    uint32_t m_nTimeSincePerformingStoppie;
    uint8_t field_1259[26];
    uint32_t field_1260;
    uint16_t field_1271;
    uint8_t field_1272;
    uint8_t field_1273;
    uint8_t field_1274[14];
    uint8_t m_bNeverTired;
    uint8_t m_bFastReload;
    uint8_t m_bFireProof;
    uint8_t m_bSomeFlag3;
    uint16_t MaxHealth;
    uint16_t MaxArmour;
    uint8_t m_bFlag1;
    uint8_t m_bFlag2;
    uint8_t m_bCanDoDriveBy;
    uint8_t m_bCanBeHassledByGangs;

    // Player Info Flags 2
    uint32_t bCanCover : 1;
    uint32_t m_nPlayerInfoFlags2_2 : 1;
    uint32_t m_nPlayerInfoFlags2_3 : 1;
    uint32_t m_nPlayerInfoFlags2_4 : 1;
    uint32_t m_nPlayerInfoFlags2_5 : 1;
    uint32_t m_nPlayerInfoFlags2_6 : 1;
    uint32_t m_nPlayerInfoFlags2_7 : 1;
    uint32_t m_nPlayerInfoFlags2_8 : 1;
    uint32_t m_nPlayerInfoFlags2_9 : 1;
    uint32_t m_nPlayerInfoFlags2_10 : 1;
    uint32_t m_nPlayerInfoFlags2_11 : 1;
    uint32_t m_nPlayerInfoFlags2_12 : 1;
    uint32_t m_nPlayerInfoFlags2_13 : 1;
    uint32_t m_nPlayerInfoFlags2_14 : 1;
    uint32_t m_nPlayerInfoFlags2_15 : 1;
    uint32_t m_nPlayerInfoFlags2_16 : 1;
    uint32_t m_nPlayerInfoFlags2_17 : 1;
    uint32_t m_nPlayerInfoFlags2_18 : 1;
    uint32_t m_nPlayerInfoFlags2_19 : 1;
    uint32_t m_nPlayerInfoFlags2_20 : 1;
    uint32_t m_nPlayerInfoFlags2_21 : 1;
    uint32_t m_nPlayerInfoFlags2_22 : 1;
    uint32_t m_nPlayerInfoFlags2_23 : 1;
    uint32_t m_nPlayerInfoFlags2_24 : 1;
    uint32_t m_nPlayerInfoFlags2_25 : 1;
    uint32_t m_nPlayerInfoFlags2_26 : 1;
    uint32_t m_nPlayerInfoFlags2_27 : 1;
    uint32_t m_nPlayerInfoFlags2_28 : 1;
    uint32_t m_nPlayerInfoFlags2_29 : 1;
    uint32_t m_nPlayerInfoFlags2_30 : 1;
    uint32_t m_nPlayerInfoFlags2_31 : 1;

    uint8_t field_1372[4];
    uint32_t m_nBadMoodTimer;
    uint8_t field_1376[16];
    int32_t m_nColour;
    int32_t m_nTeam;
    int32_t field_1381;
    uint32_t m_nHasDiedRecently;
    uint8_t field_1392[12];
    CPlayerPed* m_pPed;
    int32_t field_1403;
    int32_t* m_pVehicle;
    uint32_t m_nMpModifier[4];
    int8_t field_1500[16];
    int32_t m_nMoney;
    int32_t m_nDisplayMoney;
    int8_t field_1644[4];

public:
    CPlayerInfo();
    const char* GetPlayerName();
    void MakePlayerSafe(bool arg1, bool safe, float radius, bool arg4, bool arg5);
    bool IsPlayerOnline();
};

VALIDATE_SIZE(CPlayerInfo, 0x5D0);
