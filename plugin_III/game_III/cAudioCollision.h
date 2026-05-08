/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CEntity.h"

class PLUGIN_API cAudioCollision {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(cAudioCollision)

public:
    CEntity *m_pEntity1;
    CEntity *m_pEntity2;
    unsigned char m_nSurface1;
    unsigned char m_nSurface2;
    float m_fIntensity1;
    float m_fIntensity2;
    CVector m_vecPosition;
    float m_fDistance;
    int m_nBaseVolume;
};
VALIDATE_OFFSET(cAudioCollision, m_pEntity1, 0x0);
VALIDATE_OFFSET(cAudioCollision, m_pEntity2, 0x4);
VALIDATE_OFFSET(cAudioCollision, m_nSurface1, 0x8);
VALIDATE_OFFSET(cAudioCollision, m_nSurface2, 0x9);
VALIDATE_OFFSET(cAudioCollision, m_fIntensity1, 0xC);
VALIDATE_OFFSET(cAudioCollision, m_fIntensity2, 0x10);
VALIDATE_OFFSET(cAudioCollision, m_vecPosition, 0x14);
VALIDATE_OFFSET(cAudioCollision, m_fDistance, 0x20);
VALIDATE_OFFSET(cAudioCollision, m_nBaseVolume, 0x24);
VALIDATE_SIZE(cAudioCollision, 0x28);

#include "meta/meta.cAudioCollision.h"
