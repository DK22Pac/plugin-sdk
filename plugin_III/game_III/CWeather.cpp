/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CWeather.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE int &CWeather::SoundHandle = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x5FFBC4, 0x5FF9AC, 0x60C9A4));
PLUGIN_VARIABLE float &CWeather::Foggyness = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x885AF4, 0x885AA4, 0x895BE4));
PLUGIN_VARIABLE float &CWeather::Stored_Rain = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x885B4C, 0x885AFC, 0x895C3C));
PLUGIN_VARIABLE float &CWeather::CloudCoverage = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2818, 0x8E27C8, 0x8F2908));
PLUGIN_VARIABLE float &CWeather::Wind = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2BF8, 0x8E2CAC, 0x8F2DEC));
PLUGIN_VARIABLE float &CWeather::Rain = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2BFC, 0x8E2CB0, 0x8F2DF0));
PLUGIN_VARIABLE unsigned int &CWeather::LightningFlashLastChange = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2C0C, 0x8E2CC0, 0x8F2E00));
PLUGIN_VARIABLE float &CWeather::InterpolationValue = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2520, 0x8F25D4, 0x902714));
PLUGIN_VARIABLE unsigned int &CWeather::WhenToPlayLightningSound = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F57E4, 0x8F5898, 0x9059D8));
PLUGIN_VARIABLE unsigned int &CWeather::LightningStart = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F5F84, 0x8F6038, 0x906178));
PLUGIN_VARIABLE float &CWeather::WetRoads = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F5FF8, 0x8F60AC, 0x9061EC));
PLUGIN_VARIABLE int &CWeather::WeatherTypeInList = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F626C, 0x8F6424, 0x906564));
PLUGIN_VARIABLE unsigned int &CWeather::LightningDuration = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x940578, 0x940730, 0x950870));
PLUGIN_VARIABLE float &CWeather::Rainbow = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x940598, 0x940750, 0x950890));
PLUGIN_VARIABLE float &CWeather::Stored_InterpolationValue = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x942F54, 0x94310C, 0x95324C));
PLUGIN_VARIABLE short &CWeather::Stored_OldWeatherType = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC68, 0x95CE20, 0x96CF60));
PLUGIN_VARIABLE short &CWeather::NewWeatherType = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC70, 0x95CE28, 0x96CF68));
PLUGIN_VARIABLE short &CWeather::ForcedWeatherType = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC80, 0x95CE38, 0x96CF78));
PLUGIN_VARIABLE short &CWeather::Stored_NewWeatherType = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CCAE, 0x95CE66, 0x96CFA6));
PLUGIN_VARIABLE short &CWeather::OldWeatherType = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CCEC, 0x95CEA4, 0x96CFE4));
PLUGIN_VARIABLE bool &CWeather::bScriptsForceRain = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD7D, 0x95CF35, 0x96D075));
PLUGIN_VARIABLE bool &CWeather::LightningFlash = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CDA3, 0x95CF5C, 0x96D09C));
PLUGIN_VARIABLE bool &CWeather::LightningBurst = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CDAC, 0x95CF65, 0x96D0A5));
PLUGIN_VARIABLE bool &CWeather::Stored_StateStored = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CDC1, 0x95CF79, 0x96D0B9));
PLUGIN_VARIABLE float(&Windyness)[6] = *reinterpret_cast<float(*)[6]>(GLOBAL_ADDRESS_BY_VERSION(0x5FFBAC, 0x5FF994, 0x60C98C));
PLUGIN_VARIABLE short(&WeatherTypesList)[64] = *reinterpret_cast<short(*)[64]>(GLOBAL_ADDRESS_BY_VERSION(0x5FFBC8, 0x5FF9B0, 0x60C9A8));
PLUGIN_VARIABLE tRainStreak(&Streaks)[35] = *reinterpret_cast<tRainStreak(*)[35]>(GLOBAL_ADDRESS_BY_VERSION(0x94311C, 0x9432D4, 0x953414));

int addrof(CWeather::AddRain) = ADDRESS_BY_VERSION(0x5231B0, 0x5233F0, 0x523380);
int gaddrof(CWeather::AddRain) = GLOBAL_ADDRESS_BY_VERSION(0x5231B0, 0x5233F0, 0x523380);

