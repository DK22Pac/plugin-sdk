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
VALIDATE_OFFSET(tSound, m_nEntityIndex, 0x0);
VALIDATE_OFFSET(tSound, m_nCounter, 0x4);
VALIDATE_OFFSET(tSound, m_nSampleIndex, 0x8);
VALIDATE_OFFSET(tSound, m_nBankIndex, 0xC);
VALIDATE_OFFSET(tSound, m_bIs2D, 0xD);
VALIDATE_OFFSET(tSound, m_nPriority, 0x10);
VALIDATE_OFFSET(tSound, m_nFrequency, 0x14);
VALIDATE_OFFSET(tSound, m_nVolume, 0x18);
VALIDATE_OFFSET(tSound, m_fDistance, 0x1C);
VALIDATE_OFFSET(tSound, m_nLoopCount, 0x20);
VALIDATE_OFFSET(tSound, m_nLoopStart, 0x24);
VALIDATE_OFFSET(tSound, m_nLoopEnd, 0x28);
VALIDATE_OFFSET(tSound, m_nEmittingVolume, 0x2C);
VALIDATE_OFFSET(tSound, m_fSpeedMultiplier, 0x30);
VALIDATE_OFFSET(tSound, m_MaxDistance, 0x34);
VALIDATE_OFFSET(tSound, m_bStatic, 0x38);
VALIDATE_OFFSET(tSound, m_vecPos, 0x3C);
VALIDATE_OFFSET(tSound, m_bReverb, 0x48);
VALIDATE_OFFSET(tSound, m_nReflectionDelay, 0x49);
VALIDATE_OFFSET(tSound, m_bReflections, 0x4A);
VALIDATE_OFFSET(tSound, m_nPan, 0x4B);
VALIDATE_OFFSET(tSound, m_nFramesToPlay, 0x4C);
VALIDATE_OFFSET(tSound, m_bIsBeingPlayed, 0x50);
VALIDATE_OFFSET(tSound, m_bIsPlayingFinished, 0x51);
VALIDATE_OFFSET(tSound, m_nFinalPriority, 0x54);
VALIDATE_OFFSET(tSound, m_nVolumeChange, 0x58);
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
VALIDATE_OFFSET(cVehicleParams, m_bDistanceCalculated, 0x0);
VALIDATE_OFFSET(cVehicleParams, m_fDistance, 0x4);
VALIDATE_OFFSET(cVehicleParams, m_pVehicle, 0x8);
VALIDATE_OFFSET(cVehicleParams, m_pTransmission, 0xC);
VALIDATE_OFFSET(cVehicleParams, m_nIndex, 0x10);
VALIDATE_OFFSET(cVehicleParams, m_fVelocityChange, 0x14);
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
VALIDATE_OFFSET(tVehicleSampleData, m_nAccelerationSampleIndex, 0x0);
VALIDATE_OFFSET(tVehicleSampleData, m_nBank, 0x4);
VALIDATE_OFFSET(tVehicleSampleData, m_nHornSample, 0x8);
VALIDATE_OFFSET(tVehicleSampleData, m_nHornFrequency, 0xC);
VALIDATE_OFFSET(tVehicleSampleData, m_nSirenOrAlarmSample, 0x10);
VALIDATE_OFFSET(tVehicleSampleData, m_nSirenOrAlarmFrequency, 0x14);
VALIDATE_OFFSET(tVehicleSampleData, m_bDoorType, 0x18);
VALIDATE_SIZE(tVehicleSampleData, 0x1C);

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
VALIDATE_OFFSET(tAudioEntity, m_nType, 0x0);
VALIDATE_OFFSET(tAudioEntity, m_pEntity, 0x4);
VALIDATE_OFFSET(tAudioEntity, m_bIsUsed, 0x8);
VALIDATE_OFFSET(tAudioEntity, m_bStatus, 0x9);
VALIDATE_OFFSET(tAudioEntity, m_awAudioEvent, 0xA);
VALIDATE_OFFSET(tAudioEntity, m_afVolume, 0x14);
VALIDATE_OFFSET(tAudioEntity, m_AudioEvents, 0x24);
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
VALIDATE_OFFSET(tPedComment, m_nSampleIndex, 0x0);
VALIDATE_OFFSET(tPedComment, m_nEntityIndex, 0x4);
VALIDATE_OFFSET(tPedComment, m_vecPos, 0x8);
VALIDATE_OFFSET(tPedComment, m_fDistance, 0x14);
VALIDATE_OFFSET(tPedComment, m_nVolume, 0x18);
VALIDATE_OFFSET(tPedComment, m_nLoadingTimeout, 0x19);
VALIDATE_SIZE(tPedComment, 0x1C);

