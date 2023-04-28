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

//VALIDATE_SIZE(CFontDetails, 0x54);