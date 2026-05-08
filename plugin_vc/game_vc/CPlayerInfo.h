/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CAutomobile.h"
#include "CColModel.h"
#include "CVector.h"
#include "CPtrList.h"
#include "RenderWare.h"

enum PLUGIN_API ePlayerState {
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
	CVehicle *m_pVehicleEx; //never really given a value
	char m_aszPlayerName[70];
	//char _pad0[2];
	int m_nMoney;
	int m_nDisplayMoney;
	int m_nCollectablesCollected;
	int m_nCollectablesTotal;
	int field_B0;
    unsigned int m_nTaxiTimer;
	bool m_bTaxiTimerScore;
	//char _pad1[3];
	int m_nHookerTimer;
	int m_nHookerMoneyTimer;
	int m_nHookerTime;
	CPed *m_pHooker;
	unsigned char m_nPlayerState;
	//char _pad2[3];
    unsigned int m_nDeathFadeTimer;
	bool m_bFadeAfterRemoteVehicleExplosion;
	char field_D5;
	char field_D6;
	char field_D7;
	unsigned int m_nLastTimeArrested;
	unsigned int m_nLastTimeEnergyLost;
	unsigned int m_nLastTimeArmourLost;
	unsigned int m_nLastTimeBigGunFired;
	unsigned int m_nTimesUpsideDownInARow;
	unsigned int m_nTimesStuckInARow;
    unsigned int m_nVehicleTimeOnTwoWheels;
    float m_fVehicleDistanceOnTwoWheels;
	unsigned int m_nVehicleTimeInAir;
	int field_FC;
	float field_100;
	int field_104;
	float field_108;
	int field_10C;
	int field_110;
	float field_114;
	int field_118;
	float field_11C;
	int field_120;
	float field_124;
	short m_nCarDensityForCurrentZone;
	//char _pad3[2];
    float m_fRoadDensityAroundPlayer;
	int m_nTimeOfLastCarExplosionCaused;
	int m_nExplosionMultiplier;
	int field_138;
	float field_13C;
	bool m_bInfiniteSprint;
	bool m_bFastReload;
	bool m_bFireProof;
	unsigned char m_nMaxHealth;
	unsigned char m_nMaxArmour;
	bool m_bGetOutOfJailFree;							// Player doesn't lose money/weapons next time arrested
	bool m_bGetOutOfHospitalFree;                     	// Player doesn't lose money next time patched up at hospital
	bool m_bCanDoDriveBy;
	unsigned char m_nBustedAudioStatus;
	//char _pad4;
	short m_nLastBustMessageNumber;
	char m_szSkinName[32];
	RwTexture *m_pSkinTexture;
	
