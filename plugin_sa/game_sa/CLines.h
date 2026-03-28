/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class CLines {
public:
    static void RenderLineNoClipping(float startX, float startY, float startZ, float endX, float endY, float endZ, uint32_t startColor, uint32_t endColor);
    static void RenderLineWithClipping(float startX, float startY, float startZ, float endX, float endY, float endZ, uint32_t startColor, uint32_t endColor);
    static void ImmediateLine2D(int32_t startX, int32_t startY, int32_t endX, int32_t endY, uint8_t startR, uint8_t startG, uint8_t startB, uint8_t startA, uint8_t endR, uint8_t endG, uint8_t endB, uint8_t endA);
};