/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "C3dMarker.h"
#include "RenderWare.h"

class PLUGIN_API C3dMarkers {
public:
    SUPPORTED_10EN_11EN static C3dMarker(&m_aMarkerArray)[32]; // static C3dMarker m_aMarkerArray[32]
    SUPPORTED_10EN_11EN static RpClump *(&m_pRpClumpArray)[5]; // static RpClump *m_pRpClumpArray[5]
    SUPPORTED_10EN_11EN static unsigned int &NumActiveMarkers;

    SUPPORTED_10EN_11EN static void Init();
    SUPPORTED_10EN_11EN static void PlaceMarker(unsigned int nId, unsigned short nType, CVector &point, float fSize, unsigned char bRed, unsigned char bGreen, unsigned char bBlue, unsigned char bAlpha, unsigned short nPulsePeriod, float fPulseFraction, short nRotateRate);
    SUPPORTED_10EN_11EN static void PlaceMarkerSet(unsigned int nId, unsigned short nType, CVector &point, float fSize, unsigned char bRed, unsigned char bGreen, unsigned char bBlue, unsigned char bAlpha, unsigned short nPulsePeriod, float fPulseFraction, short nRotateRate);
    SUPPORTED_10EN_11EN static void Render();
    SUPPORTED_10EN_11EN static void Shutdown();
};

#include "meta/meta.C3dMarkers.h"
