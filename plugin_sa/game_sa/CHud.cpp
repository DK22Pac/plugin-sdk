/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CHud.h"

char (*CHud::m_BigMessage)[128] = (char (*)[128])0xBAACC0;
Bool &CHud::bScriptForceDisplayWithCounters = *(Bool *)0xBAA3FA;

// Converted from cdecl void CHud::Draw(void) 0x58FAE0
void CHud::Draw() {
    plugin::Call<0x58FAE0>();
}

// Converted from cdecl void CHud::DrawAfterFade(void) 0x58D490
void CHud::DrawAfterFade() {
    plugin::Call<0x58D490>();
}

// Converted from cdecl void CHud::DrawAreaName(void) 0x58AA50
void CHud::DrawAreaName() {
    plugin::Call<0x58AA50>();
}

// Converted from cdecl void CHud::DrawBustedWastedMessage(void) 0x58CA50
void CHud::DrawBustedWastedMessage() {
    plugin::Call<0x58CA50>();
}

// Converted from cdecl void CHud::DrawCrossHairs(void) 0x58E020
void CHud::DrawCrossHairs() {
    plugin::Call<0x58E020>();
}

// Converted from cdecl float CHud::DrawFadeState(DRAW_FADE_STATE fadeState,int) 0x58D580
float CHud::DrawFadeState(DRAW_FADE_STATE fadeState, int arg1) {
    return plugin::CallAndReturn<float, 0x58D580, DRAW_FADE_STATE, int>(fadeState, arg1);
}

// Converted from cdecl void CHud::DrawHelpText(void) 0x58B6E0
void CHud::DrawHelpText() {
    plugin::Call<0x58B6E0>();
}

// Converted from cdecl void CHud::DrawMissionTimers(void) 0x58B180
void CHud::DrawMissionTimers() {
    plugin::Call<0x58B180>();
}

// Converted from cdecl void CHud::DrawMissionTitle(void) 0x58D240
void CHud::DrawMissionTitle() {
    plugin::Call<0x58D240>();
}

// Converted from cdecl void CHud::DrawOddJobMessage(uchar priority) 0x58CC80
void CHud::DrawOddJobMessage(unsigned char priority) {
    plugin::Call<0x58CC80, unsigned char>(priority);
}

// Converted from cdecl void CHud::DrawRadar(void) 0x58A330
void CHud::DrawRadar() {
    plugin::Call<0x58A330>();
}

// Converted from cdecl void CHud::DrawScriptText(uchar priority) 0x58C080
void CHud::DrawScriptText(unsigned char priority) {
    plugin::Call<0x58C080, unsigned char>(priority);
}

// Converted from cdecl void CHud::DrawSubtitles(void) 0x58C250
void CHud::DrawSubtitles() {
    plugin::Call<0x58C250>();
}

// Converted from cdecl void CHud::DrawSuccessFailedMessage(void) 0x58C6A0
void CHud::DrawSuccessFailedMessage() {
    plugin::Call<0x58C6A0>();
}

// Converted from cdecl void CHud::DrawVehicleName(void) 0x58AEA0
void CHud::DrawVehicleName() {
    plugin::Call<0x58AEA0>();
}

// Converted from cdecl void CHud::DrawVitalStats(void) 0x589650
void CHud::DrawVitalStats() {
    plugin::Call<0x589650>();
}

// Converted from cdecl void CHud::GetRidOfAllHudMessages(uchar) 0x588A50
void CHud::GetRidOfAllHudMessages(unsigned char arg0) {
    plugin::Call<0x588A50, unsigned char>(arg0);
}

// Converted from cdecl float CHud::GetYPosBasedOnHealth(uchar playerId,float pos,signed char offset) 0x588B60
float CHud::GetYPosBasedOnHealth(unsigned char playerId, float pos, char offset) {
    return plugin::CallAndReturn<float, 0x588B60, unsigned char, float, signed>(playerId, pos, offset);
}

// Converted from cdecl void CHud::Initialise(void) 0x5BA850
void CHud::Initialise() {
    plugin::Call<0x5BA850>();
}

