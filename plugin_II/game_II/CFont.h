/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"

class CFont {
public:
    static int GetCharHeight(wchar_t c);
    static int GetNumberLines(const wchar_t* str, int style);
    static int GetStringWidth(const wchar_t* str, int style);
    static void PrintString(const wchar_t* str, int x, int y, int style, int scale, int const& mode, int palette, bool enableAlpha, int alpha);
};
