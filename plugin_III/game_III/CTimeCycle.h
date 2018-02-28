/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class CTimeCycle {
public:

    //variables
    static int &m_CurrentStoredValue;
    static int &m_FogReduction;
    static CVector &m_VectorToSun;
    static float &m_fCurrentFarClip;
    static float &m_fShadowDisplacementX;
    static float &m_fShadowDisplacementY;
    static float &m_fShadowFrontX;
    static float &m_fShadowFrontY;
    static float &m_fShadowSideX;
    static float &m_fShadowSideY;
    static int &m_nCurrentFogColourBlue;
    static int &m_nCurrentFogColourGreen;
    static int &m_nCurrentFogColourRed;
    static short &m_nCurrentLightShadowStrength;
    static short &m_nCurrentShadowStrength;
    static int &m_nCurrentSkyBottomBlue;
    static int &m_nCurrentSkyBottomGreen;
    static int &m_nCurrentSkyBottomRed;
    static int &m_nCurrentSkyTopBlue;
    static int &m_nCurrentSkyTopGreen;
    static int &m_nCurrentSkyTopRed;

    //funcs
    static void Initialise();
    static void Update();
};