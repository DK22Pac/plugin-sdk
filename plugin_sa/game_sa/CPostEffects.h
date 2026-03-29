/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "RenderWare.h"
#include "CRGBA.h"

class CPed;

class CPostEffects {
public:
    static void Initialise();
    static void Close();
    static void DoScreenModeDependentInitializations();
    static void SetupBackBufferVertex();
    static void Update();

    static void DrawQuad(RwReal xPos, RwReal yPos, RwReal xSize, RwReal ySize, RwUInt8 r, RwUInt8 g, RwUInt8 b, RwUInt8 a, RwRaster* pRaster);
    static void DrawQuadSetDefaultUVs();
    static void DrawQuadSetPixelUVs(RwReal u1, RwReal v1, RwReal u2, RwReal v2, RwReal u3, RwReal v3, RwReal u4, RwReal v4);
    static void DrawQuadSetUVs(RwReal u1, RwReal v1, RwReal u2, RwReal v2, RwReal u3, RwReal v3, RwReal u4, RwReal v4);

    static void FilterFX_RestoreDayNightBalance();
    static void FilterFX_StoreAndSetDayNightBalance();

    static void ImmediateModeFilterStuffInitialize();
    static void ImmediateModeRenderStatesSet();
    static void ImmediateModeRenderStatesStore();
    static void ImmediateModeRenderStatesReStore();

    static RwRaster* RasterCreatePostEffects(RwRect rect);

    static void ScriptCCTVSwitch(bool n);
    static void ScriptDarknessFilterSwitch(bool n, int32_t alpha);
    static void ScriptHeatHazeFXSwitch(bool n);
    static void ScriptInfraredVisionSwitch(bool n);
    static void ScriptNightVisionSwitch(bool n);
    static void ScriptResetForEffects();

    static void UnderWaterRipple(RwRGBA col, float xoffset, float yoffset, int32_t strength, float speed, float freq);
    static void UnderWaterRippleFadeToFX();

    static void HeatHazeFXInit();
    static void HeatHazeFX(float fIntensity, bool bAlphaMaskMode);

    static bool IsVisionFXActive();

    static void NightVision();
    static void NightVisionSetLights();

    static void SetFilterMainColour(RwRaster* pRaster, RwRGBA colour);
    static void InfraredVision(RwRGBA colour, RwRGBA colourMain);
    static void InfraredVisionSetLightsForDefaultObjects();
    static void InfraredVisionSetLightsForHeatObjects();
    static void InfraredVisionStoreAndSetLightsForHeatObjects(CPed* ped);
    static void InfraredVisionRestoreLightsForHeatObjects();

    static void Fog();
    static void CCTV();
    static void Grain(int32_t strengthMask, bool update);
    static void SpeedFX(float speed);
    static void DarknessFilter(int32_t alpha);
    static void ColourFilter(RwRGBA col1, RwRGBA col2);
    static void Radiosity(int32_t intensityLimit, int32_t filterPasses, int32_t renderPasses, int32_t intensity);
    static void SetSpeedFXManualSpeedCurrentFrame(float value);

    static void Render();

    static bool& m_bDisableAllPostEffect;
    static bool& m_bSavePhotoFromScript;
    static bool& m_bInCutscene;

    static float& m_xoffset;
    static float& m_yoffset;

    static float& m_colour1Multiplier;
    static float& m_colour2Multiplier;
    static float& m_colourLeftUOffset;
    static float& m_colourRightUOffset;
    static float& m_colourTopVOffset;
    static float& m_colourBottomVOffset;

    static bool& m_bNightVision;
    static float& m_fNightVisionSwitchOnFXCount;
    static float& m_fNightVisionSwitchOnFXTime;
    static int32_t& m_NightVisionGrainStrength;
    static CRGBA& m_NightVisionMainCol;

    static bool& m_bDarknessFilter;
    static int32_t& m_DarknessFilterAlpha;
    static int32_t& m_DarknessFilterAlphaDefault;
    static int32_t& m_DarknessFilterRadiosityIntensityLimit;