	void Clear();
	void Process();
	bool IsPlayerInRemoteMode();
	void SavePlayerInfo(unsigned char* bufferPointer, unsigned int* structSize);
	void LoadPlayerInfo(unsigned char* bufferPointer, unsigned int structSize);
	void FindClosestCarSectorList(CPtrList& ptrList, CPed* ped, float conrerAX, float cornerAY, float cornerBX, float cornerBY, float* dist, CVehicle** closestCar);
	CVector GetPos();
	bool IsRestartingAfterDeath();
	bool IsRestartingAfterArrest();
	void KillPlayer();
	void ArrestPlayer();
	void CancelPlayerEnteringCars(CVehicle* vehicle);
	void MakePlayerSafe(bool safe);
	void BlowUpRCBuggy(bool blowUp);
	void SetPlayerSkin(char const* skinName);
	void LoadPlayerSkin();
	void DeletePlayerSkin();
};
VALIDATE_OFFSET(CPlayerInfo, m_pPed, 0x0);
VALIDATE_OFFSET(CPlayerInfo, m_pRemoteVehicle, 0x4);
VALIDATE_OFFSET(CPlayerInfo, m_ColModel, 0x8);
VALIDATE_OFFSET(CPlayerInfo, m_pVehicleEx, 0x54);
VALIDATE_OFFSET(CPlayerInfo, m_aszPlayerName, 0x58);
VALIDATE_OFFSET(CPlayerInfo, m_nMoney, 0xA0);
VALIDATE_OFFSET(CPlayerInfo, m_nDisplayMoney, 0xA4);
VALIDATE_OFFSET(CPlayerInfo, m_nCollectablesCollected, 0xA8);
VALIDATE_OFFSET(CPlayerInfo, m_nCollectablesTotal, 0xAC);
VALIDATE_OFFSET(CPlayerInfo, field_B0, 0xB0);
VALIDATE_OFFSET(CPlayerInfo, m_nTaxiTimer, 0xB4);
VALIDATE_OFFSET(CPlayerInfo, m_bTaxiTimerScore, 0xB8);
VALIDATE_OFFSET(CPlayerInfo, m_nHookerTimer, 0xBC);
VALIDATE_OFFSET(CPlayerInfo, m_nHookerMoneyTimer, 0xC0);
VALIDATE_OFFSET(CPlayerInfo, m_nHookerTime, 0xC4);
VALIDATE_OFFSET(CPlayerInfo, m_pHooker, 0xC8);
VALIDATE_OFFSET(CPlayerInfo, m_nPlayerState, 0xCC);
VALIDATE_OFFSET(CPlayerInfo, m_nDeathFadeTimer, 0xD0);
VALIDATE_OFFSET(CPlayerInfo, m_bFadeAfterRemoteVehicleExplosion, 0xD4);
VALIDATE_OFFSET(CPlayerInfo, field_D5, 0xD5);
VALIDATE_OFFSET(CPlayerInfo, field_D6, 0xD6);
VALIDATE_OFFSET(CPlayerInfo, field_D7, 0xD7);
VALIDATE_OFFSET(CPlayerInfo, m_nLastTimeArrested, 0xD8);
VALIDATE_OFFSET(CPlayerInfo, m_nLastTimeEnergyLost, 0xDC);
VALIDATE_OFFSET(CPlayerInfo, m_nLastTimeArmourLost, 0xE0);
VALIDATE_OFFSET(CPlayerInfo, m_nLastTimeBigGunFired, 0xE4);
VALIDATE_OFFSET(CPlayerInfo, m_nTimesUpsideDownInARow, 0xE8);
VALIDATE_OFFSET(CPlayerInfo, m_nTimesStuckInARow, 0xEC);
VALIDATE_OFFSET(CPlayerInfo, m_nVehicleTimeOnTwoWheels, 0xF0);
VALIDATE_OFFSET(CPlayerInfo, m_fVehicleDistanceOnTwoWheels, 0xF4);
VALIDATE_OFFSET(CPlayerInfo, m_nVehicleTimeInAir, 0xF8);
VALIDATE_OFFSET(CPlayerInfo, field_FC, 0xFC);
VALIDATE_OFFSET(CPlayerInfo, field_100, 0x100);
VALIDATE_OFFSET(CPlayerInfo, field_104, 0x104);
VALIDATE_OFFSET(CPlayerInfo, field_108, 0x108);
VALIDATE_OFFSET(CPlayerInfo, field_10C, 0x10C);
VALIDATE_OFFSET(CPlayerInfo, field_110, 0x110);
VALIDATE_OFFSET(CPlayerInfo, field_114, 0x114);
VALIDATE_OFFSET(CPlayerInfo, field_118, 0x118);
VALIDATE_OFFSET(CPlayerInfo, field_11C, 0x11C);
VALIDATE_OFFSET(CPlayerInfo, field_120, 0x120);
VALIDATE_OFFSET(CPlayerInfo, field_124, 0x124);
VALIDATE_OFFSET(CPlayerInfo, m_nCarDensityForCurrentZone, 0x128);
VALIDATE_OFFSET(CPlayerInfo, m_fRoadDensityAroundPlayer, 0x12C);
VALIDATE_OFFSET(CPlayerInfo, m_nTimeOfLastCarExplosionCaused, 0x130);
VALIDATE_OFFSET(CPlayerInfo, m_nExplosionMultiplier, 0x134);
VALIDATE_OFFSET(CPlayerInfo, field_138, 0x138);
VALIDATE_OFFSET(CPlayerInfo, field_13C, 0x13C);
VALIDATE_OFFSET(CPlayerInfo, m_bInfiniteSprint, 0x140);
VALIDATE_OFFSET(CPlayerInfo, m_bFastReload, 0x141);
VALIDATE_OFFSET(CPlayerInfo, m_bFireProof, 0x142);
VALIDATE_OFFSET(CPlayerInfo, m_nMaxHealth, 0x143);
VALIDATE_OFFSET(CPlayerInfo, m_nMaxArmour, 0x144);
VALIDATE_OFFSET(CPlayerInfo, m_bGetOutOfJailFree, 0x145);
VALIDATE_OFFSET(CPlayerInfo, m_bGetOutOfHospitalFree, 0x146);
VALIDATE_OFFSET(CPlayerInfo, m_bCanDoDriveBy, 0x147);
VALIDATE_OFFSET(CPlayerInfo, m_nBustedAudioStatus, 0x148);
VALIDATE_OFFSET(CPlayerInfo, m_nLastBustMessageNumber, 0x14A);
VALIDATE_OFFSET(CPlayerInfo, m_szSkinName, 0x14C);
VALIDATE_OFFSET(CPlayerInfo, m_pSkinTexture, 0x16C);
VALIDATE_SIZE(CPlayerInfo, 0x170);