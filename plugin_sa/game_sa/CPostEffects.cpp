/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPostEffects.h"

bool& CPostEffects::m_bDisableAllPostEffect = *(bool*)0xC402CF;
bool& CPostEffects::m_bSavePhotoFromScript = *(bool*)0xC402D0;
bool& CPostEffects::m_bInCutscene = *(bool*)0xC402B7;

float& CPostEffects::m_xoffset = *(float*)0x8D5130;
float& CPostEffects::m_yoffset = *(float*)0x8D5134;

float& CPostEffects::m_colour1Multiplier = *(float*)0x8D5160;
float& CPostEffects::m_colour2Multiplier = *(float*)0x8D5164;
float& CPostEffects::m_colourLeftUOffset = *(float*)0x8D5150;
float& CPostEffects::m_colourRightUOffset = *(float*)0x8D5154;
float& CPostEffects::m_colourTopVOffset = *(float*)0x8D5158;
float& CPostEffects::m_colourBottomVOffset = *(float*)0x8D515C;

bool& CPostEffects::m_bNightVision = *(bool*)0xC402B8;
float& CPostEffects::m_fNightVisionSwitchOnFXCount = *(float*)0xC40300;
float& CPostEffects::m_fNightVisionSwitchOnFXTime = *(float*)0x8D50B0;
int32_t& CPostEffects::m_NightVisionGrainStrength = *(int32_t*)0x8D50A8;
CRGBA& CPostEffects::m_NightVisionMainCol = *(CRGBA*)0x8D50AC;

bool& CPostEffects::m_bDarknessFilter = *(bool*)0xC402C4;
int32_t& CPostEffects::m_DarknessFilterAlpha = *(int32_t*)0x8D5204;
int32_t& CPostEffects::m_DarknessFilterAlphaDefault = *(int32_t*)0x8D50F4;
int32_t& CPostEffects::m_DarknessFilterRadiosityIntensityLimit = *(int32_t*)0x8D50F8;

float& CPostEffects::m_fWaterFXStartUnderWaterness = *(float*)0x8D514C;
float& CPostEffects::m_fWaterFullDarknessDepth = *(float*)0x8D5148;
bool& CPostEffects::m_bWaterDepthDarkness = *(bool*)0x8D5144;

bool& CPostEffects::m_bHeatHazeFX = *(bool*)0xC402BA;
int32_t& CPostEffects::m_HeatHazeFXSpeedMin = *(int32_t*)0x8D50EC;
int32_t& CPostEffects::m_HeatHazeFXSpeedMax = *(int32_t*)0x8D50F0;
int32_t& CPostEffects::m_HeatHazeFXIntensity = *(int32_t*)0x8D50E8;
int32_t& CPostEffects::m_HeatHazeFXType = *(int32_t*)0xC402BC;
int32_t& CPostEffects::m_HeatHazeFXTypeLast = *(int32_t*)0x8D50E4;
int32_t& CPostEffects::m_HeatHazeFXRandomShift = *(int32_t*)0xC402C0;
int32_t& CPostEffects::m_HeatHazeFXScanSizeX = *(int32_t*)0xC40304;
int32_t& CPostEffects::m_HeatHazeFXScanSizeY = *(int32_t*)0xC40308;
int32_t& CPostEffects::m_HeatHazeFXRenderSizeX = *(int32_t*)0xC4030C;
int32_t& CPostEffects::m_HeatHazeFXRenderSizeY = *(int32_t*)0xC40310;

bool& CPostEffects::m_bFog = *(bool*)0xC402C6;

bool& CPostEffects::m_bSpeedFX = *(bool*)0x8D5100;
bool& CPostEffects::m_bSpeedFXTestMode = *(bool*)0xC402C7;
bool& CPostEffects::m_bSpeedFXUserFlag = *(bool*)0x8D5108;
bool& CPostEffects::m_bSpeedFXUserFlagCurrentFrame = *(bool*)0x8D5109;
float& CPostEffects::m_fSpeedFXManualSpeedCurrentFrame = *(float*)0xC402C8;
int32_t& CPostEffects::m_SpeedFXAlpha = *(int32_t*)0x8D5104;

