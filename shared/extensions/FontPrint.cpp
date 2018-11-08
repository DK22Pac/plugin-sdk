/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "FontPrint.h"
#include "CFont.h"
#include "Other.h"
#include "CSprite.h"

#define SCALEW 0.8f
#define SCALEH 1.6f
#define SPACING 15.0f

float ScreenInteger(float value) {
    return static_cast<float>(static_cast<int>(value));
}

void plugin::gamefont::PrintUnscaled(const std::string &line, float x, float y, unsigned char style, float w, float h,
    CRGBA const &color, Alignment alignment, unsigned char dropPosition, CRGBA const &dropColor, bool shadow, float lineSize,
    bool proportional, bool justify)
{
    CFont::SetFontStyle(style);
    CFont::SetScale(w * SCALEW, h * SCALEH);
    CFont::SetColor(color);
    CFont::SetAlphaFade(255.0f);
    CFont::SetSlant(0.0f);
    CFont::SetDropColor(dropColor);
    switch (alignment) {
    case AlignCenter:
    #ifdef GTASA
        CFont::SetOrientation(ALIGN_CENTER);
    #else
        CFont::SetRightJustifyOff();
        CFont::SetJustifyOff();
        CFont::SetCentreOn();
    #endif
        CFont::SetCentreSize(ScreenInteger(lineSize));
        break;
    case AlignLeft:
    #ifdef GTASA
        CFont::SetOrientation(ALIGN_LEFT);
    #else
        CFont::SetCentreOff();
        CFont::SetRightJustifyOff();
        CFont::SetJustifyOn();
    #endif
        CFont::SetWrapx(ScreenInteger(x + lineSize));
        break;
    case AlignRight:
    #ifdef GTASA
        CFont::SetOrientation(ALIGN_RIGHT);
    #else
        CFont::SetCentreOff();
        CFont::SetJustifyOff();
        CFont::SetRightJustifyOn();
    #endif
        CFont::SetRightJustifyWrap(ScreenInteger(x - lineSize));
        break;
    }
#ifdef GTASA
    CFont::SetProportional(proportional);
    CFont::SetBackground(false, false);
    CFont::SetJustify(justify);
    if (shadow)
        CFont::SetDropShadowPosition(dropPosition);
    else
        CFont::SetEdge(dropPosition);
#else
    if (proportional)
        CFont::SetPropOn();
    else
        CFont::SetPropOff();
    CFont::SetBackgroundOff();
    CFont::SetBackGroundOnlyTextOff();
    CFont::SetDropShadowPosition(dropPosition);
#endif
    CFont::PrintString(ScreenInteger(x), ScreenInteger(y), const_cast<char *>(line.c_str()));
}

void plugin::gamefont::Print(const std::string &line, float x, float y, unsigned char style, float w, float h,
    CRGBA const &color, Alignment alignment, unsigned char dropPosition, CRGBA const &dropColor, bool shadow, float lineSize,
    bool proportional, bool justify, ScreenSide screenSide)
{
    switch (screenSide) {
    case LeftBottom:
        x = screen::GetCoord(x, screen::SIDE_LEFT);
        y = screen::GetCoord(y, screen::SIDE_BOTTOM);
        break;
    case RightTop:
        x = screen::GetCoord(x, screen::SIDE_RIGHT);
        y = screen::GetCoord(y, screen::SIDE_TOP);
        break;
    case RightBottom:
        x = screen::GetCoord(x, screen::SIDE_RIGHT);
        y = screen::GetCoord(y, screen::SIDE_BOTTOM);
        break;
    default:
        x = screen::GetCoord(x, screen::SIDE_LEFT);
        y = screen::GetCoord(y, screen::SIDE_TOP);
        break;
    }
    PrintUnscaled(line,
        x,
        y,
        style,
        screen::GetMultiplier(w),
        screen::GetMultiplier(h),
        color, alignment, dropPosition, dropColor, shadow,
        screen::GetCoord(lineSize),
        proportional, justify);
}

void plugin::gamefont::Print(ScreenSide screenSide, Alignment alignment,
    const std::string &line, float x, float y, unsigned char style, float w, float h,
    CRGBA const &color, unsigned char dropPosition, CRGBA const &dropColor, bool shadow, float lineSize,
    bool proportional, bool justify)
{
    Print(line, x, y, style, w, h, color, alignment, dropPosition, dropColor, shadow, lineSize, proportional, justify, screenSide);
}