class cPedComments {
public:
	tPedComment m_aPedCommentQueue[2][20];
	uint8_t m_aPedCommentOrderList[2][20];
	uint8_t m_nPedCommentCount[2];
	uint8_t m_nActiveQueue;
};
VALIDATE_OFFSET(cPedComments, m_aPedCommentQueue, 0x0);
VALIDATE_OFFSET(cPedComments, m_aPedCommentOrderList, 0x460);
VALIDATE_OFFSET(cPedComments, m_nPedCommentCount, 0x488);
VALIDATE_OFFSET(cPedComments, m_nActiveQueue, 0x48A);
VALIDATE_SIZE(cPedComments, 0x48C);

class cPoliceRadioQueue {
public:
	uint32_t m_aSamples[60];
	uint8_t m_nSamplesInQueue;
	uint8_t m_nAddOffset;
	uint8_t m_nRemoveOffset;
};
VALIDATE_OFFSET(cPoliceRadioQueue, m_aSamples, 0x0);
VALIDATE_OFFSET(cPoliceRadioQueue, m_nSamplesInQueue, 0xF0);
VALIDATE_OFFSET(cPoliceRadioQueue, m_nAddOffset, 0xF1);
VALIDATE_OFFSET(cPoliceRadioQueue, m_nRemoveOffset, 0xF2);
VALIDATE_SIZE(cPoliceRadioQueue, 0xF4);

struct cAMCrime {
	int32_t type;
	CVector position;
	uint16_t timer;
};
VALIDATE_OFFSET(cAMCrime, type, 0x0);
VALIDATE_OFFSET(cAMCrime, position, 0x4);
VALIDATE_OFFSET(cAMCrime, timer, 0x10);
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
VALIDATE_OFFSET(cAudioCollision, m_pEntity1, 0x0);
VALIDATE_OFFSET(cAudioCollision, m_pEntity2, 0x4);
VALIDATE_OFFSET(cAudioCollision, m_bSurface1, 0x8);
VALIDATE_OFFSET(cAudioCollision, m_bSurface2, 0x9);
VALIDATE_OFFSET(cAudioCollision, m_fIntensity1, 0xC);
VALIDATE_OFFSET(cAudioCollision, m_fIntensity2, 0x10);
VALIDATE_OFFSET(cAudioCollision, m_vecPosition, 0x14);
VALIDATE_OFFSET(cAudioCollision, m_fDistance, 0x20);
VALIDATE_OFFSET(cAudioCollision, m_nBaseVolume, 0x24);
VALIDATE_SIZE(cAudioCollision, 0x28);

