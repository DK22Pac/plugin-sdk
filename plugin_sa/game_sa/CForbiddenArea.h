/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CForbiddenArea {
public:
    float m_fX1;
    float m_fX2;
    float m_fY1;
    float m_fY2;
    float m_fZ1;
    float m_fZ2;
    bool m_bEnable;
    unsigned char m_nType;
private:
    char _pad1A[2];
public:
};

VALIDATE_SIZE(CForbiddenArea, 0x1C);
