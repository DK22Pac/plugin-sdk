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

class CPlayerPed;

class CPlayerInfo {
public:
	CPlayerPed *m_pPed;
	CVehicle *m_pRemoteVehicle;
	CColModel m_ColModel;
	CAutomobile *field_54;
	char m_aszPlayerName[70];
	char _pad0[2];
	int m_nMoney;
	int m_nDisplayMoney;
	int m_nCollectablesCollected;
	int m_nCollectablesTotal;
	int field_B0;
	int m_snTaxiTimer;
	bool m_bTaxiTimerScore;
	char _pad1[3];
	int m_snHookerTimer;
	int m_snHookerMoneyTimer;
	int m_nHookerTime;
	CPed *m_pHooker;
	unsigned char m_nPlayerState;
	char _pad2[3];
	int field_D0;
	bool m_bFadeAfterRemoteVehicleExplosion;
	char field_D5;
	char field_D6;
	char field_D7;
	int field_D8;
	int field_DC;
	int field_E0;
	int field_E4;
	int field_E8;
	int field_EC;
	int field_F0;
	float field_F4;
	int field_F8;
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
	char _pad3[2];
	float m_fRoadDensityAroundPlayer;
	int m_nTimeOfLastCarExplosionCaused;
	int m_nExplosionMultiplier;
	int field_138;
	float field_13C;
	bool m_bNeverGetsTired;
	bool m_bFastReload;
	bool m_bFireProof;
	unsigned char m_nMaxHealth;
	unsigned char m_nMaxArmour;
	bool m_bGetOutOfJailFree;
	bool m_bFreeHealthCare;
	bool m_bCanDoDriveBy;
	unsigned char m_nBustedAudioStatus;
	char _pad4;
	short m_nLastBustMessageNumber;
	char m_aszSkinName[32];
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

VALIDATE_SIZE(CPlayerInfo, 0x170);