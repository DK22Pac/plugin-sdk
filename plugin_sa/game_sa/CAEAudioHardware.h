/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CAEMP3BankLoader.h"
#include "CAEStreamingChannel.h"
#include "CAEStreamThread.h"
#include "CAEAudioChannel.h"

class PLUGIN_API CAEAudioHardware {
public:
    unsigned char field_0;
    char m_bDisableEffectsLoading;
    char field_2;
    char field_3;
    char field_4;
    char m_nReverbEnvironment;
    short m_awChannelFlags[64];
    short field_86;
    int m_nReverbDepth;
    unsigned short m_wNumAvailableChannels;
    unsigned short m_nNumChannels;
    short m_anNumSoundsInSlot[64];
    float m_afChannelVolumes[64];
    int field_210[64];
    float m_afChannelsFrqScalingFactor[64];
    float m_fMusicMasterScalingFactor;
    float m_fEffectMasterScalingFactor;
    float m_fMusicFaderScalingFactor;
    float m_fEffectsFaderScalingFactor;
    float m_fStreamFaderScalingFactor;
    float m_fNonStreamFaderScalingFactor;
    float field_428;
    float field_42C;
    short m_aBankSlotIds[300];
    short m_aSoundTypes[300];
    short m_anVirtualChannelSoundLoopStartTimes[300];
    short m_anVirtualChannelSoundLengths[300];
    char m_nBassSet;
    char __pad1__[3];
    float m_fBassEqGain;
    CAEMP3BankLoader* m_pMP3BankLoader;
    unsigned long m_pMP3TrackLoader;
    void* m_pDirectSound; // IDirectSound8
    int m_nSpeakerConfig;
    char m_n3dEffectsQueryResult;
    void* m_dsCaps; // DSCAPS
    char gap[92];
    void* m_pDirectSound3dListener; // IDirectSound3DListener
    CAEStreamingChannel* m_pStreamingChannel;
    CAEStreamThread m_streamThread;
    CAEAudioChannel* m_aChannels[64];
    char field_F64[160];
    int field_1004;
    int field_1008;
    int field_100C;
    char field_1010;
    int field_1014;

public:
    int GetActiveTrackID();
};
VALIDATE_OFFSET(CAEAudioHardware, field_0, 0x0);
VALIDATE_OFFSET(CAEAudioHardware, m_bDisableEffectsLoading, 0x1);
VALIDATE_OFFSET(CAEAudioHardware, field_2, 0x2);
VALIDATE_OFFSET(CAEAudioHardware, field_3, 0x3);
VALIDATE_OFFSET(CAEAudioHardware, field_4, 0x4);
VALIDATE_OFFSET(CAEAudioHardware, m_nReverbEnvironment, 0x5);
VALIDATE_OFFSET(CAEAudioHardware, m_awChannelFlags, 0x6);
VALIDATE_OFFSET(CAEAudioHardware, field_86, 0x86);
VALIDATE_OFFSET(CAEAudioHardware, m_nReverbDepth, 0x88);
VALIDATE_OFFSET(CAEAudioHardware, m_wNumAvailableChannels, 0x8C);
VALIDATE_OFFSET(CAEAudioHardware, m_nNumChannels, 0x8E);
VALIDATE_OFFSET(CAEAudioHardware, m_anNumSoundsInSlot, 0x90);
VALIDATE_OFFSET(CAEAudioHardware, m_afChannelVolumes, 0x110);
VALIDATE_OFFSET(CAEAudioHardware, field_210, 0x210);
VALIDATE_OFFSET(CAEAudioHardware, m_afChannelsFrqScalingFactor, 0x310);
VALIDATE_OFFSET(CAEAudioHardware, m_fMusicMasterScalingFactor, 0x410);
VALIDATE_OFFSET(CAEAudioHardware, m_fEffectMasterScalingFactor, 0x414);
VALIDATE_OFFSET(CAEAudioHardware, m_fMusicFaderScalingFactor, 0x418);
VALIDATE_OFFSET(CAEAudioHardware, m_fEffectsFaderScalingFactor, 0x41C);
VALIDATE_OFFSET(CAEAudioHardware, m_fStreamFaderScalingFactor, 0x420);
VALIDATE_OFFSET(CAEAudioHardware, m_fNonStreamFaderScalingFactor, 0x424);
VALIDATE_OFFSET(CAEAudioHardware, field_428, 0x428);
VALIDATE_OFFSET(CAEAudioHardware, field_42C, 0x42C);
VALIDATE_OFFSET(CAEAudioHardware, m_aBankSlotIds, 0x430);
VALIDATE_OFFSET(CAEAudioHardware, m_aSoundTypes, 0x688);
VALIDATE_OFFSET(CAEAudioHardware, m_anVirtualChannelSoundLoopStartTimes, 0x8E0);
VALIDATE_OFFSET(CAEAudioHardware, m_anVirtualChannelSoundLengths, 0xB38);
VALIDATE_OFFSET(CAEAudioHardware, m_nBassSet, 0xD90);
VALIDATE_OFFSET(CAEAudioHardware, __pad1__, 0xD91);
VALIDATE_OFFSET(CAEAudioHardware, m_fBassEqGain, 0xD94);
VALIDATE_OFFSET(CAEAudioHardware, m_pMP3BankLoader, 0xD98);
VALIDATE_OFFSET(CAEAudioHardware, m_pMP3TrackLoader, 0xD9C);
VALIDATE_OFFSET(CAEAudioHardware, m_pDirectSound, 0xDA0);
VALIDATE_OFFSET(CAEAudioHardware, m_nSpeakerConfig, 0xDA4);
VALIDATE_OFFSET(CAEAudioHardware, m_n3dEffectsQueryResult, 0xDA8);
VALIDATE_OFFSET(CAEAudioHardware, m_dsCaps, 0xDAC);
VALIDATE_OFFSET(CAEAudioHardware, gap, 0xDB0);
VALIDATE_OFFSET(CAEAudioHardware, m_pDirectSound3dListener, 0xE0C);
VALIDATE_OFFSET(CAEAudioHardware, m_pStreamingChannel, 0xE10);
VALIDATE_OFFSET(CAEAudioHardware, m_streamThread, 0xE14);
VALIDATE_OFFSET(CAEAudioHardware, m_aChannels, 0xE64);
VALIDATE_OFFSET(CAEAudioHardware, field_F64, 0xF64);
VALIDATE_OFFSET(CAEAudioHardware, field_1004, 0x1004);
VALIDATE_OFFSET(CAEAudioHardware, field_1008, 0x1008);
VALIDATE_OFFSET(CAEAudioHardware, field_100C, 0x100C);
VALIDATE_OFFSET(CAEAudioHardware, field_1010, 0x1010);
VALIDATE_OFFSET(CAEAudioHardware, field_1014, 0x1014);
VALIDATE_SIZE(CAEAudioHardware, 0x1018);

extern CAEAudioHardware& AEAudioHardware;