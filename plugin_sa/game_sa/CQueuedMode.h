/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CQueuedMode {
public:
    unsigned short m_nMode;
    float m_fDuration;
    unsigned short m_nMinZoom;
    unsigned short m_nMaxZoom;
};
VALIDATE_OFFSET(CQueuedMode, m_nMode, 0x0);
VALIDATE_OFFSET(CQueuedMode, m_fDuration, 0x4);
VALIDATE_OFFSET(CQueuedMode, m_nMinZoom, 0x8);
VALIDATE_OFFSET(CQueuedMode, m_nMaxZoom, 0xA);
VALIDATE_SIZE(CQueuedMode, 0xC);
