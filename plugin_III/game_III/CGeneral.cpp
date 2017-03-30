/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CGeneral.h"

// Converted from cdecl float CGeneral::GetATanOfXY(float x,float y) 0x48CC30 
float CGeneral::GetATanOfXY(float x, float y) {
    return plugin::CallAndReturn<float, 0x48CC30, float, float>(x, y);
}

// Converted from cdecl float CGeneral::GetAngleBetweenPoints(float x1,float y1,float x2,float y2) 0x48CA30 
float CGeneral::GetAngleBetweenPoints(float x1, float y1, float x2, float y2) {
    return plugin::CallAndReturn<float, 0x48CA30, float, float, float, float>(x1, y1, x2, y2);
}

// Converted from cdecl int CGeneral::GetNodeHeadingFromVector(float x,float y) 0x48CE40 
int CGeneral::GetNodeHeadingFromVector(float x, float y) {
    return plugin::CallAndReturn<int, 0x48CE40, float, float>(x, y);
}

// Converted from cdecl float CGeneral::GetRadianAngleBetweenPoints(float x1,float y1,float x2,float y2) 0x48CA50 
float CGeneral::GetRadianAngleBetweenPoints(float x1, float y1, float x2, float y2) {
    return plugin::CallAndReturn<float, 0x48CA50, float, float, float, float>(x1, y1, x2, y2);
}

// Converted from cdecl float CGeneral::LimitAngle(float angle) 0x48CB40
float CGeneral::LimitAngle(float angle) {
    return plugin::CallAndReturn<float, 0x48CB40, float>(angle);
}

// Converted from cdecl float CGeneral::LimitRadianAngle(float angle) 0x48CB90
float CGeneral::LimitRadianAngle(float angle) {
    return plugin::CallAndReturn<float, 0x48CB90, float>(angle);
}
