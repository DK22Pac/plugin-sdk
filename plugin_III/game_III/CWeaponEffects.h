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

class CWeaponEffects {
public:
    bool m_bActive;
    char _pad0[3];
    CVector m_vPosn;
    CRGBA m_Color;
    float m_fSize;
    float m_fRotation;

    //funcs
    CWeaponEffects();
    static void ClearCrossHair();
    static void Init();
    static void MarkTarget(CVector pos, unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha, float size);
    static void Render();
    static void Shutdown();
    ~CWeaponEffects();
};

VALIDATE_SIZE(CWeaponEffects, 0x1C);

extern CWeaponEffects& gCrossHair;		// CWeaponEffects gCrossHair
extern RwTexture*& gpCrossHairTex;		// RwTexture* gpCrossHairTex
extern RwRaster*& gpCrossHairRaster;	// RwRaster* gpCrossHairRaster