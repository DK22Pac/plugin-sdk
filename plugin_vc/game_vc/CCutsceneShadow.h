/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CShadowCamera.h"
#include "RenderWare.h"

enum PLUGIN_API eShadowCameraType : unsigned int {
    RASTER = 0,
    RESAMPLE = 1,
    BLUR = 2,
    GRADIENT = 3
};

class PLUGIN_API CCutsceneShadow {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CCutsceneShadow)

public:
    CShadowCamera m_Camera;
    bool m_bResample;
    CShadowCamera m_ResampleCamera;
    int m_nBlurPasses;
    CShadowCamera m_BlurCamera;
    bool m_bGradient;
    CShadowCamera m_GradientCamera;
    RpAtomic *m_pAtomic;
    int m_nRwObjectType;
    RpLight *m_pLight;
    RwSphere m_BoundingSphere;
    RwSphere m_BaseSphere;

    SUPPORTED_10EN_11EN_STEAM bool Create(RwObject *object, int rasterSize, bool resample, int blurPasses, bool gradient);
    SUPPORTED_10EN_11EN_STEAM void DrawBorderAroundTexture(RwRGBA const &color);
    SUPPORTED_10EN_11EN_STEAM CShadowCamera *GetShadowCamera(int camType);
    SUPPORTED_10EN_11EN_STEAM RwTexture *GetShadowRwTexture();
    SUPPORTED_10EN_11EN_STEAM bool IsInitialized();
    SUPPORTED_10EN_11EN_STEAM RwFrame *SetLightProperties(float angleY, float angleX, bool setLight);
    SUPPORTED_10EN_11EN_STEAM RwRaster *Update();
    SUPPORTED_10EN_11EN_STEAM RwTexture *UpdateForCutscene();
};

VALIDATE_SIZE(CCutsceneShadow, 0x58);

#include "meta/meta.CCutsceneShadow.h"
