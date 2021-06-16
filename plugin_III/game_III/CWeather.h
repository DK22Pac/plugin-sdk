/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CWeather {
public:
    SUPPORTED_10EN_11EN_STEAM static int &SoundHandle;
    SUPPORTED_10EN_11EN_STEAM static float &Foggyness;
    SUPPORTED_10EN_11EN_STEAM static float &Stored_Rain;
    SUPPORTED_10EN_11EN_STEAM static float &CloudCoverage;
    SUPPORTED_10EN_11EN_STEAM static float &Wind;
    SUPPORTED_10EN_11EN_STEAM static float &Rain;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &LightningFlashLastChange;
    SUPPORTED_10EN_11EN_STEAM static float &InterpolationValue;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &WhenToPlayLightningSound;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &LightningStart;
    SUPPORTED_10EN_11EN_STEAM static float &WetRoads;
    SUPPORTED_10EN_11EN_STEAM static int &WeatherTypeInList;
    SUPPORTED_10EN_11EN_STEAM static unsigned int &LightningDuration;
    SUPPORTED_10EN_11EN_STEAM static float &Rainbow;
    SUPPORTED_10EN_11EN_STEAM static float &Stored_InterpolationValue;
    SUPPORTED_10EN_11EN_STEAM static short &Stored_OldWeatherType;
    SUPPORTED_10EN_11EN_STEAM static short &NewWeatherType;
    SUPPORTED_10EN_11EN_STEAM static short &ForcedWeatherType;
    SUPPORTED_10EN_11EN_STEAM static short &Stored_NewWeatherType;
    SUPPORTED_10EN_11EN_STEAM static short &OldWeatherType;
    SUPPORTED_10EN_11EN_STEAM static bool &bScriptsForceRain;
    SUPPORTED_10EN_11EN_STEAM static bool &LightningFlash;
    SUPPORTED_10EN_11EN_STEAM static bool &LightningBurst;
    SUPPORTED_10EN_11EN_STEAM static bool &Stored_StateStored;

    SUPPORTED_10EN_11EN_STEAM static void AddRain();
    SUPPORTED_10EN_11EN_STEAM static void ForceWeather(short weather);
    SUPPORTED_10EN_11EN_STEAM static void ForceWeatherNow(short weather);
    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static void ReleaseWeather();
    SUPPORTED_10EN_11EN_STEAM static void RenderRainStreaks();
    SUPPORTED_10EN_11EN_STEAM static void RestoreWeatherState();
    SUPPORTED_10EN_11EN_STEAM static void StoreWeatherState();
    SUPPORTED_10EN_11EN_STEAM static void Update();
};

struct PLUGIN_API tRainStreak {
    CVector m_vecPosition;
    CVector m_vecDirection;
    unsigned int m_nTimer;
};

//! 0.0f - WEATHER_SUNNY, 0.7f - WEATHER_CLOUDY, 1.0f - WEATHER_RAINY, 0.5f - WEATHER_FOGGY, 0.0f, 0.0f
SUPPORTED_10EN_11EN_STEAM extern float(&Windyness)[6]; // float Windyness[6]
SUPPORTED_10EN_11EN_STEAM extern short(&WeatherTypesList)[64]; // short WeatherTypesList[64]
SUPPORTED_10EN_11EN_STEAM extern tRainStreak(&Streaks)[35]; // tRainStreak Streaks[35]

SUPPORTED_10EN_11EN_STEAM void RenderOneRainStreak(CVector pos, CVector unused, int intensity, bool scale, float distance);

VALIDATE_SIZE(tRainStreak, 0x1C);

#include "meta/meta.CWeather.h"
