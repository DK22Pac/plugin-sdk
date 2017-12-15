/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"

class CGeneral {
public:
    //funcs
    static float GetATanOfXY(float x, float y);
    static float GetAngleBetweenPoints(float x1, float y1, float x2, float y2);
    static int GetNodeHeadingFromVector(float x, float y);
    static float GetRadianAngleBetweenPoints(float x1, float y1, float x2, float y2);
    static float LimitAngle(float angle);
    static float LimitRadianAngle(float angle);
    // returns random float in range [min;max)
    static float GetRandomNumberInRange(float min, float max);
    // returns random int in range [min;max)
    static unsigned int GetRandomNumberInRange(int min, int max);
    // returns random int in range 0-32767
    static unsigned int GetRandomNumber();
};