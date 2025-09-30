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

class CPostEffects {
public:
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
};