RwRaster*& CPostEffects::pRasterFrontBuffer = *(RwRaster**)0xC402D8;

bool& CPostEffects::m_bGrainEnable = *(bool*)0xC402B4;
RwRaster*& CPostEffects::m_pGrainRaster = *(RwRaster**)0xC402B0;
char(&CPostEffects::m_grainStrength)[2] = *(char (*)[2])0x8D5094;

bool& CPostEffects::m_bCCTV = *(bool*)0xC402C5;
CRGBA& CPostEffects::m_CCTVcol = *(CRGBA*)0x8D50FC;

bool& CPostEffects::m_bRainEnable = *(bool*)0xC402D1;
bool& CPostEffects::m_bColorEnable = *(bool*)0x8D518C;

bool& CPostEffects::m_bRadiosity = *(bool*)0xC402CC;
bool& CPostEffects::m_bRadiosityDebug = *(bool*)0xC402CD;
bool& CPostEffects::m_bRadiosityLinearFilter = *(bool*)0x8D510A;
bool& CPostEffects::m_bRadiosityStripCopyMode = *(bool*)0x8D510B;
int32_t& CPostEffects::m_RadiosityFilterUCorrection = *(int32_t*)0x8D511C;
int32_t& CPostEffects::m_RadiosityFilterVCorrection = *(int32_t*)0x8D5120;
int32_t& CPostEffects::m_RadiosityIntensity = *(int32_t*)0x8D5118;
int32_t& CPostEffects::m_RadiosityIntensityLimit = *(int32_t*)0x8D5114;
bool& CPostEffects::m_bRadiosityBypassTimeCycleIntensityLimit = *(bool*)0xC402CE;
float& CPostEffects::m_RadiosityPixelsX = *(float*)0xC40314;
float& CPostEffects::m_RadiosityPixelsY = *(float*)0xC40318;
uint32_t& CPostEffects::m_RadiosityFilterPasses = *(uint32_t*)0x8D5110;
uint32_t& CPostEffects::m_RadiosityRenderPasses = *(uint32_t*)0x8D510C;

float& CPostEffects::m_VisionFXDayNightBalance = *(float*)0x8D50A4;

bool& CPostEffects::m_bInfraredVision = *(bool*)0xC402B9;
int32_t& CPostEffects::m_InfraredVisionGrainStrength = *(int32_t*)0x8D50B4;
float& CPostEffects::m_fInfraredVisionFilterRadius = *(float*)0x8D50B8;

CRGBA& CPostEffects::m_InfraredVisionCol = *(CRGBA*)0x8D50CC;
CRGBA& CPostEffects::m_InfraredVisionMainCol = *(CRGBA*)0x8D50D0;
RwRGBAReal& CPostEffects::m_fInfraredVisionHeatObjectCol = *(RwRGBAReal*)0x8D50BC;
int32_t& CPostEffects::m_HeatHazeFXHourOfDayStart = *(int32_t*)0x8D50D4;
int32_t& CPostEffects::m_HeatHazeFXHourOfDayEnd = *(int32_t*)0x8D50D8;
float& CPostEffects::m_fHeatHazeFXFadeSpeed = *(float*)0x8D50DC;
float& CPostEffects::m_fHeatHazeFXInsideBuildingFadeSpeed = *(float*)0x8D50DC;

bool& CPostEffects::m_waterEnable = *(bool*)0xC402D3;
float& CPostEffects::m_waterStrength = *(float*)0x8D512C;
float& CPostEffects::m_waterSpeed = *(float*)0x8D5138;
float& CPostEffects::m_waterFreq = *(float*)0x8D513C;
CRGBA& CPostEffects::m_waterCol = *(CRGBA*)0x8D5140;