void plugin::gamefont::Print(std::vector<std::string> const &lines, float x, float y, float spacing, unsigned char style,
    float w, float h, CRGBA const &color, Alignment alignment, unsigned char dropPosition, CRGBA const &dropColor,
    bool shadow, float lineSize, bool proportional, bool justify, ScreenSide screenSide)
{
    spacing *= h * SCALEH * SPACING;
    for (size_t i = 0; i < lines.size(); i++) {
        Print(lines[i], x, y + spacing * i, style, w, h, color, alignment, dropPosition,
            dropColor, shadow, lineSize, proportional, justify, screenSide);
    }
}

void plugin::gamefont::Print(ScreenSide screenSide, Alignment alignment,
    std::vector<std::string> const &lines, float x, float y, float spacing, unsigned char style, float w, float h,
    CRGBA const &color, unsigned char dropPosition, CRGBA const &dropColor, bool shadow, float lineSize,
    bool proportional, bool justify)
{
    spacing *= h * SCALEH * SPACING;
    for (size_t i = 0; i < lines.size(); i++) {
        Print(screenSide, alignment, lines[i], x, y + spacing * i, style, w, h, color,
            dropPosition, dropColor, shadow, lineSize, proportional, justify);
    }
}

bool Get3dTo2d(CVector const &posn, CVector &out) {
    RwV3d rwvec; float outw, outh;
    bool result = 
#ifdef GTASA
    CSprite::CalcScreenCoors(posn.ToRwV3d(), &rwvec, &outw, &outh, false, false);
#else
    CSprite::CalcScreenCoors(posn.ToRwV3d(), &rwvec, &outw, &outh, false);
#endif
    out.FromRwV3d(rwvec);
    return result;
}

float CalcScaling(float z) {
    float scale = 1.0f / z * 5.0f;
    if (scale > 1.0f)
        scale = 1.0f;
    else if (scale < 0.01f)
        scale = 0.0f;
    else if (scale < 0.25f)
        scale = 0.25f;
    return scale;
}

void PrintOneAt3d(std::string const &line, CVector const &posn2d, float offset_x, float offset_y, float w, float h,
    CRGBA const &color, unsigned char style, plugin::gamefont::Alignment alignment, unsigned char dropPosition,
    CRGBA const &dropColor, bool shadow, float lineSize, bool proportional, bool justify)
{
    plugin::gamefont::PrintUnscaled(line,
        posn2d.x + plugin::screen::GetCoord(offset_x),
        posn2d.y + plugin::screen::GetCoord(offset_y),
        style,
        plugin::screen::GetMultiplier(w),
        plugin::screen::GetMultiplier(h),
        color, alignment, dropPosition, dropColor, shadow,
        plugin::screen::GetCoord(lineSize),
        proportional, justify);
}

bool plugin::gamefont::PrintAt3d(CVector const &posn, const std::string &line, float offset_x, float offset_y,
    unsigned char style, float w, float h, CRGBA const &color, bool scaleOnDistance, Alignment alignment,
    unsigned char dropPosition, CRGBA const &dropColor, bool shadow, float lineSize, bool proportional, bool justify)
{
    CVector out;
    if (Get3dTo2d(posn, out)) {
        float s = 1.0f;
        if (scaleOnDistance)
            s = CalcScaling(out.z);
        if (s != 0.0f) {
            PrintOneAt3d(line, out, offset_x * s, offset_y * s, w * s, h * s, color, style,
                alignment, dropPosition, dropColor, shadow, lineSize, proportional, justify);
        }
        return true;
    }
    return false;
}

bool plugin::gamefont::PrintAt3d(CVector const &posn, std::vector<std::string> const &lines, float spacing, float offset_x,
    float offset_y, unsigned char style, float w, float h, CRGBA const &color, bool scaleOnDistance, Alignment alignment,
    unsigned char dropPosition, CRGBA const &dropColor, bool shadow, float lineSize, bool proportional, bool justify)
{
    CVector out;
    if (Get3dTo2d(posn, out)) {
        if (scaleOnDistance) {
            float s = CalcScaling(out.z);
            if (s == 0.0f)
                return false;
            w *= s;
            h *= s;
            offset_x *= s;
            offset_y *= s;
        }
        spacing *= h * SCALEH * SPACING;
        for (size_t i = 0; i < lines.size(); i++) {
            PrintOneAt3d(lines[i], out, offset_x, offset_y + spacing * i, w, h, color, style,
                alignment, dropPosition, dropColor, shadow, lineSize, proportional, justify);
        }
        return true;
    }
    return false;
}
