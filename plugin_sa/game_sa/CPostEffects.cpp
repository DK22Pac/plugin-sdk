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

// 0x704630
void CPostEffects::Initialise() {
    plugin::Call<0x704630>();
}

// 0x7010C0
void CPostEffects::Close() {
    plugin::Call<0x7010C0>();
}

// 0x7046D0
void CPostEffects::DoScreenModeDependentInitializations() {
    plugin::Call<0x7046D0>();
}

// 0x7043D0
void CPostEffects::SetupBackBufferVertex() {
    plugin::Call<0x7043D0>();
}

// 0x7046A0
void CPostEffects::Update() {
    plugin::Call<0x7046A0>();
}

// 0x700EC0
void CPostEffects::DrawQuad(RwReal xPos, RwReal yPos, RwReal xSize, RwReal ySize, RwUInt8 r, RwUInt8 g, RwUInt8 b, RwUInt8 a, RwRaster* pRaster) {
    plugin::Call<0x700EC0, RwReal, RwReal, RwReal, RwReal, RwUInt8, RwUInt8, RwUInt8, RwUInt8, RwRaster*>(xPos, yPos, xSize, ySize, r, g, b, a, pRaster);
}

// 0x701060
void CPostEffects::DrawQuadSetDefaultUVs() {
    plugin::Call<0x701060>();
}

// 0x700FE0
void CPostEffects::DrawQuadSetPixelUVs(RwReal u1, RwReal v1, RwReal u2, RwReal v2, RwReal u3, RwReal v3, RwReal u4, RwReal v4) {
    plugin::Call<0x700FE0, RwReal, RwReal, RwReal, RwReal, RwReal, RwReal, RwReal, RwReal>(u1, v1, u2, v2, u3, v3, u4, v4);
}

// 0x700F90
void CPostEffects::DrawQuadSetUVs(RwReal u1, RwReal v1, RwReal u2, RwReal v2, RwReal u3, RwReal v3, RwReal u4, RwReal v4) {
    plugin::Call<0x700F90, RwReal, RwReal, RwReal, RwReal, RwReal, RwReal, RwReal, RwReal>(u1, v1, u2, v2, u3, v3, u4, v4);
}

// 0x7034B0
void CPostEffects::FilterFX_RestoreDayNightBalance() {
    plugin::Call<0x7034B0>();
}

// 0x7034D0
void CPostEffects::FilterFX_StoreAndSetDayNightBalance() {
    plugin::Call<0x7034D0>();
}

// 0x703CC0
void CPostEffects::ImmediateModeFilterStuffInitialize() {
    plugin::Call<0x703CC0>();
}

// 0x700D70
void CPostEffects::ImmediateModeRenderStatesSet() {
    plugin::Call<0x700D70>();
}

// 0x700CC0
void CPostEffects::ImmediateModeRenderStatesStore() {
    plugin::Call<0x700CC0>();
}

// 0x700E00
void CPostEffects::ImmediateModeRenderStatesReStore() {
    plugin::Call<0x700E00>();
}

// 0x700C90
RwRaster* CPostEffects::RasterCreatePostEffects(RwRect rect) {
    return plugin::CallAndReturn<RwRaster*, 0x700C90, RwRect>(rect);
}

// 0x7011B0
void CPostEffects::ScriptCCTVSwitch(bool n) {
    plugin::Call<0x7011B0, bool>(n);
}

// 0x701170
void CPostEffects::ScriptDarknessFilterSwitch(bool n, int32_t alpha) {
    plugin::Call<0x701170, bool>(n, alpha);
}

// 0x701160
void CPostEffects::ScriptHeatHazeFXSwitch(bool n) {
    plugin::Call<0x701160, bool>(n);
}

// 0x701140
void CPostEffects::ScriptInfraredVisionSwitch(bool n) {
    plugin::Call<0x701140, bool>(n);
}

// 0x701120
void CPostEffects::ScriptNightVisionSwitch(bool n) {
    plugin::Call<0x701120, bool>(n);
}

// 0x7010F0
void CPostEffects::ScriptResetForEffects() {
    plugin::Call<0x7010F0>();
}

// 0x7039C0
void CPostEffects::UnderWaterRipple(RwRGBA col, float xoffset, float yoffset, int32_t strength, float speed, float freq) {
    plugin::Call<0x7039C0, RwRGBA, float, float, int32_t, float, float>(col, xoffset, yoffset, strength, speed, freq);
}

// 0x703CB0
void CPostEffects::UnderWaterRippleFadeToFX() {
    plugin::Call<0x703CB0>();
}

// 0x701450
void CPostEffects::HeatHazeFXInit() {
    plugin::Call<0x701450>();
}

// 0x701780
void CPostEffects::HeatHazeFX(float fIntensity, bool bAlphaMaskMode) {
    plugin::Call<0x701780, float, bool>(fIntensity, bAlphaMaskMode);
}

// 0x7034F0
bool CPostEffects::IsVisionFXActive() {
    return plugin::CallAndReturn<bool, 0x7034F0>();
}

// 0x7011C0
void CPostEffects::NightVision() {
    plugin::Call<0x7011C0>();
}

// 0x7012E0
void CPostEffects::NightVisionSetLights() {
    plugin::Call<0x7012E0>();
}

// 0x703520
void CPostEffects::SetFilterMainColour(RwRaster* pRaster, RwRGBA colour) {
    plugin::Call<0x703520, RwRaster*, RwRGBA>(pRaster, colour);
}

// 0x703F80
void CPostEffects::InfraredVision(RwRGBA colour, RwRGBA colourMain) {
    plugin::Call<0x703F80, RwRGBA, RwRGBA>(colour, colourMain);
}

// 0x701430
void CPostEffects::InfraredVisionSetLightsForDefaultObjects() {
    plugin::Call<0x701430>();
}

// 0x701300
void CPostEffects::InfraredVisionSetLightsForHeatObjects() {
    plugin::Call<0x701300>();
}

// 0x701320
void CPostEffects::InfraredVisionStoreAndSetLightsForHeatObjects(CPed* ped) {
    plugin::Call<0x701320, CPed*>(ped);
}

// 0x701410
void CPostEffects::InfraredVisionRestoreLightsForHeatObjects() {
    plugin::Call<0x701410>();
}

// 0x704150
void CPostEffects::Fog() {
    plugin::Call<0x704150>();
}

// 0x702F40
void CPostEffects::CCTV() {
    plugin::Call<0x702F40>();
}

// 0x7037C0
void CPostEffects::Grain(int32_t strengthMask, bool update) {
    plugin::Call<0x7037C0, int32_t, bool>(strengthMask, update);
}

// 0x7030A0
void CPostEffects::SpeedFX(float speed) {
    plugin::Call<0x7030A0, float>(speed);
}

// 0x702F00
void CPostEffects::DarknessFilter(int32_t alpha) {
    plugin::Call<0x702F00, int32_t>(alpha);
}

// 0x703650
void CPostEffects::ColourFilter(RwRGBA col1, RwRGBA col2) {
    plugin::Call<0x703650, RwRGBA, RwRGBA>(col1, col2);
}

// 0x702080
void CPostEffects::Radiosity(int32_t intensityLimit, int32_t filterPasses, int32_t renderPasses, int32_t intensity) {
    plugin::Call<0x702080>();
}

// 0x700BE0
void CPostEffects::SetSpeedFXManualSpeedCurrentFrame(float value) {
    plugin::Call<0x700BE0, float>(value);
}

// 0x7046E0
void CPostEffects::Render() {
    plugin::Call<0x7046E0>();
}