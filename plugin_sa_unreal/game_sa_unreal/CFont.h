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

class CFont {
public:
    static CFontDetails& Details;

public:
    static void PrintString(float x, float y, const char* str);
    static void RenderFontBuffer();
};
