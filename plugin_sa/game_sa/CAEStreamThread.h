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
VALIDATE_OFFSET(CAEStreamThread, hHandle, 0x0);
VALIDATE_OFFSET(CAEStreamThread, field_4, 0x4);
VALIDATE_OFFSET(CAEStreamThread, m_pStreamingChannel, 0x8);
VALIDATE_OFFSET(CAEStreamThread, m_pMp3TrackLoader, 0xC);
VALIDATE_OFFSET(CAEStreamThread, m_bActive, 0x10);
VALIDATE_OFFSET(CAEStreamThread, field_11, 0x11);
VALIDATE_OFFSET(CAEStreamThread, field_12, 0x12);
VALIDATE_OFFSET(CAEStreamThread, field_13, 0x13);
VALIDATE_OFFSET(CAEStreamThread, field_14, 0x14);
VALIDATE_OFFSET(CAEStreamThread, field_15, 0x15);
VALIDATE_OFFSET(CAEStreamThread, m_bTrackStopped, 0x16);
VALIDATE_OFFSET(CAEStreamThread, field_17, 0x17);
VALIDATE_OFFSET(CAEStreamThread, field_18, 0x18);
VALIDATE_OFFSET(CAEStreamThread, field_1C, 0x1C);
VALIDATE_OFFSET(CAEStreamThread, field_20, 0x20);
VALIDATE_OFFSET(CAEStreamThread, field_24, 0x24);
VALIDATE_OFFSET(CAEStreamThread, field_25, 0x25);
VALIDATE_OFFSET(CAEStreamThread, field_26, 0x26);
VALIDATE_OFFSET(CAEStreamThread, field_27, 0x27);
VALIDATE_OFFSET(CAEStreamThread, field_28, 0x28);
VALIDATE_OFFSET(CAEStreamThread, m_nTrackLenghtMs, 0x2C);
VALIDATE_OFFSET(CAEStreamThread, m_nActiveTrackID, 0x30);
VALIDATE_OFFSET(CAEStreamThread, m_nPlayingTrackID, 0x34);
VALIDATE_OFFSET(CAEStreamThread, m_criticalSection, 0x38);
VALIDATE_SIZE(CAEStreamThread, 0x50);
