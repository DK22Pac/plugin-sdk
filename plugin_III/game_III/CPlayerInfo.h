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
    int m_nHookerTimer;
    int m_nHookerMoneyTimer;
    int m_nHookerTime;
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
    bool m_bGetOutOfJailFree;
    bool m_bGetOutOfHospitalFree;
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

VALIDATE_SIZE(CPlayerInfo, 0x13C);
