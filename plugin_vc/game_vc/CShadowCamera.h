/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

class PLUGIN_API CShadowCamera {
public:
    RwCamera *m_pCamera;
    RwTexture *m_pTexture;

    SUPPORTED_10EN_11EN_STEAM RwCamera *Create(int rasterSize);
    SUPPORTED_10EN_11EN_STEAM void Destroy();
    SUPPORTED_10EN_11EN_STEAM RwRaster *DrawOutlineBorder(RwRGBA const &color);
    SUPPORTED_10EN_11EN_STEAM void InvertRaster();
    SUPPORTED_10EN_11EN_STEAM RwRaster *MakeGradientRaster();
    SUPPORTED_10EN_11EN_STEAM RwRaster *RasterBlur(RwRaster *raster, int numPasses);
    SUPPORTED_10EN_11EN_STEAM RwRaster *RasterGradient(RwRaster *raster);
    SUPPORTED_10EN_11EN_STEAM RwRaster *RasterResample(RwRaster *raster);
    SUPPORTED_10EN_11EN_STEAM RwCamera *Update(RpAtomic *atomic);
};

SUPPORTED_10EN_11EN_STEAM RpAtomic *ShadowRenderCallBack(RpAtomic *atomic, void *data);

VALIDATE_SIZE(CShadowCamera, 0x8);

#include "meta/meta.CShadowCamera.h"
