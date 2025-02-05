/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFont.h"
#include <string>
#include <string.h>

CFontDetails &CFont::Details = *(CFontDetails *)0x8F317C;
CSprite2d *CFont::Sprite = (CSprite2d *)0x95CC04;
short &CFont::NewLine = *(short *)0x95CC94;
tFontSize& CFont::Size = *(tFontSize*)0x5FD120; // [3][193]

char *aStr = (char *)0x64C624;

// Converted from cdecl void CFont::DrawFonts(void) 0x501B50 
void CFont::DrawFonts() {
    plugin::Call<0x501B50>();
}

float CFont::GetCharacterSize(const wchar_t c) {
    return plugin::CallAndReturn<float, 0x501840, const wchar_t>(c);
}

// Converted from cdecl wchar_t* CFont::GetNextSpace(wchar_t *str) 0x501960
wchar_t* CFont::GetNextSpace(const wchar_t* str) {
    return plugin::CallAndReturn<wchar_t*, 0x501960, const wchar_t*>(str);
}

// Converted from cdecl int CFont::GetNumberLines(float x,float y,wchar_t *text) 0x501260
int CFont::GetNumberLines(float x, float y, const wchar_t* text) {
    return plugin::CallAndReturn<int, 0x501260, float, float, const wchar_t*>(x, y, text);
}

// Converted from cdecl float CFont::GetStringWidth(wchar_t *str,bool sentence) 0x5018A0
float CFont::GetStringWidth(const wchar_t* str, bool sentence) {
    return plugin::CallAndReturn<float, 0x5018A0, const wchar_t*, bool>(str, sentence);
}

// Converted from cdecl CRect* CFont::GetTextRect(CRect *rect_out,float x,float y,wchar_t *text) 0x5013B0
CRect* CFont::GetTextRect(CRect* rect_out, float x, float y, const wchar_t* text) {
    return plugin::CallAndReturn<CRect*, 0x5013B0, CRect*, float, float, const wchar_t*>(rect_out, x, y, text);
}

// Converted from cdecl void CFont::InitPerFrame(void) 0x500BE0 
void CFont::InitPerFrame() {
    plugin::Call<0x500BE0>();
}

// Converted from cdecl void CFont::Initialise(void) 0x500A40 
void CFont::Initialise() {
    plugin::Call<0x500A40>();
}

// Converted from cdecl wchar_t* CFont::ParseToken(wchar_t *str) 0x5019A0
wchar_t* CFont::ParseToken(wchar_t* str) {
    return plugin::CallAndReturn<wchar_t*, 0x5019A0, wchar_t*>(str);
}

// Converted from cdecl void CFont::PrintChar(float x,float y,short character) 0x500C30
void CFont::PrintChar(float x, float y, short character) {
    plugin::Call<0x500C30, float, float, short>(x, y, character);
}

// Converted from cdecl void CFont::PrintString(float x,float y,wchar_t *text) 0x500F50
void CFont::PrintString(float x, float y, const wchar_t* text) {
    plugin::Call<0x500F50, float, float, const wchar_t*>(x, y, text);
}

// Converted from cdecl void CFont::PrintString(float x,float y,wchar_t *str1,wchar_t *str2,float) 0x501730
void CFont::PrintString(float x, float y, const wchar_t* start, const wchar_t* end, float arg4) {
    plugin::Call<0x501730, float, float, const wchar_t*, const wchar_t*, float>(x, y, start, end, arg4);
}

// Converted from cdecl void CFont::SetAlphaFade(float alpha) 0x501DD0
void CFont::SetAlphaFade(float alpha) {
    plugin::Call<0x501DD0, float>(alpha);
}

// Converted from cdecl void CFont::SetBackGroundOnlyTextOff(void) 0x501D40 
void CFont::SetBackGroundOnlyTextOff() {
    plugin::Call<0x501D40>();
}

// Converted from cdecl void CFont::SetBackGroundOnlyTextOn(void) 0x501D30 
void CFont::SetBackGroundOnlyTextOn() {
    plugin::Call<0x501D30>();
}

// Converted from cdecl void CFont::SetBackgroundColor(CRGBA color) 0x501D00 
void CFont::SetBackgroundColor(CRGBA color) {
    plugin::Call<0x501D00, CRGBA*>(&color);
}

// Converted from cdecl void CFont::SetBackgroundOff(void) 0x501CF0 
void CFont::SetBackgroundOff() {
    plugin::Call<0x501CF0>();
}

// Converted from cdecl void CFont::SetBackgroundOn(void) 0x501CE0 
void CFont::SetBackgroundOn() {
    plugin::Call<0x501CE0>();
}

// Converted from cdecl void CFont::SetCentreOff(void) 0x501CB0 
void CFont::SetCentreOff() {
    plugin::Call<0x501CB0>();
}

// Converted from cdecl void CFont::SetCentreOn(void) 0x501C90 
void CFont::SetCentreOn() {
    plugin::Call<0x501C90>();
}

// Converted from cdecl void CFont::SetCentreSize(float size) 0x501CD0
void CFont::SetCentreSize(float size) {
    plugin::Call<0x501CD0, float>(size);
}

