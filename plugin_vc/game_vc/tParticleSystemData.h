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
VALIDATE_OFFSET(tParticleSystemData, m_nId, 0x0);
VALIDATE_OFFSET(tParticleSystemData, m_szName, 0x4);
VALIDATE_OFFSET(tParticleSystemData, m_fParticleCreateRange, 0x18);
VALIDATE_OFFSET(tParticleSystemData, m_fDefaultInitialRadius, 0x1C);
VALIDATE_OFFSET(tParticleSystemData, m_fExpansionRate, 0x20);
VALIDATE_OFFSET(tParticleSystemData, m_nZRotationInitialAngle, 0x24);
VALIDATE_OFFSET(tParticleSystemData, m_nZRotationAngleChangeAmount, 0x26);
VALIDATE_OFFSET(tParticleSystemData, m_nZRotationChangeTime, 0x28);
VALIDATE_OFFSET(tParticleSystemData, m_nZRadiusChangeTime, 0x2A);
VALIDATE_OFFSET(tParticleSystemData, m_fInitialZRadius, 0x2C);
VALIDATE_OFFSET(tParticleSystemData, m_fZRadiusChangeAmount, 0x30);
VALIDATE_OFFSET(tParticleSystemData, m_nFadeToBlackFadeTime, 0x34);
VALIDATE_OFFSET(tParticleSystemData, m_nFadeToBlackInitialIntensity, 0x36);
VALIDATE_OFFSET(tParticleSystemData, m_nFadeToBlackFadeAmount, 0x38);
VALIDATE_OFFSET(tParticleSystemData, m_nFadeAlphaInitialIntensity, 0x3A);
VALIDATE_OFFSET(tParticleSystemData, m_nFadeAlphaFadeTime, 0x3C);
VALIDATE_OFFSET(tParticleSystemData, m_nFadeAlphaFadeAmount, 0x3E);
VALIDATE_OFFSET(tParticleSystemData, m_nStartAnimationFrame, 0x40);
VALIDATE_OFFSET(tParticleSystemData, m_nFinalAnimationFrame, 0x41);
VALIDATE_OFFSET(tParticleSystemData, m_nAnimationSpeed, 0x42);
VALIDATE_OFFSET(tParticleSystemData, m_nRotationSpeed, 0x44);
VALIDATE_OFFSET(tParticleSystemData, m_fGravitationAcceleration, 0x48);
VALIDATE_OFFSET(tParticleSystemData, m_nDragFrictionDeceleration, 0x4C);
VALIDATE_OFFSET(tParticleSystemData, m_nDefaultLifeSpan, 0x50);
VALIDATE_OFFSET(tParticleSystemData, m_fPositionRandomError, 0x54);
VALIDATE_OFFSET(tParticleSystemData, m_fVelocityRandomError, 0x58);
VALIDATE_OFFSET(tParticleSystemData, m_fExpansionRateError, 0x5C);
VALIDATE_OFFSET(tParticleSystemData, m_nRotationRateError, 0x60);
VALIDATE_OFFSET(tParticleSystemData, m_nLifeSpanErrorShape, 0x64);
VALIDATE_OFFSET(tParticleSystemData, m_fTrailLengthMultiplier, 0x68);
VALIDATE_OFFSET(tParticleSystemData, m_nFlags, 0x6C);
VALIDATE_OFFSET(tParticleSystemData, m_nRed, 0x70);
VALIDATE_OFFSET(tParticleSystemData, m_nGreen, 0x71);
VALIDATE_OFFSET(tParticleSystemData, m_nBlue, 0x72);
VALIDATE_OFFSET(tParticleSystemData, m_nAlpha, 0x73);
VALIDATE_OFFSET(tParticleSystemData, m_nInitialColorVariation, 0x74);
VALIDATE_OFFSET(tParticleSystemData, m_nFadeDestRed, 0x75);
VALIDATE_OFFSET(tParticleSystemData, m_nFadeDestGreen, 0x76);
VALIDATE_OFFSET(tParticleSystemData, m_nFadeDestBlue, 0x77);
VALIDATE_OFFSET(tParticleSystemData, field_78, 0x78);
VALIDATE_OFFSET(tParticleSystemData, m_nColorFadeTime, 0x7C);
VALIDATE_OFFSET(tParticleSystemData, m_fTextureStretchValueX, 0x80);
VALIDATE_OFFSET(tParticleSystemData, m_fTextureStretchValueY, 0x84);
VALIDATE_OFFSET(tParticleSystemData, m_fWindFactor, 0x88);
VALIDATE_OFFSET(tParticleSystemData, m_pRaster, 0x8C);
VALIDATE_OFFSET(tParticleSystemData, field_90, 0x90);
VALIDATE_SIZE(tParticleSystemData, 0x94);
