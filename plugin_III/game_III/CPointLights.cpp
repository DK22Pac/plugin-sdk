/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CPointLights.h"

// Converted from cdecl void CPointLights::AddLight(uchar lightType,CVector point,CVector direction,float radius,float,float,float,uchar fogType,bool generateExtraShadows) 0x510790
void CPointLights::AddLight(unsigned char lightType, CVector point, CVector direction, float radius, float arg4, float arg5, float arg6, unsigned char fogType, bool generateExtraShadows) {
    plugin::Call<0x510790, unsigned char, CVector, CVector, float, float, float, float, unsigned char, bool>(lightType, point, direction, radius, arg4, arg5, arg6, fogType, generateExtraShadows);
}