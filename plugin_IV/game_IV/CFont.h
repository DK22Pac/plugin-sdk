/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Rage.h"

enum eFontStyle {
    FONT_HELVETICA,
    FONT_PIXEL,
    FONT_2, 
    FONT_COMPRESSED,
    FONT_4,
    FONT_MEDIUM,
};

enum eFontAlignment {
    ALIGN_CENTER,
    ALIGN_LEFT,
    ALIGN_RIGHT
};

struct CFontDetails {
    rage::Color32* color;
    float* width;
    float* height;
    uint32_t* field_3;
    int32_t* alignment;
    uint8_t* backgroundOn;
    uint8_t* backgroundWrap;
    uint8_t* propOn;
    uint8_t* redFade;
    uint8_t* greenFade;
    uint8_t* blueFade;
    uint8_t* alphaFade;
    rage::Color32* backgroundColor;
    float* wrapX;
    float* wrapY;
    uint8_t* fontStyle;
    uint8_t* field_15;
    uint32_t* dropShadow;
    rage::Color32* dropColor;
    float* edgeX;
    float* edgeY;
    uint32_t* lineHeight;
    uint32_t* field_20;
    uint8_t* field_21;
};

class CFont {
public:
    static CFontDetails& Details;

public:
    static int32_t DetailIndex();
    static float GetStringWidth(const wchar_t* str, bool spaces);
    static void PrintString(float x, float y, const wchar_t* str, int32_t arg1 = -1, int32_t arg2 = -1);
    static void PrintStringFromBottom(float x, float y, const wchar_t* str, int32_t arg1 = -1, int32_t arg2 = -1);
    static void SetOrientation(int32_t align);
    static void SetFontStyle(int32_t style);
    static void SetColor(rage::Color32 const& col);
    static void SetDropColor(rage::Color32 const& col);
    static void SetEdge(float size);
    static void SetScale(float w, float h);
    static void SetWrapx(float x, float w);
    static void SetDropShadowPosition(float value);
    static void SetProportional(bool on);
    static void DrawFonts();
    static void SetBackground(bool enable, bool includeWrap);
    static int32_t GetNumberLines(float x, float y, const wchar_t* str, int32_t arg1 = -1);
    static void SetAlphaFade(uint8_t alpha);
    static void SetBackgroundColor(rage::Color32 const& col);
    static void GetTextRect(rage::Vector4* rect, float x, float y, const wchar_t* str);
    static void SetLineHeight(float y);
    static void SetSlant(float slant) {}
    static void SetJustify(float justify) {}

    static void PrintString(float x, float y, const char* text);
};
