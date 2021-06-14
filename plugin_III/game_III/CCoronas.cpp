/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCoronas.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE float &CCoronas::LightsMult = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x5FB088, 0x5FAE70, 0x607E68));
PLUGIN_VARIABLE CRegisteredCorona(&CCoronas::aCoronas)[56] = *reinterpret_cast<CRegisteredCorona(*)[56]>(GLOBAL_ADDRESS_BY_VERSION(0x72E518, 0x72E518, 0x73E658));
PLUGIN_VARIABLE int &CCoronas::bChangeBrightnessImmediately = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2C30, 0x8E2CE4, 0x8F2E24));
PLUGIN_VARIABLE float &CCoronas::SunScreenY = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F4354, 0x8F4408, 0x904548));
PLUGIN_VARIABLE float &CCoronas::SunScreenX = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F4358, 0x8F440C, 0x90454C));
PLUGIN_VARIABLE bool &CCoronas::bSmallMoon = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD49, 0x95CF01, 0x96D041));
PLUGIN_VARIABLE bool &CCoronas::SunBlockedByClouds = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD73, 0x95CF2B, 0x96D06B));
PLUGIN_VARIABLE RwTexture *(&gpCoronaTexture)[9] = *reinterpret_cast<RwTexture *(*)[9]>(GLOBAL_ADDRESS_BY_VERSION(0x5FAF44, 0x5FAD2C, 0x607D24));

int addrof(CCoronas::DoSunAndMoon) = ADDRESS_BY_VERSION(0x4FA380, 0x4FA460, 0x4FA3F0);
int gaddrof(CCoronas::DoSunAndMoon) = GLOBAL_ADDRESS_BY_VERSION(0x4FA380, 0x4FA460, 0x4FA3F0);

void CCoronas::DoSunAndMoon() {
    plugin::CallDynGlobal(gaddrof(CCoronas::DoSunAndMoon));
}

int addrof(CCoronas::Init) = ADDRESS_BY_VERSION(0x4F9F90, 0x4FA070, 0x4FA000);
int gaddrof(CCoronas::Init) = GLOBAL_ADDRESS_BY_VERSION(0x4F9F90, 0x4FA070, 0x4FA000);

void CCoronas::Init() {
    plugin::CallDynGlobal(gaddrof(CCoronas::Init));
}

int addrof_o(CCoronas::RegisterCorona, void (*)(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const &, float, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, float)) = ADDRESS_BY_VERSION(0x4FA080, 0x4FA160, 0x4FA0F0);
int gaddrof_o(CCoronas::RegisterCorona, void (*)(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const &, float, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, float)) = GLOBAL_ADDRESS_BY_VERSION(0x4FA080, 0x4FA160, 0x4FA0F0);

void CCoronas::RegisterCorona(unsigned int id, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const &coors, float size, float drawDist, unsigned char coronaType, unsigned char flareType, unsigned char reflection, unsigned char LOScheck, unsigned char drawStreak, float someAngle) {
    plugin::CallDynGlobal<unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const &, float, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, float>(gaddrof_o(CCoronas::RegisterCorona, void (*)(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const &, float, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, float)), id, red, green, blue, alpha, coors, size, drawDist, coronaType, flareType, reflection, LOScheck, drawStreak, someAngle);
}

int addrof_o(CCoronas::RegisterCorona, void (*)(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const &, float, float, RwTexture *, unsigned char, unsigned char, unsigned char, unsigned char, float)) = ADDRESS_BY_VERSION(0x4FA0E0, 0x4FA1C0, 0x4FA150);
int gaddrof_o(CCoronas::RegisterCorona, void (*)(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const &, float, float, RwTexture *, unsigned char, unsigned char, unsigned char, unsigned char, float)) = GLOBAL_ADDRESS_BY_VERSION(0x4FA0E0, 0x4FA1C0, 0x4FA150);

void CCoronas::RegisterCorona(unsigned int id, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, CVector const &coors, float size, float drawDist, RwTexture *texture, unsigned char flareType, unsigned char reflection, unsigned char LOScheck, unsigned char drawStreak, float someAngle) {
    plugin::CallDynGlobal<unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const &, float, float, RwTexture *, unsigned char, unsigned char, unsigned char, unsigned char, float>(gaddrof_o(CCoronas::RegisterCorona, void (*)(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const &, float, float, RwTexture *, unsigned char, unsigned char, unsigned char, unsigned char, float)), id, red, green, blue, alpha, coors, size, drawDist, texture, flareType, reflection, LOScheck, drawStreak, someAngle);
}

int addrof(CCoronas::Render) = ADDRESS_BY_VERSION(0x4F8FB0, 0x4F9090, 0x4F9020);
int gaddrof(CCoronas::Render) = GLOBAL_ADDRESS_BY_VERSION(0x4F8FB0, 0x4F9090, 0x4F9020);

void CCoronas::Render() {
    plugin::CallDynGlobal(gaddrof(CCoronas::Render));
}

int addrof(CCoronas::RenderReflections) = ADDRESS_BY_VERSION(0x4F9B40, 0x4F9C20, 0x4F9BB0);
int gaddrof(CCoronas::RenderReflections) = GLOBAL_ADDRESS_BY_VERSION(0x4F9B40, 0x4F9C20, 0x4F9BB0);

void CCoronas::RenderReflections() {
    plugin::CallDynGlobal(gaddrof(CCoronas::RenderReflections));
}

int addrof(CCoronas::Shutdown) = ADDRESS_BY_VERSION(0x4FA050, 0x4FA130, 0x4FA0C0);
int gaddrof(CCoronas::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x4FA050, 0x4FA130, 0x4FA0C0);

void CCoronas::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CCoronas::Shutdown));
}

int addrof(CCoronas::Update) = ADDRESS_BY_VERSION(0x4F8EC0, 0x4F8FA0, 0x4F8F30);
int gaddrof(CCoronas::Update) = GLOBAL_ADDRESS_BY_VERSION(0x4F8EC0, 0x4F8FA0, 0x4F8F30);

void CCoronas::Update() {
    plugin::CallDynGlobal(gaddrof(CCoronas::Update));
}

int addrof(CCoronas::UpdateCoronaCoors) = ADDRESS_BY_VERSION(0x4FA2D0, 0x4FA3B0, 0x4FA340);
int gaddrof(CCoronas::UpdateCoronaCoors) = GLOBAL_ADDRESS_BY_VERSION(0x4FA2D0, 0x4FA3B0, 0x4FA340);

void CCoronas::UpdateCoronaCoors(unsigned int id, CVector const &coors, float drawDist, float someAngle) {
    plugin::CallDynGlobal<unsigned int, CVector const &, float, float>(gaddrof(CCoronas::UpdateCoronaCoors), id, coors, drawDist, someAngle);
}
