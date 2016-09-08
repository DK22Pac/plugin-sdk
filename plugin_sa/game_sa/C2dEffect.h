/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"
#include "CVector.h"

enum eEffectType : unsigned __int8
{
	EFFECT_LIGHT,
	EFFECT_PARTICLE,
	EFFECT_PEDS = 3,
	EFFECT_SUN_FLARE,
	EFFECT_FURNITUR,
	EFFECT_ENEX,
	EFFECT_ROADSIGN,
	EFFECT_SLOTMACHINE_WHEEL,
	EFFECT_NAVI_POINT,
	EFFECT_ESCALATOR,
};

#pragma pack(push, 4)
class PLUGIN_API C2dEffect
{
public:
	CVector m_vPosn;
	eEffectType m_type;
};
#pragma pack(pop)

VALIDATE_SIZE(C2dEffect, 0x10);