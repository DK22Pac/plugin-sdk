/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "tParticleType.h"

class CParticle;

struct tParticleSystemData {
    unsigned int   m_nType; // see tParticleType
    char           m_szName[20]; // Particle Type Name (max 20 chars)
    float          m_fParticleCreateRange; // (in meters: 0=no check); if particles are created enough far away from camera, they are deleted (not added to particle system);
    float          m_fDefaultInitialRadius; // Default Initial Radius (float)
    float          m_fExpansionRate; // Expansion Rate	(float)
    unsigned short m_nZRotationInitialAngle; // "Z Rotation" Initial Angle (0-1023)
    signed short   m_nZRotationAngleChangeAmount; // "Z Rotation" Angle Change Amount
    unsigned short m_nZRotationChangeTime; // "Z Rotation" Change Time (time between steps in frames)
    unsigned short m_nZRadiusChangeTime; // Z Radius Change Time (time between steps in frames)
    float          m_fInitialZRadius; // Initial Z Radius
    float          m_fZRadiusChangeAmount; // Z Radius Change Amount
    unsigned short m_nFadeToBlackTime; // Color "Fade-to-Black" Fade Time (time between fade steps in frames)
    signed short   m_nFadeToBlackAmount; // Color "Fade-to-Black" Fade Amount (-255 to 255)  can get brighter or dimmer
    unsigned char  m_nFadeToBlackInitialIntensity; // Color "Fade-to-Black" Initial Intensity (0-255)
    unsigned char  m_nFadeAlphaInitialIntensity; // "Fade Alpha" Initial Intensity (0-255) 
    unsigned short m_nFadeAlphaTime; // "Fade Alpha" Fade Time (time between fade steps in frames)
    signed short   m_nFadeAlphaAmount; // "Fade Alpha" Fade Amount
    unsigned short m_nStartAnimationFrame; // Start Animation Frame ( 0 -> )
    unsigned short m_nFinalAnimationFrame; // Final Animation Frame ( H -> )
    unsigned short m_nAnimationSpeed; // Animation Speed (0=no animation)(time between steps msec)
    unsigned short m_nRotationSpeed; // Rotation Speed (0=None,i-deg/frame)
private:
    char _pad46[2];
public:
    float          m_fGravitationalAcceleration; // Gravitational Acceleration (0=none, float)
    int            m_nFrictionDecceleration; // Drag/Friction Decceleration (int: 0=none, 50=0.50, 80=0.80, 90=0.90, 95=0.95, 96=0.96, 99=0.99)
    unsigned int   m_nDefaultLifeSpan; // Default Life-Span of Particle (msec)
    float          m_fPositionRandomError; // Position Random Error	[position += (+/-)rand(a)]
    float          m_fVelocityRandomError; // Velocity Random Error	[velocity += (+/-)rand(b)]
    float          m_fExpansionRateError; // Expansion Rate Error	[exp_rate += (+)rand(c)]
    int            m_nRotationRateError; // Rotation Rate Error		[rot_speed = (+/-)rand(d)]
    int            m_nLifeSpanErrorShape; // Life-Span Error Shape	[shape distribution, e=0->all at default, e->Inf then shape->0] (max=255!!)
    float          m_fTrailLengthMultiplier; // Trail Length Multiplier [length *= (float) multiplier] (only used if trail flag active)
    struct {
        unsigned int bZCheckFirst : 1;
        unsigned int bZCheckStep : 1;
        unsigned int bDrawOpaque : 1;
        unsigned int bScreenTrail : 1;
        unsigned int bSpeedTrail : 1;
        unsigned int bRandVertV : 1;
        unsigned int bCycleAnim : 1;
        unsigned int bDrawDark : 1;
        unsigned int bVertTrail : 1;
        unsigned int b10 : 1;
        unsigned int bDrawTop2D : 1;
        unsigned int bClipOut2D : 1;
        unsigned int bZCheckBump : 1;
        unsigned int bZCheckBumpFirst : 1;
    } m_nFlags;
    RwRGBA         m_renderColor; // Render Colouring (r,g,b) (0-255)
    unsigned char  m_nInitialColorVariation; // Initial Color Variation (for r,g,b only, in %) (0-100); (i.e.Color = (100, 100, 100) and CV = 20, then v = random(-20, 20), real_color = (100 + v, 100 + v, 100 + v));
    RwRGBA         m_fadeDestinationColor; // Fade Destination Color (r,g,b) (0-255)
private:
    char _pad79[3];
public:
    unsigned int   m_nColorFadeTime; // Color Fade Time for renderColor->fadeDestinationColor, (0 for none);
    RwTexture     *m_pTexture; // rendering texture
    CParticle     *m_pParticles; // created particles list
};

VALIDATE_SIZE(tParticleSystemData, 0x88);