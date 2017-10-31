/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CHud.h"
#include <string>

__int64(*CHud::m_HelpMessageToPrint)[] = (__int64(*)[])0x78C5F8;
__int64(*CHud::m_LastHelpMessage)[] = (__int64(*)[])0x7D3E40;
__int64(*CHud::m_Message)[] = (__int64(*)[])0x814F28;
__int64(*CHud::m_HelpMessage)[] = (__int64(*)[])0x939028;
int &CHud::m_HelpMessageState = *(int*)0x94DBCC;
int &CHud::m_pZoneName = *(int*)0x97537C;
int &CHud::m_pVehicleName = *(int*)0xA0FC98;
char &CHud::m_Wants_To_Draw_3dMarkers = *(char*)0xA10AFC;
char &CHud::m_Wants_To_Draw_Hud = *(char*)0xA10B45;

// Converted from cdecl void CHud::Draw(void) 0x557320 
void CHud::Draw() {
    plugin::Call<0x557320>();
}

// Converted from cdecl void CHud::DrawAfterFade(void) 0x5566E0 
void CHud::DrawAfterFade() {
    plugin::Call<0x5566E0>();
}

// Converted from cdecl float CHud::DrawFadeState(DRAW_FADE_STATE fadeState,int) 0x55BD20
float CHud::DrawFadeState(DRAW_FADE_STATE fadeState, int arg1) {
    return plugin::CallAndReturn<float, 0x55BD20, DRAW_FADE_STATE, int>(fadeState, arg1);
}

// Converted from cdecl void CHud::GetRidOfAllHudMessages(void) 0x55C200 
void CHud::GetRidOfAllHudMessages() {
    plugin::Call<0x55C200>();
}

// Converted from cdecl void CHud::Initialise(void) 0x55C8A0 
void CHud::Initialise() {
    plugin::Call<0x55C8A0>();
}

// Converted from cdecl bool CHud::IsHelpMessageBeingDisplayed(void) 0x55BFB0 
bool CHud::IsHelpMessageBeingDisplayed() {
    return plugin::CallAndReturn<bool, 0x55BFB0>();
}

// Converted from cdecl void CHud::ReInitialise(void) 0x55C440 
void CHud::ReInitialise() {
    plugin::Call<0x55C440>();
}

// Converted from cdecl void CHud::ResetWastedText(void) 0x556570 
void CHud::ResetWastedText() {
    plugin::Call<0x556570>();
}

// Converted from cdecl void CHud::SetBigMessage(ushort *text,ushort style) 0x5565B0
void CHud::SetBigMessage(const wchar_t* text, unsigned short style) {
    plugin::Call<0x5565B0, const wchar_t*, unsigned short>(text, style);
}

// Converted from cdecl void CHud::SetHelpMessage(ushort *text, bool quickMessage, bool permanent, bool addToBrief) 0x55BFC0
void CHud::SetHelpMessage(const wchar_t* text, bool quickMessage, bool permanent, bool addToBrief) {
    plugin::Call<0x55BFC0, const wchar_t*, bool, bool, bool>(text, quickMessage, permanent, addToBrief);
}

// Converted from cdecl void CHud::SetMessage(ushort *text) 0x5566A0
void CHud::SetMessage(const wchar_t* text) {
    plugin::Call<0x5566A0, const wchar_t*>(text);
}

// Converted from cdecl void CHud::SetPagerMessage(ushort *text) 0x5565A0
void CHud::SetPagerMessage(const wchar_t* text) {
    plugin::Call<0x5565A0, const wchar_t*>(text);
}

// Converted from cdecl void CHud::SetVehicleName(ushort *text) 0x55BFA0
void CHud::SetVehicleName(const wchar_t* text) {
    plugin::Call<0x55BFA0, const wchar_t*>(text);
}

// Converted from cdecl void CHud::SetZoneName(ushort *text) 0x55C1F0
void CHud::SetZoneName(const wchar_t* text) {
    plugin::Call<0x55C1F0, const wchar_t*>(text);
}

// Converted from cdecl void CHud::Shutdown(void) 0x55C7F0 
void CHud::Shutdown() {
    plugin::Call<0x55C7F0>();
}

void CHud::SetBigMessage(const char* text, unsigned short style) {
    _SWSTRING_INIT(text, 1);
    SetBigMessage(_SWSTRING(1), style);
}

void CHud::SetHelpMessage(const char* text, bool quickMessage, bool permanent, bool addToBrief) {
    _SWSTRING_INIT(text, 1);
    SetHelpMessage(_SWSTRING(1), quickMessage, permanent, addToBrief);
}

void CHud::SetMessage(const char* text) {
    _SWSTRING_INIT(text, 1);
    SetMessage(_SWSTRING(1));
}

void CHud::SetPagerMessage(const char* text) {
    _SWSTRING_INIT(text, 1);
    SetPagerMessage(_SWSTRING(1));
}

void CHud::SetVehicleName(const char* text) {
    _SWSTRING_INIT(text, 1);
    SetVehicleName(_SWSTRING(1));
}

void CHud::SetZoneName(const char* text) {
    _SWSTRING_INIT(text, 1);
    SetZoneName(_SWSTRING(1));
}
