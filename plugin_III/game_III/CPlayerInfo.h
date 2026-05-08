/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CAutomobile.h"

enum ePlayerState : unsigned char {
    PLAYERSTATE_PLAYING,
    PLAYERSTATE_HASDIED,
    PLAYERSTATE_HASBEENARRESTED,
    PLAYERSTATE_FAILEDMISSION,
    PLAYERSTATE_LEFTGAME
};

class CPlayerPed;

class CPlayerInfo {
public:
    CPlayerPed *m_pPed;
    CVehicle *m_pRemoteVehicle;
    CColModel m_ColModel;
    CAutomobile *m_pSpecCar;
    char m_aszPlayerName[72];
    int m_nMoney;
    int m_nDisplayMoney;
    int m_nCollectablesCollected;
    int m_nCollectablesTotal;
    int m_nLastBumpPlayerCarTimer;
    unsigned int m_nTaxiTimer;
    bool m_bTaxiTimerScore;
    //char _padC5[3];
    int m_nNextSexFrequencyUpdateTime;
    int m_nNextSexMoneyUpdateTime;
    int m_nSexFrequency;
    CPed* m_pHooker;
    ePlayerState m_nPlayerState;
    //char _padD9[3];
    unsigned int m_nDeathFadeTimer;
    char m_bFadeAfterRemoteVehicleExplosion;
    char field_E1;
    char field_E2;
    char field_E3;
    int m_nTimeOfRemoteVehicleExplosion;
    int m_nTimeLastHealthLoss;
    int m_nTimeLastArmourLoss;
    int field_F0;
    int m_nUpsideDownCounter;
    int field_F8;
    __int16 m_nCarDensityForCurrentZone;
    //char _padFE[2];
    float m_fRoadDensityAroundPlayer;
    int m_nTimeOfLastCarExplosionCaused;
    int m_nExplosionMultiplier;
    int field_10C;
    int field_110;
    bool m_bInfiniteSprint;
    bool m_bFastReload;
    bool m_bGetOutOfJailFree;                       // Player doesn't lose money/weapons next time arrested
    bool m_bGetOutOfHospitalFree;                   // Player doesn't lose money next time patched up at hospital
    char m_szSkinName[32];
    RwTexture *m_pSkinTexture;


    void ArrestPlayer();
    void AwardMoneyForExplosion(CVehicle* vehicle);
    void BlowUpRCBuggy();
    void CancelPlayerEnteringCars(CVehicle* vehicle);
    void Clear();
    void DeletePlayerSkin();
    void EvaluateCarPosition(CEntity* entity, CPed* ped, float radius, float* dist, CVehicle** vehicle);
    void FindClosestCarSectorList(CPtrList& list, CPed* ped, float conrerAX, float cornerAY, float cornerBX, float cornerBY, float* dist, CVehicle** closestCar);
    CVector* GetPos(CVector* point);
    bool IsPlayerInRemoteMode();
    bool IsRestartingAfterArrest();
    bool IsRestartingAfterDeath();
    void KillPlayer();
    void LoadPlayerInfo(unsigned char* bufferPointer, unsigned int structSize);
    void LoadPlayerSkin();
    void MakePlayerSafe(bool safe);
    void PlayerFailedCriticalMission();
    void Process();
    void SavePlayerInfo(unsigned char* bufferPointer, unsigned int* structSize);
    void SetPlayerSkin(char const* skinName);
    ~CPlayerInfo();
};
VALIDATE_OFFSET(CPlayerInfo, m_pPed, 0x0);
VALIDATE_OFFSET(CPlayerInfo, m_pRemoteVehicle, 0x4);
VALIDATE_OFFSET(CPlayerInfo, m_ColModel, 0x8);
VALIDATE_OFFSET(CPlayerInfo, m_pSpecCar, 0x60);
VALIDATE_OFFSET(CPlayerInfo, m_aszPlayerName, 0x64);
VALIDATE_OFFSET(CPlayerInfo, m_nMoney, 0xAC);
VALIDATE_OFFSET(CPlayerInfo, m_nDisplayMoney, 0xB0);
VALIDATE_OFFSET(CPlayerInfo, m_nCollectablesCollected, 0xB4);
VALIDATE_OFFSET(CPlayerInfo, m_nCollectablesTotal, 0xB8);
VALIDATE_OFFSET(CPlayerInfo, m_nLastBumpPlayerCarTimer, 0xBC);
VALIDATE_OFFSET(CPlayerInfo, m_nTaxiTimer, 0xC0);
VALIDATE_OFFSET(CPlayerInfo, m_bTaxiTimerScore, 0xC4);
VALIDATE_OFFSET(CPlayerInfo, m_nNextSexFrequencyUpdateTime, 0xC8);
VALIDATE_OFFSET(CPlayerInfo, m_nNextSexMoneyUpdateTime, 0xCC);
VALIDATE_OFFSET(CPlayerInfo, m_nSexFrequency, 0xD0);
VALIDATE_OFFSET(CPlayerInfo, m_pHooker, 0xD4);
VALIDATE_OFFSET(CPlayerInfo, m_nPlayerState, 0xD8);
VALIDATE_OFFSET(CPlayerInfo, m_nDeathFadeTimer, 0xDC);
VALIDATE_OFFSET(CPlayerInfo, m_bFadeAfterRemoteVehicleExplosion, 0xE0);
VALIDATE_OFFSET(CPlayerInfo, field_E1, 0xE1);
VALIDATE_OFFSET(CPlayerInfo, field_E2, 0xE2);
VALIDATE_OFFSET(CPlayerInfo, field_E3, 0xE3);
VALIDATE_OFFSET(CPlayerInfo, m_nTimeOfRemoteVehicleExplosion, 0xE4);
VALIDATE_OFFSET(CPlayerInfo, m_nTimeLastHealthLoss, 0xE8);
VALIDATE_OFFSET(CPlayerInfo, m_nTimeLastArmourLoss, 0xEC);
VALIDATE_OFFSET(CPlayerInfo, field_F0, 0xF0);
VALIDATE_OFFSET(CPlayerInfo, m_nUpsideDownCounter, 0xF4);
VALIDATE_OFFSET(CPlayerInfo, field_F8, 0xF8);
VALIDATE_OFFSET(CPlayerInfo, m_nCarDensityForCurrentZone, 0xFC);
VALIDATE_OFFSET(CPlayerInfo, m_fRoadDensityAroundPlayer, 0x100);
VALIDATE_OFFSET(CPlayerInfo, m_nTimeOfLastCarExplosionCaused, 0x104);
VALIDATE_OFFSET(CPlayerInfo, m_nExplosionMultiplier, 0x108);
VALIDATE_OFFSET(CPlayerInfo, field_10C, 0x10C);
VALIDATE_OFFSET(CPlayerInfo, field_110, 0x110);
VALIDATE_OFFSET(CPlayerInfo, m_bInfiniteSprint, 0x114);
VALIDATE_OFFSET(CPlayerInfo, m_bFastReload, 0x115);
VALIDATE_OFFSET(CPlayerInfo, m_bGetOutOfJailFree, 0x116);
VALIDATE_OFFSET(CPlayerInfo, m_bGetOutOfHospitalFree, 0x117);
VALIDATE_OFFSET(CPlayerInfo, m_szSkinName, 0x118);
VALIDATE_OFFSET(CPlayerInfo, m_pSkinTexture, 0x138);
VALIDATE_SIZE(CPlayerInfo, 0x13C);
