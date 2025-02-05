/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CShadowCamera.h"

PLUGIN_SOURCE_FILE

int addrof(CShadowCamera::Create) = ADDRESS_BY_VERSION(0x626E70, 0x626E50, 0x626AC0);
int gaddrof(CShadowCamera::Create) = GLOBAL_ADDRESS_BY_VERSION(0x626E70, 0x626E50, 0x626AC0);

RwCamera *CShadowCamera::Create(int rasterSize) {
    return plugin::CallMethodAndReturnDynGlobal<RwCamera *, CShadowCamera *, int>(gaddrof(CShadowCamera::Create), this, rasterSize);
}

int addrof(CShadowCamera::Destroy) = ADDRESS_BY_VERSION(0x626DE0, 0x626DC0, 0x626A30);
int gaddrof(CShadowCamera::Destroy) = GLOBAL_ADDRESS_BY_VERSION(0x626DE0, 0x626DC0, 0x626A30);

void CShadowCamera::Destroy() {
    plugin::CallMethodDynGlobal<CShadowCamera *>(gaddrof(CShadowCamera::Destroy), this);
}

int addrof(CShadowCamera::DrawOutlineBorder) = ADDRESS_BY_VERSION(0x6264D0, 0x6264B0, 0x626120);
int gaddrof(CShadowCamera::DrawOutlineBorder) = GLOBAL_ADDRESS_BY_VERSION(0x6264D0, 0x6264B0, 0x626120);

RwRaster *CShadowCamera::DrawOutlineBorder(RwRGBA const &color) {
    return plugin::CallMethodAndReturnDynGlobal<RwRaster *, CShadowCamera *, RwRGBA const &>(gaddrof(CShadowCamera::DrawOutlineBorder), this, color);
}

int addrof(CShadowCamera::InvertRaster) = ADDRESS_BY_VERSION(0x626BD0, 0x626BB0, 0x626820);
int gaddrof(CShadowCamera::InvertRaster) = GLOBAL_ADDRESS_BY_VERSION(0x626BD0, 0x626BB0, 0x626820);

void CShadowCamera::InvertRaster() {
    plugin::CallMethodDynGlobal<CShadowCamera *>(gaddrof(CShadowCamera::InvertRaster), this);
}

int addrof(CShadowCamera::MakeGradientRaster) = ADDRESS_BY_VERSION(0x6269F0, 0x6269D0, 0x626640);
int gaddrof(CShadowCamera::MakeGradientRaster) = GLOBAL_ADDRESS_BY_VERSION(0x6269F0, 0x6269D0, 0x626640);

RwRaster *CShadowCamera::MakeGradientRaster() {
    return plugin::CallMethodAndReturnDynGlobal<RwRaster *, CShadowCamera *>(gaddrof(CShadowCamera::MakeGradientRaster), this);
}

int addrof(CShadowCamera::RasterBlur) = ADDRESS_BY_VERSION(0x626780, 0x626760, 0x6263D0);
int gaddrof(CShadowCamera::RasterBlur) = GLOBAL_ADDRESS_BY_VERSION(0x626780, 0x626760, 0x6263D0);

RwRaster *CShadowCamera::RasterBlur(RwRaster *raster, int numPasses) {
    return plugin::CallMethodAndReturnDynGlobal<RwRaster *, CShadowCamera *, RwRaster *, int>(gaddrof(CShadowCamera::RasterBlur), this, raster, numPasses);
}

int addrof(CShadowCamera::RasterGradient) = ADDRESS_BY_VERSION(0x6266A0, 0x626680, 0x6262F0);
int gaddrof(CShadowCamera::RasterGradient) = GLOBAL_ADDRESS_BY_VERSION(0x6266A0, 0x626680, 0x6262F0);

RwRaster *CShadowCamera::RasterGradient(RwRaster *raster) {
    return plugin::CallMethodAndReturnDynGlobal<RwRaster *, CShadowCamera *, RwRaster *>(gaddrof(CShadowCamera::RasterGradient), this, raster);
}

int addrof(CShadowCamera::RasterResample) = ADDRESS_BY_VERSION(0x626900, 0x6268E0, 0x626550);
int gaddrof(CShadowCamera::RasterResample) = GLOBAL_ADDRESS_BY_VERSION(0x626900, 0x6268E0, 0x626550);

RwRaster *CShadowCamera::RasterResample(RwRaster *raster) {
    return plugin::CallMethodAndReturnDynGlobal<RwRaster *, CShadowCamera *, RwRaster *>(gaddrof(CShadowCamera::RasterResample), this, raster);
}

int addrof(CShadowCamera::Update) = ADDRESS_BY_VERSION(0x626D00, 0x626CE0, 0x626950);
int gaddrof(CShadowCamera::Update) = GLOBAL_ADDRESS_BY_VERSION(0x626D00, 0x626CE0, 0x626950);

RwCamera *CShadowCamera::Update(RpAtomic *atomic) {
    return plugin::CallMethodAndReturnDynGlobal<RwCamera *, CShadowCamera *, RpAtomic *>(gaddrof(CShadowCamera::Update), this, atomic);
}

int addrof(ShadowRenderCallBack) = ADDRESS_BY_VERSION(0x626DA0, 0x626D80, 0x6269F0);
int gaddrof(ShadowRenderCallBack) = GLOBAL_ADDRESS_BY_VERSION(0x626DA0, 0x626D80, 0x6269F0);

RpAtomic *ShadowRenderCallBack(RpAtomic *atomic, void *data) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *, void *>(gaddrof(ShadowRenderCallBack), atomic, data);
}
