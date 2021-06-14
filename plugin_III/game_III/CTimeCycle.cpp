/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTimeCycle.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE int(&CTimeCycle::m_nSunCoronaRed)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x664B60, 0x664B60, 0x674CA0));
PLUGIN_VARIABLE int(&CTimeCycle::m_nAmbientGreen)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x665308, 0x665308, 0x675448));
PLUGIN_VARIABLE CVector(&CTimeCycle::m_VectorToSun)[16] = *reinterpret_cast<CVector(*)[16]>(GLOBAL_ADDRESS_BY_VERSION(0x665548, 0x665548, 0x675688));
PLUGIN_VARIABLE int(&CTimeCycle::m_nSunCoronaBlue)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x6E6340, 0x6E6340, 0x6F6480));
PLUGIN_VARIABLE int(&CTimeCycle::m_nFluffyCloudsBottomRed)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x6E8DA8, 0x6E8DA8, 0x6F8EE8));
PLUGIN_VARIABLE float(&CTimeCycle::m_fSpriteBrightness)[24][4] = *reinterpret_cast<float(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x6E96F0, 0x6E96F0, 0x6F9830));
PLUGIN_VARIABLE int(&CTimeCycle::m_nSunCoreGreen)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x6EE088, 0x6EE088, 0x6FE1C8));
PLUGIN_VARIABLE int(&CTimeCycle::m_nFluffyCloudsBottomBlue)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x6EE2D0, 0x6EE2D0, 0x6FE410));
PLUGIN_VARIABLE int(&CTimeCycle::m_nSunCoronaGreen)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x6F01E0, 0x6F01E0, 0x700320));
PLUGIN_VARIABLE float(&CTimeCycle::m_fShadowDisplacementX)[16] = *reinterpret_cast<float(*)[16]>(GLOBAL_ADDRESS_BY_VERSION(0x6F0748, 0x6F0748, 0x700888));
PLUGIN_VARIABLE float(&CTimeCycle::m_fShadowDisplacementY)[16] = *reinterpret_cast<float(*)[16]>(GLOBAL_ADDRESS_BY_VERSION(0x6F0788, 0x6F0788, 0x7008C8));
PLUGIN_VARIABLE int(&CTimeCycle::m_nDirectionalGreen)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x6F4528, 0x6F4528, 0x704668));
PLUGIN_VARIABLE int(&CTimeCycle::m_nSkyBottomRed)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x6FA960, 0x6FA960, 0x70AAA0));
PLUGIN_VARIABLE int(&CTimeCycle::m_nDirectionalRed)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x6FAB78, 0x6FAB78, 0x70ACB8));
PLUGIN_VARIABLE int(&CTimeCycle::m_nSkyBottomGreen)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x70D6A8, 0x70D6A8, 0x71D7E8));
PLUGIN_VARIABLE int(&CTimeCycle::m_nFluffyCloudsTopRed)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x70F2B0, 0x70F2B0, 0x71F3F0));
PLUGIN_VARIABLE int(&CTimeCycle::m_nFluffyCloudsBottomGreen)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x715AA8, 0x715AA8, 0x725BE8));
PLUGIN_VARIABLE int(&CTimeCycle::m_nLowCloudsRed)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x726770, 0x726770, 0x7368B0));
PLUGIN_VARIABLE short(&CTimeCycle::m_nLightShadowStrength)[24][4] = *reinterpret_cast<short(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x72B0F8, 0x72B0F8, 0x73B238));
PLUGIN_VARIABLE float(&CTimeCycle::m_fShadowFrontY)[16] = *reinterpret_cast<float(*)[16]>(GLOBAL_ADDRESS_BY_VERSION(0x72CE50, 0x72CE50, 0x73CF90));
PLUGIN_VARIABLE float(&CTimeCycle::m_fShadowFrontX)[16] = *reinterpret_cast<float(*)[16]>(GLOBAL_ADDRESS_BY_VERSION(0x72CE90, 0x72CE90, 0x73CFD0));
PLUGIN_VARIABLE int(&CTimeCycle::m_nAmbientBlue)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x72CF88, 0x72CF88, 0x73D0C8));
PLUGIN_VARIABLE int(&CTimeCycle::m_nFluffyCloudsTopGreen)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x72D288, 0x72D288, 0x73D3C8));
PLUGIN_VARIABLE short(&CTimeCycle::m_nTreeShadowStrength)[24][4] = *reinterpret_cast<short(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x733450, 0x733450, 0x743590));
PLUGIN_VARIABLE float(&CTimeCycle::m_fSunSize)[24][4] = *reinterpret_cast<float(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x733510, 0x733510, 0x743650));
PLUGIN_VARIABLE float(&CTimeCycle::m_fBlurAlpha)[24][4] = *reinterpret_cast<float(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x733690, 0x733690, 0x7437D0));
PLUGIN_VARIABLE int(&CTimeCycle::m_nSunCoreBlue)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x773A68, 0x773A68, 0x783BA8));
PLUGIN_VARIABLE float(&CTimeCycle::m_fBlurGreen)[24][4] = *reinterpret_cast<float(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x774C10, 0x774C10, 0x784D50));
PLUGIN_VARIABLE int(&CTimeCycle::m_nDirectionalBlue)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x83CE58, 0x83CE58, 0x84CF98));
PLUGIN_VARIABLE short(&CTimeCycle::m_nShadowStrength)[24][4] = *reinterpret_cast<short(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x83CFD8, 0x83CFD8, 0x84D118));
PLUGIN_VARIABLE float(&CTimeCycle::m_fLightsOnGroundBrightness)[24][4] = *reinterpret_cast<float(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x83D108, 0x83D108, 0x84D248));
PLUGIN_VARIABLE int(&CTimeCycle::m_nSkyBottomBlue)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x83D288, 0x83D288, 0x84D3C8));
PLUGIN_VARIABLE int(&CTimeCycle::m_nSkyTopGreen)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x8460A8, 0x8460A8, 0x8561E8));
PLUGIN_VARIABLE int(&CTimeCycle::m_nAmbientRed)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x86AF78, 0x86AF28, 0x87B068));
PLUGIN_VARIABLE int(&CTimeCycle::m_nFluffyCloudsTopBlue)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x86B108, 0x86B0B8, 0x87B1F8));
PLUGIN_VARIABLE int(&CTimeCycle::m_nSunCoreRed)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x878360, 0x878310, 0x888450));
PLUGIN_VARIABLE float(&CTimeCycle::m_fBlurBlue)[24][4] = *reinterpret_cast<float(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x8784E0, 0x878490, 0x8885D0));
PLUGIN_VARIABLE int(&CTimeCycle::m_nSkyTopBlue)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x87B158, 0x87B108, 0x88B248));
PLUGIN_VARIABLE int(&CTimeCycle::m_nLowCloudsGreen)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x87BF08, 0x87BEB8, 0x88BFF8));
PLUGIN_VARIABLE float(&CTimeCycle::m_fShadowSideY)[16] = *reinterpret_cast<float(*)[16]>(GLOBAL_ADDRESS_BY_VERSION(0x87C6C8, 0x87C678, 0x88C7B8));
PLUGIN_VARIABLE float(&CTimeCycle::m_fShadowSideX)[16] = *reinterpret_cast<float(*)[16]>(GLOBAL_ADDRESS_BY_VERSION(0x87C708, 0x87C6B8, 0x88C7F8));
PLUGIN_VARIABLE float(&CTimeCycle::m_fBlurRed)[24][4] = *reinterpret_cast<float(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x87C7E0, 0x87C790, 0x88C8D0));
PLUGIN_VARIABLE float(&CTimeCycle::m_fSpriteSize)[24][4] = *reinterpret_cast<float(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x87F820, 0x87F7D0, 0x88F910));
PLUGIN_VARIABLE int(&CTimeCycle::m_nLowCloudsBlue)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x87FA10, 0x87F9C0, 0x88FB00));
PLUGIN_VARIABLE int(&CTimeCycle::m_nSkyTopRed)[24][4] = *reinterpret_cast<int(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x87FB90, 0x87FB40, 0x88FC80));
PLUGIN_VARIABLE float(&CTimeCycle::m_fFarClip)[24][4] = *reinterpret_cast<float(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x8804E0, 0x880490, 0x8905D0));
PLUGIN_VARIABLE float(&CTimeCycle::m_fFogStart)[24][4] = *reinterpret_cast<float(*)[24][4]>(GLOBAL_ADDRESS_BY_VERSION(0x8806C8, 0x880678, 0x8907B8));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentSunCoronaBlue = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x880F60, 0x880F10, 0x891050));
PLUGIN_VARIABLE int &CTimeCycle::m_FogReduction = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x880FB8, 0x880F68, 0x8910A8));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentSunCoronaGreen = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x885B54, 0x885B04, 0x895C44));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentFluffyCloudsBottomGreen = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E28B8, 0x8E2868, 0x8F29A8));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentFogColourGreen = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2A60, 0x8E2A10, 0x8F2B50));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentFluffyCloudsBottomRed = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1A38, 0x8F1AEC, 0x901C2C));
PLUGIN_VARIABLE float &CTimeCycle::m_fCurrentSpriteSize = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1AA8, 0x8F1B5C, 0x901C9C));
PLUGIN_VARIABLE float &CTimeCycle::m_fCurrentFogStart = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1AE0, 0x8F1B94, 0x901CD4));
PLUGIN_VARIABLE float &CTimeCycle::m_fCurrentLightsOnGroundBrightness = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F1B60, 0x8F1C14, 0x901D54));
PLUGIN_VARIABLE float &CTimeCycle::m_fCurrentBlurBlue = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F250C, 0x8F25C0, 0x902700));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentSunCoreRed = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2534, 0x8F25E8, 0x902728));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentFluffyCloudsTopRed = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2550, 0x8F2604, 0x902744));
PLUGIN_VARIABLE float &CTimeCycle::m_fCurrentAmbientRed = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F29B4, 0x8F2A68, 0x902BA8));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentSkyTopBlue = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F29B8, 0x8F2A6C, 0x902BAC));
PLUGIN_VARIABLE float &CTimeCycle::m_fCurrentDirectionalRed = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F29D8, 0x8F2A8C, 0x902BCC));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentSkyBottomGreen = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2BD0, 0x8F2C84, 0x902DC4));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentSunCoronaRed = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2C1C, 0x8F2CD0, 0x902E10));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentFluffyCloudsBottomBlue = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F3960, 0x8F3A14, 0x903B54));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentFogColourBlue = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F57EC, 0x8F58A0, 0x9059E0));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentFluffyCloudsTopGreen = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F59CC, 0x8F5A80, 0x905BC0));
PLUGIN_VARIABLE float &CTimeCycle::m_fCurrentFarClip = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F5FD8, 0x8F608C, 0x9061CC));
PLUGIN_VARIABLE float &CTimeCycle::m_fCurrentSpriteBrightness = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F5FDC, 0x8F6090, 0x9061D0));
PLUGIN_VARIABLE float &CTimeCycle::m_fCurrentBlurRed = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F6000, 0x8F61B8, 0x9062F8));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentSkyBottomBlue = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F625C, 0x8F6414, 0x906554));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentSunCoreGreen = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F6264, 0x8F641C, 0x90655C));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentSkyTopRed = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x9403C0, 0x940578, 0x9506B8));
PLUGIN_VARIABLE int &CTimeCycle::m_CurrentStoredValue = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x94057C, 0x940734, 0x950874));
PLUGIN_VARIABLE float &CTimeCycle::m_fCurrentSunSize = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x940588, 0x940740, 0x950880));
PLUGIN_VARIABLE float &CTimeCycle::m_fCurrentDirectionalGreen = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x940594, 0x94074C, 0x95088C));
PLUGIN_VARIABLE float &CTimeCycle::m_fCurrentBlurGreen = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x9405A0, 0x940758, 0x950898));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentFogColourRed = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x940714, 0x9408CC, 0x950A0C));
PLUGIN_VARIABLE float &CTimeCycle::m_fCurrentBlurAlpha = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x940728, 0x9408E0, 0x950A20));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentFluffyCloudsTopBlue = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x941434, 0x9415EC, 0x95172C));
PLUGIN_VARIABLE float &CTimeCycle::m_fCurrentAmbientGreen = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x94144C, 0x941604, 0x951744));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentSunCoreBlue = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x94149C, 0x941654, 0x951794));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentSkyBottomRed = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x9414D0, 0x941688, 0x9517C8));
PLUGIN_VARIABLE float &CTimeCycle::m_fCurrentDirectionalBlue = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x942FAC, 0x943164, 0x9532A4));
PLUGIN_VARIABLE float &CTimeCycle::m_fCurrentAmbientBlue = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x942FC0, 0x943178, 0x9532B8));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentSkyTopGreen = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x943074, 0x94322C, 0x95336C));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentLowCloudsGreen = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x95CB48, 0x95CD00, 0x96CE40));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentLowCloudsRed = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x95CB54, 0x95CD0C, 0x96CE4C));
PLUGIN_VARIABLE int &CTimeCycle::m_nCurrentLowCloudsBlue = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC1C, 0x95CDD4, 0x96CF14));
PLUGIN_VARIABLE short &CTimeCycle::m_nCurrentLightShadowStrength = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC66, 0x95CE1E, 0x96CF5E));
PLUGIN_VARIABLE short &CTimeCycle::m_nCurrentShadowStrength = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC76, 0x95CE2E, 0x96CF6E));
PLUGIN_VARIABLE short &CTimeCycle::m_nCurrentTreeShadowStrength = *reinterpret_cast<short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC86, 0x95CE3E, 0x96CF7E));

int addrof(CTimeCycle::Initialise) = ADDRESS_BY_VERSION(0x4ABAE0, 0x4ABBD0, 0x4ABB60);
int gaddrof(CTimeCycle::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x4ABAE0, 0x4ABBD0, 0x4ABB60);

void CTimeCycle::Initialise() {
    plugin::CallDynGlobal(gaddrof(CTimeCycle::Initialise));
}

int addrof(CTimeCycle::Update) = ADDRESS_BY_VERSION(0x4ABF40, 0x4AC030, 0x4ABFC0);
int gaddrof(CTimeCycle::Update) = GLOBAL_ADDRESS_BY_VERSION(0x4ABF40, 0x4AC030, 0x4ABFC0);

void CTimeCycle::Update() {
    plugin::CallDynGlobal(gaddrof(CTimeCycle::Update));
}
