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
VALIDATE_OFFSET(CForbiddenArea, m_fX1, 0x0);
VALIDATE_OFFSET(CForbiddenArea, m_fX2, 0x4);
VALIDATE_OFFSET(CForbiddenArea, m_fY1, 0x8);
VALIDATE_OFFSET(CForbiddenArea, m_fY2, 0xC);
VALIDATE_OFFSET(CForbiddenArea, m_fZ1, 0x10);
VALIDATE_OFFSET(CForbiddenArea, m_fZ2, 0x14);
VALIDATE_OFFSET(CForbiddenArea, m_bEnable, 0x18);
VALIDATE_OFFSET(CForbiddenArea, m_nType, 0x19);
VALIDATE_SIZE(CForbiddenArea, 0x1C);
