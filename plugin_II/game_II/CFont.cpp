/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFont.h"

int CFont::GetStringWidth(const wchar_t* str, int style) {
    return plugin::CallStdAndReturn<int, 0x4CB0C0, const wchar_t*, int>(str, style);
}

int CFont::GetNumberLines(const wchar_t* str, int style) {
    return plugin::CallStdAndReturn<int, 0x4CC0C0, const wchar_t*, int>(str, style);
}

int CFont::GetCharHeight(wchar_t c) {
    return plugin::CallStdAndReturn<int, 0x4539B0, wchar_t>(c);
}

void CFont::PrintString(const wchar_t* str, int x, int y, int style, int scale, int const& mode, int palette, bool enableAlpha, int alpha) {
    plugin::CallStd<0x4CC100, const wchar_t*, int, int, int, int, int const&, int, bool, int>(str, x, y, style, scale, mode, palette, enableAlpha, alpha);
}
