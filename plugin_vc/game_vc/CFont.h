/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_VC.h"
#include "CRGBA.h"
#include "CRect.h"
#include "CFontDetails.h"

class CFont {
public:
	
    static CFontDetails &Details;

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
    static void FilterOutTokensFromString(wchar_t* str);
    static wchar_t* ParseToken(wchar_t* str);
    static wchar_t* ParseToken(wchar_t* str, CRGBA& color, bool& flashing, bool& bold);
    static float GetStringWidth(wchar_t* str, bool sentence);
    static void GetTextRect(CRect* rect_out, float x, float y, wchar_t* text);
    static int GetNumberLines(float x, float y, wchar_t* text);
    static void PrintString(float x, float y, wchar_t* text);
    static void PrintStringFromBottom(float x, float y, wchar_t* text);
    static void PrintString(float x, float y, unsigned int arg2, wchar_t* arg3, wchar_t* arg4, float arg5);
    static void RenderFontBuffer();
    static void PrintChar(float x, float y, short character);
    static void InitPerFrame();
    static void Shutdown();
    static void Initialise();
};

void UnicodeMakeUpperCase(wchar_t* str_out, wchar_t const* str_in);
int UnicodeStrlen(wchar_t const* str);
void AsciiToUnicode(char const* str_ascii, wchar_t* str_unicode);