/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CVector.h"

class CCoronas {
public:

    static void RegisterCorona(unsigned int id, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const& posn, float radius, float farClip, unsigned char arg8, unsigned char arg9, unsigned char arg10, unsigned char arg11, unsigned char arg12, float arg13);
    static void UpdateCoronaCoors(unsigned int id, CVector const& posn, float farClip, float angle);
};