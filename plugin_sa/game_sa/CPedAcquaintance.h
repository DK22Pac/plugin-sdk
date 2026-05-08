/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CPedAcquaintance {
public:
    unsigned int m_nRespect;
    unsigned int m_nLike;
    unsigned int m_nIgnore;
    unsigned int m_nDislike;
    unsigned int m_nHate;
};
VALIDATE_OFFSET(CPedAcquaintance, m_nRespect, 0x0);
VALIDATE_OFFSET(CPedAcquaintance, m_nLike, 0x4);
VALIDATE_OFFSET(CPedAcquaintance, m_nIgnore, 0x8);
VALIDATE_OFFSET(CPedAcquaintance, m_nDislike, 0xC);
VALIDATE_OFFSET(CPedAcquaintance, m_nHate, 0x10);
VALIDATE_SIZE(CPedAcquaintance, 0x14);
