/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class CCoronas {
public:
    // are there any obstacles between sun and camera
    static bool& SunBlockedByClouds;
    // change coronas brightness immediately
    static int& bChangeBrightnessImmediately;
    static class CRegisteredCorona *aCoronas;
    static int& LastCamLook;
    // coronas intensity multiplier
    static float& LightsMult; // 1.0f

    //funcs

    // Draw sun
    static void DoSunAndMoon();
    static void UpdateCoronaCoors(unsigned int id, CVector const& posn, float farClip, float angle);
    // Creates corona by texture
    static void RegisterCorona(unsigned int coronaId, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const& pos, float radius, float farClip, RwTexture* texture, unsigned char flare, unsigned char reflection, unsigned char arg11, unsigned char arg12, float normalAngle, bool arg14, float arg15);
    // Creates corona by type
    static void RegisterCorona(unsigned int coronaId, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const& pos, float radius, float farClip, unsigned char arg8, unsigned char flare, unsigned char reflection, unsigned char arg11, unsigned char arg12, float normalAngle, bool arg14, float arg15);
    // Terminates coronas
    static void Shutdown();
    // Initialises coronas
    static void Init();
    static void RenderSunReflection();
    // Renders coronas reflections on a wet ground
    static void RenderReflections();
    // Renders coronas
    static void Render();
    // Updates coronas
    static void Update();
};

extern RwTexture **gpCoronaTexture;