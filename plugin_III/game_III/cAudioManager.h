/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"
#include "cTransmission.h"
#include "eAudioType.h"

class tSound {
public:
	int32_t m_nEntityIndex;		
	uint32_t m_nCounter;		
	uint32_t m_nSampleIndex;	
	uint8_t m_nBankIndex;		
	bool m_bIs2D;				
	uint32_t m_nPriority;		
	uint32_t m_nFrequency;		
	uint32_t m_nVolume;
	float m_fDistance;			
	uint32_t m_nLoopCount;		

	uint32_t m_nLoopStart;
	int32_t m_nLoopEnd;
	uint8_t m_nEmittingVolume;

	float m_fSpeedMultiplier;
	float m_MaxDistance;

	bool m_bStatic;			
	CVector m_vecPos;		
	bool m_bReverb;			

	uint8_t m_nReflectionDelay;	
	bool m_bReflections;

	uint8_t m_nPan;				
	uint32_t m_nFramesToPlay;	

	bool m_bIsBeingPlayed;		
	bool m_bIsPlayingFinished;	
	uint32_t m_nFinalPriority;	
	int8_t m_nVolumeChange;		
};

VALIDATE_SIZE(tSound, 0x5C);

class cVehicleParams {
public:
	bool m_bDistanceCalculated;
	float m_fDistance;
	CVehicle* m_pVehicle;
	cTransmission* m_pTransmission;
	uint32_t m_nIndex;
	float m_fVelocityChange;
};

VALIDATE_SIZE(cVehicleParams, 0x18);

struct tVehicleSampleData {
	uint32_t m_nAccelerationSampleIndex;
	uint8_t m_nBank;
	uint32_t m_nHornSample;
	int32_t m_nHornFrequency;
	uint8_t m_nSirenOrAlarmSample;
	int32_t m_nSirenOrAlarmFrequency;
	uint8_t m_bDoorType;
};

class tAudioEntity {
public:
	eAudioType m_nType;
	void* m_pEntity;
	bool m_bIsUsed;
	bool m_bStatus;
	int16_t m_awAudioEvent[4];
	float m_afVolume[4];
	uint8_t m_AudioEvents;
};

VALIDATE_SIZE(tAudioEntity, 0x28);

class tPedComment {
public:
	uint32_t m_nSampleIndex;
	int32_t m_nEntityIndex;
	CVector m_vecPos;
	float m_fDistance;
	uint8_t m_nVolume;
	int8_t m_nLoadingTimeout; 
};

VALIDATE_SIZE(tPedComment, 0x1C);

class cPedComments {
public:
	tPedComment m_aPedCommentQueue[2][20];
	uint8_t m_aPedCommentOrderList[2][20];
	uint8_t m_nPedCommentCount[2];
	uint8_t m_nActiveQueue;
};

VALIDATE_SIZE(cPedComments, 0x48C);

class cPoliceRadioQueue {
public:
	uint32_t m_aSamples[60];
	uint8_t m_nSamplesInQueue;
	uint8_t m_nAddOffset;
	uint8_t m_nRemoveOffset;
};

VALIDATE_SIZE(cPoliceRadioQueue, 0xF4);

struct cAMCrime {
	int32_t type;
	CVector position;
	uint16_t timer;
};
VALIDATE_SIZE(cAMCrime, 0x14);

class cAudioCollision {
public:
	CEntity* m_pEntity1;
	CEntity* m_pEntity2;
	uint8_t m_bSurface1;
	uint8_t m_bSurface2;
	float m_fIntensity1;
	float m_fIntensity2;
	CVector m_vecPosition;
	float m_fDistance;
	int32_t m_nBaseVolume;
};

VALIDATE_SIZE(cAudioCollision, 0x28);

class cAudioCollisionManager {
public:
	cAudioCollision m_asCollisions1[10];
	cAudioCollision m_asCollisions2[10];
	uint8_t m_bIndicesTable[10];
	uint8_t m_bCollisionsInQueue;
	cAudioCollision m_sQueue;
};

VALIDATE_SIZE(cAudioCollisionManager, 0x354);

