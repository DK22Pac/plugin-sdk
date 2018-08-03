/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

class CParticle;

enum PLUGIN_API eParticleSystemDataFlags {
    PSYSTEM_Z_CHECK_FIRST = 0x1,
    PSYSTEM_Z_CHECK_STEP = 0x2,
    PSYSTEM_DRAW_OPAQUE = 0x4,
    PSYSTEM_SCREEN_TRAIL = 0x8,
    PSYSTEM_SPEED_TRAIL = 0x10,
    PSYSTEM_RAND_VERT_V = 0x20,
    PSYSTEM_CYCLE_ANIM = 0x40,
    PSYSTEM_DRAW_DARK = 0x80,
    PSYSTEM_VERT_TRAIL = 0x100,
    PSYSTEM_DRAW_TOP_2_D = 0x400,
    PSYSTEM_CLIP_OUT_2_D = 0x800,
    PSYSTEM_Z_CHECK_BUMP = 0x1000,
    PSYSTEM_Z_CHECK_BUMP_FIRST = 0x2000
};

struct PLUGIN_API tParticleSystemData {
    unsigned int m_nId;
    char m_szName[20];
    float m_fParticleCreateRange;
    float m_fDefaultInitialRadius;
    float m_fExpansionRate;
    unsigned short m_nZRotationInitialAngle;
    short m_nZRotationAngleChangeAmount;
    unsigned short m_nZRotationChangeTime;
    unsigned short m_nZRadiusChangeTime;
    float m_fInitialZRadius;
    float m_fZRadiusChangeAmount;
    unsigned short m_nFadeToBlackFadeTime;
    unsigned char m_nFadeToBlackInitialIntensity;
private:
    char _pad37;
public:
    short m_nFadeToBlackFadeAmount;
    unsigned char m_nFadeAlphaInitialIntensity;
private:
    char _pad3B;
public:
    unsigned short m_nFadeAlphaFadeTime;
    short m_nFadeAlphaFadeAmount;
    unsigned char m_nStartAnimationFrame;
    unsigned char m_nFinalAnimationFrame;
    unsigned short m_nAnimationSpeed;
    unsigned short m_nRotationSpeed;
private:
    char _pad46[2];
public:
    float m_fGravitationAcceleration;
    unsigned int m_nDragFrictionDeceleration;
    unsigned int m_nDefaultLifeSpan;
    float m_fPositionRandomError;
    float m_fVelocityRandomError;
    float m_fExpansionRateError;
    unsigned int m_nRotationRateError;
    unsigned int m_nLifeSpanErrorShape;
    float m_fTrailLengthMultiplier;
    eParticleSystemDataFlags m_nFlags; //!<  isbitfield:true
    unsigned char m_nRed;
    unsigned char m_nGreen;
    unsigned char m_nBlue;
    unsigned char m_nAlpha;
    unsigned char m_nInitialColorVariation;
    unsigned char m_nFadeDestRed;
    unsigned char m_nFadeDestGreen;
    unsigned char m_nFadeDestBlue;
    int field_78;
    unsigned int m_nColorFadeTime;
    float m_fTextureStretchValueX;
    float m_fTextureStretchValueY;
    float m_fWindFactor;
    RwRaster *m_pRaster;
    CParticle *field_90;
};

VALIDATE_SIZE(tParticleSystemData, 0x94);
