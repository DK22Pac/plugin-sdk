/*
	Plugin-SDK (Grand Theft Auto III) header file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

struct PLUGIN_API tSample {
	unsigned int nOffset;
	unsigned int nSize;
	unsigned int nFrequency;
	unsigned int nLoopStart;
	unsigned int nLoopEnd;
};

class PLUGIN_API cSampleManager {
public:
	unsigned char m_nEffectsVolume;
	unsigned char m_nMusicVolume;
	unsigned char m_nEffectsFadeVolume;
	unsigned char m_nMusicFadeVolume;
	bool m_nMonoMode;
	char unk;
	char m_szCDRomRootPath[80];
	bool8 m_bInitialised;
	unsigned char m_nNumberOfProviders;
	char* m_aAudioProviders[64];
	tSample m_aSamples[3032];

public:
	void StopChannel(uint32_t channel);
	uint32_t GetSampleLoopStartOffset(uint32_t sample);
	uint32_t GetSampleLoopEndOffset(uint32_t sample);
	bool GetChannelUsedFlag(uint32_t channel);
	bool InitialiseChannel(uint32_t channel, uint32_t sfx, uint8_t bank);
	void SetChannelLoopCount(uint32_t channel, uint32_t loopCount);
	void SetChannelLoopPoints(uint32_t channel, uint32_t loopStart, int32_t loopEnd);
	void SetChannelVolume(uint32_t channel, uint32_t vol);
	void SetChannelPan(uint32_t channel, uint32_t pan);
	void SetChannelFrequency(uint32_t channel, uint32_t freq);
	void SetChannelReverbFlag(uint32_t channel, bool reverb);
	void StartChannel(uint32_t channel);
	void SetChannel3DPosition(uint32_t channel, float x, float y, float z);
	void SetChannel3DDistances(uint32_t channel, float fMax, float fMin);
	void SetChannelEmittingVolume(uint32_t channel, uint32_t vol);
	uint32_t GetSampleBaseFrequency(uint32_t sample);
};

extern cSampleManager& SampleManager;