class cAudioCollisionManager {
public:
	cAudioCollision m_asCollisions1[10];
	cAudioCollision m_asCollisions2[10];
	uint8_t m_bIndicesTable[10];
	uint8_t m_bCollisionsInQueue;
	cAudioCollision m_sQueue;
};
VALIDATE_OFFSET(cAudioCollisionManager, m_asCollisions1, 0x0);
VALIDATE_OFFSET(cAudioCollisionManager, m_asCollisions2, 0x190);
VALIDATE_OFFSET(cAudioCollisionManager, m_bIndicesTable, 0x320);
VALIDATE_OFFSET(cAudioCollisionManager, m_bCollisionsInQueue, 0x32A);
VALIDATE_OFFSET(cAudioCollisionManager, m_sQueue, 0x32C);
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
VALIDATE_OFFSET(cAudioManager, m_bIsInitialised, 0x0);
VALIDATE_OFFSET(cAudioManager, m_bIsSurround, 0x1);
VALIDATE_OFFSET(cAudioManager, m_bReduceReleasingPriority, 0x2);
VALIDATE_OFFSET(cAudioManager, m_nActiveSamples, 0x3);
VALIDATE_OFFSET(cAudioManager, m_bDoubleVolume, 0x4);
VALIDATE_OFFSET(cAudioManager, m_bDynamicAcousticModelingStatus, 0x5);
VALIDATE_OFFSET(cAudioManager, m_fSpeedOfSound, 0x8);
VALIDATE_OFFSET(cAudioManager, m_bTimerJustReset, 0xC);
VALIDATE_OFFSET(cAudioManager, m_nTimer, 0x10);
VALIDATE_OFFSET(cAudioManager, m_sQueueSample, 0x14);
VALIDATE_OFFSET(cAudioManager, m_nActiveQueue, 0x70);
VALIDATE_OFFSET(cAudioManager, m_aRequestedQueue, 0x74);
VALIDATE_OFFSET(cAudioManager, m_aRequestedOrderList, 0x13DC);
VALIDATE_OFFSET(cAudioManager, m_nRequestedCount, 0x1412);
VALIDATE_OFFSET(cAudioManager, m_asActiveSamples, 0x1414);
VALIDATE_OFFSET(cAudioManager, m_asAudioEntities, 0x1DC8);
VALIDATE_OFFSET(cAudioManager, m_aAudioEntityOrderList, 0x3D08);
VALIDATE_OFFSET(cAudioManager, m_nAudioEntitiesCount, 0x4028);
VALIDATE_OFFSET(cAudioManager, m_avecReflectionsPos, 0x402C);
VALIDATE_OFFSET(cAudioManager, m_afReflectionsDistances, 0x4068);
VALIDATE_OFFSET(cAudioManager, m_sAudioScriptObjectManager, 0x407C);
VALIDATE_OFFSET(cAudioManager, m_sPedComments, 0x4120);
VALIDATE_OFFSET(cAudioManager, m_nFireAudioEntity, 0x45AC);
VALIDATE_OFFSET(cAudioManager, m_nWaterCannonEntity, 0x45B0);
VALIDATE_OFFSET(cAudioManager, m_nPoliceChannelEntity, 0x45B4);
VALIDATE_OFFSET(cAudioManager, m_sPoliceRadioQueue, 0x45B8);
VALIDATE_OFFSET(cAudioManager, m_aCrimes, 0x46AC);
VALIDATE_OFFSET(cAudioManager, m_nFrontEndEntity, 0x4774);
VALIDATE_OFFSET(cAudioManager, m_nCollisionEntity, 0x4778);
VALIDATE_OFFSET(cAudioManager, m_sCollisionManager, 0x477C);
VALIDATE_OFFSET(cAudioManager, m_nProjectileEntity, 0x4AD0);
VALIDATE_OFFSET(cAudioManager, m_nBridgeEntity, 0x4AD4);
VALIDATE_OFFSET(cAudioManager, m_vecMissionAudioPosition, 0x4AD8);
VALIDATE_OFFSET(cAudioManager, m_bIsMissionAudio2D, 0x4AE4);
VALIDATE_OFFSET(cAudioManager, m_nMissionAudioSampleIndex, 0x4AE8);
VALIDATE_OFFSET(cAudioManager, m_nMissionAudioLoadingStatus, 0x4AEC);
VALIDATE_OFFSET(cAudioManager, m_nMissionAudioPlayStatus, 0x4AED);
VALIDATE_OFFSET(cAudioManager, m_bIsMissionAudioPlaying, 0x4AEE);
VALIDATE_OFFSET(cAudioManager, m_nMissionAudioFramesToPlay, 0x4AF0);
VALIDATE_OFFSET(cAudioManager, m_bIsMissionAudioAllowedToPlay, 0x4AF4);
VALIDATE_OFFSET(cAudioManager, m_anRandomTable, 0x4AF8);
VALIDATE_OFFSET(cAudioManager, m_nTimeSpent, 0x4B0C);
VALIDATE_OFFSET(cAudioManager, m_bIsPaused, 0x4B0D);
VALIDATE_OFFSET(cAudioManager, m_bWasPaused, 0x4B0E);
VALIDATE_OFFSET(cAudioManager, m_FrameCounter, 0x4B10);
VALIDATE_SIZE(cAudioManager, 0x4B14);

extern cAudioManager &AudioManager;

extern tVehicleSampleData* aVehicleSettings;

extern const uint32_t* gOneShotCol;
