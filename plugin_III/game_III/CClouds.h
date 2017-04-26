/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_III.h"
#include "RenderWare.h"

class CClouds {
public:
    //variables
    static RwRGBA *ms_colourTop;
    static RwRGBA *ms_colourBottom;
    static float &CloudRotation;
    static float &IndividualRotation;

    //funcs
    static void Init();
    static void Render();
    static void RenderBackground(short redTop, short greenTop, short blueTop, short redBottom, short greenBottom, short blueBottom, short alpha);
    static void RenderHorizon();
    static void Shutdown();
    static void Update();
};

extern RwTexture*& gpCloudTex;		  // RwTexture* gpCloudTex
extern RwTexture*& gpCloud2Tex;		  // RwTexture* gpCloud2Tex
extern RwTexture*& gpCloud3Tex;		  // RwTexture* gpCloud3Tex
extern RwTexture*& gpCloudHilitTex;	  // RwTexture* gpCloudHilitTex
extern RwTexture*& gpCloudMaskedTex;  // RwTexture* gpCloudMaskedTex