/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CGeneral {
public: 
    static bool SolveQuadratic(float a, float b, float c, float& x1, float& x2);
    static int GetNodeHeadingFromVector(float x, float y);
    static float GetATanOfXY(float x, float y);
    static float LimitRadianAngle(float angle);
    static float LimitAngle(float angle);
    static float GetRadianAngleBetweenPoints(float x1, float y1, float x2, float y2);
    static float GetAngleBetweenPoints(float x1, float y1, float x2, float y2);
};
