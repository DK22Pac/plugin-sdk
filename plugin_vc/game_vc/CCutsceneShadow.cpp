/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCutsceneShadow.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CCutsceneShadow) = ADDRESS_BY_VERSION(0x626470, 0x626450, 0x6260C0);
int ctor_gaddr(CCutsceneShadow) = GLOBAL_ADDRESS_BY_VERSION(0x626470, 0x626450, 0x6260C0);

int dtor_addr(CCutsceneShadow) = ADDRESS_BY_VERSION(0x6263F0, 0x6263D0, 0x626040);
int dtor_gaddr(CCutsceneShadow) = GLOBAL_ADDRESS_BY_VERSION(0x6263F0, 0x6263D0, 0x626040);

int addrof(CCutsceneShadow::Create) = ADDRESS_BY_VERSION(0x625E60, 0x625E40, 0x625AB0);
int gaddrof(CCutsceneShadow::Create) = GLOBAL_ADDRESS_BY_VERSION(0x625E60, 0x625E40, 0x625AB0);

bool CCutsceneShadow::Create(RwObject *object, int rasterSize, bool resample, int blurPasses, bool gradient) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCutsceneShadow *, RwObject *, int, bool, int, bool>(gaddrof(CCutsceneShadow::Create), this, object, rasterSize, resample, blurPasses, gradient);
}

int addrof(CCutsceneShadow::DrawBorderAroundTexture) = ADDRESS_BY_VERSION(0x625B60, 0x625B40, 0x6257B0);
int gaddrof(CCutsceneShadow::DrawBorderAroundTexture) = GLOBAL_ADDRESS_BY_VERSION(0x625B60, 0x625B40, 0x6257B0);

void CCutsceneShadow::DrawBorderAroundTexture(RwRGBA const &color) {
    plugin::CallMethodDynGlobal<CCutsceneShadow *, RwRGBA const &>(gaddrof(CCutsceneShadow::DrawBorderAroundTexture), this, color);
}

int addrof(CCutsceneShadow::GetShadowCamera) = ADDRESS_BY_VERSION(0x625D50, 0x625D30, 0x6259A0);
int gaddrof(CCutsceneShadow::GetShadowCamera) = GLOBAL_ADDRESS_BY_VERSION(0x625D50, 0x625D30, 0x6259A0);

CShadowCamera *CCutsceneShadow::GetShadowCamera(int camType) {
    return plugin::CallMethodAndReturnDynGlobal<CShadowCamera *, CCutsceneShadow *, int>(gaddrof(CCutsceneShadow::GetShadowCamera), this, camType);
}

int addrof(CCutsceneShadow::GetShadowRwTexture) = ADDRESS_BY_VERSION(0x625B80, 0x625B60, 0x6257D0);
int gaddrof(CCutsceneShadow::GetShadowRwTexture) = GLOBAL_ADDRESS_BY_VERSION(0x625B80, 0x625B60, 0x6257D0);

RwTexture *CCutsceneShadow::GetShadowRwTexture() {
    return plugin::CallMethodAndReturnDynGlobal<RwTexture *, CCutsceneShadow *>(gaddrof(CCutsceneShadow::GetShadowRwTexture), this);
}

int addrof(CCutsceneShadow::IsInitialized) = ADDRESS_BY_VERSION(0x625D80, 0x625D60, 0x6259D0);
int gaddrof(CCutsceneShadow::IsInitialized) = GLOBAL_ADDRESS_BY_VERSION(0x625D80, 0x625D60, 0x6259D0);

bool CCutsceneShadow::IsInitialized() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCutsceneShadow *>(gaddrof(CCutsceneShadow::IsInitialized), this);
}

int addrof(CCutsceneShadow::SetLightProperties) = ADDRESS_BY_VERSION(0x625D90, 0x625D70, 0x6259E0);
int gaddrof(CCutsceneShadow::SetLightProperties) = GLOBAL_ADDRESS_BY_VERSION(0x625D90, 0x625D70, 0x6259E0);

RwFrame *CCutsceneShadow::SetLightProperties(float angleY, float angleX, bool setLight) {
    return plugin::CallMethodAndReturnDynGlobal<RwFrame *, CCutsceneShadow *, float, float, bool>(gaddrof(CCutsceneShadow::SetLightProperties), this, angleY, angleX, setLight);
}

int addrof(CCutsceneShadow::Update) = ADDRESS_BY_VERSION(0x625BC0, 0x625BA0, 0x625810);
int gaddrof(CCutsceneShadow::Update) = GLOBAL_ADDRESS_BY_VERSION(0x625BC0, 0x625BA0, 0x625810);

RwRaster *CCutsceneShadow::Update() {
    return plugin::CallMethodAndReturnDynGlobal<RwRaster *, CCutsceneShadow *>(gaddrof(CCutsceneShadow::Update), this);
}

int addrof(CCutsceneShadow::UpdateForCutscene) = ADDRESS_BY_VERSION(0x625BA0, 0x625B80, 0x6257F0);
int gaddrof(CCutsceneShadow::UpdateForCutscene) = GLOBAL_ADDRESS_BY_VERSION(0x625BA0, 0x625B80, 0x6257F0);

RwTexture *CCutsceneShadow::UpdateForCutscene() {
    return plugin::CallMethodAndReturnDynGlobal<RwTexture *, CCutsceneShadow *>(gaddrof(CCutsceneShadow::UpdateForCutscene), this);
}
