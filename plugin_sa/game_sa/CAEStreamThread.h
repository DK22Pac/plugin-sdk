/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class PLUGIN_API CAEStreamThread {
public:
    void* hHandle;
    int field_4;
    void* m_pStreamingChannel;
    int m_pMp3TrackLoader;
    char m_bActive;
    char field_11;
    unsigned char field_12;
    unsigned char field_13;
    unsigned char field_14;
    char field_15;
    char m_bTrackStopped;
    char field_17;
    int field_18;
    unsigned long field_1C;
    unsigned long field_20;
    unsigned char field_24;
    char field_25;
    char field_26;
    char field_27;
    int field_28;
    int m_nTrackLenghtMs;
    int m_nActiveTrackID;
    int m_nPlayingTrackID;
    RTL_CRITICAL_SECTION m_criticalSection;

public:
    bool Initialise(void* channel);
    int GetActiveTrackID();

};

VALIDATE_SIZE(CAEStreamThread, 0x50);
