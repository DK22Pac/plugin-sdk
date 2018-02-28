/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "eWeather.h"

class CWeather {
public:
    static float &CloudCoverage;
    static float &Foggyness;
    static short &ForcedWeatherType;
    static float &InterpolationValue;
    static bool  &LightningBurst;
    static int   &LightningDuration;
    static bool  &LightningFlash;
    static int   &LightningFlashLastChange;
    static int   &LightningStart;
    static short &NewWeatherType;
    static short &OldWeatherType;
    static float &Rain;
    static float &Rainbow;
    static int   &SoundHandle;
    static float &Stored_InterpolationValue;
    static short &Stored_NewWeatherType;
    static short &Stored_OldWeatherType;
    static float &Stored_Rain;
    static bool  &Stored_StateStored;
    static int   &WeatherTypeInList;
    static float &WetRoads;
    static int   &WhenToPlayLightningSound;
    static float &Wind;
    static bool  &bScriptsForceRain;

    static void Init();
    static void Update();
    static void ForceWeather(short weatherType);
    static void ForceWeatherNow(short weatherType);
    static void ReleaseWeather();
    static void AddRain();
    static void RenderRainStreaks();
    static void StoreWeatherState();
    static void RestoreWeatherState();
};

void RenderOneRainStreak(CVector start, CVector end, int arg2, bool arg3, float arg4);

extern float &Windyness;
extern short *WeatherTypesList; // short WeatherTypesList[64]