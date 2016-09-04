#pragma once

#include "plbase/PluginBase_SA.h"

class CGeneral {
public:
    static float LimitAngle(float angle);
    static float LimitRadianAngle(float angle);
    static float GetRadianAngleBetweenPoints(float x1, float y1, float x2, float y2);
    static float GetATanOfXY(float x, float y);
    static unsigned char GetNodeHeadingFromVector(float x, float y);
    static bool SolveQuadratic(float a, float b, float c, float& x1, float& x2);
    static float GetAngleBetweenPoints(float x1, float y1, float x2, float y2);
    static unsigned int GetRandomNumberInRange(int min, int max); // returns random int in ranges [min;max)
    static float GetRandomNumberInRange(float min, float max); // returns random float in ranges [min;max)
};