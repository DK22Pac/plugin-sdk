/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CPlayerData.h"
#include "CVector.h"

enum ePlayerState
{
	PLAYERSTATE_PLAYING,
	PLAYERSTATE_HASDIED,
	PLAYERSTATE_HASBEENARRESTED,
	PLAYERSTATE_FAILEDMISSION,
	PLAYERSTATE_LEFTGAME
};

#pragma pack(push, 1)
class PLUGIN_API CPlayerInfo
{
public:
	class CPed *m_pPed;                     // Pointer to the player ped (should always be set)
	CPlayerData m_PlayerData;              // instance of player variables
	void *m_pRemoteVehicle;           // Pointer to vehicle player is driving remotely at the moment.(NULL if on foot)
	void *m_pSpecCar;                 // which car is using the special collision model
	__int32 m_dwMoney;                  // Points for this player
	__int32 m_dwDisplayMoney;           // Points as they would be displayed
	unsigned __int32 m_dwCollectablesPickedUp;   // How many bags of sugar do we have
	unsigned __int32 m_dwTotalNumCollectables;   // How many bags of sugar are there to be had in the game
	unsigned __int32 m_dwLastBumpPlayerCarTimer; // Keeps track of when the last ped bumped into the player car
	unsigned __int32 m_dwTaxiTimer;              // Keeps track of how long the player has been in a taxi with a passenger (in msecs)
	unsigned __int32 m_dwVehicleTimeCounter;     // keeps track of how long player has been in car for driving skill
	unsigned __int8 m_bTaxiTimerScore;          // If TRUE then add 1 to score for each second that the player is driving a taxi
	unsigned __int8 m_bTryingToExitCar;         // if player holds exit car button, want to trigger getout once car slowed enough with a passenger
	__int8 _pad0[2];
	void *m_pLastTargetVehicle;       // Last vehicle player tried to enter.
	unsigned __int8 m_bPlayerState;             // What's going on.
	unsigned __int8 m_bAfterRemoteVehicleExplosion;
	unsigned __int8 m_bCreateRemoteVehicleExplosion;
	unsigned __int8 m_bFadeAfterRemoteVehicleExplosion;
	unsigned __int32 m_dwTimeOfRemoteVehicleExplosion;
	unsigned __int32 m_dwLastTimeEnergyLost;     // To make numbers flash on the HUD;
	unsigned __int32 m_dwLastTimeArmourLost;
	unsigned __int32 m_dwLastTimeBigGunFired;    // Tank guns etc
	unsigned __int32 m_dwTimesUpsideDownInARow;  // Make car blow up if car upside down
	unsigned __int32 m_dwTimesStuckInARow;       // Make car blow up if player cannot get out.
	unsigned __int32 m_dwCarTwoWheelCounter;     // how long has player's car been on two wheels
	float m_fCarTwoWheelDist;         // Make car blow up if player cannot get out.
	unsigned __int32 m_dwCarLess3WheelCounter;   // how long has player's car been on less than 3 wheels
	unsigned __int32 m_dwBikeRearWheelCounter;   // how long has player's bike been on rear wheel only
	float m_fBikeRearWheelDist;
	unsigned __int32 m_dwBikeFrontWheelCounter;  // how long has player's bike been on front wheel only
	float m_fBikeFrontWheelDist;
	unsigned __int32 m_dwTempBufferCounter;      // so wheels can leave the ground for a few frames without stopping above counters
	unsigned __int32 m_dwBestCarTwoWheelsTimeMs;
	float m_fBestCarTwoWheelsDistM;
	unsigned __int32 m_dwBestBikeWheelieTimeMs;
	float m_fBestBikeWheelieDistM;
	unsigned __int32 m_dwBestBikeStoppieTimeMs;
	float m_fBestBikeStoppieDistM;
	unsigned __int16 m_wCarDensityForCurrentZone;
	__int8 _pad1[2];
	float m_fRoadDensityAroundPlayer; // 1.0f for an average city.
	unsigned __int32 m_dwTimeOfLastCarExplosionCaused;
	unsigned __int32 m_dwExplosionMultiplier;
	unsigned __int32 m_dwHavocCaused;            // A counter going up when the player does bad stuff.
	unsigned __int16 m_wNumHoursDidntEat;
	__int8 _pad2[2];
	float m_fCurrentChaseValue;       // How 'ill' is the chase at the moment
	unsigned __int8 m_bDoesNotGetTired;
	unsigned __int8 m_bFastReload;
	unsigned __int8 m_bFireProof;
	unsigned __int8 m_bMaxHealth;
	unsigned __int8 m_bMaxArmour;
	unsigned __int8 m_bGetOutOfJailFree;        // Player doesn't lose money/weapons next time arrested
	unsigned __int8 m_bFreeHealthCare;          // Player doesn't lose money nexed time patched up at hospital
	unsigned __int8 m_bCanDoDriveBy;
	unsigned __int8 m_bBustedAudioStatus;
	__int8 _pad3;
	unsigned __int16 m_wLastBustMessageNumber;
	unsigned __int32 m_dwCrosshairActivated;
	CVector2D m_vCrosshairTarget;         // -1 ... 1 on screen
	__int8 m_acSkinName[32];
	struct RwTexture *m_pSkinTexture;
	unsigned __int8 m_bParachuteReferenced;
	__int8 _pad4[3];
	unsigned __int32 m_dwRequireParachuteTimer;
};
#pragma pack(pop)

VALIDATE_SIZE(CPlayerInfo, 0x190);