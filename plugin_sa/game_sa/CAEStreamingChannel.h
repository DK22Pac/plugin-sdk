/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CAEAudioChannel.h"

class PLUGIN_API CAEStreamingChannel {
public:
    CAEAudioChannel base;
    unsigned char field_60;
    unsigned char field_61;
    unsigned char field_62;
    unsigned char field_63;
    unsigned char field_64;
    unsigned char m_bFxEnabled;
    unsigned char field_66;
    unsigned char field_67;
    unsigned long field_68;
    unsigned char field_6C[393216];
    unsigned long field_6006C;
    unsigned long m_pStreamingDecoder;
    unsigned long field_60074;
    unsigned long field_60078;
    unsigned char field_6007C[8];
    unsigned long field_60084;
    int field_60088;
    int field_6008C;
    void* m_pSoundBuffer; // IDirectSoundBuffer
    unsigned long field_60094;
};

VALIDATE_SIZE(CAEStreamingChannel, 0x60098);
