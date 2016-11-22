/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"
#include "CAutomobile.h"
#include "CColModel.h"
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
	Int32 m_nMoney;
	Int32 m_nDisplayMoney;
	Int32 m_nCollectablesCollected;
	Int32 m_nCollectablesTotal;
	int field_B0;
	SInt32 m_snTaxiTimer;
	Bool m_bTaxiTimerScore;
	char _pad1[3];
	SInt32 m_snHookerTimer;
	SInt32 m_snHookerMoneyTimer;
	Int32 m_nHookerTime;
	CPed *m_pHooker;
	UInt8 m_nPlayerState;
	char _pad2[3];
	int field_D0;
	Bool m_bFadeAfterRemoteVehicleExplosion;
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
	Int16 m_nCarDensityForCurrentZone;
	char _pad3[2];
	float m_fRoadDensityAroundPlayer;
	Int32 m_nTimeOfLastCarExplosionCaused;
	Int32 m_nExplosionMultiplier;
	int field_138;
	float field_13C;
	Bool m_bNeverGetsTired;
	Bool m_bFastReload;
	Bool m_bFireProof;
	UInt8 m_nMaxHealth;
	UInt8 m_nMaxArmour;
	Bool m_bGetOutOfJailFree;
	Bool m_bFreeHealthCare;
	Bool m_bCanDoDriveBy;
	UInt8 m_nBustedAudioStatus;
	char _pad4[1];
	Int16 m_nLastBustMessageNumber;
	char m_aszSkinName[32];
	RwTexture *m_pSkinTexture;
};

VALIDATE_SIZE(CPlayerInfo, 0x170);