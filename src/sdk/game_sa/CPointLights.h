#pragma once

#include <plugin/plugin.h>
#include "CVector.h"

#define MAX_POINTLIGHTS 32

#pragma pack(push, 4)
struct PLUGIN_API tPointLight
{
public:
	CVector m_vPosn;
	CVector m_vDirection;
    float m_fRange;
    float m_fColorRed;
    float m_fColorGreen;
    float m_fColorBlue;
    class CEntity *m_pEntityToLight;
    unsigned __int8 m_nType;
    unsigned __int8 m_nFogType;
    unsigned __int8 m_bGenerateShadows;
};
#pragma pack(pop)

VALIDATE_SIZE(tPointLight, 0x30);

class PLUGIN_API CPointLights
{
public:
	// static variables

	// num of registered lights in frame
	static unsigned __int32& NumLights;
	// lights array. Count: MAX_POINTLIGHTS (32)
	static tPointLight *aLights;

	// static functions
	static void AddLight(unsigned char lightType, CVector origin, CVector direction, float radius, float red, float green, float blue, unsigned char fogType, bool generateExtraShadows, CEntity* entityAffected);
};