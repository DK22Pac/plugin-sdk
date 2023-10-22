/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFont.h"
#include "Patch.h"

static CFontDetails* CFont__DetailsAddr;
CFontDetails& CFont::Details = *(CFontDetails*)CFont__DetailsAddr;

static uint32_t CFont__GetDetailIndexAddr;
int32_t CFont::DetailIndex() {
    return plugin::CallAndReturnDyn<int32_t>(CFont__GetDetailIndexAddr);
}

static uint32_t CFont__GetStringWidthAddr;
float CFont::GetStringWidth(const wchar_t* str, bool spaces) {
    return plugin::CallAndReturnDyn<float>(CFont__GetStringWidthAddr, str, spaces);
}

static uint32_t CFont__PrintStringAddr;
void CFont::PrintString(float x, float y, const wchar_t* str, int32_t arg1, int32_t arg2) {
    plugin::CallDyn(CFont__PrintStringAddr, x, y, str, arg1, arg2);
}

static uint32_t CFont__PrintStringFromBottomAddr;
void CFont::PrintStringFromBottom(float x, float y, const wchar_t* str, int32_t arg1, int32_t arg2) {
    plugin::CallDyn(CFont__PrintStringFromBottomAddr, x, y, str, arg1, arg2);
}

static uint32_t CFont__SetAlignmentAddr;
void CFont::SetAlignment(int32_t align) {
    plugin::CallDyn(CFont__SetAlignmentAddr, align);
}

static uint32_t CFont__SetFontStyleAddr;
void CFont::SetFontStyle(int32_t style) {
    plugin::CallDyn(CFont__SetFontStyleAddr, style);
}

static uint32_t CFont__SetColorAddr;
void CFont::SetColor(rage::Color32 const& col) {
    plugin::CallDyn(CFont__SetColorAddr, col);
}

static uint32_t CFont__SetDropColorAddr;
void CFont::SetDropColor(rage::Color32 const& col) {
    plugin::CallDyn(CFont__SetDropColorAddr, col);
}

static uint32_t CFont__SetEdgeAddr;
void CFont::SetEdge(float size) {
    plugin::CallDyn(CFont__SetEdgeAddr, size);
}

static uint32_t CFont__SetScaleAddr;
void CFont::SetScale(float w, float h) {
    plugin::CallDyn(CFont__SetScaleAddr, w, h);
}

static uint32_t CFont__SetWrapXAddr;
void CFont::SetWrapX(float x, float w) {
    plugin::CallDyn(CFont__SetWrapXAddr, x, w);
}

static uint32_t CFont__SetDropShadowPositionAddr;
void CFont::SetDropShadowPosition(float value) {
    plugin::CallDyn(CFont__SetDropShadowPositionAddr, value);
}

static uint32_t CFont__SetProportionalAddr;
void CFont::SetProportional(bool on) {
    plugin::CallDyn(CFont__SetProportionalAddr, on);
}

static uint32_t CFont__DrawFontsAddr;
void CFont::DrawFonts() {
    plugin::CallDyn(CFont__DrawFontsAddr);
}

static uint32_t CFont__SetBackgroundAddr;
void CFont::SetBackground(bool enable, bool includeWrap) {
    plugin::CallDyn(CFont__SetBackgroundAddr, enable, includeWrap);
}

static uint32_t CFont__GetNumberLines;
int32_t CFont::GetNumberLines(float x, float y, const wchar_t* str, int32_t arg1) {
    return plugin::CallAndReturnDyn<int32_t>(CFont__GetNumberLines, x, y, str, arg1);
}

static uint32_t CFont__SetAlphaFadeAddr;
void CFont::SetAlphaFade(uint8_t alpha) {
    plugin::CallDyn(CFont__SetAlphaFadeAddr, alpha);
}

static uint32_t CFont__SetBackgroundColor;
void CFont::SetBackgroundColor(rage::Color32 const& col) {
    plugin::CallDyn(CFont__SetBackgroundColor, col);
}

static uint32_t CFont__GetTextRect;
void CFont::GetTextRect(rage::Vector4* rect, float x, float y, const wchar_t* str) {
    plugin::CallDyn(CFont__GetTextRect, rect, x, y, str);
}

static uint32_t CFont__SetLineHeightAddr;
void CFont::SetLineHeight(float y) {
    plugin::CallDyn(CFont__SetLineHeightAddr, y);
}

