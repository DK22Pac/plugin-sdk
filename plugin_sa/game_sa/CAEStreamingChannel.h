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
VALIDATE_OFFSET(CAEStreamingChannel, base, 0x0);
VALIDATE_OFFSET(CAEStreamingChannel, field_60, 0x60);
VALIDATE_OFFSET(CAEStreamingChannel, field_61, 0x61);
VALIDATE_OFFSET(CAEStreamingChannel, field_62, 0x62);
VALIDATE_OFFSET(CAEStreamingChannel, field_63, 0x63);
VALIDATE_OFFSET(CAEStreamingChannel, field_64, 0x64);
VALIDATE_OFFSET(CAEStreamingChannel, m_bFxEnabled, 0x65);
VALIDATE_OFFSET(CAEStreamingChannel, field_66, 0x66);
VALIDATE_OFFSET(CAEStreamingChannel, field_67, 0x67);
VALIDATE_OFFSET(CAEStreamingChannel, field_68, 0x68);
VALIDATE_OFFSET(CAEStreamingChannel, field_6C, 0x6C);
VALIDATE_OFFSET(CAEStreamingChannel, field_6006C, 0x6006C);
VALIDATE_OFFSET(CAEStreamingChannel, m_pStreamingDecoder, 0x60070);
VALIDATE_OFFSET(CAEStreamingChannel, field_60074, 0x60074);
VALIDATE_OFFSET(CAEStreamingChannel, field_60078, 0x60078);
VALIDATE_OFFSET(CAEStreamingChannel, field_6007C, 0x6007C);
VALIDATE_OFFSET(CAEStreamingChannel, field_60084, 0x60084);
VALIDATE_OFFSET(CAEStreamingChannel, field_60088, 0x60088);
VALIDATE_OFFSET(CAEStreamingChannel, field_6008C, 0x6008C);
VALIDATE_OFFSET(CAEStreamingChannel, m_pSoundBuffer, 0x60090);
VALIDATE_OFFSET(CAEStreamingChannel, field_60094, 0x60094);
VALIDATE_SIZE(CAEStreamingChannel, 0x60098);
