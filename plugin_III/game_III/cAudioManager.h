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

VALIDATE_SIZE(tSound, 92);

class cVehicleParams {
public:
	bool m_bDistanceCalculated;
	float m_fDistance;
	CVehicle* m_pVehicle;
	cTransmission* m_pTransmission;
	uint32_t m_nIndex;
	float m_fVelocityChange;

	cVehicleParams() {
		m_bDistanceCalculated = false;
		m_fDistance = 0.0f;
		m_pVehicle = nullptr;
		m_pTransmission = nullptr;
		m_nIndex = 0;
		m_fVelocityChange = 0.0f;
	}
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

};

//VALIDATE_SIZE(cAudioManager, 0x4B14);

extern cAudioManager &AudioManager;

extern tVehicleSampleData* aVehicleSettings;
