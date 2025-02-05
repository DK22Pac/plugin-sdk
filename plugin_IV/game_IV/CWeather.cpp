/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWeather.h"

int32_t& CWeather::OldWeatherType = *gpatternt(int32_t, "A3 ? ? ? ? 8B 46 4C A3 ? ? ? ? 8B 46 50 A3 ? ? ? ? F3 0F 10 46", 1);
int32_t& CWeather::NewWeatherType = *gpatternt(int32_t, "A3 ? ? ? ? 8B 46 50 A3 ? ? ? ? F3 0F 10 46", 1);
int32_t& CWeather::ForcedWeatherType = *gpatternt(int32_t, "A3 ? ? ? ? F3 0F 10 46 ? F3 0F 11 05 ? ? ? ? 8B 46 58", 1);
float& CWeather::InterpolationValue = *gpatternt(float, "F3 0F 11 05 ? ? ? ? 8B 46 58", 4);
int32_t& CWeather::WeatherTypeInList = *gpatternt(int32_t, "A3 ? ? ? ? F3 0F 10 46 ? F3 0F 11 05 ? ? ? ? 0F B6 46 60", 1);
float& CWeather::Rain = *gpatternt(float, "F3 0F 11 05 ? ? ? ? 0F B6 46 60", 4);
float& CWeather::Wind = *gpatternt(float, "C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C3 CC CC CC CC CC CC 80 7C 24", 2);

