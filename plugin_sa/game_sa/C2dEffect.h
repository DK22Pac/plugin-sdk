/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVector.h"
#include "CRGBA.h"

enum e2dEffectType {
	EFFECT_LIGHT,
	EFFECT_PARTICLE,
	EFFECT_ATTRACTOR = 3,
	EFFECT_SUN_GLARE,
	EFFECT_FURNITUR,
	EFFECT_ENEX,
	EFFECT_ROADSIGN,
	EFFECT_SLOTMACHINE_WHEEL,
	EFFECT_COVER_POINT,
	EFFECT_ESCALATOR,
};

enum ePedAttractorType {
    PED_ATTRACTOR_ATM            = 0, // Ped uses ATM(at day time only)
    PED_ATTRACTOR_SEAT           = 1, // Ped sits(at day time only)
    PED_ATTRACTOR_STOP           = 2, // Ped stands(at day time only)
    PED_ATTRACTOR_PIZZA          = 3, // Ped stands for few seconds
    PED_ATTRACTOR_SHELTER        = 4, // Ped goes away after spawning, but stands if weather is rainy
    PED_ATTRACTOR_TRIGGER_SCRIPT = 5, // Launches an external script
    PED_ATTRACTOR_LOOK_AT        = 6, // Ped looks at object, then goes away
    PED_ATTRACTOR_SCRIPTED       = 7, // This type is not valid
    PED_ATTRACTOR_PARK           = 8, // Ped lays(at day time only, ped goes away after 6 PM)
    PED_ATTRACTOR_STEP           = 9  // Ped sits on steps
};

struct tEffectLight {
    RwRGBA m_color;
    float m_fCoronaFarClip;
    float m_fPointlightRange;
    float m_fCoronaSize;
    float m_fShadowSize;
    unsigned short m_nFlags;
    unsigned char m_nCoronaFlashType;
    bool m_bCoronaEnableReflection;
    unsigned char m_nCoronaFlareType;
    unsigned char m_nShadowColorMultiplier;
    char m_nShadowZDistance;
    char offsetX;
    char offsetY;
    char offsetZ;
private:
    char _pad2E[2];
public:
    RwTexture *m_pCoronaTex;
    RwTexture *m_pShadowTex;
    int field_38;
    int field_3C;
};
VALIDATE_OFFSET(tEffectLight, m_color, 0x0);
VALIDATE_OFFSET(tEffectLight, m_fCoronaFarClip, 0x4);
VALIDATE_OFFSET(tEffectLight, m_fPointlightRange, 0x8);
VALIDATE_OFFSET(tEffectLight, m_fCoronaSize, 0xC);
VALIDATE_OFFSET(tEffectLight, m_fShadowSize, 0x10);
VALIDATE_OFFSET(tEffectLight, m_nFlags, 0x14);
VALIDATE_OFFSET(tEffectLight, m_nCoronaFlashType, 0x16);
VALIDATE_OFFSET(tEffectLight, m_bCoronaEnableReflection, 0x17);
VALIDATE_OFFSET(tEffectLight, m_nCoronaFlareType, 0x18);
VALIDATE_OFFSET(tEffectLight, m_nShadowColorMultiplier, 0x19);
VALIDATE_OFFSET(tEffectLight, m_nShadowZDistance, 0x1A);
VALIDATE_OFFSET(tEffectLight, offsetX, 0x1B);
VALIDATE_OFFSET(tEffectLight, offsetY, 0x1C);
VALIDATE_OFFSET(tEffectLight, offsetZ, 0x1D);
VALIDATE_OFFSET(tEffectLight, m_pCoronaTex, 0x20);
VALIDATE_OFFSET(tEffectLight, m_pShadowTex, 0x24);
VALIDATE_OFFSET(tEffectLight, field_38, 0x28);
VALIDATE_OFFSET(tEffectLight, field_3C, 0x2C);
VALIDATE_SIZE(tEffectLight, 0x30);

struct tEffectParticle {
    char m_szName[24];
};
VALIDATE_OFFSET(tEffectParticle, m_szName, 0x0);
VALIDATE_SIZE(tEffectParticle, 0x18);

struct tEffectPedAttractor {
    RwV3d m_vecQueueDir;
    RwV3d m_vecUseDir;
    RwV3d m_vecForwardDir;
    unsigned char m_nAttractorType; // see ePedAttractorType
    unsigned char m_nPedExistingProbability;
    char field_36;
    unsigned char m_nFlags;
    char m_szScriptName[8];
};
VALIDATE_OFFSET(tEffectPedAttractor, m_vecQueueDir, 0x0);
VALIDATE_OFFSET(tEffectPedAttractor, m_vecUseDir, 0xC);
VALIDATE_OFFSET(tEffectPedAttractor, m_vecForwardDir, 0x18);
VALIDATE_OFFSET(tEffectPedAttractor, m_nAttractorType, 0x24);
VALIDATE_OFFSET(tEffectPedAttractor, m_nPedExistingProbability, 0x25);
VALIDATE_OFFSET(tEffectPedAttractor, field_36, 0x26);
VALIDATE_OFFSET(tEffectPedAttractor, m_nFlags, 0x27);
VALIDATE_OFFSET(tEffectPedAttractor, m_szScriptName, 0x28);
VALIDATE_SIZE(tEffectPedAttractor, 0x30);

