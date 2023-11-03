/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWeather.h"
#include "Patch.h"

static int32_t* CWeather__OldWeatherTypeAddr;
int32_t& CWeather::OldWeatherType = *(int32_t*)CWeather__OldWeatherTypeAddr;

static int32_t* CWeather__NewWeatherTypeAddr;
int32_t& CWeather::NewWeatherType = *(int32_t*)CWeather__NewWeatherTypeAddr;

static int32_t* CWeather__ForcedWeatherTypeAddr;
int32_t& CWeather::ForcedWeatherType = *(int32_t*)CWeather__ForcedWeatherTypeAddr;

static float* CWeather__InterpolationValueAddr;
float& CWeather::InterpolationValue = *(float*)CWeather__InterpolationValueAddr;

static int32_t* CWeather__WeatherTypeInListAddr;
int32_t& CWeather::WeatherTypeInList = *(int32_t*)CWeather__WeatherTypeInListAddr;

static float* CWeather__RainAddr;
float& CWeather::Rain = *(float*)CWeather__RainAddr;

template<>
void plugin::InitPatterns<CWeather>() {
    CWeather__OldWeatherTypeAddr = (int32_t*)plugin::patch::GetPointer(plugin::GetPattern("A3 ? ? ? ? 8B 46 4C A3 ? ? ? ? 8B 46 50 A3 ? ? ? ? F3 0F 10 46", 1));
    CWeather__NewWeatherTypeAddr = (int32_t*)plugin::patch::GetPointer(plugin::GetPattern("A3 ? ? ? ? 8B 46 50 A3 ? ? ? ? F3 0F 10 46", 1));
    CWeather__ForcedWeatherTypeAddr = (int32_t*)plugin::patch::GetPointer(plugin::GetPattern("A3 ? ? ? ? F3 0F 10 46 ? F3 0F 11 05 ? ? ? ? 8B 46 58", 1));
    CWeather__InterpolationValueAddr = (float*)plugin::patch::GetPointer(plugin::GetPattern("F3 0F 11 05 ? ? ? ? 8B 46 58", 4));

    CWeather__WeatherTypeInListAddr = (int32_t*)plugin::patch::GetPointer(plugin::GetPattern("A3 ? ? ? ? F3 0F 10 46 ? F3 0F 11 05 ? ? ? ? 0F B6 46 60", 1));
    CWeather__RainAddr = (float*)plugin::patch::GetPointer(plugin::GetPattern("F3 0F 11 05 ? ? ? ? 0F B6 46 60", 4));
}
