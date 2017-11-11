/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CRegisteredCorona.h"

class CCoronas {
public:

    // are there any obstacles between sun and camera
    static bool& SunBlockedByClouds;
    // change coronas brightness immediately
    static bool& bChangeBrightnessImmediately;
    static CRegisteredCorona *aCoronas;
    static int& LastCamLook;
    // coronas intensity multiplier
    static float& LightsMult; // 1.0f

    //funcs

    // Draw sun
    static void DoSunAndMoon();
    // Initialises coronas
    static void Init();
    static void RegisterCorona(unsigned int id, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const& posn, float radius, float farClip, RwTexture* arg8, unsigned char arg9, unsigned char arg10, unsigned char arg11, unsigned char arg12, float arg13);
    static void RegisterCorona(unsigned int id, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const& posn, float radius, float farClip, unsigned char arg8, unsigned char arg9, unsigned char arg10, unsigned char arg11, unsigned char arg12, float arg13);
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