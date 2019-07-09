/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CDraw {
public:
    SUPPORTED_10EN_11EN_STEAM static float &ms_fFOV;
    SUPPORTED_10EN_11EN_STEAM static float &ms_fNearClipZ;
    SUPPORTED_10EN_11EN_STEAM static float &ms_fLODDistance;
    SUPPORTED_10EN_11EN_STEAM static float &ms_fFarClipZ;
    SUPPORTED_10EN_11EN_STEAM static unsigned char &FadeBlue;
    SUPPORTED_10EN_11EN_STEAM static unsigned char &FadeValue;
    SUPPORTED_10EN_11EN_STEAM static unsigned char &FadeGreen;
    SUPPORTED_10EN_11EN_STEAM static unsigned char &FadeRed;

    SUPPORTED_10EN_11EN_STEAM static void SetFOV(float fovValue);
};

#include "meta/meta.CDraw.h"
