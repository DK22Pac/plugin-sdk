/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWeather.h"

float &CWeather::CloudCoverage = *(float *)0x8E2818;
float &CWeather::Foggyness = *(float *)0x885AF4;
short &CWeather::ForcedWeatherType = *(short *)0x95CC80;
float &CWeather::InterpolationValue = *(float *)0x8F2520;
bool  &CWeather::LightningBurst = *(bool *)0x95CDAC;
int   &CWeather::LightningDuration = *(int *)0x940578;
bool  &CWeather::LightningFlash = *(bool *)0x95CDA3;
int   &CWeather::LightningFlashLastChange = *(int *)0x8E2C0C;
int   &CWeather::LightningStart = *(int *)0x8F5F84;
short &CWeather::NewWeatherType = *(short *)0x95CC70;
short &CWeather::OldWeatherType = *(short *)0x95CCEC;
float &CWeather::Rain = *(float *)0x8E2BFC;
float &CWeather::Rainbow = *(float *)0x940598;
int   &CWeather::SoundHandle = *(int *)0x5FFBC4;
float &CWeather::Stored_InterpolationValue = *(float *)0x942F54;
short &CWeather::Stored_NewWeatherType = *(short *)0x95CCAE;
short &CWeather::Stored_OldWeatherType = *(short *)0x95CC68;
float &CWeather::Stored_Rain = *(float *)0x885B4C;
bool  &CWeather::Stored_StateStored = *(bool *)0x95CDC1;
int   &CWeather::WeatherTypeInList = *(int *)0x8F626C;
float &CWeather::WetRoads = *(float *)0x8F5FF8;
int   &CWeather::WhenToPlayLightningSound = *(int *)0x8F57E4;
float &CWeather::Wind = *(float *)0x8E2BF8;
bool  &CWeather::bScriptsForceRain = *(bool *)0x95CD7D;
float &Windyness = *(float *)0x5FFBAC;
short *WeatherTypesList = (short *)0x5FFBC8;

// Converted from cdecl void CWeather::Init(void) 0x522BA0
void CWeather::Init() {
    plugin::Call<0x522BA0>();
}

// Converted from cdecl void CWeather::Update(void) 0x522C10
void CWeather::Update() {
    plugin::Call<0x522C10>();
}

// Converted from cdecl void CWeather::ForceWeather(short weatherType) 0x523170
void CWeather::ForceWeather(short weatherType) {
    plugin::Call<0x523170, short>(weatherType);
}

// Converted from cdecl void CWeather::ForceWeatherNow(short weatherType) 0x523180
void CWeather::ForceWeatherNow(short weatherType) {
    plugin::Call<0x523180, short>(weatherType);
}

// Converted from cdecl void CWeather::ReleaseWeather(void) 0x5231A0
void CWeather::ReleaseWeather() {
    plugin::Call<0x5231A0>();
}

// Converted from cdecl void CWeather::AddRain(void) 0x5231B0
void CWeather::AddRain() {
    plugin::Call<0x5231B0>();
}

// Converted from cdecl void RenderOneRainStreak(CVector start,CVector end,int,bool,float) 0x5240E0
void RenderOneRainStreak(CVector start, CVector end, int arg2, bool arg3, float arg4) {
    plugin::Call<0x5240E0, CVector, CVector, int, bool, float>(start, end, arg2, arg3, arg4);
}

// Converted from cdecl void CWeather::RenderRainStreaks(void) 0x524550
void CWeather::RenderRainStreaks() {
    plugin::Call<0x524550>();
}

// Converted from cdecl void CWeather::StoreWeatherState(void) 0x524B20
void CWeather::StoreWeatherState() {
    plugin::Call<0x524B20>();
}

// Converted from cdecl void CWeather::RestoreWeatherState(void) 0x524B60
void CWeather::RestoreWeatherState() {
    plugin::Call<0x524B60>();
}