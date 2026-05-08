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
VALIDATE_OFFSET(CAEAudioChannel, vtable, 0x0);
VALIDATE_OFFSET(CAEAudioChannel, m_pDirectSound, 0x4);
VALIDATE_OFFSET(CAEAudioChannel, m_pDirectSoundBuffer, 0x8);
VALIDATE_OFFSET(CAEAudioChannel, m_pDirectSound3DBuffer, 0xC);
VALIDATE_OFFSET(CAEAudioChannel, gap10, 0x10);
VALIDATE_OFFSET(CAEAudioChannel, m_nFlags, 0x28);
VALIDATE_OFFSET(CAEAudioChannel, m_nLengthInBytes, 0x2C);
VALIDATE_OFFSET(CAEAudioChannel, field_30, 0x30);
VALIDATE_OFFSET(CAEAudioChannel, m_fVolume, 0x34);
VALIDATE_OFFSET(CAEAudioChannel, field_38, 0x38);
VALIDATE_OFFSET(CAEAudioChannel, field_39, 0x39);
VALIDATE_OFFSET(CAEAudioChannel, field_3A, 0x3A);
VALIDATE_OFFSET(CAEAudioChannel, m_nFrequency, 0x3C);
VALIDATE_OFFSET(CAEAudioChannel, m_nOriginalFrequency, 0x40);
VALIDATE_OFFSET(CAEAudioChannel, m_bLooped, 0x44);
VALIDATE_OFFSET(CAEAudioChannel, field_45, 0x45);
VALIDATE_OFFSET(CAEAudioChannel, field_46, 0x46);
VALIDATE_OFFSET(CAEAudioChannel, field_47, 0x48);
VALIDATE_OFFSET(CAEAudioChannel, field_49, 0x4A);
VALIDATE_OFFSET(CAEAudioChannel, field_4B, 0x4C);
VALIDATE_OFFSET(CAEAudioChannel, field_4F, 0x50);
VALIDATE_OFFSET(CAEAudioChannel, field_53, 0x54);
VALIDATE_OFFSET(CAEAudioChannel, m_nBitsPerSample, 0x56);
VALIDATE_OFFSET(CAEAudioChannel, field_57, 0x57);
VALIDATE_OFFSET(CAEAudioChannel, field_59, 0x58);
VALIDATE_OFFSET(CAEAudioChannel, m_nBufferStatus, 0x5C);
VALIDATE_SIZE(CAEAudioChannel, 0x60);
