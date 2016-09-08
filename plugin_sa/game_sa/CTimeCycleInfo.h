/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"

#pragma pack(push, 4)
class PLUGIN_API CTimeCycleInfo 
{
public:
	float            m_fCurrentAmbientRed;
	float            m_fCurrentAmbientGreen;
	float            m_fCurrentAmbientBlue;
	float            m_fCurrentAmbientObjRed;
	float            m_fCurrentAmbientObjGreen;
	float            m_fCurrentAmbientObjBlue;
	unsigned __int32 m_fCurrentDirectionalRed;
	unsigned __int32 m_fCurrentDirectionalGreen;
	unsigned __int32 m_fCurrentDirectionalBlue;
	unsigned __int16 m_nCurrentSkyTopRed;
	unsigned __int16 m_nCurrentSkyTopGreen;
	unsigned __int16 m_nCurrentSkyTopBlue;
	unsigned __int16 m_nCurrentSkyBottomRed;
	unsigned __int16 m_nCurrentSkyBottomGreen;
	unsigned __int16 m_nCurrentSkyBottomBlue;
	unsigned __int16 m_nCurrentSunCoreRed;
	unsigned __int16 m_nCurrentSunCoreGreen;
	unsigned __int16 m_nCurrentSunCoreBlue;
	unsigned __int16 m_nCurrentSunCoronaRed;
	unsigned __int16 m_nCurrentSunCoronaGreen;
	unsigned __int16 m_nCurrentSunCoronaBlue;
	float            m_fCurrentSunSize;
	float            m_fCurrentSpriteSize;
	float            m_fCurrentSpriteBrightness;
	unsigned __int16 m_nCurrentShadowStrength;
	unsigned __int16 m_nCurrentLightShadowStrength;
	unsigned __int16 m_nCurrentPoleShadowStrength;
	float            m_fCurrentFarClip;
	float            m_fCurrentFogStart;
	float            m_fCurrentLightsOnGroundBrightness;
	unsigned __int16 m_nCurrentLowCloudsRed;
	unsigned __int16 m_nCurrentLowCloudsGreen;
	unsigned __int16 m_nCurrentLowCloudsBlue;
	unsigned __int16 m_nCurrentFluffyCloudsBottomRed;
	unsigned __int16 m_nCurrentFluffyCloudsBottomGreen;
	unsigned __int16 m_nCurrentFluffyCloudsBottomBlue;
	float            m_fCurrentWaterRed;
	float            m_fCurrentWaterGreen;
	float            m_fCurrentWaterBlue;
	float            m_fCurrentWaterAlpha;
	float            m_fRGB1_R;
	float            m_fRGB1_G;
	float            m_fRGB1_B;
	float            m_fAlpha1;
	float            m_fRGB2_R;
	float            m_fRGB2_G;
	float            m_fRGB2_B;
	float            m_fAlpha2;
	float            m_fCloudAlpha1;
	unsigned __int32 m_dwCloudAlpha2;
	unsigned __int16 m_wCloudAlpha3;
	float            m_fIllumination;
	float field_A8;
};
#pragma pack(pop)

VALIDATE_SIZE(CTimeCycleInfo, 0xAC);

extern PLUGIN_API CTimeCycleInfo *TimeCycleInfo;