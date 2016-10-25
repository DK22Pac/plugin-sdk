/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CGeneral.h"

// Converted from cdecl bool CGeneral::SolveQuadratic(float a,float b,float c,float &x1,float &x2) 0x4A53D0 
bool CGeneral::SolveQuadratic(float a, float b, float c, float& x1, float& x2) {
    return plugin::CallAndReturn<bool, 0x4A53D0, float, float, float, float&, float&>(a, b, c, x1, x2);
}

// Converted from cdecl int CGeneral::GetNodeHeadingFromVector(float x,float y) 0x4A5450 
int CGeneral::GetNodeHeadingFromVector(float x, float y) {
    return plugin::CallAndReturn<int, 0x4A5450, float, float>(x, y);
}

// Converted from cdecl float CGeneral::GetATanOfXY(float x,float y) 0x4A55E0 
float CGeneral::GetATanOfXY(float x, float y) {
    return plugin::CallAndReturn<float, 0x4A55E0, float, float>(x, y);
}

// Converted from cdecl float CGeneral::LimitRadianAngle(float angle) 0x4A57F0 
float CGeneral::LimitRadianAngle(float angle) {
    return plugin::CallAndReturn<float, 0x4A57F0, float>(angle);
}

// Converted from cdecl float CGeneral::LimitAngle(float angle) 0x4A5890 
float CGeneral::LimitAngle(float angle) {
    return plugin::CallAndReturn<float, 0x4A5890, float>(angle);
}

// Converted from cdecl float CGeneral::GetRadianAngleBetweenPoints(float x1,float y1,float x2,float y2) 0x4A58E0 
float CGeneral::GetRadianAngleBetweenPoints(float x1, float y1, float x2, float y2) {
    return plugin::CallAndReturn<float, 0x4A58E0, float, float, float, float>(x1, y1, x2, y2);
}

// Converted from cdecl float CGeneral::GetAngleBetweenPoints(float x1,float y1,float x2,float y2) 0x4A59D0 
float CGeneral::GetAngleBetweenPoints(float x1, float y1, float x2, float y2) {
    return plugin::CallAndReturn<float, 0x4A59D0, float, float, float, float>(x1, y1, x2, y2);
}
