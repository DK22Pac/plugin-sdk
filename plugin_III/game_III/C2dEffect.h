/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CRGBA.h"
#include "RenderWare.h"

enum PLUGIN_API e2dEffectType : unsigned char {
    EFFECT_LIGHT = 0,
    EFFECT_PARTICLE = 1,
    EFFECT_ATTRACTOR = 2
};

enum PLUGIN_API eAttractorType : unsigned char {
    ATTRACTORTYPE_ICECREAM = 0,
    ATTRACTORTYPE_STARE = 1
};

enum PLUGIN_API eLightFlags : unsigned char {
    LIGHTFLAG_LOSCHECK = 1,
    LIGHTFLAG_FOG_NORMAL = 2, //!< can have light and fog
    LIGHTFLAG_FOG_ALWAYS = 4, //!< fog only
    LIGHTFLAG_FOG = 6
};

enum PLUGIN_API eLightType : unsigned char {
    LIGHT_ON = 0,
    LIGHT_ON_NIGHT = 1,
    LIGHT_FLICKER = 2,
    LIGHT_FLICKER_NIGHT = 3,
    LIGHT_FLASH1 = 4,
    LIGHT_FLASH1_NIGHT = 5,
    LIGHT_FLASH2 = 6,
    LIGHT_FLASH2_NIGHT = 7,
    LIGHT_FLASH3 = 8,
    LIGHT_FLASH3_NIGHT = 9,
    LIGHT_RANDOM_FLICKER = 10,
    LIGHT_RANDOM_FLICKER_NIGHT = 11,
    LIGHT_SPECIAL = 12,
    LIGHT_BRIDGE_FLASH1 = 13,
    LIGHT_BRIDGE_FLASH2 = 14
};

struct PLUGIN_API tEffectParticle {
    int m_nParticleType;
    CVector m_vecDir;
    float m_fScale;
};
VALIDATE_OFFSET(tEffectParticle, m_nParticleType, 0x0);
VALIDATE_OFFSET(tEffectParticle, m_vecDir, 0x4);
VALIDATE_OFFSET(tEffectParticle, m_fScale, 0x10);
VALIDATE_SIZE(tEffectParticle, 0x14);

struct PLUGIN_API tEffectLight {
    float m_fDist;
    float m_fPointlightRange;
    float m_fCoronaSize;
    float m_fShadowSize;
    eLightType m_nCoronaFlashType;
    bool m_bCoronaEnableReflection;
    unsigned char m_nCoronaFlareType;
    unsigned char m_nShadowColorMultiplier;
    eLightFlags m_nFlags;
    RwTexture *m_pCoronaTex;
    RwTexture *m_pShadowTex;
};
VALIDATE_OFFSET(tEffectLight, m_fDist, 0x0);
VALIDATE_OFFSET(tEffectLight, m_fPointlightRange, 0x4);
VALIDATE_OFFSET(tEffectLight, m_fCoronaSize, 0x8);
VALIDATE_OFFSET(tEffectLight, m_fShadowSize, 0xC);
VALIDATE_OFFSET(tEffectLight, m_nCoronaFlashType, 0x10);
VALIDATE_OFFSET(tEffectLight, m_bCoronaEnableReflection, 0x11);
VALIDATE_OFFSET(tEffectLight, m_nCoronaFlareType, 0x12);
VALIDATE_OFFSET(tEffectLight, m_nShadowColorMultiplier, 0x13);
VALIDATE_OFFSET(tEffectLight, m_nFlags, 0x14);
VALIDATE_OFFSET(tEffectLight, m_pCoronaTex, 0x18);
VALIDATE_OFFSET(tEffectLight, m_pShadowTex, 0x1C);
VALIDATE_SIZE(tEffectLight, 0x20);

struct PLUGIN_API tEffectAttractor {
    CVector m_vecDir;
    eAttractorType m_nAttractorType;
    unsigned char m_nProbability;
};
VALIDATE_OFFSET(tEffectAttractor, m_vecDir, 0x0);
VALIDATE_OFFSET(tEffectAttractor, m_nAttractorType, 0xC);
VALIDATE_OFFSET(tEffectAttractor, m_nProbability, 0xD);
VALIDATE_SIZE(tEffectAttractor, 0x10);

class PLUGIN_API C2dEffect {
public:
    CVector m_vecPosn;
    CRGBA m_color;
    e2dEffectType m_nType;
    union {
        tEffectLight m_light;
        tEffectParticle m_particle;
        tEffectAttractor m_attractor;
    };

    SUPPORTED_10EN_11EN_STEAM void Shutdown();
};
VALIDATE_OFFSET(C2dEffect, m_vecPosn, 0x0);
VALIDATE_OFFSET(C2dEffect, m_color, 0xC);
VALIDATE_OFFSET(C2dEffect, m_nType, 0x10);
VALIDATE_OFFSET(C2dEffect, m_light, 0x14);
VALIDATE_OFFSET(C2dEffect, m_particle, 0x14);
VALIDATE_OFFSET(C2dEffect, m_attractor, 0x14);
VALIDATE_SIZE(C2dEffect, 0x34);

#include "meta/meta.C2dEffect.h"
