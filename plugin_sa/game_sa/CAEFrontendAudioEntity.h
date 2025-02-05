/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"
#include "CAEAudioEntity.h"

class PLUGIN_API CAEFrontendAudioEntity {
public:
    CAEAudioEntity audio;
    unsigned char byte7C;
    unsigned char byte7D;
    unsigned char f7E[2];
    unsigned short m_nNumBulletSounds;
    unsigned short bankId;
    unsigned long m_dwLastFrameGeneral;
    unsigned long m_dwLastFrameMissionComplete;
    unsigned long m_dwLastFrameBulletPass;
    unsigned long m_dwLastTimeCarRespray;
    unsigned long dword94;
    unsigned long dword98;
};

VALIDATE_SIZE(CAEFrontendAudioEntity, 0x9C);
