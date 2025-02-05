/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class PLUGIN_API CAEAudioChannel {
public:
    void* vtable;
    void* m_pDirectSound; // IDirectSound
    void* m_pDirectSoundBuffer; // IDirectSoundBuffer8
    void* m_pDirectSound3DBuffer; // IDirectSound3DBuffer
    unsigned char gap10[24];
    unsigned long m_nFlags;
    int m_nLengthInBytes;
    int field_30;
    float m_fVolume;
    unsigned char field_38;
    char field_39;
    short field_3A;
    unsigned long m_nFrequency;
    unsigned long m_nOriginalFrequency;
    bool m_bLooped;
    unsigned char field_45;
    unsigned char field_46[1];
    unsigned short field_47;
    unsigned short field_49;
    unsigned long field_4B;
    unsigned long field_4F;
    unsigned short field_53;
    unsigned char m_nBitsPerSample;
    unsigned char field_57;
    char field_59[3];
    unsigned long m_nBufferStatus;
};

VALIDATE_SIZE(CAEAudioChannel, 0x60);
