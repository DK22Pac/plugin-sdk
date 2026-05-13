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
VALIDATE_SIZE(tSound, 0x5C);

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
VALIDATE_OFFSET(cAudioManager, m_bIsInitialised, 0x0);
VALIDATE_OFFSET(cAudioManager, m_bIsSurround, 0x1);
VALIDATE_OFFSET(cAudioManager, m_bReduceReleasingPriority, 0x2);
VALIDATE_OFFSET(cAudioManager, m_nActiveSamples, 0x3);
VALIDATE_OFFSET(cAudioManager, m_bDoubleVolume, 0x4);
VALIDATE_OFFSET(cAudioManager, m_bDynamicAcousticModelingStatus, 0x5);
VALIDATE_OFFSET(cAudioManager, m_nChannelOffset, 0x6);
VALIDATE_OFFSET(cAudioManager, m_fSpeedOfSound, 0x8);
VALIDATE_OFFSET(cAudioManager, m_bTimerJustReset, 0xC);
VALIDATE_OFFSET(cAudioManager, m_nTimer, 0x10);
VALIDATE_OFFSET(cAudioManager, m_sQueueSample, 0x14);
VALIDATE_SIZE(cAudioManager, 0x70);

extern cAudioManager AudioManager;
