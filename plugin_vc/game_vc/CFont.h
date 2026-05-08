/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CRGBA.h"
#include "CRect.h"
#include "CFontDetails.h"
#include "CSprite2d.h"

struct tFontTable {
    unsigned short prop[208];
    unsigned short space;
    unsigned short unprop;
};
VALIDATE_OFFSET(tFontTable, prop, 0x0);
VALIDATE_OFFSET(tFontTable, space, 0x1A0);
VALIDATE_OFFSET(tFontTable, unprop, 0x1A2);
VALIDATE_SIZE(tFontTable, 0x1A4);

struct tFontSize {
    tFontTable fonts[3];
    unsigned short ftable[338];
};
VALIDATE_OFFSET(tFontSize, fonts, 0x0);
VALIDATE_OFFSET(tFontSize, ftable, 0x4EC);
VALIDATE_SIZE(tFontSize, 0x790);

enum eFontAlignment : unsigned char {
    ALIGN_CENTER,
    ALIGN_LEFT,
    ALIGN_RIGHT
};

enum eFontStyle : unsigned char {
    FONT_BANK,
    FONT_STANDARD,
    FONT_HEADING,

    FONT_SUBTITLES = FONT_STANDARD,
};

class CFontRenderState {
public:
    DWORD anonymous_0;
    float fTextPosX;
    float fTextPosY;
    float fTextSizeX;
    float fTextSizeY;
    CRGBA color;
    float fExtraSpace;
    float fSlant;
    float fSlantRefPointX;
    float fSlantRefPointY;
    char bIsShadow;
    char bFontHalfTexture;
    char bProp;
    char anonymous_14;
    short FontStyle;
};
VALIDATE_OFFSET(CFontRenderState, anonymous_0, 0x0);
VALIDATE_OFFSET(CFontRenderState, fTextPosX, 0x4);
VALIDATE_OFFSET(CFontRenderState, fTextPosY, 0x8);
VALIDATE_OFFSET(CFontRenderState, fTextSizeX, 0xC);
VALIDATE_OFFSET(CFontRenderState, fTextSizeY, 0x10);
VALIDATE_OFFSET(CFontRenderState, color, 0x14);
VALIDATE_OFFSET(CFontRenderState, fExtraSpace, 0x18);
VALIDATE_OFFSET(CFontRenderState, fSlant, 0x1C);
VALIDATE_OFFSET(CFontRenderState, fSlantRefPointX, 0x20);
VALIDATE_OFFSET(CFontRenderState, fSlantRefPointY, 0x24);
VALIDATE_OFFSET(CFontRenderState, bIsShadow, 0x28);
VALIDATE_OFFSET(CFontRenderState, bFontHalfTexture, 0x29);
VALIDATE_OFFSET(CFontRenderState, bProp, 0x2A);
VALIDATE_OFFSET(CFontRenderState, anonymous_14, 0x2B);
VALIDATE_OFFSET(CFontRenderState, FontStyle, 0x2C);
VALIDATE_SIZE(CFontRenderState, 0x30);

class CFont {
public:
    static CFontDetails &Details;
    static CFontRenderState &RenderState;
    static CSprite2d(&Sprite)[3];

    static short character_code(unsigned char character);
    static int FindNewCharacter(short character);
    static void SetDropShadowPosition(short position);
    static void SetDropColor(CRGBA color);
    static void SetAlphaFade(float fade);
    static void SetRightJustifyWrap(float wrap);
    static void SetFontStyle(short style);
    static void SetPropOn();
    static void SetPropOff();
    static void SetRightJustifyOff();
    static void SetRightJustifyOn();
    static void SetBackGroundOnlyTextOff();
    static void SetBackGroundOnlyTextOn();
    static void SetBackgroundColor(CRGBA color);
    static void SetBackgroundOff();
    static void SetBackgroundOn();
    static void SetCentreSize(float size);
    static void SetWrapx(float wrap);
    static void SetCentreOff();
    static void SetCentreOn();
    static void SetJustifyOff();
    static void SetJustifyOn();
    static void SetColor(CRGBA color);
    static void SetSlant(float slant);
    static void SetSlantRefPoint(float x, float y);
    static void SetScale(float width, float height);
    static void DrawFonts();
    static void FilterOutTokensFromString(const wchar_t* str);
    static wchar_t* ParseToken(wchar_t* str);
    static wchar_t* ParseToken(wchar_t* str, CRGBA& color, bool& flashing, bool& bold);
    static float GetStringWidth(const wchar_t* str, bool sentence);
    static void GetTextRect(CRect* rect_out, float x, float y, const wchar_t* text);
    static int GetNumberLines(float x, float y, const wchar_t* text);
    static void PrintString(float x, float y, const wchar_t* text);
    static void PrintStringFromBottom(float x, float y, const wchar_t* text);
    static void PrintString(float x, float y, unsigned int arg2, const wchar_t* arg3, const wchar_t* arg4, float arg5);
    static void RenderFontBuffer();
    static void PrintChar(float x, float y, short character);
    static void InitPerFrame();
    static void Shutdown();
    static void Initialise();

    static void PrintString(float x, float y, const char* text);

    static inline void SetOrientation(eFontAlignment alignment) {
        if (alignment == ALIGN_CENTER)
            SetCentreOn();
        else if (alignment == ALIGN_LEFT)
            SetJustifyOn();
        else if (alignment == ALIGN_RIGHT)
            SetRightJustifyOn();
    }

    static inline void SetProportional(bool on) {
        if (on)
            SetPropOn();
        else
            SetPropOff();
    }

    static inline void SetBackground(bool on) {
        if (on)
            SetBackgroundOn();
        else
            SetBackgroundOff();
    }
};
VALIDATE_SIZE(CFont, 0x1);

void UnicodeMakeUpperCase(wchar_t* str_out, wchar_t const* str_in);
int UnicodeStrlen(wchar_t const* str);
void AsciiToUnicode(char const* str_ascii, wchar_t* str_unicode);