// Converted from cdecl void CHud::ReInitialise(void) 0x588880
void CHud::ReInitialise() {
    plugin::Call<0x588880>();
}

// Converted from cdecl void CHud::ResetWastedText(void) 0x589070
void CHud::ResetWastedText() {
    plugin::Call<0x589070>();
}

// Converted from cdecl void CHud::SetBigMessage(char *text,ushort style) 0x588FC0
void CHud::SetBigMessage(char* text, unsigned short style) {
    plugin::Call<0x588FC0, char*, unsigned short>(text, style);
}

// Converted from cdecl void CHud::SetHelpMessage(char const*text,bool quickMessage,bool permanent,bool addToBrief) 0x588BE0
void CHud::SetHelpMessage(char const* text, bool quickMessage, bool permanent, bool addToBrief) {
    plugin::Call<0x588BE0, char const*, bool, bool, bool>(text, quickMessage, permanent, addToBrief);
}

// Converted from cdecl void CHud::SetHelpMessageStatUpdate(uchar state,ushort statId,float diff,float max) 0x588D40
void CHud::SetHelpMessageStatUpdate(unsigned char state, unsigned short statId, float diff, float max) {
    plugin::Call<0x588D40, unsigned char, unsigned short, float, float>(state, statId, diff, max);
}

// Converted from cdecl void CHud::SetMessage(char *text) 0x588F60
void CHud::SetMessage(char* text) {
    plugin::Call<0x588F60, char*>(text);
}

// Converted from cdecl void CHud::SetVehicleName(char *name) 0x588F50
void CHud::SetVehicleName(char* name) {
    plugin::Call<0x588F50, char*>(name);
}

// Converted from cdecl void CHud::SetZoneName(char *name,uchar displayState) 0x588BB0
void CHud::SetZoneName(char* name, unsigned char displayState) {
    plugin::Call<0x588BB0, char*, unsigned char>(name, displayState);
}

// Converted from cdecl void CHud::Shutdown(void) 0x588850
void CHud::Shutdown() {
    plugin::Call<0x588850>();
}

// Converted from cdecl void CHud::DrawAmmo(CPed *ped, int x, int y, float alpha) 0x5893B0
void CHud::DrawAmmo(CPed* ped, int x, int y, float alpha) {
    plugin::Call<0x5893B0, CPed*, int, int, float>(ped, x, y, alpha);
}

// Converted from cdecl void CHud::DrawPlayerInfo(void) 0x58EAF0
void CHud::DrawPlayerInfo() {
    plugin::Call<0x58EAF0>();
}

// Converted from cdecl void CHud::DrawTripSkip(void) 0x58A160
void CHud::DrawTripSkip() {
    plugin::Call<0x58A160>();
}

// Converted from cdecl void CHud::DrawWanted(void) 0x58D9A0
void CHud::DrawWanted() {
    plugin::Call<0x58D9A0>();
}

// Converted from cdecl void CHud::DrawWeaponIcon(CPed *ped, int x, int y, float alpha) 0x58D7D0
void CHud::DrawWeaponIcon(CPed* ped, int x, int y, float alpha) {
    plugin::Call<0x58D7D0, CPed*, int, int, float>(ped, x, y, alpha);
}

// Converted from cdecl void CHud::RenderArmorBar(int playerId, int x, int y) 0x5890A0
void CHud::RenderArmorBar(int playerId, int x, int y) {
    plugin::Call<0x5890A0, int, int, int>(playerId, x, y);
}

// Converted from cdecl void CHud::RenderBreathBar(int playerId, int x, int y) 0x589190
void CHud::RenderBreathBar(int playerId, int x, int y) {
    plugin::Call<0x589190, int, int, int>(playerId, x, y);
}

// Converted from cdecl void CHud::RenderHealthBar(int playerId, int x, int y) 0x589270
void CHud::RenderHealthBar(int playerId, int x, int y) {
    plugin::Call<0x589270, int, int, int>(playerId, x, y);
}