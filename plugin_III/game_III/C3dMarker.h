/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CMatrix.h"
#include "RenderWare.h"
#include "CRGBA.h"

class PLUGIN_API C3dMarker {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(C3dMarker)

public:
    CMatrix m_mMat;
    RpAtomic *m_pAtomic;
    RpMaterial *m_pMaterial;
    unsigned short m_nType;
    bool m_bIsUsed;
    bool m_bMustBeRenderedThisFrame;
    unsigned int m_nIdentifier;
    CRGBA m_colour;
    unsigned short m_nPulsePeriod;
    short m_nRotateRate;
    unsigned int m_nStartTime;
    float m_fPulseFraction;
    float m_fStdSize;
    float m_fSize;
    float m_fBrightness;
    float m_fCameraRange;

    SUPPORTED_10EN_11EN void AddMarker(unsigned int nId, unsigned short nType, float fSize, unsigned char bRed, unsigned char bGreen, unsigned char bBlue, unsigned char bAlpha, unsigned short nPulsePeriod, float fPulseFraction, short nRotateRate);
    SUPPORTED_10EN_11EN void DeleteMarkerObject();
    SUPPORTED_10EN_11EN void Render();
};

SUPPORTED_10EN_11EN RpAtomic *MarkerAtomicCB(RpAtomic *atomic, void *data);

VALIDATE_SIZE(C3dMarker, 0x78);

#include "meta/meta.C3dMarker.h"
