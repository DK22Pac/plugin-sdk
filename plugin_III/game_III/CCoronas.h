/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CRegisteredCorona.h"

class CCoronas {
public:

    // are there any obstacles between sun and camera
    static bool& SunBlockedByClouds;
    // change coronas brightness immediately
    static int& bChangeBrightnessImmediately;
    static CRegisteredCorona *aCoronas;
    static int& LastCamLook;
    // coronas intensity multiplier
    static float& LightsMult; // 1.0f

    //funcs

    // Draw sun
    static void DoSunAndMoon();
    // Initialises coronas
    static void Init();
    static void RegisterCorona(unsigned int id, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const& posn, float radius, float farClip, RwTexture* texture, unsigned char flareType, unsigned char enableReflection, unsigned char checkObstacles, unsigned char arg12, float normalAngle);
    static void RegisterCorona(unsigned int id, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const& posn, float radius, float farClip, unsigned char coronaType, unsigned char flareType, unsigned char enableReflection, unsigned char checkObstacles, unsigned char arg12, float normalAngle);
    // Renders coronas
    static void Render();
    // Renders coronas reflections on a wet ground
    static void RenderReflections();
    // Terminates coronas
    static void Shutdown();
    // Updates coronas
    static void Update();
    static void UpdateCoronaCoors(unsigned int id, CVector const& posn, float farClip, float angle);
};

extern RwTexture **gpCoronaTexture;