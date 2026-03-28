/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CLines.h"

// 0x6FF460
void CLines::RenderLineNoClipping(float startX, float startY, float startZ, float endX, float endY, float endZ, uint32_t startColor, uint32_t endColor) {
    plugin::Call<0x6FF460, float, float, float, float, float, float, uint32_t, uint32_t>(startX, startY, startZ, endX, endY, endZ, startColor, endColor);
}

// 0x6FF4F0
void CLines::RenderLineWithClipping(float startX, float startY, float startZ, float endX, float endY, float endZ, uint32_t startColor, uint32_t endColor) {
    plugin::Call<0x6FF4F0, float, float, float, float, float, float, uint32_t, uint32_t>(startX, startY, startZ, endX, endY, endZ, startColor, endColor);
}

// 0x6FF790
void CLines::ImmediateLine2D(int32_t startX, int32_t startY, int32_t endX, int32_t endY, 
                             uint8_t startR, uint8_t startG, uint8_t startB, uint8_t startA, uint8_t endR, uint8_t endG, uint8_t endB, uint8_t endA) {
    plugin::Call<0x6FF790, int32_t, int32_t, int32_t, int32_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t>
        (startX, startY, endX, endY, startR, startG, startB, startA, endR, endG, endB, endA);
}