struct tEffectEnEx {
    float m_fEnterAngle;
    RwV3d m_vecSize;
    RwV3d m_vecExitPosn;
    float m_fExitAngle;
    short m_nInteriorId;
    unsigned char m_nFlags1;
    unsigned char m_nSkyColor;
    char m_szInteriorName[8];
    unsigned char m_nTimeOn;
    unsigned char m_nTimeOff;
    unsigned char m_nFlags2;
};
VALIDATE_OFFSET(tEffectEnEx, m_fEnterAngle, 0x0);
VALIDATE_OFFSET(tEffectEnEx, m_vecSize, 0x4);
VALIDATE_OFFSET(tEffectEnEx, m_vecExitPosn, 0x10);
VALIDATE_OFFSET(tEffectEnEx, m_fExitAngle, 0x1C);
VALIDATE_OFFSET(tEffectEnEx, m_nInteriorId, 0x20);
VALIDATE_OFFSET(tEffectEnEx, m_nFlags1, 0x22);
VALIDATE_OFFSET(tEffectEnEx, m_nSkyColor, 0x23);
VALIDATE_OFFSET(tEffectEnEx, m_szInteriorName, 0x24);
VALIDATE_OFFSET(tEffectEnEx, m_nTimeOn, 0x2C);
VALIDATE_OFFSET(tEffectEnEx, m_nTimeOff, 0x2D);
VALIDATE_OFFSET(tEffectEnEx, m_nFlags2, 0x2E);
VALIDATE_SIZE(tEffectEnEx, 0x30);

struct tEffectRoadsign {
    RwV2d m_vecSize;
    float m_afRotation[3];
    unsigned short m_nFlags;
private:
    char _pad26[2];
public:
    char *m_pText;
    RpAtomic *m_pAtomic;
};
VALIDATE_OFFSET(tEffectRoadsign, m_vecSize, 0x0);
VALIDATE_OFFSET(tEffectRoadsign, m_afRotation, 0x8);
VALIDATE_OFFSET(tEffectRoadsign, m_nFlags, 0x14);
VALIDATE_OFFSET(tEffectRoadsign, m_pText, 0x18);
VALIDATE_OFFSET(tEffectRoadsign, m_pAtomic, 0x1C);
VALIDATE_SIZE(tEffectRoadsign, 0x20);

struct tEffectCoverPoint {
    RwV2d m_vecDirection;
    unsigned char m_nType;
private:
    char _pad19[3];
public:
};
VALIDATE_OFFSET(tEffectCoverPoint, m_vecDirection, 0x0);
VALIDATE_OFFSET(tEffectCoverPoint, m_nType, 0x8);
VALIDATE_SIZE(tEffectCoverPoint, 0xC);

struct tEffectEscalator {
    RwV3d m_vecBottom;
    RwV3d m_vecTop;
    RwV3d m_vecEnd;
    unsigned char m_nDirection;
private:
    char _pad35[3];
public:
};
VALIDATE_OFFSET(tEffectEscalator, m_vecBottom, 0x0);
VALIDATE_OFFSET(tEffectEscalator, m_vecTop, 0xC);
VALIDATE_OFFSET(tEffectEscalator, m_vecEnd, 0x18);
VALIDATE_OFFSET(tEffectEscalator, m_nDirection, 0x24);
VALIDATE_SIZE(tEffectEscalator, 0x28);

class PLUGIN_API C2dEffect {
public:
	CVector m_vecPosn;
	unsigned int m_nType; // see e2dEffectType

    union {
        tEffectLight light;
        tEffectParticle particle;
        tEffectPedAttractor pedAttractor;
        tEffectEnEx enEx;
        tEffectRoadsign roadsign;
        tEffectCoverPoint coverPoint;
        tEffectEscalator escalator;
    };
};
VALIDATE_OFFSET(C2dEffect, m_vecPosn, 0x0);
VALIDATE_OFFSET(C2dEffect, m_nType, 0xC);
VALIDATE_OFFSET(C2dEffect, light, 0x10);
VALIDATE_OFFSET(C2dEffect, particle, 0x10);
VALIDATE_OFFSET(C2dEffect, pedAttractor, 0x10);
VALIDATE_OFFSET(C2dEffect, enEx, 0x10);
VALIDATE_OFFSET(C2dEffect, roadsign, 0x10);
VALIDATE_OFFSET(C2dEffect, coverPoint, 0x10);
VALIDATE_OFFSET(C2dEffect, escalator, 0x10);
VALIDATE_SIZE(C2dEffect, 0x40);
