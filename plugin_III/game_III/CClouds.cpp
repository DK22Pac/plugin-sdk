/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CClouds.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE float &CClouds::ms_cameraRoll = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F29CC, 0x8F2A80, 0x902BC0));
PLUGIN_VARIABLE CRGBA &CClouds::ms_colourBottom = *reinterpret_cast<CRGBA *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2C38, 0x8F2CEC, 0x902E2C));
PLUGIN_VARIABLE float &CClouds::ms_horizonZ = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F31C0, 0x8F3274, 0x9033B4));
PLUGIN_VARIABLE float &CClouds::CloudRotation = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F5F40, 0x8F5FF4, 0x906134));
PLUGIN_VARIABLE CRGBA &CClouds::ms_colourTop = *reinterpret_cast<CRGBA *>(GLOBAL_ADDRESS_BY_VERSION(0x94143C, 0x9415F4, 0x951734));
PLUGIN_VARIABLE unsigned int &CClouds::IndividualRotation = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x943078, 0x943230, 0x953370));
PLUGIN_VARIABLE RwTexture *(&gpCloudTex)[5] = *reinterpret_cast<RwTexture *(*)[5]>(GLOBAL_ADDRESS_BY_VERSION(0x9411C0, 0x941378, 0x9514B8));

int addrof(CClouds::Init) = ADDRESS_BY_VERSION(0x4F6C10, 0x4F6CC0, 0x4F6C50);
int gaddrof(CClouds::Init) = GLOBAL_ADDRESS_BY_VERSION(0x4F6C10, 0x4F6CC0, 0x4F6C50);

void CClouds::Init() {
    plugin::CallDynGlobal(gaddrof(CClouds::Init));
}

int addrof(CClouds::Render) = ADDRESS_BY_VERSION(0x4F6D90, 0x4F6E70, 0x4F6E00);
int gaddrof(CClouds::Render) = GLOBAL_ADDRESS_BY_VERSION(0x4F6D90, 0x4F6E70, 0x4F6E00);

void CClouds::Render() {
    plugin::CallDynGlobal(gaddrof(CClouds::Render));
}

int addrof(CClouds::RenderBackground) = ADDRESS_BY_VERSION(0x4F7F00, 0x4F7FE0, 0x4F7F70);
int gaddrof(CClouds::RenderBackground) = GLOBAL_ADDRESS_BY_VERSION(0x4F7F00, 0x4F7FE0, 0x4F7F70);

void CClouds::RenderBackground(short redTop, short greenTop, short blueTop, short redBottom, short greenBottom, short blueBottom, short alpha) {
    plugin::CallDynGlobal<short, short, short, short, short, short, short>(gaddrof(CClouds::RenderBackground), redTop, greenTop, blueTop, redBottom, greenBottom, blueBottom, alpha);
}

int addrof(CClouds::RenderHorizon) = ADDRESS_BY_VERSION(0x4F85F0, 0x4F86D0, 0x4F8660);
int gaddrof(CClouds::RenderHorizon) = GLOBAL_ADDRESS_BY_VERSION(0x4F85F0, 0x4F86D0, 0x4F8660);

void CClouds::RenderHorizon() {
    plugin::CallDynGlobal(gaddrof(CClouds::RenderHorizon));
}

int addrof(CClouds::Shutdown) = ADDRESS_BY_VERSION(0x4F6CA0, 0x4F6D50, 0x4F6CE0);
int gaddrof(CClouds::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x4F6CA0, 0x4F6D50, 0x4F6CE0);

void CClouds::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CClouds::Shutdown));
}

int addrof(CClouds::Update) = ADDRESS_BY_VERSION(0x4F6CE0, 0x4F6DC0, 0x4F6D50);
int gaddrof(CClouds::Update) = GLOBAL_ADDRESS_BY_VERSION(0x4F6CE0, 0x4F6DC0, 0x4F6D50);

void CClouds::Update() {
    plugin::CallDynGlobal(gaddrof(CClouds::Update));
}

int addrof(UseDarkBackground) = ADDRESS_BY_VERSION(0x4F7ED0, 0x4F7FB0, 0x4F7F40);
int gaddrof(UseDarkBackground) = GLOBAL_ADDRESS_BY_VERSION(0x4F7ED0, 0x4F7FB0, 0x4F7F40);

bool UseDarkBackground() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(UseDarkBackground));
}
