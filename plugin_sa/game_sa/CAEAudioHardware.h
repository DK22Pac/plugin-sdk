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

VALIDATE_SIZE(CAEAudioHardware, 0x1018);

extern CAEAudioHardware& AEAudioHardware;