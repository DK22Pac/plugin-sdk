/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBrightLights.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CBrightLight(&CBrightLights::aBrightLights)[32] = *reinterpret_cast<CBrightLight(*)[32]>(GLOBAL_ADDRESS_BY_VERSION(0x733A68, 0x733A68, 0x743BA8));
PLUGIN_VARIABLE unsigned int &CBrightLights::NumBrightLights = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2C70, 0x8F2D24, 0x902E64));
PLUGIN_VARIABLE float(&TrafficLightsSide)[6] = *reinterpret_cast<float(*)[6]>(GLOBAL_ADDRESS_BY_VERSION(0x5FEEE0, 0x5FECC8, 0x60BCC0));
PLUGIN_VARIABLE float(&TrafficLightsUp)[6] = *reinterpret_cast<float(*)[6]>(GLOBAL_ADDRESS_BY_VERSION(0x5FEEF8, 0x5FECE0, 0x60BCD8));
PLUGIN_VARIABLE unsigned short(&TrafficLightIndices)[12] = *reinterpret_cast<unsigned short(*)[12]>(GLOBAL_ADDRESS_BY_VERSION(0x5FEF10, 0x5FECF8, 0x60BCF0));
PLUGIN_VARIABLE float(&LongCarHeadLightsSide)[8] = *reinterpret_cast<float(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x5FEF28, 0x5FED10, 0x60BD08));
PLUGIN_VARIABLE float(&LongCarHeadLightsFront)[8] = *reinterpret_cast<float(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x5FEF48, 0x5FED30, 0x60BD28));
PLUGIN_VARIABLE float(&LongCarHeadLightsUp)[8] = *reinterpret_cast<float(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x5FEF68, 0x5FED50, 0x60BD48));
PLUGIN_VARIABLE float(&SmallCarHeadLightsSide)[8] = *reinterpret_cast<float(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x5FEF88, 0x5FED70, 0x60BD68));
PLUGIN_VARIABLE float(&SmallCarHeadLightsFront)[8] = *reinterpret_cast<float(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x5FEFA8, 0x5FED90, 0x60BD88));
PLUGIN_VARIABLE float(&SmallCarHeadLightsUp)[8] = *reinterpret_cast<float(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x5FEFC8, 0x5FEDB0, 0x60BDA8));
PLUGIN_VARIABLE float(&BigCarHeadLightsSide)[8] = *reinterpret_cast<float(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x5FEFE8, 0x5FEDD0, 0x60BDC8));
PLUGIN_VARIABLE float(&BigCarHeadLightsFront)[8] = *reinterpret_cast<float(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x5FF008, 0x5FEDF0, 0x60BDE8));
PLUGIN_VARIABLE float(&BigCarHeadLightsUp)[8] = *reinterpret_cast<float(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x5FF028, 0x5FEE10, 0x60BE08));
PLUGIN_VARIABLE float(&TallCarHeadLightsSide)[8] = *reinterpret_cast<float(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x5FF048, 0x5FEE30, 0x60BE28));
PLUGIN_VARIABLE float(&TallCarHeadLightsFront)[8] = *reinterpret_cast<float(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x5FF068, 0x5FEE50, 0x60BE48));
PLUGIN_VARIABLE float(&TallCarHeadLightsUp)[8] = *reinterpret_cast<float(*)[8]>(GLOBAL_ADDRESS_BY_VERSION(0x5FF088, 0x5FEE70, 0x60BE68));
PLUGIN_VARIABLE unsigned short(&CubeIndices)[36] = *reinterpret_cast<unsigned short(*)[36]>(GLOBAL_ADDRESS_BY_VERSION(0x5FF0A8, 0x5FEE90, 0x60BE88));
PLUGIN_VARIABLE float(&SirenLightsSide)[6] = *reinterpret_cast<float(*)[6]>(GLOBAL_ADDRESS_BY_VERSION(0x5FF0F0, 0x5FEED8, 0x60BED0));
PLUGIN_VARIABLE float(&SirenLightsUp)[6] = *reinterpret_cast<float(*)[6]>(GLOBAL_ADDRESS_BY_VERSION(0x5FF108, 0x5FEEF0, 0x60BEE8));

int addrof(CBrightLights::Init) = ADDRESS_BY_VERSION(0x5197A0, 0x5199D0, 0x519960);
int gaddrof(CBrightLights::Init) = GLOBAL_ADDRESS_BY_VERSION(0x5197A0, 0x5199D0, 0x519960);

void CBrightLights::Init() {
    plugin::CallDynGlobal(gaddrof(CBrightLights::Init));
}

int addrof(CBrightLights::RegisterOne) = ADDRESS_BY_VERSION(0x51A410, 0x51A640, 0x51A5D0);
int gaddrof(CBrightLights::RegisterOne) = GLOBAL_ADDRESS_BY_VERSION(0x51A410, 0x51A640, 0x51A5D0);

void CBrightLights::RegisterOne(CVector posn, CVector right, CVector up, CVector at, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha) {
    plugin::CallDynGlobal<CVector, CVector, CVector, CVector, unsigned char, unsigned char, unsigned char, unsigned char>(gaddrof(CBrightLights::RegisterOne), posn, right, up, at, red, green, blue, alpha);
}

int addrof(CBrightLights::Render) = ADDRESS_BY_VERSION(0x5197B0, 0x5199E0, 0x519970);
int gaddrof(CBrightLights::Render) = GLOBAL_ADDRESS_BY_VERSION(0x5197B0, 0x5199E0, 0x519970);

void CBrightLights::Render() {
    plugin::CallDynGlobal(gaddrof(CBrightLights::Render));
}

int addrof(CBrightLights::RenderOutGeometryBuffer) = ADDRESS_BY_VERSION(0x51A3B0, 0x51A5E0, 0x51A570);
int gaddrof(CBrightLights::RenderOutGeometryBuffer) = GLOBAL_ADDRESS_BY_VERSION(0x51A3B0, 0x51A5E0, 0x51A570);

void CBrightLights::RenderOutGeometryBuffer() {
    plugin::CallDynGlobal(gaddrof(CBrightLights::RenderOutGeometryBuffer));
}
