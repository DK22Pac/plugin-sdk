/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CViewport {
public:
    uint16_t field_1;
    uint16_t field_2;
    uint16_t field_3;
    uint16_t field_4;
    uint16_t field_5;
    uint16_t field_6;
    uint8_t field_1107[1095];
    bool m_bWidescreen;

public:
    float FindAspectRatio(bool wide);
    void SetWidescreenBorders(bool on, int32_t delay);
};

extern CViewport& TheViewport;
