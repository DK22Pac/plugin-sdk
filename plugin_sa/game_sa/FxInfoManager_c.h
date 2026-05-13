/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class FxInfoManager_c {
public:
    unsigned int m_nNumInfos;
    void *m_pInfos;
    unsigned char m_nFirstMovementInfo;
    unsigned char m_nFirstRenderInfo;
private:
    char _padA[2];
public:
    short m_nLodStart;
    short m_nLodEnd;
    bool m_bHasFlatParticleEmitter;
    bool m_bHasHeatHazeParticleEmitter;
    char field_12;
    char field_13;
};
VALIDATE_OFFSET(FxInfoManager_c, m_nNumInfos, 0x0);
VALIDATE_OFFSET(FxInfoManager_c, m_pInfos, 0x4);
VALIDATE_OFFSET(FxInfoManager_c, m_nFirstMovementInfo, 0x8);
VALIDATE_OFFSET(FxInfoManager_c, m_nFirstRenderInfo, 0x9);
VALIDATE_OFFSET(FxInfoManager_c, m_nLodStart, 0xC);
VALIDATE_OFFSET(FxInfoManager_c, m_nLodEnd, 0xE);
VALIDATE_OFFSET(FxInfoManager_c, m_bHasFlatParticleEmitter, 0x10);
VALIDATE_OFFSET(FxInfoManager_c, m_bHasHeatHazeParticleEmitter, 0x11);
VALIDATE_OFFSET(FxInfoManager_c, field_12, 0x12);
VALIDATE_OFFSET(FxInfoManager_c, field_13, 0x13);
VALIDATE_SIZE(FxInfoManager_c, 0x14);