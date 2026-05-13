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
VALIDATE_OFFSET(tSample, nOffset, 0x0);
VALIDATE_OFFSET(tSample, nSize, 0x4);
VALIDATE_OFFSET(tSample, nFrequency, 0x8);
VALIDATE_OFFSET(tSample, nLoopStart, 0xC);
VALIDATE_OFFSET(tSample, nLoopEnd, 0x10);
VALIDATE_SIZE(tSample, 0x14);

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
VALIDATE_OFFSET(cSampleManager, m_nEffectsVolume, 0x0);
VALIDATE_OFFSET(cSampleManager, m_nMusicVolume, 0x1);
VALIDATE_OFFSET(cSampleManager, m_nMP3BoostVolume, 0x2);
VALIDATE_OFFSET(cSampleManager, m_nEffectsFadeVolume, 0x3);
VALIDATE_OFFSET(cSampleManager, m_nMusicFadeVolume, 0x4);
VALIDATE_OFFSET(cSampleManager, m_nMonoMode, 0x5);
VALIDATE_OFFSET(cSampleManager, m_szCDRomRootPath, 0x6);
VALIDATE_OFFSET(cSampleManager, m_bInitialised, 0x56);
VALIDATE_OFFSET(cSampleManager, m_nNumberOfProviders, 0x57);
VALIDATE_OFFSET(cSampleManager, m_aAudioProviders, 0x58);
VALIDATE_OFFSET(cSampleManager, m_aSamples, 0x158);
VALIDATE_OFFSET(cSampleManager, m_MiscomPath, 0x309FC);
VALIDATE_OFFSET(cSampleManager, m_WavFilesPath, 0x30B00);
VALIDATE_OFFSET(cSampleManager, m_MP3FilesPath, 0x30C04);
VALIDATE_OFFSET(cSampleManager, m_aChannels, 0x30CC0);
VALIDATE_SIZE(cSampleManager, 0x30D08);

extern cSampleManager& SampleManager;
