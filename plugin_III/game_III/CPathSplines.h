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

VALIDATE_SIZE(CPathSpline, 0x20);

struct CPathSplines {
    CPathSpline m_aPathData[100];
};

VALIDATE_SIZE(CPathSplines, 0xC80);
