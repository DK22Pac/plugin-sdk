/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMBlur.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE RwRaster *&CMBlur::pFrontBuffer = *reinterpret_cast<RwRaster **>(GLOBAL_ADDRESS_BY_VERSION(0x8E2C48, 0x8E2CFC, 0x8F2E3C));
PLUGIN_VARIABLE bool &CMBlur::ms_bScaledBlur = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD84, 0x95CF3C, 0x96D07C));
PLUGIN_VARIABLE bool &CMBlur::ms_bJustInitialised = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CDAB, 0x95CF64, 0x96D0A4));
PLUGIN_VARIABLE bool &CMBlur::BlurOn = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CDAD, 0x5FDB84, 0x60AB7C));
PLUGIN_VARIABLE RwImVertexIndex(&Index)[6] = *reinterpret_cast<RwImVertexIndex(*)[6]>(GLOBAL_ADDRESS_BY_VERSION(0x5FDD90, 0x5FDB78, 0x60AB70));
PLUGIN_VARIABLE RwIm2DVertex(&Vertex)[4] = *reinterpret_cast<RwIm2DVertex(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x62F780, 0x62F780, 0x63F780));

int addrof(CMBlur::CreateImmediateModeData) = ADDRESS_BY_VERSION(0x50A800, 0x50A8E0, 0x50A870);
int gaddrof(CMBlur::CreateImmediateModeData) = GLOBAL_ADDRESS_BY_VERSION(0x50A800, 0x50A8E0, 0x50A870);

void CMBlur::CreateImmediateModeData(RwCamera *cam, RwRect *rect) {
    plugin::CallDynGlobal<RwCamera *, RwRect *>(gaddrof(CMBlur::CreateImmediateModeData), cam, rect);
}

int addrof(CMBlur::MotionBlurClose) = ADDRESS_BY_VERSION(0x50B170, 0x50B250, 0x50B1E0);
int gaddrof(CMBlur::MotionBlurClose) = GLOBAL_ADDRESS_BY_VERSION(0x50B170, 0x50B250, 0x50B1E0);

RwBool CMBlur::MotionBlurClose() {
    return plugin::CallAndReturnDynGlobal<RwBool>(gaddrof(CMBlur::MotionBlurClose));
}

int addrof(CMBlur::MotionBlurOpen) = ADDRESS_BY_VERSION(0x50AE40, 0x50AF20, 0x50AEB0);
int gaddrof(CMBlur::MotionBlurOpen) = GLOBAL_ADDRESS_BY_VERSION(0x50AE40, 0x50AF20, 0x50AEB0);

RwBool CMBlur::MotionBlurOpen(RwCamera *cam) {
    return plugin::CallAndReturnDynGlobal<RwBool, RwCamera *>(gaddrof(CMBlur::MotionBlurOpen), cam);
}

int addrof(CMBlur::MotionBlurRender) = ADDRESS_BY_VERSION(0x50AD70, 0x50AE50, 0x50ADE0);
int gaddrof(CMBlur::MotionBlurRender) = GLOBAL_ADDRESS_BY_VERSION(0x50AD70, 0x50AE50, 0x50ADE0);

void CMBlur::MotionBlurRender(RwCamera *cam, unsigned int red, unsigned int green, unsigned int blue, unsigned int blur, int type, unsigned int blurAlpha) {
    plugin::CallDynGlobal<RwCamera *, unsigned int, unsigned int, unsigned int, unsigned int, int, unsigned int>(gaddrof(CMBlur::MotionBlurRender), cam, red, green, blue, blur, type, blurAlpha);
}

int addrof(CMBlur::OverlayRender) = ADDRESS_BY_VERSION(0x50A9C0, 0x50AAA0, 0x50AA30);
int gaddrof(CMBlur::OverlayRender) = GLOBAL_ADDRESS_BY_VERSION(0x50A9C0, 0x50AAA0, 0x50AA30);

void CMBlur::OverlayRender(RwCamera *cam, RwRaster *raster, RwRGBA color, int type, int blurAlpha) {
    plugin::CallDynGlobal<RwCamera *, RwRaster *, RwRGBA, int, int>(gaddrof(CMBlur::OverlayRender), cam, raster, color, type, blurAlpha);
}
