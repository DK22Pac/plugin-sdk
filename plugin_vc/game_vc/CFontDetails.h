/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CRGBA.h"
#include "CVector2D.h"

class CFontDetails
{
public:
	CRGBA m_Color;
	CVector2D m_vecScale;
	float m_fSlant;
	CVector2D m_vecSlantRefPoint;
	bool m_bJustify;
	bool m_bCentre;
	bool m_bRightJustify;
	bool m_bBackground;
	bool m_bBackGroundOnlyText;
	bool m_bPropOn;
	bool m_bForcedColor;
	char field_1F;
	char field_20;
	char _pad0[3];
	float m_fAlpha;
	CRGBA m_BackgroundColor;
	float m_fWrapX;
	float m_fCentreSize;
	float m_fRightJustifyWrap;
	short m_FontStyle;
	bool m_bFontHalfTexture;
	char _unk[5];
	short m_nShadowPos;
	CRGBA m_DropColor;
	char field_46;
	char field_47;
	int field_48;
	char field_4C;
	char _pad1[3];
	float field_50;
	
	~CFontDetails();
};
VALIDATE_OFFSET(CFontDetails, m_Color, 0x0);
VALIDATE_OFFSET(CFontDetails, m_vecScale, 0x4);
VALIDATE_OFFSET(CFontDetails, m_fSlant, 0xC);
VALIDATE_OFFSET(CFontDetails, m_vecSlantRefPoint, 0x10);
VALIDATE_OFFSET(CFontDetails, m_bJustify, 0x18);
VALIDATE_OFFSET(CFontDetails, m_bCentre, 0x19);
VALIDATE_OFFSET(CFontDetails, m_bRightJustify, 0x1A);
VALIDATE_OFFSET(CFontDetails, m_bBackground, 0x1B);
VALIDATE_OFFSET(CFontDetails, m_bBackGroundOnlyText, 0x1C);
VALIDATE_OFFSET(CFontDetails, m_bPropOn, 0x1D);
VALIDATE_OFFSET(CFontDetails, m_bForcedColor, 0x1E);
VALIDATE_OFFSET(CFontDetails, field_1F, 0x1F);
VALIDATE_OFFSET(CFontDetails, field_20, 0x20);
VALIDATE_OFFSET(CFontDetails, _pad0, 0x21);
VALIDATE_OFFSET(CFontDetails, m_fAlpha, 0x24);
VALIDATE_OFFSET(CFontDetails, m_BackgroundColor, 0x28);
VALIDATE_OFFSET(CFontDetails, m_fWrapX, 0x2C);
VALIDATE_OFFSET(CFontDetails, m_fCentreSize, 0x30);
VALIDATE_OFFSET(CFontDetails, m_fRightJustifyWrap, 0x34);
VALIDATE_OFFSET(CFontDetails, m_FontStyle, 0x38);
VALIDATE_OFFSET(CFontDetails, m_bFontHalfTexture, 0x3A);
VALIDATE_OFFSET(CFontDetails, _unk, 0x3B);
VALIDATE_OFFSET(CFontDetails, m_nShadowPos, 0x40);
VALIDATE_OFFSET(CFontDetails, m_DropColor, 0x42);
VALIDATE_OFFSET(CFontDetails, field_46, 0x46);
VALIDATE_OFFSET(CFontDetails, field_47, 0x47);
VALIDATE_OFFSET(CFontDetails, field_48, 0x48);
VALIDATE_OFFSET(CFontDetails, field_4C, 0x4C);
VALIDATE_OFFSET(CFontDetails, _pad1, 0x4D);
VALIDATE_OFFSET(CFontDetails, field_50, 0x50);
VALIDATE_SIZE(CFontDetails, 0x54);

//VALIDATE_SIZE(CFontDetails, 0x54);