/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CWeather.h"

//variables
short &CWeather::OldWeatherType = *(short*)0xA10AAA;
short &CWeather::NewWeatherType = *(short*)0xA10A2E;
short &CWeather::ForcedWeatherType = *(short*)0xA10A42;
bool &CWeather::LightningFlash = *(bool*)0xA10B67;
bool &CWeather::LightningBurst = *(bool*)0xA10B72;
int &CWeather::WhenToPlayLightningSound = *(int*)0x9B5EAC;
int &CWeather::LightningFlashLastChange = *(int*)0x975350;
int &CWeather::LightningStart = *(int*)0x9B5F84;
int &CWeather::SoundHandle = *(int*)0x699EDC;
int &CWeather::StreamAfterRainTimer = *(int*)0x699EE0;

// Converted from cdecl void CWeather::AddRain(void) 0x57C900
void CWeather::AddRain() {
    plugin::Call<0x57C900>();
}

// Converted from cdecl void CWeather::AddSplashesDuringHurricane(void) 0x57D160
void CWeather::AddSplashesDuringHurricane() {
    plugin::Call<0x57D160>();
}

// Converted from cdecl void CWeather::AddStreamAfterRain(void) 0x57D340
void CWeather::AddStreamAfterRain() {
    plugin::Call<0x57D340>();
}

// Converted from cdecl void CWeather::ForceWeather(short weather) 0x57D570
void CWeather::ForceWeather(short weather) {
    plugin::Call<0x57D570, short>(weather);
}

// Converted from cdecl void CWeather::ForceWeatherNow(short weather) 0x57D550
void CWeather::ForceWeatherNow(short weather) {
    plugin::Call<0x57D550, short>(weather);
}

// Converted from cdecl void CWeather::Init(void) 0x57E040
void CWeather::Init() {
    plugin::Call<0x57E040>();
}

// Converted from cdecl void CWeather::ReleaseWeather(void) 0x57D540
void CWeather::ReleaseWeather() {
    plugin::Call<0x57D540>();
}

// Converted from cdecl void CWeather::RenderRainStreaks(void) 0x57BF40
void CWeather::RenderRainStreaks() {
    plugin::Call<0x57BF40>();
}

// Converted from cdecl void CWeather::Update(void) 0x57D580
void CWeather::Update() {
    plugin::Call<0x57D580>();
}