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
    char m_sName[20];
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
    uint32_t m_nScriptFlags;
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
    uint16_t m_nMaxHealth;
    uint16_t m_nMaxArmour;
    uint8_t m_bFlag1;
    uint8_t m_bFlag2;
    uint8_t m_bCanDoDriveBy;
    uint8_t m_bCanBeHassledByGangs;

    struct {
        unsigned __int32 bCanCover : 1;
        unsigned __int32 bUnk : 31;
    } m_nFlags;

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
