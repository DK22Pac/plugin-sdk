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
VALIDATE_OFFSET(CViewport, field_1, 0x0);
VALIDATE_OFFSET(CViewport, field_2, 0x2);
VALIDATE_OFFSET(CViewport, field_3, 0x4);
VALIDATE_OFFSET(CViewport, field_4, 0x6);
VALIDATE_OFFSET(CViewport, field_5, 0x8);
VALIDATE_OFFSET(CViewport, field_6, 0xA);
VALIDATE_OFFSET(CViewport, field_1107, 0xC);
VALIDATE_OFFSET(CViewport, m_bWidescreen, 0x453);
VALIDATE_SIZE(CViewport, 0x454);

extern CViewport& TheViewport;
