/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFont.h"

CFontDetails &CFont::Details = *(CFontDetails *)0x97F820;

// Converted from cdecl short CFont::character_code(uchar character) 0x54FE50
short CFont::character_code(unsigned char character) {
    return plugin::CallAndReturn<short, 0x54FE50, unsigned char>(character);
}

// Converted from cdecl int CFont::FindNewCharacter(short character) 0x54FE70
int CFont::FindNewCharacter(short character) {
    return plugin::CallAndReturn<int, 0x54FE70, short>(character);
}

// Converted from cdecl void CFont::SetDropShadowPosition(short position) 0x54FF20
void CFont::SetDropShadowPosition(short position) {
    plugin::Call<0x54FF20, short>(position);
}

// Converted from cdecl void CFont::SetDropColor(CRGBA color) 0x54FF30
void CFont::SetDropColor(CRGBA color) {
    plugin::Call<0x54FF30, CRGBA *>(&color);
}

// Converted from cdecl void CFont::SetAlphaFade(float fade) 0x54FFC0
void CFont::SetAlphaFade(float fade) {
    plugin::Call<0x54FFC0, float>(fade);
}

// Converted from cdecl void CFont::SetRightJustifyWrap(float wrap) 0x54FFD0
void CFont::SetRightJustifyWrap(float wrap) {
    plugin::Call<0x54FFD0, float>(wrap);
}

// Converted from cdecl void CFont::SetFontStyle(short style) 0x54FFE0
void CFont::SetFontStyle(short style) {
    plugin::Call<0x54FFE0, short>(style);
}

// Converted from cdecl void CFont::SetPropOn(void) 0x550020
void CFont::SetPropOn() {
    plugin::Call<0x550020>();
}

// Converted from cdecl void CFont::SetPropOff(void) 0x550030
void CFont::SetPropOff() {
    plugin::Call<0x550030>();
}

// Converted from cdecl void CFont::SetRightJustifyOff(void) 0x550040
void CFont::SetRightJustifyOff() {
    plugin::Call<0x550040>();
}

// Converted from cdecl void CFont::SetRightJustifyOn(void) 0x550060
void CFont::SetRightJustifyOn() {
    plugin::Call<0x550060>();
}

// Converted from cdecl void CFont::SetBackGroundOnlyTextOff(void) 0x550080
void CFont::SetBackGroundOnlyTextOff() {
    plugin::Call<0x550080>();
}

// Converted from cdecl void CFont::SetBackGroundOnlyTextOn(void) 0x550090
void CFont::SetBackGroundOnlyTextOn() {
    plugin::Call<0x550090>();
}

// Converted from cdecl void CFont::SetBackgroundColor(CRGBA color) 0x5500A0
void CFont::SetBackgroundColor(CRGBA color) {
    plugin::Call<0x5500A0, CRGBA *>(&color);
}

// Converted from cdecl void CFont::SetBackgroundOff(void) 0x5500D0
void CFont::SetBackgroundOff() {
    plugin::Call<0x5500D0>();
}

// Converted from cdecl void CFont::SetBackgroundOn(void) 0x5500E0
void CFont::SetBackgroundOn() {
    plugin::Call<0x5500E0>();
}

// Converted from cdecl void CFont::SetCentreSize(float size) 0x5500F0
void CFont::SetCentreSize(float size) {
    plugin::Call<0x5500F0, float>(size);
}

// Converted from cdecl void CFont::SetWrapx(float wrap) 0x550100
void CFont::SetWrapx(float wrap) {
    plugin::Call<0x550100, float>(wrap);
}

// Converted from cdecl void CFont::SetCentreOff(void) 0x550110
void CFont::SetCentreOff() {
    plugin::Call<0x550110>();
}

// Converted from cdecl void CFont::SetCentreOn(void) 0x550120
void CFont::SetCentreOn() {
    plugin::Call<0x550120>();
}

// Converted from cdecl void CFont::SetJustifyOff(void) 0x550140
void CFont::SetJustifyOff() {
    plugin::Call<0x550140>();
}

// Converted from cdecl void CFont::SetJustifyOn(void) 0x550150
void CFont::SetJustifyOn() {
    plugin::Call<0x550150>();
}

// Converted from cdecl void CFont::SetColor(CRGBA color) 0x550170
void CFont::SetColor(CRGBA color) {
    plugin::Call<0x550170, CRGBA *>(&color);
}

// Converted from cdecl void CFont::SetSlant(float slant) 0x550200
void CFont::SetSlant(float slant) {
    plugin::Call<0x550200, float>(slant);
}

// Converted from cdecl void CFont::SetSlantRefPoint(float x,float y) 0x550210
void CFont::SetSlantRefPoint(float x, float y) {
    plugin::Call<0x550210, float, float>(x, y);
}

// Converted from cdecl void CFont::SetScale(float width,float height) 0x550230
void CFont::SetScale(float width, float height) {
    plugin::Call<0x550230, float, float>(width, height);
}

