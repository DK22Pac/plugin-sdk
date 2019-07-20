/*
	Plugin-SDK (Grand Theft Auto 3) source file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#include "CHud.h"

wchar_t *CHud::m_HelpMessage = (wchar_t*)0x86B888;
wchar_t *CHud::m_LastHelpMessage = (wchar_t*)0x6E8F28;
int &CHud::m_HelpMessageState = *(int*)0x880E1C;
int &CHud::m_HelpMessageTimer = *(int*)0x880FA4;
int &CHud::m_HelpMessageFadeTimer = *(int*)0x8F6258;
wchar_t *CHud::m_HelpMessageToPrint = (wchar_t*)0x664480;
float &CHud::m_HelpMessageDisplayTime = *(float*)0x8E2C28;
float &CHud::m_fTextBoxNumLines = *(float*)0x8E2C28;
float &CHud::m_fHelpMessageTime = *(float *)0x8E2C28;
bool &CHud::m_HelpMessageQuick = *(bool *)0x95CCF7;
int CHud::m_ZoneState = *(int*)0x8F29AC;
int CHud::m_ZoneFadeTimer;
int CHud::m_ZoneNameTimer = *(int*)0x8F1A50;
wchar_t *&CHud::m_pZoneName = *(wchar_t **)0x8E2C2C;
wchar_t *CHud::m_pLastZoneName = (wchar_t*)0x8F432C;
wchar_t *CHud::m_ZoneToPrint;
int CHud::m_VehicleState = *(int*)0x940560;
int CHud::m_VehicleFadeTimer;
int CHud::m_VehicleNameTimer = *(int*)0x8F2A14;
wchar_t *&CHud::m_VehicleName = *(wchar_t **)0x942FB4;
wchar_t *CHud::m_pLastVehicleName = *(wchar_t **)0x8E2DD8;
wchar_t *CHud::m_pVehicleNameToPrint;
wchar_t *CHud::m_Message = (wchar_t*)0x72E318;
wchar_t *CHud::m_PagerMessage = (wchar_t*)0x878840;
bool &CHud::m_Wants_To_Draw_Hud = *(bool*)0x95CD89;
bool &CHud::m_Wants_To_Draw_3dMarkers = *(bool*)0x95CD62;
wchar_t(*CHud::m_BigMessage)[128] = (wchar_t(*)[128])0x664CE0;
char &CHud::m_ItemToFlash = *(char*)0x95CC82;
CSprite2d *CHud::Sprites = (CSprite2d*)0x95CB9C;
float *BigMessageInUse = (float *)0x862140;
float *BigMessageAlpha = (float *)0x862158;
float *BigMessageX = (float *)0x773248;
float &OddJob2OffTimer = *(float*)0x942FA0;
char &CounterOnLastFrame = *(char*)0x95CD67;
float &OddJob2XOffset = *(float*)0x8F1B5C;
char &CounterFlashTimer = *(char*)0x95CC20;
char &OddJob2Timer = *(char*)0x95CC52;
char &TimerOnLastFrame = *(char*)0x95CDA7;
char &OddJob2On = *(char*)0x95CC78;
char &TimerFlashTimer = *(char*)0x95CC6C;
char &PagerSoundPlayed = *(char*)0x95CC4A;
int &SpriteBrightness = *(int*)0x95CC54;
float &PagerXOffset = *(float*)0x941590;
char &PagerTimer = *(char*)0x95CC3A;
char &PagerOn = *(char*)0x95CCA0;

void CHud::Draw() {
	plugin::Call<0x5052A0>();
}

void CHud::DrawAfterFade() {
	plugin::Call<0x509030>();
}

void CHud::GetRidOfAllHudMessages() {
	plugin::Call<0x504F90>();
}

void CHud::Initialise() {
	plugin::Call<0x5048F0>();
}

void CHud::ReInitialise() {
	plugin::Call<0x504CC0>();
}

void CHud::SetBigMessage(wchar_t *message, char style) {
	plugin::Call<0x50A250, wchar_t *, char>(message, style);
}

void CHud::SetHelpMessage(wchar_t *message, bool quick) {
	plugin::Call<0x5051E0, wchar_t *, bool>(message, quick);
}

void CHud::SetMessage(wchar_t *message) {
	plugin::Call<0x50A210, wchar_t *>(message);
}

void CHud::SetPagerMessage(wchar_t *message) {
	plugin::Call<0x50A320, wchar_t *>(message);
}

void CHud::SetVehicleName(wchar_t *name) {
	plugin::Call<0x505290, wchar_t *>(name);
}

void CHud::SetZoneName(wchar_t *name) {
	plugin::Call<0x5051D0, wchar_t *>(name);
}

void CHud::Shutdown() {
	plugin::Call<0x504C50>();
}
