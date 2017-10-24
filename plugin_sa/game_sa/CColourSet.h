/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"

#pragma pack(push, 4)
class PLUGIN_API CColourSet 
{
public:
	float            m_fAmbientRed;
	float            m_fAmbientGreen;
	float            m_fAmbientBlue;
	float            m_fAmbientRed_Obj;
	float            m_fAmbientGreen_Obj;
	float			 m_fAmbientBlue_Obj;
	float			 m_fDirectionalRed;
	float			 m_fDirectionalGreen;
	float			 m_fDirectionalBlue;
	unsigned __int16 m_nSkyTopRed;
	unsigned __int16 m_nSkyTopGreen;
	unsigned __int16 m_nSkyTopBlue;
	unsigned __int16 m_nSkyBottomRed;
	unsigned __int16 m_nSkyBottomGreen;
	unsigned __int16 m_nSkyBottomBlue;
	unsigned __int16 m_nSunCoreRed;
	unsigned __int16 m_nSunCoreGreen;
	unsigned __int16 m_nSunCoreBlue;
	unsigned __int16 m_nSunCoronaRed;
	unsigned __int16 m_nSunCoronaGreen;
	unsigned __int16 m_nSunCoronaBlue;
	float            m_fSunSize;
	float            m_fSpriteSize;
	float            m_fSpriteBrightness;
	unsigned __int16 m_nShadowStrength;
	unsigned __int16 m_nLightShadowStrength;
	unsigned __int16 m_nPoleShadowStrength;
	float            m_fFarClip;
	float            m_fFogStart;
	float            m_fLightsOnGroundBrightness;
	unsigned __int16 m_nLowCloudsRed;
	unsigned __int16 m_nLowCloudsGreen;
	unsigned __int16 m_nLowCloudsBlue;
	unsigned __int16 m_nFluffyCloudsBottomRed;
	unsigned __int16 m_nFluffyCloudsBottomGreen;
	unsigned __int16 m_nFluffyCloudsBottomBlue;
	float            m_fWaterRed;
	float            m_fWaterGreen;
	float            m_fWaterBlue;
	float            m_fWaterAlpha;
	float            m_fPostFx1Red;
	float            m_fPostFx1Green;
	float            m_fPostFx1Blue;
	float            m_fPostFx1Alpha;
	float            m_fPostFx2Red;
	float            m_fPostFx2Green;
	float            m_fPostFx2Blue;
	float            m_fPostFx2Alpha;
	float            m_fCloudAlpha;
	unsigned __int32 m_nHighLightMinIntensity;
	unsigned __int16 m_nWaterFogAlpha;
	float            m_fIllumination;
	float m_fLodDistMult;
	
	//funcs
    CColourSet(int weatherId, int timeId);
    void Interpolate(CColourSet* a, CColourSet* b, float factor_a, float factor_b, bool bIgnoreSky);

};
#pragma pack(pop)

VALIDATE_SIZE(CColourSet, 0xAC);
