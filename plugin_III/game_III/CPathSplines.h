/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

struct CPathSpline {
    float m_nArrayMarker;
    float field_4;
    float m_fFOV;
    float field_12;
    float field_16;
    float field_20;
    float field_24;
    float field_28;
};
VALIDATE_OFFSET(CPathSpline, m_nArrayMarker, 0x0);
VALIDATE_OFFSET(CPathSpline, field_4, 0x4);
VALIDATE_OFFSET(CPathSpline, m_fFOV, 0x8);
VALIDATE_OFFSET(CPathSpline, field_12, 0xC);
VALIDATE_OFFSET(CPathSpline, field_16, 0x10);
VALIDATE_OFFSET(CPathSpline, field_20, 0x14);
VALIDATE_OFFSET(CPathSpline, field_24, 0x18);
VALIDATE_OFFSET(CPathSpline, field_28, 0x1C);
VALIDATE_SIZE(CPathSpline, 0x20);

struct CPathSplines {
    CPathSpline m_aPathData[100];
};
VALIDATE_OFFSET(CPathSplines, m_aPathData, 0x0);
VALIDATE_SIZE(CPathSplines, 0xC80);