// Converted from cdecl void CFont::SetColor(CRGBA color) 0x501BD0
void CFont::SetColor(CRGBA color) {
    plugin::Call<0x501BD0, CRGBA*>(&color);
}

// Converted from cdecl void CFont::SetDropColor(CRGBA color) 0x501DE0
void CFont::SetDropColor(CRGBA color) {
    plugin::Call<0x501DE0, CRGBA*>(&color);
}

// Converted from cdecl void CFont::SetDropShadowPosition(short value) 0x501E70
void CFont::SetDropShadowPosition(short value) {
    plugin::Call<0x501E70, short>(value);
}

// Converted from cdecl void CFont::SetFontStyle(short style) 0x501DB0
void CFont::SetFontStyle(short style) {
    plugin::Call<0x501DB0, short>(style);
}

// Converted from cdecl void CFont::SetJustifyOff(void) 0x501C80 
void CFont::SetJustifyOff() {
    plugin::Call<0x501C80>();
}

// Converted from cdecl void CFont::SetJustifyOn(void) 0x501C60 
void CFont::SetJustifyOn() {
    plugin::Call<0x501C60>();
}

// Converted from cdecl void CFont::SetPropOff(void) 0x501D90 
void CFont::SetPropOff() {
    plugin::Call<0x501D90>();
}

// Converted from cdecl void CFont::SetPropOn(void) 0x501DA0 
void CFont::SetPropOn() {
    plugin::Call<0x501DA0>();
}

// Converted from cdecl void CFont::SetRightJustifyOff(void) 0x501D70 
void CFont::SetRightJustifyOff() {
    plugin::Call<0x501D70>();
}

// Converted from cdecl void CFont::SetRightJustifyOn(void) 0x501D50 
void CFont::SetRightJustifyOn() {
    plugin::Call<0x501D50>();
}

// Converted from cdecl void CFont::SetRightJustifyWrap(float value) 0x501DC0
void CFont::SetRightJustifyWrap(float value) {
    plugin::Call<0x501DC0, float>(value);
}

// Converted from cdecl void CFont::SetScale(float width,float height) 0x501B80
void CFont::SetScale(float width, float height) {
    plugin::Call<0x501B80, float, float>(width, height);
}

// Converted from cdecl void CFont::SetSlant(float value) 0x501BC0
void CFont::SetSlant(float value) {
    plugin::Call<0x501BC0, float>(value);
}

// Converted from cdecl void CFont::SetSlantRefPoint(float x,float y) 0x501BA0 
void CFont::SetSlantRefPoint(float x, float y) {
    plugin::Call<0x501BA0, float, float>(x, y);
}

// Converted from cdecl void CFont::SetWrapx(float value) 0x501CC0
void CFont::SetWrapx(float value) {
    plugin::Call<0x501CC0, float>(value);
}

// Converted from cdecl void CFont::Shutdown(void) 0x500BA0 
void CFont::Shutdown() {
    plugin::Call<0x500BA0>();
}

// Converted from cdecl short CFont::character_code(uchar character) 0x501E80
short CFont::character_code(unsigned char character) {
    return plugin::CallAndReturn<short, 0x501E80, unsigned char>(character);
}

char* CFont::GetNextSpace(const char* str) {
    _SWSTRING_INIT(str, 1);
    wchar_t *result = GetNextSpace(_SWSTRING(1));
    return const_cast<char *>(&str[result - _SWSTRING(1)]);
}

int CFont::GetNumberLines(float x, float y, const char* text) {
    _SWSTRING_INIT(text, 1);
    return GetNumberLines(x, y, _SWSTRING(1));
}

float CFont::GetStringWidth(const char* str, bool sentence) {
    _SWSTRING_INIT(str, 1);
    return GetStringWidth(_SWSTRING(1), sentence);
}

CRect* CFont::GetTextRect(CRect* rect_out, float x, float y, const char* text) {
    _SWSTRING_INIT(text, 1);
    return GetTextRect(rect_out, x, y, _SWSTRING(1));
}

char* CFont::ParseToken(char* str) {
    _SWSTRING_INIT(str, 1);
    wchar_t *result = ParseToken(_SWSTRING(1));
    return &str[result - _SWSTRING(1)];
}

void CFont::PrintChar(float x, float y, char character) {
    PrintChar(x, y, static_cast<short>(character));
}

void CFont::PrintString(float x, float y, const char* text) {
    _SWSTRING_INIT(text, 1);
    PrintString(x, y, _SWSTRING(1));
}

void CFont::PrintString(float x, float y, const char* start, const char* end, float arg4) {
    _SWSTRING_INIT(start, 1);
    PrintString(x, y, _SWSTRING(1), &_SWSTRING(1)[end - start], arg4);
}

// Converted from cdecl void AsciiToUnicode(char const* str_ascii,wchar_t * str_unicode) 0x5009C0
void AsciiToUnicode(char const* str_ascii, wchar_t* str_unicode) {
    plugin::Call<0x5009C0, char const*, wchar_t*>(str_ascii, str_unicode);
}

// Converted from cdecl int UnicodeStrlen(wchar_t const* str) 0x500A20 
int UnicodeStrlen(wchar_t const* str) {
    return plugin::CallAndReturn<int, 0x500A20, wchar_t const*>(str);
}

