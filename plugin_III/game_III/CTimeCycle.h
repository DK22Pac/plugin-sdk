/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API CTimeCycle {
public:
    SUPPORTED_10EN_11EN_STEAM static int(&m_nSunCoronaRed)[24][4]; // static int m_nSunCoronaRed[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nAmbientGreen)[24][4]; // static int m_nAmbientGreen[24][4]
    SUPPORTED_10EN_11EN_STEAM static CVector(&m_VectorToSun)[16]; // static CVector m_VectorToSun[16]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nSunCoronaBlue)[24][4]; // static int m_nSunCoronaBlue[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nFluffyCloudsBottomRed)[24][4]; // static int m_nFluffyCloudsBottomRed[24][4]
    SUPPORTED_10EN_11EN_STEAM static float(&m_fSpriteBrightness)[24][4]; // static float m_fSpriteBrightness[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nSunCoreGreen)[24][4]; // static int m_nSunCoreGreen[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nFluffyCloudsBottomBlue)[24][4]; // static int m_nFluffyCloudsBottomBlue[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nSunCoronaGreen)[24][4]; // static int m_nSunCoronaGreen[24][4]
    SUPPORTED_10EN_11EN_STEAM static float(&m_fShadowDisplacementX)[16]; // static float m_fShadowDisplacementX[16]
    SUPPORTED_10EN_11EN_STEAM static float(&m_fShadowDisplacementY)[16]; // static float m_fShadowDisplacementY[16]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nDirectionalGreen)[24][4]; // static int m_nDirectionalGreen[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nSkyBottomRed)[24][4]; // static int m_nSkyBottomRed[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nDirectionalRed)[24][4]; // static int m_nDirectionalRed[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nSkyBottomGreen)[24][4]; // static int m_nSkyBottomGreen[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nFluffyCloudsTopRed)[24][4]; // static int m_nFluffyCloudsTopRed[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nFluffyCloudsBottomGreen)[24][4]; // static int m_nFluffyCloudsBottomGreen[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nLowCloudsRed)[24][4]; // static int m_nLowCloudsRed[24][4]
    SUPPORTED_10EN_11EN_STEAM static short(&m_nLightShadowStrength)[24][4]; // static short m_nLightShadowStrength[24][4]
    SUPPORTED_10EN_11EN_STEAM static float(&m_fShadowFrontY)[16]; // static float m_fShadowFrontY[16]
    SUPPORTED_10EN_11EN_STEAM static float(&m_fShadowFrontX)[16]; // static float m_fShadowFrontX[16]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nAmbientBlue)[24][4]; // static int m_nAmbientBlue[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nFluffyCloudsTopGreen)[24][4]; // static int m_nFluffyCloudsTopGreen[24][4]
    SUPPORTED_10EN_11EN_STEAM static short(&m_nTreeShadowStrength)[24][4]; // static short m_nTreeShadowStrength[24][4]
    SUPPORTED_10EN_11EN_STEAM static float(&m_fSunSize)[24][4]; // static float m_fSunSize[24][4]
    SUPPORTED_10EN_11EN_STEAM static float(&m_fBlurAlpha)[24][4]; // static float m_fBlurAlpha[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nSunCoreBlue)[24][4]; // static int m_nSunCoreBlue[24][4]
    SUPPORTED_10EN_11EN_STEAM static float(&m_fBlurGreen)[24][4]; // static float m_fBlurGreen[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nDirectionalBlue)[24][4]; // static int m_nDirectionalBlue[24][4]
    SUPPORTED_10EN_11EN_STEAM static short(&m_nShadowStrength)[24][4]; // static short m_nShadowStrength[24][4]
    SUPPORTED_10EN_11EN_STEAM static float(&m_fLightsOnGroundBrightness)[24][4]; // static float m_fLightsOnGroundBrightness[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nSkyBottomBlue)[24][4]; // static int m_nSkyBottomBlue[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nSkyTopGreen)[24][4]; // static int m_nSkyTopGreen[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nAmbientRed)[24][4]; // static int m_nAmbientRed[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nFluffyCloudsTopBlue)[24][4]; // static int m_nFluffyCloudsTopBlue[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nSunCoreRed)[24][4]; // static int m_nSunCoreRed[24][4]
    SUPPORTED_10EN_11EN_STEAM static float(&m_fBlurBlue)[24][4]; // static float m_fBlurBlue[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nSkyTopBlue)[24][4]; // static int m_nSkyTopBlue[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nLowCloudsGreen)[24][4]; // static int m_nLowCloudsGreen[24][4]
    SUPPORTED_10EN_11EN_STEAM static float(&m_fShadowSideY)[16]; // static float m_fShadowSideY[16]
    SUPPORTED_10EN_11EN_STEAM static float(&m_fShadowSideX)[16]; // static float m_fShadowSideX[16]
    SUPPORTED_10EN_11EN_STEAM static float(&m_fBlurRed)[24][4]; // static float m_fBlurRed[24][4]
    SUPPORTED_10EN_11EN_STEAM static float(&m_fSpriteSize)[24][4]; // static float m_fSpriteSize[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nLowCloudsBlue)[24][4]; // static int m_nLowCloudsBlue[24][4]
    SUPPORTED_10EN_11EN_STEAM static int(&m_nSkyTopRed)[24][4]; // static int m_nSkyTopRed[24][4]
    SUPPORTED_10EN_11EN_STEAM static float(&m_fFarClip)[24][4]; // static float m_fFarClip[24][4]
    SUPPORTED_10EN_11EN_STEAM static float(&m_fFogStart)[24][4]; // static float m_fFogStart[24][4]
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentSunCoronaBlue;
    SUPPORTED_10EN_11EN_STEAM static int &m_FogReduction;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentSunCoronaGreen;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentFluffyCloudsBottomGreen;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentFogColourGreen;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentFluffyCloudsBottomRed;
    SUPPORTED_10EN_11EN_STEAM static float &m_fCurrentSpriteSize;
    SUPPORTED_10EN_11EN_STEAM static float &m_fCurrentFogStart;
    SUPPORTED_10EN_11EN_STEAM static float &m_fCurrentLightsOnGroundBrightness;
    SUPPORTED_10EN_11EN_STEAM static float &m_fCurrentBlurBlue;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentSunCoreRed;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentFluffyCloudsTopRed;
    SUPPORTED_10EN_11EN_STEAM static float &m_fCurrentAmbientRed;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentSkyTopBlue;
    SUPPORTED_10EN_11EN_STEAM static float &m_fCurrentDirectionalRed;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentSkyBottomGreen;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentSunCoronaRed;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentFluffyCloudsBottomBlue;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentFogColourBlue;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentFluffyCloudsTopGreen;
    SUPPORTED_10EN_11EN_STEAM static float &m_fCurrentFarClip;
    SUPPORTED_10EN_11EN_STEAM static float &m_fCurrentSpriteBrightness;
    SUPPORTED_10EN_11EN_STEAM static float &m_fCurrentBlurRed;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentSkyBottomBlue;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentSunCoreGreen;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentSkyTopRed;
    SUPPORTED_10EN_11EN_STEAM static int &m_CurrentStoredValue;
    SUPPORTED_10EN_11EN_STEAM static float &m_fCurrentSunSize;
    SUPPORTED_10EN_11EN_STEAM static float &m_fCurrentDirectionalGreen;
    SUPPORTED_10EN_11EN_STEAM static float &m_fCurrentBlurGreen;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentFogColourRed;
    SUPPORTED_10EN_11EN_STEAM static float &m_fCurrentBlurAlpha;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentFluffyCloudsTopBlue;
    SUPPORTED_10EN_11EN_STEAM static float &m_fCurrentAmbientGreen;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentSunCoreBlue;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentSkyBottomRed;
    SUPPORTED_10EN_11EN_STEAM static float &m_fCurrentDirectionalBlue;
    SUPPORTED_10EN_11EN_STEAM static float &m_fCurrentAmbientBlue;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentSkyTopGreen;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentLowCloudsGreen;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentLowCloudsRed;
    SUPPORTED_10EN_11EN_STEAM static int &m_nCurrentLowCloudsBlue;
    SUPPORTED_10EN_11EN_STEAM static short &m_nCurrentLightShadowStrength;
    SUPPORTED_10EN_11EN_STEAM static short &m_nCurrentShadowStrength;
    SUPPORTED_10EN_11EN_STEAM static short &m_nCurrentTreeShadowStrength;

    SUPPORTED_10EN_11EN_STEAM static void Initialise();
    SUPPORTED_10EN_11EN_STEAM static void Update();
};

#include "meta/meta.CTimeCycle.h"
