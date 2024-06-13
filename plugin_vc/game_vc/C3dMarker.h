/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CMatrix.h"
#include "CRGBA.h"
#include "RenderWare.h"

class PLUGIN_API C3dMarker {
public:
    CMatrix m_Matrix;
    RpAtomic* m_pAtomic; //!<  rawtype:RpAtomic*
    RpMaterial* m_pMaterial; //!<  rawtype:RpMaterial*
    unsigned short m_nType;
    bool m_bIsUsed;
    bool m_bIsActive;
    unsigned int m_nIdentifier;
    CRGBA m_colour;
    unsigned short m_nPulsePeriod;
    unsigned short m_nRotateRate;
    unsigned int m_nStartTime;
    float m_fPulseFraction;
    float m_fStdSize;
    float m_fSize;
    float m_fBrightness;
    float m_fCameraRange;

    SUPPORTED_10EN_11EN_STEAM void AddMarker(unsigned int nId, unsigned short nType, float fSize, unsigned char bRed, unsigned char bGreen, unsigned char bBlue, unsigned char bAlpha, unsigned int nPulsePeriod, float fPulseFraction, unsigned short nRotateRate);
    SUPPORTED_10EN_11EN_STEAM void Render();

    inline void DeleteMarkerObject() {
        m_nIdentifier = 0;
        m_nStartTime = 0;
        m_bIsUsed = false;
        m_bIsActive = false;
        m_nType = 257;
        
        RwFrame* frame = RpAtomicGetFrame(m_pAtomic);
        RpAtomicDestroy(m_pAtomic);
        RwFrameDestroy(frame);
        m_pAtomic = nullptr;
    }
};

VALIDATE_SIZE(C3dMarker, 0x78);

#include "meta/meta.C3dMarker.h"
