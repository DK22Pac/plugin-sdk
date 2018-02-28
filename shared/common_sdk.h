/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "common.h"

namespace plugin {

RwFrame *GetObjectParent(RwObject *obj);
void SetRenderState(RwRenderState state, unsigned int value);
void SetRenderRaster(RwRaster *raster);
void GetRenderState(RwRenderState state, unsigned int &outValue);
void GetRenderRaster(RwRaster *&outRaster);
unsigned int GetRenderState(RwRenderState state);
RwRaster *GetRenderRaster(RwRenderState state);

}
