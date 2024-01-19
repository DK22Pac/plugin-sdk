/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

enum eWeather {
    WEATHER_EXTRA_SUNNY,
    WEATHER_SUNNY,
    WEATHER_SUNNY_WINDY,
    WEATHER_CLOUDY,
    WEATHER_RAINING,
    WEATHER_DRIZZLE,
    WEATHER_FOGGY,
    WEATHER_LIGHTNING,
    WEATHER_EXTRA_SUNNY_2,
    WEATHER_SUNNY_WINDY_2, 
};

class CWeather {
public:
    static int32_t& OldWeatherType;
    static int32_t& NewWeatherType;
    static int32_t& ForcedWeatherType;
    static float& InterpolationValue;
    static int32_t& WeatherTypeInList;
    static float& Rain;
    static float& Wind;

};
