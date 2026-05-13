/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CClumpModelInfo.h"

class PLUGIN_API CPedModelInfo : public CClumpModelInfo {
public:
    int m_nAnimType;
    unsigned int m_nPedType;
    unsigned int m_nStatType;
    unsigned short m_nCarsCanDriveMask;
    unsigned short m_nPedFlags;
    CColModel *m_pHitColModel;
    unsigned char m_nRadio1;
    unsigned char m_nRadio2;
    unsigned char m_nRace;
private:
    char __pad;
public:
    short m_nPedAudioType;
    short m_nVoice1;
    short m_nVoice2;
    short m_nVoiceId;
};
VALIDATE_OFFSET(CPedModelInfo, m_nAnimType, 0x24);
VALIDATE_OFFSET(CPedModelInfo, m_nPedType, 0x28);
VALIDATE_OFFSET(CPedModelInfo, m_nStatType, 0x2C);
VALIDATE_OFFSET(CPedModelInfo, m_nCarsCanDriveMask, 0x30);
VALIDATE_OFFSET(CPedModelInfo, m_nPedFlags, 0x32);
VALIDATE_OFFSET(CPedModelInfo, m_pHitColModel, 0x34);
VALIDATE_OFFSET(CPedModelInfo, m_nRadio1, 0x38);
VALIDATE_OFFSET(CPedModelInfo, m_nRadio2, 0x39);
VALIDATE_OFFSET(CPedModelInfo, m_nRace, 0x3A);
VALIDATE_OFFSET(CPedModelInfo, m_nPedAudioType, 0x3C);
VALIDATE_OFFSET(CPedModelInfo, m_nVoice1, 0x3E);
VALIDATE_OFFSET(CPedModelInfo, m_nVoice2, 0x40);
VALIDATE_OFFSET(CPedModelInfo, m_nVoiceId, 0x42);
VALIDATE_SIZE(CPedModelInfo, 0x44);