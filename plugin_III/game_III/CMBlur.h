/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

enum PLUGIN_API eMBlurType : unsigned int {
    MOTION_BLUR_NONE = 0,
    MOTION_BLUR_SNIPER = 1,
    MOTION_BLUR_LIGHT_SCENE = 2,
    MOTION_BLUR_SECURITY_CAM = 3,
    MOTION_BLUR_CUT_SCENE = 4,
    MOTION_BLUR_INTRO = 5,
    MOTION_BLUR_INTRO2 = 6,
    MOTION_BLUR_SNIPER_ZOOM = 7,
    MOTION_BLUR_INTRO3 = 8,
    MOTION_BLUR_INTRO4 = 9
};

class PLUGIN_API CMBlur {
public:
    SUPPORTED_10EN_11EN_STEAM static RwRaster *&pFrontBuffer;
    SUPPORTED_10EN_11EN_STEAM static bool &ms_bScaledBlur;
    SUPPORTED_10EN_11EN_STEAM static bool &ms_bJustInitialised;
    SUPPORTED_10EN_11EN_STEAM static bool &BlurOn;

    SUPPORTED_10EN_11EN_STEAM static void CreateImmediateModeData(RwCamera *cam, RwRect *rect);
    SUPPORTED_10EN_11EN_STEAM static RwBool MotionBlurClose();
    SUPPORTED_10EN_11EN_STEAM static RwBool MotionBlurOpen(RwCamera *cam);
    SUPPORTED_10EN_11EN_STEAM static void MotionBlurRender(RwCamera *cam, unsigned int red, unsigned int green, unsigned int blue, unsigned int blur, int type, unsigned int blurAlpha);
    SUPPORTED_10EN_11EN_STEAM static void OverlayRender(RwCamera *cam, RwRaster *raster, RwRGBA color, int type, int blurAlpha);
};

//! RwImVertexIndex Index[6] = { 0, 1, 2, 0, 2, 3 };
SUPPORTED_10EN_11EN_STEAM extern RwImVertexIndex(&Index)[6]; // RwImVertexIndex Index[6]
SUPPORTED_10EN_11EN_STEAM extern RwIm2DVertex(&Vertex)[4]; // RwIm2DVertex Vertex[4]

#include "meta/meta.CMBlur.h"