class cAudioManager {
public:
	bool m_bIsInitialised;
	bool m_bIsSurround; // unused until VC
	bool m_bReduceReleasingPriority;
	uint8_t m_nActiveSamples;
	bool m_bDoubleVolume; // unused
	bool m_bDynamicAcousticModelingStatus;
	float m_fSpeedOfSound;
	bool m_bTimerJustReset;
	uint32_t m_nTimer;
	tSound m_sQueueSample;
	uint8_t m_nActiveQueue;
	tSound m_aRequestedQueue[2][27];
	uint8_t m_aRequestedOrderList[2][27];
	uint8_t m_nRequestedCount[2];
	tSound m_asActiveSamples[27];
	tAudioEntity m_asAudioEntities[200];
	uint32_t m_aAudioEntityOrderList[200];
	uint32_t m_nAudioEntitiesCount;
	CVector m_avecReflectionsPos[5];
	float m_afReflectionsDistances[5];
	struct {
		int32_t m_anScriptObjectEntityIndices[40];
		int32_t m_nScriptObjectEntityTotal;
	} m_sAudioScriptObjectManager;
	cPedComments m_sPedComments;
	int32_t m_nFireAudioEntity;
	int32_t m_nWaterCannonEntity;
	int32_t m_nPoliceChannelEntity;
	cPoliceRadioQueue m_sPoliceRadioQueue;
	cAMCrime m_aCrimes[10];
	int32_t m_nFrontEndEntity;
	int32_t m_nCollisionEntity;
	cAudioCollisionManager m_sCollisionManager;
	int32_t m_nProjectileEntity;
	int32_t m_nBridgeEntity;

	// Mission audio stuff
	CVector m_vecMissionAudioPosition;
	bool m_bIsMissionAudio2D;
	uint32_t m_nMissionAudioSampleIndex;
	uint8_t m_nMissionAudioLoadingStatus;
	uint8_t m_nMissionAudioPlayStatus;
	bool m_bIsMissionAudioPlaying;
	int32_t m_nMissionAudioFramesToPlay;
	bool m_bIsMissionAudioAllowedToPlay;

	int32_t m_anRandomTable[5];
	uint8_t m_nTimeSpent;
	bool m_bIsPaused;
	bool m_bWasPaused;
	uint32_t m_FrameCounter;

public:
	cAudioManager();
	~cAudioManager();
	bool UsesSiren(unsigned int index); // see eVehicleIndex
	bool UsesSirenSwitching(unsigned int index); // see eVehicleIndex
	void PlayerJustGotInCar();
	void PlayerJustLeftCar();

	void UpdateGasPedalAudio(CVehicle* vehicle);
	bool ProcessVehicleRoadNoise(cVehicleParams* params);
	bool ProcessWetRoadNoise(cVehicleParams* params);
	bool ProcessVehicleSkidding(cVehicleParams* params);
	bool ProcessVehicleHorn(cVehicleParams* params);
	bool ProcessVehicleSirenOrAlarm(cVehicleParams* params);
	bool ProcessCarBombTick(cVehicleParams* params);
	bool ProcessEngineDamage(cVehicleParams* params);
	bool ProcessVehicleEngine(cVehicleParams* params);
	void ProcessVehicleOneShots(cVehicleParams* params);
	void CalculateDistance(bool* done, float distance);
	uint8_t ComputeVolume(uint8_t emittingVolume, float maxDistance, float distance);
	void AddSampleToRequestedQueue();
	void AddPlayerCarSample(uint8_t vol, uint32_t freq, uint32_t sample, uint8_t bank, uint8_t counter, bool loop);
	void TranslateEntity(CVector* in, CVector* out);
	int32_t ComputePan(float dist, CVector* vec);
	void SetUpOneShotCollisionSound(cAudioCollision* col);
	float GetCollisionOneShotRatio(uint32_t a, float b);

};

VALIDATE_SIZE(cAudioManager, 0x4B14);

extern cAudioManager &AudioManager;

extern tVehicleSampleData* aVehicleSettings;

extern const uint32_t* gOneShotCol;
