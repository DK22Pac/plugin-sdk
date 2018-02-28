/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CMatrix.h"

class CSpecialParticleStuff {
public:
    //variables
    static unsigned int &FrameInAnimation;
    static unsigned int &BoatFoamStart;

    //funcs
    static void CreateFoamAroundObject(CMatrix* matrix, float x, float y, float z, int time);
    static void StartBoatFoamAnimation();
    static void UpdateBoatFoamAnimation(CMatrix* matrix);
};