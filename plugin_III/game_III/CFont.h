/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CRGBA.h"
#include "CRect.h"
#include "CFontDetails.h"
#include "CSprite2d.h"

class CFont {
public:
    // variables
    static CFontDetails &Details;
    static CSprite2d *Sprite; 
    static _int16 &NewLine;

    // funcs

    static void DrawFonts();
    // get next ' ' character in a string
    static wchar_t* GetNextSpace(wchar_t* str);
    static int GetNumberLines(float x, float y, wchar_t* text);
    static float GetStringWidth(wchar_t* str, bool sentence);
    static CRect* GetTextRect(CRect* rect_out, float x, float y, wchar_t* text);
    static void InitPerFrame();
    // CFont initialisation
    static void Initialise();
    static wchar_t* ParseToken(wchar_t* str);
    // this adds a single character into rendering buffer
    static void PrintChar(float x, float y, short character);
    static void PrintString(float x, float y, wchar_t* text);
    static void PrintString(float x, float y, wchar_t* str1, wchar_t* str2, float arg4);
    // like a 'global' font alpha, multiplied with each text alpha (from SetColor)
    static void SetAlphaFade(float alpha);
    static void SetBackGroundOnlyTextOff();
    static void SetBackGroundOnlyTextOn();
    // sets background color
    static void SetBackgroundColor(CRGBA color);
    static void SetBackgroundOff();
    static void SetBackgroundOn();
    static void SetCentreOff();
    static void SetCentreOn();
    // set line width at center
    static void SetCentreSize(float size);
    // set text color
    static void SetColor(CRGBA color);
    // drop color is used for text shadow and text outline
    static void SetDropColor(CRGBA color);
    // set shadow size
    static void SetDropShadowPosition(short value);
    // set text style
    static void SetFontStyle(short style);
    static void SetJustifyOff();
    static void SetJustifyOn();
    static void SetPropOff();
    static void SetPropOn();
    static void SetRightJustifyOff();
    static void SetRightJustifyOn();
    static void SetRightJustifyWrap(float value);
    // text scaling
    static void SetScale(float width, float height);
    // set text rotation angle
    static void SetSlant(float value);
    // set text rotation point
    static void SetSlantRefPoint(float x, float y);
    // set line width at right
    static void SetWrapx(float value);
    // CFont closing
    static void Shutdown();
    static short character_code(unsigned char character);
};

void AsciiToUnicode(char const* str_ascii, wchar_t* str_unicode);
int UnicodeStrlen(wchar_t const* str);
char* UnicodeToAscii(wchar_t* str_unicode);
extern char *aStr;