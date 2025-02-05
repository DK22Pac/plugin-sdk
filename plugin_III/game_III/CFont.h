/*
    Plugin-SDK (Grand Theft Auto 3) header file
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
    unsigned short prop[191];
    unsigned short space;
    unsigned short unprop;
};

struct tFontSize {
    tFontTable fonts[3];
    unsigned short ftable[338];
};

enum eFontAlignment : unsigned char {
    ALIGN_CENTER,
    ALIGN_LEFT,
    ALIGN_RIGHT
};

enum eFontStyle : unsigned char {
    FONT_BANK,
    FONT_PAGER,
    FONT_HEADING,

    FONT_SUBTITLES = FONT_BANK,
};

class CFont {
public:
    // variables
    static CFontDetails &Details;
    static CSprite2d *Sprite; 
    static short &NewLine;
    static tFontSize& Size;

    // funcs

    static void DrawFonts();
    // get next ' ' character in a string
    static float GetCharacterSize(const wchar_t c);
    static wchar_t* GetNextSpace(const wchar_t* str);
    static int GetNumberLines(float x, float y, const wchar_t* text);
    static float GetStringWidth(const wchar_t* str, bool sentence);
    static CRect* GetTextRect(CRect* rect_out, float x, float y, const wchar_t* text);
    static void InitPerFrame();
    // CFont initialisation
    static void Initialise();
    static wchar_t* ParseToken(wchar_t* str);
    // this adds a single character into rendering buffer
    static void PrintChar(float x, float y, short character);
    static void PrintString(float x, float y, const wchar_t* text);
    static void PrintString(float x, float y, const wchar_t* start, const wchar_t* end, float arg4);
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

    static char* GetNextSpace(const char* str);
    static int GetNumberLines(float x, float y, const char* text);
    static float GetStringWidth(const char* str, bool sentence);
    static CRect* GetTextRect(CRect* rect_out, float x, float y, const char* text);
    static char* ParseToken(char* str);
    // this adds a single character into rendering buffer
    static void PrintChar(float x, float y, char character);
    static void PrintString(float x, float y, const char* text);
    static void PrintString(float x, float y, const char* start, const char* end, float arg4);

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

void AsciiToUnicode(char const* str_ascii, wchar_t* str_unicode);
int UnicodeStrlen(wchar_t const* str);
extern char *aStr;