// Converted from cdecl void CFont::DrawFonts(void) 0x550250
void CFont::DrawFonts() {
    plugin::Call<0x550250>();
}

// Converted from cdecl void CFont::FilterOutTokensFromString(ushort *str) 0x550260
void CFont::FilterOutTokensFromString(const wchar_t* str) {
    plugin::Call<0x550260, const wchar_t*>(str);
}

// Converted from cdecl ushort* CFont::ParseToken(ushort *str) 0x5502D0
wchar_t* CFont::ParseToken(wchar_t* str) {
    return plugin::CallAndReturn<wchar_t*, 0x5502D0, wchar_t*>(str);
}

// Converted from cdecl ushort* CFont::ParseToken(ushort *str,CRGBA &color,bool &flashing,bool &bold) 0x550510
wchar_t* CFont::ParseToken(wchar_t* str, CRGBA& color, bool& flashing, bool& bold) {
    return plugin::CallAndReturn<wchar_t*, 0x550510, wchar_t*, CRGBA&, bool&, bool&>(str, color, flashing, bold);
}

// Converted from cdecl float CFont::GetStringWidth(ushort *str,bool sentence) 0x550650
float CFont::GetStringWidth(const wchar_t* str, bool sentence) {
    return plugin::CallAndReturn<float, 0x550650, const wchar_t*, bool>(str, sentence);
}

// Converted from cdecl void CFont::GetTextRect(CRect *rect_out,float x,float y,ushort *text) 0x550720
void CFont::GetTextRect(CRect* rect_out, float x, float y, const wchar_t* text) {
    plugin::Call<0x550720, CRect*, float, float, const wchar_t*>(rect_out, x, y, text);
}

// Converted from cdecl int CFont::GetNumberLines(float x,float y,ushort *text) 0x550C70
int CFont::GetNumberLines(float x, float y, const wchar_t* text) {
    return plugin::CallAndReturn<int, 0x550C70, float, float, const wchar_t*>(x, y, text);
}

// Converted from cdecl void CFont::PrintString(float x,float y,ushort *text) 0x551040
void CFont::PrintString(float x, float y, const wchar_t* text) {
    plugin::Call<0x551040, float, float, const wchar_t*>(x, y, text);
}

// Converted from cdecl void CFont::PrintStringFromBottom(float x,float y,ushort *text) 0x551620
void CFont::PrintStringFromBottom(float x, float y, const wchar_t* text) {
    plugin::Call<0x551620, float, float, const wchar_t*>(x, y, text);
}

// Converted from cdecl void CFont::PrintString(float x,float y,uint,ushort *,ushort *,float) 0x5516C0
void CFont::PrintString(float x, float y, unsigned int arg2, const wchar_t* arg3, const wchar_t* arg4, float arg5) {
    plugin::Call<0x5516C0, float, float, unsigned int, const wchar_t*, const wchar_t*, float>(x, y, arg2, arg3, arg4, arg5);
}

// Converted from cdecl void CFont::RenderFontBuffer(void) 0x551A30
void CFont::RenderFontBuffer() {
    plugin::Call<0x551A30>();
}

// Converted from cdecl void CFont::PrintChar(float x,float y,short character) 0x551E70
void CFont::PrintChar(float x, float y, short character) {
    plugin::Call<0x551E70, float, float, short>(x, y, character);
}

// Converted from cdecl void CFont::InitPerFrame(void) 0x5522B0
void CFont::InitPerFrame() {
    plugin::Call<0x5522B0>();
}

// Converted from cdecl void CFont::Shutdown(void) 0x5522E0
void CFont::Shutdown() {
    plugin::Call<0x5522E0>();
}

// Converted from cdecl void CFont::Initialise(void) 0x552310
void CFont::Initialise() {
    plugin::Call<0x552310>();
}

// Converted from cdecl void UnicodeMakeUpperCase(ushort *str_out,ushort const*str_in) 0x552470
void UnicodeMakeUpperCase(wchar_t* str_out, wchar_t const* str_in) {
    plugin::Call<0x552470, wchar_t*, wchar_t const*>(str_out, str_in);
}

// Converted from cdecl int UnicodeStrlen(ushort const*str) 0x5524B0
int UnicodeStrlen(wchar_t const* str) {
    return plugin::CallAndReturn<int, 0x5524B0, wchar_t const*>(str);
}

// Converted from cdecl void AsciiToUnicode(char const*str_ascii,ushort *str_unicode) 0x552500
void AsciiToUnicode(char const* str_ascii, wchar_t* str_unicode) {
    plugin::Call<0x552500, char const*, wchar_t*>(str_ascii, str_unicode);
}

void CFont::PrintString(float x, float y, const char* text) {
    _SWSTRING_INIT(text, 1);
    PrintString(x, y, _SWSTRING(1));
}
