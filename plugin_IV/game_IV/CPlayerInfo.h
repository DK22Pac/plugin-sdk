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


enum ePlayerState {
    PLAYERSTATE_PLAYING = 0,
    PLAYERSTATE_1 = 1,
    PLAYERSTATE_2 = 2,
    PLAYERSTATE_DEAD = 3,
};

struct CPlayerComponents {
    uint8_t bodyParts[16];
};
VALIDATE_OFFSET(CPlayerComponents, bodyParts, 0x0);
VALIDATE_SIZE(CPlayerComponents, 0x10);

class CPlayerInfo {
public:
    static uint32_t& ms_nTimeSinceLastDeath;
    static uint32_t& ms_nTimeSinceLastArrest;
    static uint32_t* ms_aModelsKilled;
    static CPlayerComponents& ms_PlayerComponents;
    static bool& ms_bDisplayingPhone;

public:
    rage::Color32 m_RGBColor;
    char field_1[88];
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
    char field_1258[36];
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
VALIDATE_OFFSET(CPlayerInfo, m_RGBColor, 0x0);
VALIDATE_OFFSET(CPlayerInfo, field_1, 0x4);
VALIDATE_OFFSET(CPlayerInfo, m_sName, 0x5C);
VALIDATE_OFFSET(CPlayerInfo, m_nFlag1, 0x6D);
VALIDATE_OFFSET(CPlayerInfo, m_PlayerData, 0x70);
VALIDATE_OFFSET(CPlayerInfo, field_1100, 0x400);
VALIDATE_OFFSET(CPlayerInfo, m_nObjFlags, 0x440);
VALIDATE_OFFSET(CPlayerInfo, field_1111, 0x444);
VALIDATE_OFFSET(CPlayerInfo, m_bDisableSprint, 0x484);
VALIDATE_OFFSET(CPlayerInfo, field_1112, 0x485);
VALIDATE_OFFSET(CPlayerInfo, m_bForceInteriorLighting, 0x487);
VALIDATE_OFFSET(CPlayerInfo, field_1150, 0x488);
VALIDATE_OFFSET(CPlayerInfo, m_nTimeSincePlayerHitCar, 0x4A0);
VALIDATE_OFFSET(CPlayerInfo, m_nTimeSincePlayerHitPed, 0x4A4);
VALIDATE_OFFSET(CPlayerInfo, m_nTimeSincePlayerHitBuilding, 0x4A8);
VALIDATE_OFFSET(CPlayerInfo, m_nTimeSincePlayerHitObject, 0x4AC);
VALIDATE_OFFSET(CPlayerInfo, m_nTimeSinceDroveOnPavement, 0x4B0);
VALIDATE_OFFSET(CPlayerInfo, m_nTimeSincePlayerRanLight, 0x4B4);
VALIDATE_OFFSET(CPlayerInfo, m_nTimeSinceDroveAgainstTraffic, 0x4B8);
VALIDATE_OFFSET(CPlayerInfo, field_1152, 0x4BC);
VALIDATE_OFFSET(CPlayerInfo, field_1154, 0x4CC);
VALIDATE_OFFSET(CPlayerInfo, m_fAirDragMultForCar, 0x4D8);
VALIDATE_OFFSET(CPlayerInfo, field_1156, 0x4DC);
VALIDATE_OFFSET(CPlayerInfo, field_1251, 0x4E0);
VALIDATE_OFFSET(CPlayerInfo, field_1252, 0x4E1);
VALIDATE_OFFSET(CPlayerInfo, field_1253, 0x4E2);
VALIDATE_OFFSET(CPlayerInfo, field_1254, 0x4E3);
VALIDATE_OFFSET(CPlayerInfo, m_nPlayerId, 0x4E4);
VALIDATE_OFFSET(CPlayerInfo, m_nPlayerState, 0x4E8);
VALIDATE_OFFSET(CPlayerInfo, field_1255, 0x4EC);
VALIDATE_OFFSET(CPlayerInfo, field_1256, 0x4EE);
VALIDATE_OFFSET(CPlayerInfo, field_1257, 0x4EF);
VALIDATE_OFFSET(CPlayerInfo, field_1258, 0x4F0);
VALIDATE_OFFSET(CPlayerInfo, m_nTimeSincePerformingWheelie, 0x514);
VALIDATE_OFFSET(CPlayerInfo, m_nTimeSinceSomethingIdk, 0x518);
VALIDATE_OFFSET(CPlayerInfo, m_nTimeSincePerformingStoppie, 0x51C);
VALIDATE_OFFSET(CPlayerInfo, field_1259, 0x520);
VALIDATE_OFFSET(CPlayerInfo, field_1260, 0x53C);
VALIDATE_OFFSET(CPlayerInfo, field_1271, 0x540);
VALIDATE_OFFSET(CPlayerInfo, field_1272, 0x542);
VALIDATE_OFFSET(CPlayerInfo, field_1273, 0x543);
VALIDATE_OFFSET(CPlayerInfo, field_1274, 0x544);
VALIDATE_OFFSET(CPlayerInfo, m_bNeverTired, 0x552);
VALIDATE_OFFSET(CPlayerInfo, m_bFastReload, 0x553);
VALIDATE_OFFSET(CPlayerInfo, m_bFireProof, 0x554);
VALIDATE_OFFSET(CPlayerInfo, m_bSomeFlag3, 0x555);
VALIDATE_OFFSET(CPlayerInfo, MaxHealth, 0x556);
VALIDATE_OFFSET(CPlayerInfo, MaxArmour, 0x558);
VALIDATE_OFFSET(CPlayerInfo, m_bFlag1, 0x55A);
VALIDATE_OFFSET(CPlayerInfo, m_bFlag2, 0x55B);
VALIDATE_OFFSET(CPlayerInfo, m_bCanDoDriveBy, 0x55C);
VALIDATE_OFFSET(CPlayerInfo, m_bCanBeHassledByGangs, 0x55D);
VALIDATE_OFFSET(CPlayerInfo, field_1372, 0x564);
VALIDATE_OFFSET(CPlayerInfo, m_nBadMoodTimer, 0x568);
VALIDATE_OFFSET(CPlayerInfo, field_1376, 0x56C);
VALIDATE_OFFSET(CPlayerInfo, m_nColour, 0x57C);
VALIDATE_OFFSET(CPlayerInfo, m_nTeam, 0x580);
VALIDATE_OFFSET(CPlayerInfo, field_1381, 0x584);
VALIDATE_OFFSET(CPlayerInfo, m_nHasDiedRecently, 0x588);
VALIDATE_OFFSET(CPlayerInfo, field_1392, 0x58C);
VALIDATE_OFFSET(CPlayerInfo, m_pPed, 0x598);
VALIDATE_OFFSET(CPlayerInfo, field_1403, 0x59C);
VALIDATE_OFFSET(CPlayerInfo, m_pVehicle, 0x5A0);
VALIDATE_OFFSET(CPlayerInfo, m_nMpModifier, 0x5A4);
VALIDATE_OFFSET(CPlayerInfo, field_1500, 0x5B4);
VALIDATE_OFFSET(CPlayerInfo, m_nMoney, 0x5C4);
VALIDATE_OFFSET(CPlayerInfo, m_nDisplayMoney, 0x5C8);
VALIDATE_OFFSET(CPlayerInfo, field_1644, 0x5CC);
VALIDATE_SIZE(CPlayerInfo, 0x5D0);
