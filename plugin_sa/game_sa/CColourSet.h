/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class PLUGIN_API CColourSet {
public:
    float          m_fAmbientRed;
    float          m_fAmbientGreen;
    float          m_fAmbientBlue;
    float          m_fAmbientRed_Obj;
    float          m_fAmbientGreen_Obj;
    float          m_fAmbientBlue_Obj;
    float          m_fDirectionalRed;
    float          m_fDirectionalGreen;
    float          m_fDirectionalBlue;
    unsigned short m_nSkyTopRed;
    unsigned short m_nSkyTopGreen;
    unsigned short m_nSkyTopBlue;
    unsigned short m_nSkyBottomRed;
    unsigned short m_nSkyBottomGreen;
    unsigned short m_nSkyBottomBlue;
    unsigned short m_nSunCoreRed;
    unsigned short m_nSunCoreGreen;
    unsigned short m_nSunCoreBlue;
    unsigned short m_nSunCoronaRed;
    unsigned short m_nSunCoronaGreen;
    unsigned short m_nSunCoronaBlue;
    float          m_fSunSize;
    float          m_fSpriteSize;
    float          m_fSpriteBrightness;
    unsigned short m_nShadowStrength;
    unsigned short m_nLightShadowStrength;
    unsigned short m_nPoleShadowStrength;
    float          m_fFarClip;
    float          m_fFogStart;
    float          m_fLightsOnGroundBrightness;
    unsigned short m_nLowCloudsRed;
    unsigned short m_nLowCloudsGreen;
    unsigned short m_nLowCloudsBlue;
    unsigned short m_nFluffyCloudsBottomRed;
    unsigned short m_nFluffyCloudsBottomGreen;
    unsigned short m_nFluffyCloudsBottomBlue;
    float          m_fWaterRed;
    float          m_fWaterGreen;
    float          m_fWaterBlue;
    float          m_fWaterAlpha;
    float          m_fPostFx1Red;
    float          m_fPostFx1Green;
    float          m_fPostFx1Blue;
    float          m_fPostFx1Alpha;
    float          m_fPostFx2Red;
    float          m_fPostFx2Green;
    float          m_fPostFx2Blue;
    float          m_fPostFx2Alpha;
    float          m_fCloudAlpha;
    unsigned int   m_nHighLightMinIntensity;
    unsigned short m_nWaterFogAlpha;
    float          m_fIllumination;
    float          m_fLodDistMult;

    //funcs
    CColourSet(int weatherId, int timeId);
    void Interpolate(CColourSet* a, CColourSet* b, float factor_a, float factor_b, bool bIgnoreSky);
};
VALIDATE_OFFSET(CColourSet, m_fAmbientRed, 0x0);
VALIDATE_OFFSET(CColourSet, m_fAmbientGreen, 0x4);
VALIDATE_OFFSET(CColourSet, m_fAmbientBlue, 0x8);
VALIDATE_OFFSET(CColourSet, m_fAmbientRed_Obj, 0xC);
VALIDATE_OFFSET(CColourSet, m_fAmbientGreen_Obj, 0x10);
VALIDATE_OFFSET(CColourSet, m_fAmbientBlue_Obj, 0x14);
VALIDATE_OFFSET(CColourSet, m_fDirectionalRed, 0x18);
VALIDATE_OFFSET(CColourSet, m_fDirectionalGreen, 0x1C);
VALIDATE_OFFSET(CColourSet, m_fDirectionalBlue, 0x20);
VALIDATE_OFFSET(CColourSet, m_nSkyTopRed, 0x24);
VALIDATE_OFFSET(CColourSet, m_nSkyTopGreen, 0x26);
VALIDATE_OFFSET(CColourSet, m_nSkyTopBlue, 0x28);
VALIDATE_OFFSET(CColourSet, m_nSkyBottomRed, 0x2A);
VALIDATE_OFFSET(CColourSet, m_nSkyBottomGreen, 0x2C);
VALIDATE_OFFSET(CColourSet, m_nSkyBottomBlue, 0x2E);
VALIDATE_OFFSET(CColourSet, m_nSunCoreRed, 0x30);
VALIDATE_OFFSET(CColourSet, m_nSunCoreGreen, 0x32);
VALIDATE_OFFSET(CColourSet, m_nSunCoreBlue, 0x34);
VALIDATE_OFFSET(CColourSet, m_nSunCoronaRed, 0x36);
VALIDATE_OFFSET(CColourSet, m_nSunCoronaGreen, 0x38);
VALIDATE_OFFSET(CColourSet, m_nSunCoronaBlue, 0x3A);
VALIDATE_OFFSET(CColourSet, m_fSunSize, 0x3C);
VALIDATE_OFFSET(CColourSet, m_fSpriteSize, 0x40);
VALIDATE_OFFSET(CColourSet, m_fSpriteBrightness, 0x44);
VALIDATE_OFFSET(CColourSet, m_nShadowStrength, 0x48);
VALIDATE_OFFSET(CColourSet, m_nLightShadowStrength, 0x4A);
VALIDATE_OFFSET(CColourSet, m_nPoleShadowStrength, 0x4C);
VALIDATE_OFFSET(CColourSet, m_fFarClip, 0x50);
VALIDATE_OFFSET(CColourSet, m_fFogStart, 0x54);
VALIDATE_OFFSET(CColourSet, m_fLightsOnGroundBrightness, 0x58);
VALIDATE_OFFSET(CColourSet, m_nLowCloudsRed, 0x5C);
VALIDATE_OFFSET(CColourSet, m_nLowCloudsGreen, 0x5E);
VALIDATE_OFFSET(CColourSet, m_nLowCloudsBlue, 0x60);
VALIDATE_OFFSET(CColourSet, m_nFluffyCloudsBottomRed, 0x62);
VALIDATE_OFFSET(CColourSet, m_nFluffyCloudsBottomGreen, 0x64);
VALIDATE_OFFSET(CColourSet, m_nFluffyCloudsBottomBlue, 0x66);
VALIDATE_OFFSET(CColourSet, m_fWaterRed, 0x68);
VALIDATE_OFFSET(CColourSet, m_fWaterGreen, 0x6C);
VALIDATE_OFFSET(CColourSet, m_fWaterBlue, 0x70);
VALIDATE_OFFSET(CColourSet, m_fWaterAlpha, 0x74);
VALIDATE_OFFSET(CColourSet, m_fPostFx1Red, 0x78);
VALIDATE_OFFSET(CColourSet, m_fPostFx1Green, 0x7C);
VALIDATE_OFFSET(CColourSet, m_fPostFx1Blue, 0x80);
VALIDATE_OFFSET(CColourSet, m_fPostFx1Alpha, 0x84);
VALIDATE_OFFSET(CColourSet, m_fPostFx2Red, 0x88);
VALIDATE_OFFSET(CColourSet, m_fPostFx2Green, 0x8C);
VALIDATE_OFFSET(CColourSet, m_fPostFx2Blue, 0x90);
VALIDATE_OFFSET(CColourSet, m_fPostFx2Alpha, 0x94);
VALIDATE_OFFSET(CColourSet, m_fCloudAlpha, 0x98);
VALIDATE_OFFSET(CColourSet, m_nHighLightMinIntensity, 0x9C);
VALIDATE_OFFSET(CColourSet, m_nWaterFogAlpha, 0xA0);
VALIDATE_OFFSET(CColourSet, m_fIllumination, 0xA4);
VALIDATE_OFFSET(CColourSet, m_fLodDistMult, 0xA8);
VALIDATE_SIZE(CColourSet, 0xAC);
