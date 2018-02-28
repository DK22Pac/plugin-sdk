/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

class CClouds {
public:
    // static variables
    static RwRGBA *ms_colourTop;
    static RwRGBA *ms_colourBottom;
    static float &CloudRotation;
    static float &IndividualRotation;
    static float &ms_cameraRoll;
    static float &ms_horizonZ;

    // static functions
    static void Init();
    static void Render();
    static void RenderBackground(short redTop, short greenTop, short blueTop, short redBottom, short greenBottom, short blueBottom, short alpha);
    static void RenderHorizon();
    static void Shutdown();
    static void Update();
};

extern RwTexture*& gpCloudTex;	// RwTexture* gpCloudTex[5] = {cloud1, cloud2, cloud3, cloudhilit, cloudmasked};

bool UseDarkBackground();
