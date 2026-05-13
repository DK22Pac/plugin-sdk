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
VALIDATE_OFFSET(CAEFrontendAudioEntity, audio, 0x0);
VALIDATE_OFFSET(CAEFrontendAudioEntity, byte7C, 0x7C);
VALIDATE_OFFSET(CAEFrontendAudioEntity, byte7D, 0x7D);
VALIDATE_OFFSET(CAEFrontendAudioEntity, f7E, 0x7E);
VALIDATE_OFFSET(CAEFrontendAudioEntity, m_nNumBulletSounds, 0x80);
VALIDATE_OFFSET(CAEFrontendAudioEntity, bankId, 0x82);
VALIDATE_OFFSET(CAEFrontendAudioEntity, m_dwLastFrameGeneral, 0x84);
VALIDATE_OFFSET(CAEFrontendAudioEntity, m_dwLastFrameMissionComplete, 0x88);
VALIDATE_OFFSET(CAEFrontendAudioEntity, m_dwLastFrameBulletPass, 0x8C);
VALIDATE_OFFSET(CAEFrontendAudioEntity, m_dwLastTimeCarRespray, 0x90);
VALIDATE_OFFSET(CAEFrontendAudioEntity, dword94, 0x94);
VALIDATE_OFFSET(CAEFrontendAudioEntity, dword98, 0x98);
VALIDATE_SIZE(CAEFrontendAudioEntity, 0x9C);
