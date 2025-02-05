/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CGeneral {
public:
    static float GetATanOfXY(float x, float y);
    static float GetRadianAngleBetweenPoints(float x1, float y1, float x2, float y2);
    static float GetAngleBetweenPoints(float x1, float y1, float x2, float y2);
    static int32_t GetNodeHeadingFromVector(float x, float y);
    static float LimitRadianAngle(float angle);
    static int32_t GetRandomNumberInRange(int32_t low, int32_t high);
    static float GetRandomNumberInRange(float low, float high);
};
