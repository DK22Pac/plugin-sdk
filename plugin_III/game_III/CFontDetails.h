/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CRGBA.h"
#include "CVector2D.h"


class CFontDetails {
public:
    CRGBA m_Color;  
    CVector2D m_vScale; 
    float m_fSlant; 
    CVector2D m_vSlantRefPoint; 
    bool m_bJustify; 
    bool m_bCentre; 
    bool m_bRightJustify; 
    bool m_bBackground; 
    bool m_bBackGroundOnlyText; 
    bool m_bProp; 
private:
    char _pad1E[2]; 
public:
    float m_fAlphaFade; 
    CRGBA m_BackgroundColor; 
    float m_fWrapX; 
    float m_fCentreSize; 
    float m_fRightJustifyWrap; 
    short m_nStyle; 
private:
    char _pad36[2]; 
public:
    int field_38; 
    short m_nDropShadowPosition;
    CRGBA m_DropColor; 

public:
    //funcs
    ~CFontDetails();
};

VALIDATE_SIZE(CFontDetails, 0x44);