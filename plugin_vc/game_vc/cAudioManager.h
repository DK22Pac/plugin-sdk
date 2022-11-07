/*
	Plugin-SDK (Grand Theft Auto Vice City) header file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVehicle.h"

class PLUGIN_API tSound {
	int m_nEntityIndex;
	unsigned int m_nCounter;
	unsigned int m_nSampleIndex;
	unsigned char m_nBankIndex;
	bool m_bIs2D;
	unsigned int m_nPriority;
	unsigned int m_nFrequency;
	unsigned char m_nVolume;
	float m_fDistance;
	unsigned int m_nLoopCount;
	unsigned int m_nLoopStart;
	int m_nLoopEnd;
	float m_fSpeedMultiplier;
	float m_MaxDistance;
	bool8 m_bStatic;
	CVector m_vecPos;
	bool8 m_bReverb;
	unsigned char m_nReflectionDelay;
	bool8 m_bReflections;
	unsigned char m_nPan;
	unsigned char m_nFrontRearPan;
	unsigned int m_nFramesToPlay;
	bool m_bIsBeingPlayed;
	bool m_bIsPlayingFinished;
	unsigned int m_nFinalPriority;
	char m_nVolumeChange;
};

class PLUGIN_API cAudioManager {
public:
	bool m_bIsInitialised;
	bool m_bIsSurround; // used on PS2
	bool m_bReduceReleasingPriority;
	unsigned char m_nActiveSamples;
	bool m_bDoubleVolume; // unused
	bool m_bDynamicAcousticModelingStatus;
	unsigned char m_nChannelOffset;
	float m_fSpeedOfSound;
	bool m_bTimerJustReset;
	unsigned int m_nTimer;
	tSound m_sQueueSample;

public:
	static CVehicle* FindVehicleOfPlayer();

};

extern cAudioManager AudioManager;
