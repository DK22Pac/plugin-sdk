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

VALIDATE_SIZE(cSampleManager, 0x2718);

extern cSampleManager& SampleManager;
