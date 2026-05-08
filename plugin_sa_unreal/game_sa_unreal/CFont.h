/*
    Plugin-SDK (Grand Theft Auto San Andreas Unreal) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CRGBA.h"

struct CFontDetails {
    CRGBA Color;
    float ScaleX;
    float ScaleY;
    float Slope;
    float SlopeRefX;
    float SlopeRefY;
    bool Justify;
    bool Centre;
    bool RightJustify;
    bool Background;
    bool BackgroundOutline;
    bool Proportional;
    bool Shadow;
    float AlphaFade;
    CRGBA BGColor;
    float WrapEnd;
    float Centrex;
    float RightJustifyWrap;
    uint8_t Style;
    uint8_t ExtraFont;
    int8_t DropAmount;
    CRGBA DropColor;
    int8_t EdgeAmount;
    int8_t EdgeSpace;
};
VALIDATE_OFFSET(CFontDetails, Color, 0x0);
VALIDATE_OFFSET(CFontDetails, ScaleX, 0x4);
VALIDATE_OFFSET(CFontDetails, ScaleY, 0x8);
VALIDATE_OFFSET(CFontDetails, Slope, 0xC);
VALIDATE_OFFSET(CFontDetails, SlopeRefX, 0x10);
VALIDATE_OFFSET(CFontDetails, SlopeRefY, 0x14);
VALIDATE_OFFSET(CFontDetails, Justify, 0x18);
VALIDATE_OFFSET(CFontDetails, Centre, 0x19);
VALIDATE_OFFSET(CFontDetails, RightJustify, 0x1A);
VALIDATE_OFFSET(CFontDetails, Background, 0x1B);
VALIDATE_OFFSET(CFontDetails, BackgroundOutline, 0x1C);
VALIDATE_OFFSET(CFontDetails, Proportional, 0x1D);
VALIDATE_OFFSET(CFontDetails, Shadow, 0x1E);
VALIDATE_OFFSET(CFontDetails, AlphaFade, 0x20);
VALIDATE_OFFSET(CFontDetails, BGColor, 0x24);
VALIDATE_OFFSET(CFontDetails, WrapEnd, 0x28);
VALIDATE_OFFSET(CFontDetails, Centrex, 0x2C);
VALIDATE_OFFSET(CFontDetails, RightJustifyWrap, 0x30);
VALIDATE_OFFSET(CFontDetails, Style, 0x34);
VALIDATE_OFFSET(CFontDetails, ExtraFont, 0x35);
VALIDATE_OFFSET(CFontDetails, DropAmount, 0x36);
VALIDATE_OFFSET(CFontDetails, DropColor, 0x37);
VALIDATE_OFFSET(CFontDetails, EdgeAmount, 0x3B);
VALIDATE_OFFSET(CFontDetails, EdgeSpace, 0x3C);
VALIDATE_SIZE(CFontDetails, 0x40);

class CFont {
public:
    static CFontDetails& Details;

public:
    static void PrintString(float x, float y, const char* str);
    static void RenderFontBuffer();
};
VALIDATE_SIZE(CFont, 0x1);
