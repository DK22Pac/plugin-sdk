/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

typedef void* HSTREAM;
typedef unsigned int HPROVIDER;
typedef void* H3DPOBJECT;
typedef H3DPOBJECT H3DSAMPLE;
typedef void* HSAMPLE;
typedef void* HDIGDRIVER;

struct tSample {
    int offset;
    unsigned int size;
    int frequency;
    int field_C;
    int loopStart;
    int loopEnd;
};
VALIDATE_OFFSET(tSample, offset, 0x0);
VALIDATE_OFFSET(tSample, size, 0x4);
VALIDATE_OFFSET(tSample, frequency, 0x8);
VALIDATE_OFFSET(tSample, field_C, 0xC);
VALIDATE_OFFSET(tSample, loopStart, 0x10);
VALIDATE_OFFSET(tSample, loopEnd, 0x14);
VALIDATE_SIZE(tSample, 0x18);

class cSampleManager {
public:
    HDIGDRIVER m_pDig;
    char field_4;
    char m_szCDRomRootPath[80];
    bool m_bInitialised;
    short pad;
    HSAMPLE m_hSamples[16];
    HSAMPLE m_hSample;
    HSTREAM m_hStreams[2];
    char field_A4;
    char field_A5;
    char field_A6;
    char field_A7;
    tSample m_aSamples[320];
    void* field_1EA8;
    void* field_1EAC;
    unsigned char m_nNumberOfSamples;
    unsigned char field_1EB1;
    unsigned char field_1EB2;
    char field_1EB3;
    HPROVIDER m_aProvider[256];
    char* m_szStr[256];
    HPROVIDER field_26B4;
    int m_nUsingEAX;
    int field_26BC;
    int m_n3dProvider;
    H3DSAMPLE m_a3dSamples[16];
    float field_2704;
    float field_2708;
    float field_270C;
    int field_2710;
    char field_2714;
    char field_2715;
    char field_2716;
    char field_2717;

public:
    void PlayVocal(int stream, int vocal, bool append);
    void CloseStream(int stream);
    void SetStreamVolume(int stream, unsigned char volume);
    void PlaySample(int sample);
    void SetSampleVolume(unsigned char volume);
    void PlayFrontendTrack(unsigned int id);
    void StopFrontendTrack();
    bool IsFrontendTrackPlaying();
    bool IsSampleNotPlaying();
};
VALIDATE_OFFSET(cSampleManager, m_pDig, 0x0);
VALIDATE_OFFSET(cSampleManager, field_4, 0x4);
VALIDATE_OFFSET(cSampleManager, m_szCDRomRootPath, 0x5);
VALIDATE_OFFSET(cSampleManager, m_bInitialised, 0x55);
VALIDATE_OFFSET(cSampleManager, pad, 0x56);
VALIDATE_OFFSET(cSampleManager, m_hSamples, 0x58);
VALIDATE_OFFSET(cSampleManager, m_hSample, 0x98);
VALIDATE_OFFSET(cSampleManager, m_hStreams, 0x9C);
VALIDATE_OFFSET(cSampleManager, field_A4, 0xA4);
VALIDATE_OFFSET(cSampleManager, field_A5, 0xA5);
VALIDATE_OFFSET(cSampleManager, field_A6, 0xA6);
VALIDATE_OFFSET(cSampleManager, field_A7, 0xA7);
VALIDATE_OFFSET(cSampleManager, m_aSamples, 0xA8);
VALIDATE_OFFSET(cSampleManager, field_1EA8, 0x1EA8);
VALIDATE_OFFSET(cSampleManager, field_1EAC, 0x1EAC);
VALIDATE_OFFSET(cSampleManager, m_nNumberOfSamples, 0x1EB0);
VALIDATE_OFFSET(cSampleManager, field_1EB1, 0x1EB1);
VALIDATE_OFFSET(cSampleManager, field_1EB2, 0x1EB2);
VALIDATE_OFFSET(cSampleManager, field_1EB3, 0x1EB3);
VALIDATE_OFFSET(cSampleManager, m_aProvider, 0x1EB4);
VALIDATE_OFFSET(cSampleManager, m_szStr, 0x22B4);
VALIDATE_OFFSET(cSampleManager, field_26B4, 0x26B4);
VALIDATE_OFFSET(cSampleManager, m_nUsingEAX, 0x26B8);
VALIDATE_OFFSET(cSampleManager, field_26BC, 0x26BC);
VALIDATE_OFFSET(cSampleManager, m_n3dProvider, 0x26C0);
VALIDATE_OFFSET(cSampleManager, m_a3dSamples, 0x26C4);
VALIDATE_OFFSET(cSampleManager, field_2704, 0x2704);
VALIDATE_OFFSET(cSampleManager, field_2708, 0x2708);
VALIDATE_OFFSET(cSampleManager, field_270C, 0x270C);
VALIDATE_OFFSET(cSampleManager, field_2710, 0x2710);
VALIDATE_OFFSET(cSampleManager, field_2714, 0x2714);
VALIDATE_OFFSET(cSampleManager, field_2715, 0x2715);
VALIDATE_OFFSET(cSampleManager, field_2716, 0x2716);
VALIDATE_OFFSET(cSampleManager, field_2717, 0x2717);
VALIDATE_SIZE(cSampleManager, 0x2718);

extern cSampleManager& SampleManager;
