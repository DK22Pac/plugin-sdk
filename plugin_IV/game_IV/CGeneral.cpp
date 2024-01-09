/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGeneral.h"

float CGeneral::GetATanOfXY(float x, float y) {
    return plugin::CallAndReturnDyn<float>(gpattern("F3 0F 10 44 24 ? F3 0F 10 4C 24 ? 0F 57 D2 0F 2E C2"), x, y);
}

float CGeneral::GetRadianAngleBetweenPoints(float x1, float y1, float x2, float y2) {
    return plugin::CallAndReturnDyn<float>(gpattern("F3 0F 10 4C 24 ? F3 0F 5C 4C 24 ? F3 0F 10 44 24 ? F3 0F 5C 44 24 ? 0F 57 D2"), x1, y1, x2, y2);
}

float CGeneral::GetAngleBetweenPoints(float x1, float y1, float x2, float y2) {
    return plugin::CallAndReturnDyn<float>(gpattern("51 F3 0F 10 44 24 ? 83 EC 10"), x1, y1, x2, y2);
}

int32_t CGeneral::GetNodeHeadingFromVector(float x, float y) {
    return plugin::CallAndReturnDyn<int32_t>(gpattern("F3 0F 10 44 24 ? 83 EC 10 C7 44 24 ? ? ? ? ? C7 44 24 ? ? ? ? ? F3 0F 11 44 24 ? F3 0F 10 44 24 ? F3 0F 11 04 24 E8 ? ? ? ? D9 5C 24 0C"), x, y);
}

float CGeneral::LimitRadianAngle(float angle) {
    return plugin::CallAndReturnDyn<float>(gpattern("F3 0F 10 15 ? ? ? ? F3 0F 10 44 24 ? 0F 2F D0 F3 0F 10 0D ? ? ? ? F3 0F 10 1D"), angle);
}

int32_t CGeneral::GetRandomNumberInRange(int32_t low, int32_t high) {
    return plugin::CallAndReturnDyn<int32_t>(gpattern("E8 ? ? ? ? 25 ? ? ? ? 66 0F 6E C8 8B 44 24 08"), low, high);
}

float CGeneral::GetRandomNumberInRange(float low, float high) {
    return plugin::CallAndReturnDyn<float>(gpattern("E8 ? ? ? ? F3 0F 10 44 24 ? F3 0F 5C 44 24 ? 66 0F 6E D0 0F 5B D2 F3 0F 59 15 ? ? ? ? F3 0F 59 D0 F3 0F 58 54 24 ? F3 0F 11 54 24 ? D9 44 24 08"), low, high);
}
