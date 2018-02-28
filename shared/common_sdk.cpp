/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "common_sdk.h"

RwFrame *plugin::GetObjectParent(RwObject *obj) {
    return reinterpret_cast<RwFrame *>(rwObjectGetParent(obj));
}

void plugin::SetRenderState(RwRenderState state, unsigned int value) {
    RwRenderStateSet(state, reinterpret_cast<void *>(value));
}

void plugin::SetRenderRaster(RwRaster *raster) {
    RwRenderStateSet(rwRENDERSTATETEXTURERASTER, raster);
}

void plugin::GetRenderState(RwRenderState state, unsigned int &outValue) {
    RwRenderStateGet(state, reinterpret_cast<void **>(&outValue));
}

void plugin::GetRenderRaster(RwRaster *&outRaster) {
    RwRenderStateGet(rwRENDERSTATETEXTURERASTER, &outRaster);
}

unsigned int plugin::GetRenderState(RwRenderState state) {
    unsigned int outValue;
    RwRenderStateGet(state, reinterpret_cast<void **>(&outValue));
    return outValue;
}

RwRaster *plugin::GetRenderRaster(RwRenderState state) {
    RwRaster *outRaster;
    RwRenderStateGet(state, &outRaster);
    return outRaster;
}
