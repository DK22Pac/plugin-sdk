/*
	Plugin-SDK (Grand Theft Auto Vice City) header file
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
	int nLoopEnd;
};

class PLUGIN_API cSampleManager {
public:
	char m_nEffectsVolume;
	char m_nMusicVolume;
	char m_nMP3BoostVolume;
	char m_nEffectsFadeVolume;
	char m_nMusicFadeVolume;
	bool m_nMonoMode;
	char m_szCDRomRootPath[80];
	bool m_bInitialised;
	unsigned char m_nNumberOfProviders;
	char* m_aAudioProviders[64];
	tSample m_aSamples[9941];
	char m_MiscomPath[260];
	char m_WavFilesPath[260];
	char m_MP3FilesPath[188];
	void* m_aChannels[18];
public:
	static bool IsMP3RadioChannelAvailable();

};

extern cSampleManager& SampleManager;