template<>
void plugin::InitPatterns<CFont>() {
    CFont__DetailsAddr = (CFontDetails*)plugin::patch::GetPointer(plugin::GetPattern("C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C3 CC CC CC F3 0F 10 05", 4));

    CFont__GetDetailIndexAddr = plugin::GetPattern("A1 ? ? ? ? 83 F8 FF 75 1E", 0);
    CFont__GetStringWidthAddr = plugin::GetPattern("8B 44 24 04 85 C0 75 03 D9 EE C3 89 44 24 04", 0);
    CFont__PrintStringAddr = plugin::GetPattern("55 8B EC 83 E4 F8 83 EC 58 A1 ? ? ? ? 33 C4 89 44 24 54 56 57 8B 7D 10", 0);
    CFont__PrintStringFromBottomAddr = plugin::GetPattern("57 8B 7C 24 10 85 FF 74 78", 0);
    CFont__SetAlignmentAddr = plugin::GetPattern("E8 ? ? ? ? 8D 0C C0 8B 44 24 04 89 04 CD ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC CC CC E8 ? ? ? ? F3 0F 10 44 24", 0);
    CFont__SetFontStyleAddr = plugin::GetPattern("53 56 E8 ? ? ? ? 8B 5C 24 0C", 0);
    CFont__SetColorAddr = plugin::GetPattern("E8 ? ? ? ? F3 0F 10 05 ? ? ? ? 8D 14 C0 8B 44 24 04 0F B6 0C D5 ? ? ? ? 66 0F 6E C9 0F 5B C9 89 04 D5 ? ? ? ? 0F 2F C1 76 35", 0);
    CFont__SetDropColorAddr = plugin::GetPattern("E8 ? ? ? ? F3 0F 10 05 ? ? ? ? 8D 14 C0 8B 44 24 04 0F B6 0C D5 ? ? ? ? 66 0F 6E C9 0F 5B C9 89 04 D5 ? ? ? ? 0F 2F C1 76 33", 0);
    CFont__SetEdgeAddr = plugin::GetPattern("E8 ? ? ? ? F3 0F 10 44 24 ? F3 0F 5E 05 ? ? ? ? 8D 04 C0 C7 04 C5 ? ? ? ? ? ? ? ? F3 0F 11 04 C5", 0);
    CFont__SetScaleAddr = plugin::GetPattern("83 EC 08 56 E8 ? ? ? ? F3 0F 10 44 24", 0);
    CFont__SetWrapXAddr = plugin::GetPattern("E8 ? ? ? ? F3 0F 10 44 24 ? 8D 04 C0 F3 0F 11 04 C5 ? ? ? ? F3 0F 10 44 24", 0);
    CFont__SetDropShadowPositionAddr = plugin::GetPattern("E8 ? ? ? ? F3 0F 10 44 24 ? F3 0F 5E 05 ? ? ? ? 8D 04 C0 C7 04 C5 ? ? ? ? ? ? ? ? C7 04 C5", 0);
    CFont__SetProportionalAddr = plugin::GetPattern("E8 ? ? ? ? 8D 0C C0 8A 44 24 04 88 04 CD ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC CC CC 83 EC 08", 0);
    CFont__DrawFontsAddr = plugin::GetPattern("56 57 E8 ? ? ? ? 8B F0 8B CE", 0);
    CFont__SetBackgroundAddr = plugin::GetPattern("E8 ? ? ? ? 8D 0C C0 8A 44 24 04 88 04 CD ? ? ? ? 8A 44 24 08", 0);
    CFont__GetNumberLines = plugin::GetPattern("8B 54 24 0C 83 EC 0C", 0);
    CFont__SetAlphaFadeAddr = plugin::GetPattern("E8 ? ? ? ? 8D 0C C0 8A 44 24 04 88 04 CD ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC CC CC E8 ? ? ? ? 8D 0C C0 8A 44 24 04 88 04 CD ? ? ? ? 8A 44 24 08", 0);
    CFont__SetBackgroundColor = plugin::GetPattern("E8 ? ? ? ? 8D 0C C0 8B 44 24 04 89 04 CD ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC CC CC E8 ? ? ? ? F3 0F 10 05", 0);
    CFont__GetTextRect = plugin::GetPattern("51 56 57 E8 ? ? ? ? F3 0F 10 44 24", 0);
    CFont__SetLineHeightAddr = plugin::GetPattern("E8 ? ? ? ? F3 0F 10 44 24 ? 8D 04 C0 F3 0F 11 04 C5 ? ? ? ? C3 CC CC CC CC CC CC CC CC E8 ? ? ? ? 8D 0C C0 8B 44 24 04", 0);
}
