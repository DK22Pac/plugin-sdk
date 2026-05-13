/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVector.h"

class CPointLight {
public:
    CVector m_vecPosition;
    CVector m_vecDirection;
    float m_fRange;
    float m_fColorRed;
    float m_fColorGreen;
    float m_fColorBlue;
    unsigned char m_nType;
    unsigned char m_nFogType;
    bool m_bGenerateShadows;
private:
    char _pad2B;
public:

    CPointLight();
};
VALIDATE_OFFSET(CPointLight, m_vecPosition, 0x0);
VALIDATE_OFFSET(CPointLight, m_vecDirection, 0xC);
VALIDATE_OFFSET(CPointLight, m_fRange, 0x18);
VALIDATE_OFFSET(CPointLight, m_fColorRed, 0x1C);
VALIDATE_OFFSET(CPointLight, m_fColorGreen, 0x20);
VALIDATE_OFFSET(CPointLight, m_fColorBlue, 0x24);
VALIDATE_OFFSET(CPointLight, m_nType, 0x28);
VALIDATE_OFFSET(CPointLight, m_nFogType, 0x29);
VALIDATE_OFFSET(CPointLight, m_bGenerateShadows, 0x2A);
VALIDATE_SIZE(CPointLight, 0x2C);

class CPointLights {
public:
    enum {
        LIGHT_POINT,
        LIGHT_DIRECTIONAL,
        LIGHT_DARKEN,
        LIGHT_FOGONLY_ALWAYS,
        LIGHT_FOGONLY,
    };
    enum {
        FOG_NONE,
        FOG_NORMAL,
        FOG_ALWAYS
    };

public:
    // static variables

    // num of registered lights in frame
    static unsigned short &NumLights;
    // lights array. Count: MAX_POINTLIGHTS (32)
    static CPointLight *aPointLights;

    // static functions
    static void AddLight(unsigned char lightType, CVector point, CVector direction, float radius, float red, float green, float blue, unsigned char fogType, bool generateExtraShadows);
    static float GenerateLightsAffectingObject(CVector* point);
    static void RemoveLightsAffectingObject();
    static void RenderFogEffect();
};
VALIDATE_SIZE(CPointLights, 0x1);

extern unsigned int MAX_POINTLIGHTS; // default: 32
