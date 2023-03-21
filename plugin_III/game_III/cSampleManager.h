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

};

extern cSampleManager& SampleManager;
