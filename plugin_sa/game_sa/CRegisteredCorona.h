/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CVector.h"
#include "RenderWare.h"
#include "CRGBA.h"
#include "CEntity.h"

enum eCoronaType
{
	CORONATYPE_SHINYSTAR,
	CORONATYPE_HEADLIGHT,
	CORONATYPE_MOON,
	CORONATYPE_REFLECTION,
	CORONATYPE_HEADLIGHTLINE,
	CORONATYPE_RING_B = 9
};

class CRegisteredCorona {
public:
	CVector m_vPosn;
	unsigned int m_dwId;
	RwTexture *m_pTexture;
	float m_fSize;
	float m_fAngle; // left from III&VC
	float m_fFarClip;
	float m_fNearClip;
	float m_fHeightAboveGround;
	float m_fFadeSpeed;
	CRGBA m_Color;
	unsigned char m_nFadeState;
	unsigned char m_bRegisteredThisFrame;
	unsigned char m_nFlareType;
	unsigned char m_bUsesReflection;
	unsigned char m_bCheckObstacles : 1;
	unsigned char m_bOffScreen : 1;
	unsigned char m_bJustCreated;
	unsigned char m_bFlashWhileFading : 1;
	unsigned char m_bOnlyFromBelow : 1;
	unsigned char m_bReflectionDelay : 1;
	unsigned char m_bDrawWithWhiteCore : 1;
	unsigned char m_bAttached : 1;
	CEntity *m_pAttachedTo;

	void Update();
};

VALIDATE_SIZE(CRegisteredCorona, 0x3C);