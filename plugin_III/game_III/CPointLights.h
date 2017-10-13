/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CVector.h"

class CPointLights {
public:
    
    static void AddLight(unsigned char lightType, CVector point, CVector direction, float radius, float arg4, float arg5, float arg6, unsigned char fogType, bool generateExtraShadows);
};