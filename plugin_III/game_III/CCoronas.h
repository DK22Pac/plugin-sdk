/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CRegisteredCorona.h"

class PLUGIN_API CCoronas {
public:
    //! 1.0f
    SUPPORTED_10EN_11EN_STEAM static float &LightsMult;
    SUPPORTED_10EN_11EN_STEAM static CRegisteredCorona(&aCoronas)[56]; // static CRegisteredCorona aCoronas[56]
    SUPPORTED_10EN_11EN_STEAM static int &bChangeBrightnessImmediately;
    SUPPORTED_10EN_11EN_STEAM static float &SunScreenY;
    SUPPORTED_10EN_11EN_STEAM static float &SunScreenX;
    SUPPORTED_10EN_11EN_STEAM static bool &bSmallMoon;
    SUPPORTED_10EN_11EN_STEAM static bool &SunBlockedByClouds;

    SUPPORTED_10EN_11EN_STEAM static void DoSunAndMoon();
    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static void RegisterCorona(unsigned int id, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const &coors, float size, float drawDist, unsigned char coronaType, unsigned char flareType, unsigned char reflection, unsigned char LOScheck, unsigned char drawStreak, float someAngle);
    SUPPORTED_10EN_11EN_STEAM static void RegisterCorona(unsigned int id, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const &coors, float size, float drawDist, RwTexture *texture, unsigned char flareType, unsigned char reflection, unsigned char LOScheck, unsigned char drawStreak, float someAngle);
    SUPPORTED_10EN_11EN_STEAM static void Render();
    SUPPORTED_10EN_11EN_STEAM static void RenderReflections();
    SUPPORTED_10EN_11EN_STEAM static void Shutdown();
    SUPPORTED_10EN_11EN_STEAM static void Update();
    SUPPORTED_10EN_11EN_STEAM static void UpdateCoronaCoors(unsigned int id, CVector const &coors, float drawDist, float someAngle);
};

SUPPORTED_10EN_11EN_STEAM extern RwTexture *(&gpCoronaTexture)[9]; // RwTexture *gpCoronaTexture[9]

#include "meta/meta.CCoronas.h"