void CWeather::AddRain() {
    plugin::CallDynGlobal(gaddrof(CWeather::AddRain));
}

int addrof(CWeather::ForceWeather) = ADDRESS_BY_VERSION(0x523170, 0x5233B0, 0x523340);
int gaddrof(CWeather::ForceWeather) = GLOBAL_ADDRESS_BY_VERSION(0x523170, 0x5233B0, 0x523340);

void CWeather::ForceWeather(short weather) {
    plugin::CallDynGlobal<short>(gaddrof(CWeather::ForceWeather), weather);
}

int addrof(CWeather::ForceWeatherNow) = ADDRESS_BY_VERSION(0x523180, 0x5233C0, 0x523350);
int gaddrof(CWeather::ForceWeatherNow) = GLOBAL_ADDRESS_BY_VERSION(0x523180, 0x5233C0, 0x523350);

void CWeather::ForceWeatherNow(short weather) {
    plugin::CallDynGlobal<short>(gaddrof(CWeather::ForceWeatherNow), weather);
}

int addrof(CWeather::Init) = ADDRESS_BY_VERSION(0x522BA0, 0x522DE0, 0x522D70);
int gaddrof(CWeather::Init) = GLOBAL_ADDRESS_BY_VERSION(0x522BA0, 0x522DE0, 0x522D70);

void CWeather::Init() {
    plugin::CallDynGlobal(gaddrof(CWeather::Init));
}

int addrof(CWeather::ReleaseWeather) = ADDRESS_BY_VERSION(0x5231A0, 0x5233E0, 0x523370);
int gaddrof(CWeather::ReleaseWeather) = GLOBAL_ADDRESS_BY_VERSION(0x5231A0, 0x5233E0, 0x523370);

void CWeather::ReleaseWeather() {
    plugin::CallDynGlobal(gaddrof(CWeather::ReleaseWeather));
}

int addrof(CWeather::RenderRainStreaks) = ADDRESS_BY_VERSION(0x524550, 0x524790, 0x524720);
int gaddrof(CWeather::RenderRainStreaks) = GLOBAL_ADDRESS_BY_VERSION(0x524550, 0x524790, 0x524720);

void CWeather::RenderRainStreaks() {
    plugin::CallDynGlobal(gaddrof(CWeather::RenderRainStreaks));
}

int addrof(CWeather::RestoreWeatherState) = ADDRESS_BY_VERSION(0x524B60, 0x524DA0, 0x524D30);
int gaddrof(CWeather::RestoreWeatherState) = GLOBAL_ADDRESS_BY_VERSION(0x524B60, 0x524DA0, 0x524D30);

void CWeather::RestoreWeatherState() {
    plugin::CallDynGlobal(gaddrof(CWeather::RestoreWeatherState));
}

int addrof(CWeather::StoreWeatherState) = ADDRESS_BY_VERSION(0x524B20, 0x524D60, 0x524CF0);
int gaddrof(CWeather::StoreWeatherState) = GLOBAL_ADDRESS_BY_VERSION(0x524B20, 0x524D60, 0x524CF0);

void CWeather::StoreWeatherState() {
    plugin::CallDynGlobal(gaddrof(CWeather::StoreWeatherState));
}

int addrof(CWeather::Update) = ADDRESS_BY_VERSION(0x522C10, 0x522E50, 0x522DE0);
int gaddrof(CWeather::Update) = GLOBAL_ADDRESS_BY_VERSION(0x522C10, 0x522E50, 0x522DE0);

void CWeather::Update() {
    plugin::CallDynGlobal(gaddrof(CWeather::Update));
}

int addrof(RenderOneRainStreak) = ADDRESS_BY_VERSION(0x5240E0, 0x524320, 0x5242B0);
int gaddrof(RenderOneRainStreak) = GLOBAL_ADDRESS_BY_VERSION(0x5240E0, 0x524320, 0x5242B0);

void RenderOneRainStreak(CVector pos, CVector unused, int intensity, bool scale, float distance) {
    plugin::CallDynGlobal<CVector, CVector, int, bool, float>(gaddrof(RenderOneRainStreak), pos, unused, intensity, scale, distance);
}
