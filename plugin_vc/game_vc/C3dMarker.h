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
VALIDATE_OFFSET(C3dMarker, m_Matrix, 0x0);
VALIDATE_OFFSET(C3dMarker, m_pAtomic, 0x48);
VALIDATE_OFFSET(C3dMarker, m_pMaterial, 0x4C);
VALIDATE_OFFSET(C3dMarker, m_nType, 0x50);
VALIDATE_OFFSET(C3dMarker, m_bIsUsed, 0x52);
VALIDATE_OFFSET(C3dMarker, m_bIsActive, 0x53);
VALIDATE_OFFSET(C3dMarker, m_nIdentifier, 0x54);
VALIDATE_OFFSET(C3dMarker, m_colour, 0x58);
VALIDATE_OFFSET(C3dMarker, m_nPulsePeriod, 0x5C);
VALIDATE_OFFSET(C3dMarker, m_nRotateRate, 0x5E);
VALIDATE_OFFSET(C3dMarker, m_nStartTime, 0x60);
VALIDATE_OFFSET(C3dMarker, m_fPulseFraction, 0x64);
VALIDATE_OFFSET(C3dMarker, m_fStdSize, 0x68);
VALIDATE_OFFSET(C3dMarker, m_fSize, 0x6C);
VALIDATE_OFFSET(C3dMarker, m_fBrightness, 0x70);
VALIDATE_OFFSET(C3dMarker, m_fCameraRange, 0x74);
VALIDATE_SIZE(C3dMarker, 0x78);

#include "meta/meta.C3dMarker.h"
