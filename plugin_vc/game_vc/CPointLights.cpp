/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPointLights.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CVector(&CPointLights::aCachedMapReads)[32] = *reinterpret_cast<CVector(*)[32]>(GLOBAL_ADDRESS_BY_VERSION(0x78CD80, 0x78CD88, 0x78BD88));
PLUGIN_VARIABLE CPointLight(&CPointLights::aLights)[32] = *reinterpret_cast<CPointLight(*)[32]>(GLOBAL_ADDRESS_BY_VERSION(0x7E4FE0, 0x7E4FE8, 0x7E3FE8));
PLUGIN_VARIABLE float(&CPointLights::aCachedMapReadResults)[32] = *reinterpret_cast<float(*)[32]>(GLOBAL_ADDRESS_BY_VERSION(0x945850, 0x945858, 0x944858));
PLUGIN_VARIABLE unsigned int &CPointLights::NumLights = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x9751B0, 0x9751B8, 0x9741B8));
PLUGIN_VARIABLE unsigned int &CPointLights::NextCachedValue = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x9B5F20, 0x9B5F28, 0x9B4F28));

int addrof(CPointLights::AddLight) = ADDRESS_BY_VERSION(0x567700, 0x567720, 0x5675F0);
int gaddrof(CPointLights::AddLight) = GLOBAL_ADDRESS_BY_VERSION(0x567700, 0x567720, 0x5675F0);

void CPointLights::AddLight(unsigned char lightType, CVector point, CVector direction, float range, float red, float green, float blue, unsigned char fogType, bool generateExtraShadows) {
    plugin::CallDynGlobal<unsigned char, CVector, CVector, float, float, float, float, unsigned char, bool>(gaddrof(CPointLights::AddLight), lightType, point, direction, range, red, green, blue, fogType, generateExtraShadows);
}

int addrof(CPointLights::GenerateLightsAffectingObject) = ADDRESS_BY_VERSION(0x567440, 0x567460, 0x567330);
int gaddrof(CPointLights::GenerateLightsAffectingObject) = GLOBAL_ADDRESS_BY_VERSION(0x567440, 0x567460, 0x567330);

float CPointLights::GenerateLightsAffectingObject(CVector *point) {
    return plugin::CallAndReturnDynGlobal<float, CVector *>(gaddrof(CPointLights::GenerateLightsAffectingObject), point);
}

int addrof(CPointLights::Init) = ADDRESS_BY_VERSION(0x5678D0, 0x5678F0, 0x5677C0);
int gaddrof(CPointLights::Init) = GLOBAL_ADDRESS_BY_VERSION(0x5678D0, 0x5678F0, 0x5677C0);

void CPointLights::Init() {
    plugin::CallDynGlobal(gaddrof(CPointLights::Init));
}

int addrof(CPointLights::RenderFogEffect) = ADDRESS_BY_VERSION(0x566640, 0x566660, 0x566530);
int gaddrof(CPointLights::RenderFogEffect) = GLOBAL_ADDRESS_BY_VERSION(0x566640, 0x566660, 0x566530);

void CPointLights::RenderFogEffect() {
    plugin::CallDynGlobal(gaddrof(CPointLights::RenderFogEffect));
}
