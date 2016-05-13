#pragma once

#include "plbase/PluginBase.h"
#include "CVector.h"
#include "RenderWareTypes.h"
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

#pragma pack(push,4)
class PLUGIN_API CRegisteredCorona
{
public:
	CVector m_vPosn;
	unsigned __int32 m_dwId;
	RwTexture *m_pTexture;
	float m_fSize;
	float m_fAngle; // left from III&VC
	float m_fFarClip;
	float m_fNearClip;
	float m_fHeightAboveGround;
	float m_fFadeSpeed;
	CRGBA m_Color;
	unsigned __int8 m_nFadeState;
	unsigned __int8 m_bRegisteredThisFrame;
	unsigned __int8 m_nFlareType;
	unsigned __int8 m_bUsesReflection;
	unsigned __int8 m_bCheckObstacles : 1;
	unsigned __int8 m_bOffScreen : 1;
	unsigned __int8 m_bJustCreated;
	unsigned __int8 m_bFlashWhileFading : 1;
	unsigned __int8 m_bOnlyFromBelow : 1;
	unsigned __int8 m_bReflectionDelay : 1;
	unsigned __int8 m_bDrawWithWhiteCore : 1;
	unsigned __int8 m_bAttached : 1;
	CEntity *m_pAttachedTo;

	void Update();
};
#pragma pack(pop)

VALIDATE_SIZE(CRegisteredCorona, 0x3C);