/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"

class CWeather {
public:

    //variables
    static short &OldWeatherType;
    static short &NewWeatherType;
    static short &ForcedWeatherType;
    static bool &LightningFlash;
    static bool &LightningBurst;
    static int &WhenToPlayLightningSound;
    static int &LightningFlashLastChange;
    static int &LightningStart;
    static int &SoundHandle;
    static int &StreamAfterRainTimer;

    //funcs
    static void AddRain();
    static void AddSplashesDuringHurricane();
    static void AddStreamAfterRain();
    static void ForceWeather(short arg0);
    static void ForceWeatherNow(short arg0);
    static void Init();
    static void ReleaseWeather();
    static void RenderRainStreaks();
    static void Update();
};