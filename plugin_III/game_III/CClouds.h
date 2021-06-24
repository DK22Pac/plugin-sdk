/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CRGBA.h"
#include "RenderWare.h"

class PLUGIN_API CClouds {
public:
    SUPPORTED_10EN_11EN_STEAM static float &ms_cameraRoll;
    SUPPORTED_10EN_11EN_STEAM static CRGBA &ms_colourBottom;
    SUPPORTED_10EN_11EN_STEAM static float &ms_horizonZ;
    SUPPORTED_10EN_11EN_STEAM static float &CloudRotation;
    SUPPORTED_10EN_11EN_STEAM static CRGBA &ms_colourTop;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &IndividualRotation;

    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static void Render();
    SUPPORTED_10EN_11EN_STEAM static void RenderBackground(short redTop, short greenTop, short blueTop, short redBottom, short greenBottom, short blueBottom, short alpha);
    SUPPORTED_10EN_11EN_STEAM static void RenderHorizon();
    SUPPORTED_10EN_11EN_STEAM static void Shutdown();
    SUPPORTED_10EN_11EN_STEAM static void Update();
};

//! RwTexture* gpCloudTex[5] = {cloud1, cloud2, cloud3, cloudhilit, cloudmasked};
SUPPORTED_10EN_11EN_STEAM extern RwTexture *(&gpCloudTex)[5]; // RwTexture *gpCloudTex[5]

SUPPORTED_10EN_11EN_STEAM bool UseDarkBackground();

#include "meta/meta.CClouds.h"
