/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CVector.h"

#define MAX_POINTLIGHTS 32

class CPointLight {
public:
	CVector m_vecPosn;
	CVector m_vecDirection;
    float m_fRange;
    float m_fColorRed;
    float m_fColorGreen;
    float m_fColorBlue;
    class CEntity *m_pEntityToLight;
    unsigned char m_nType;
    unsigned char m_nFogType;
    unsigned char m_bGenerateShadows;
private:
    char _pad0;
};

VALIDATE_SIZE(CPointLight, 0x30);

class CPointLights {
public:
	// static variables

	// num of registered lights in frame
	static unsigned __int32& NumLights;
	// lights array. Count: MAX_POINTLIGHTS (32)
	static CPointLight *aLights;

	// static functions
	static void AddLight(unsigned char lightType, CVector origin, CVector direction, float radius, float red, float green, float blue, unsigned char fogType, bool generateExtraShadows, CEntity* entityAffected);
};