    static float& m_fWaterFXStartUnderWaterness;
    static float& m_fWaterFullDarknessDepth;
    static bool& m_bWaterDepthDarkness;

    static bool& m_bHeatHazeFX;
    static int32_t& m_HeatHazeFXSpeedMin;
    static int32_t& m_HeatHazeFXSpeedMax;
    static int32_t& m_HeatHazeFXIntensity;
    static int32_t& m_HeatHazeFXType;
    static int32_t& m_HeatHazeFXTypeLast;
    static int32_t& m_HeatHazeFXRandomShift;
    static int32_t& m_HeatHazeFXScanSizeX;
    static int32_t& m_HeatHazeFXScanSizeY;
    static int32_t& m_HeatHazeFXRenderSizeX;
    static int32_t& m_HeatHazeFXRenderSizeY;

    static bool& m_bFog;

    static bool& m_bSpeedFX;
    static bool& m_bSpeedFXTestMode;
    static bool& m_bSpeedFXUserFlag;
    static bool& m_bSpeedFXUserFlagCurrentFrame;
    static float& m_fSpeedFXManualSpeedCurrentFrame;
    static int32_t& m_SpeedFXAlpha;

    static RwRaster*& pRasterFrontBuffer;

    static bool& m_bGrainEnable;
    static RwRaster*& m_pGrainRaster;
    static char(&m_grainStrength)[2];

    static bool& m_bCCTV;
    static CRGBA& m_CCTVcol;

    static bool& m_bRainEnable;
    static bool& m_bColorEnable;

    static bool& m_bRadiosity;
    static bool& m_bRadiosityDebug;
    static bool& m_bRadiosityLinearFilter;
    static bool& m_bRadiosityStripCopyMode;
    static int32_t& m_RadiosityFilterUCorrection;
    static int32_t& m_RadiosityFilterVCorrection;
    static int32_t& m_RadiosityIntensity;
    static int32_t& m_RadiosityIntensityLimit;
    static bool& m_bRadiosityBypassTimeCycleIntensityLimit;
    static float& m_RadiosityPixelsX;
    static float& m_RadiosityPixelsY;
    static uint32_t& m_RadiosityFilterPasses;
    static uint32_t& m_RadiosityRenderPasses;

    static float& m_VisionFXDayNightBalance;

    static bool& m_bInfraredVision;
    static int32_t& m_InfraredVisionGrainStrength;
    static float& m_fInfraredVisionFilterRadius;
    static CRGBA& m_InfraredVisionCol;
    static CRGBA& m_InfraredVisionMainCol;
    static RwRGBAReal& m_fInfraredVisionHeatObjectCol;
    static int32_t& m_HeatHazeFXHourOfDayStart;
    static int32_t& m_HeatHazeFXHourOfDayEnd;
    static float& m_fHeatHazeFXFadeSpeed;
    static float& m_fHeatHazeFXInsideBuildingFadeSpeed;

    static bool& m_waterEnable;
    static float& m_waterStrength;
    static float& m_waterSpeed;
    static float& m_waterFreq;
    static CRGBA& m_waterCol;

    // Immediate Mode Filter
    struct imf {
        float                       screenZ;
        float                       recipCameraZ;
        RwRaster*                   RasterDrawBuffer;
        int32_t                     sizeDrawBufferX;
        int32_t                     sizeDrawBufferY;
        float                       fFrontBufferU1;
        float                       fFrontBufferV1;
        float                       fFrontBufferU2;
        float                       fFrontBufferV2;
        std::array<RwIm2DVertex, 3> triangle;
        float                       uMinTri;
        float                       uMaxTri;
        float                       vMinTri;
        float                       vMaxTri;
        std::array<RwIm2DVertex, 6> quad;
        RwBlendFunction             blendSrc;
        RwBlendFunction             blendDst;
        RwBool                      bFog;
        RwCullMode                  cullMode;
        RwBool                      bZTest;
        RwBool                      bZWrite;
        RwShadeMode                 shadeMode;
        RwBool                      bVertexAlpha;
        RwTextureAddressMode        textureAddress;
        RwTextureFilterMode         textureFilter;
    };
};
