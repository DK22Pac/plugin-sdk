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
VALIDATE_OFFSET(CFontDetails, m_Color, 0x0);
VALIDATE_OFFSET(CFontDetails, m_vScale, 0x4);
VALIDATE_OFFSET(CFontDetails, m_fSlant, 0xC);
VALIDATE_OFFSET(CFontDetails, m_vSlantRefPoint, 0x10);
VALIDATE_OFFSET(CFontDetails, m_bJustify, 0x18);
VALIDATE_OFFSET(CFontDetails, m_bCentre, 0x19);
VALIDATE_OFFSET(CFontDetails, m_bRightJustify, 0x1A);
VALIDATE_OFFSET(CFontDetails, m_bBackground, 0x1B);
VALIDATE_OFFSET(CFontDetails, m_bBackGroundOnlyText, 0x1C);
VALIDATE_OFFSET(CFontDetails, m_bProp, 0x1D);
VALIDATE_OFFSET(CFontDetails, m_fAlphaFade, 0x20);
VALIDATE_OFFSET(CFontDetails, m_BackgroundColor, 0x24);
VALIDATE_OFFSET(CFontDetails, m_fWrapX, 0x28);
VALIDATE_OFFSET(CFontDetails, m_fCentreSize, 0x2C);
VALIDATE_OFFSET(CFontDetails, m_fRightJustifyWrap, 0x30);
VALIDATE_OFFSET(CFontDetails, m_nStyle, 0x34);
VALIDATE_OFFSET(CFontDetails, field_38, 0x38);
VALIDATE_OFFSET(CFontDetails, m_nDropShadowPosition, 0x3C);
VALIDATE_OFFSET(CFontDetails, m_DropColor, 0x3E);
VALIDATE_SIZE(CFontDetails, 0x44);