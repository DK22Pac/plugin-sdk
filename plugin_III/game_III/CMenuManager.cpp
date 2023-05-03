/*
	Plugin-SDK (Grand Theft Auto 3) source file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#include "CMenuManager.h"

CMenuManager &FrontEndMenuManager = *(CMenuManager*)0x8F59D8;
int &CMenuManager::OS_Language = *(int*)0x5F2F78;
bool &CMenuManager::m_bPrefsUseVibration = *(bool*)0x95CD92;
bool &CMenuManager::m_bDisplayControllerOnFoot = *(bool*)0x95CD8D;
bool &CMenuManager::m_bPrefsVsync = *(bool*)0x5F2E58;
bool &CMenuManager::m_bPrefsVsyncDisp = *(bool*)0x5F2E5C;
bool &CMenuManager::m_bPrefsFrameLimiter = *(bool*)0x5F2E60;
bool &CMenuManager::m_bPrefsShowSubtitles = *(bool*)0x5F2E54;
char &CMenuManager::m_nPrefsSpeakers = *(char*)0x95CD7E;
char &CMenuManager::m_nControlMethod = *(char*)0x8F5F7C;
bool &CMenuManager::m_bPrefsDMA = *(bool*)0x5F2F74;
char &CMenuManager::m_nPrefsLanguage = *(char*)0x941238;
bool &CMenuManager::m_bPrefsAllowNastyGame = *(bool*)0x5F2E64;
bool &CMenuManager::m_bStartUpFrontEndRequested = *(bool*)0x95CCF4;
bool &CMenuManager::m_bShutDownFrontEndRequested = *(bool*)0x95CD6A;
bool&CMenuManager::m_bPrefsUseWideScreen = *(bool*)0x95CD23;
char &CMenuManager::m_nPrefsRadioStation = *(char*)0x95CDA4;
bool&CMenuManager::m_bDisableMouseSteering = *(bool*)0x60252C;
int &CMenuManager::m_nPrefsBrightness = *(int*)0x5F2E50;
float &CMenuManager::m_fPrefsLOD = *(float*)0x8F42C4;
bool&CMenuManager::m_bFrontEnd_ReloadObrTxtGxt = *(bool*)0x628CFC;
int &CMenuManager::m_nPrefsMusicVolume = *(int*)0x5F2E4C;
int &CMenuManager::m_nPrefsSfxVolume = *(int*)0x5F2E48;
char *CMenuManager::m_nPrefsSkinFile = (char*)0x5F2E74;
int &CMenuManager::m_nKeyPressedCode = *(int*)0x5F2E70;
CMenuScreen* aScreens = (CMenuScreen*)0x611930;

void CMenuManager::BuildStatLine(char *text, float *stat, bool aFloat, float* stat2) {
	plugin::CallMethod<0x483870, CMenuManager *, char *, float *, bool, float*>(this, text, stat, aFloat, stat2);
}

void CMenuManager::CentreMousePointer() {
	plugin::Call<0x48ACE0>();
}

int CMenuManager::CheckCodesForControls(int type) {
	return plugin::CallMethodAndReturn<int, 0x483870, CMenuManager *, int>(this, type);
}

bool CMenuManager::CheckHover(int x1, int x2, int y1, int y2) {
	return plugin::CallMethodAndReturn<bool, 0x48ACA0, CMenuManager *, int, int, int, int>(this, x1, x2, y1, y2);
}

void CMenuManager::CheckSliderMovement(int direction) {
	plugin::CallMethod<0x48B210, CMenuManager *, int>(this, direction);
}

int CMenuManager::CostructStatLine(int line) {
	return plugin::CallMethodAndReturn<int, 0x482800, CMenuManager *, int>(this, line);
}

void CMenuManager::DisplayHelperText() {
	plugin::CallMethod<0x48B490, CMenuManager *>(this);
}

float CMenuManager::DisplaySlider(float, float, float, float, float, float) {
	return plugin::CallMethodAndReturn<float, 0x00, CMenuManager *>(this);
}

void CMenuManager::DoSettingsBeforeStartingAGame() {
	plugin::CallMethod<0x48AB40, CMenuManager *>(this);
}

void CMenuManager::Draw() {
	plugin::CallMethod<0x47AE00, CMenuManager *>(this);
}

void CMenuManager::DrawControllerBound(int arg0, int arg1, int arg2, char arg3) {
	plugin::CallMethod<0x489710, CMenuManager *, int, int, int, char>(this, arg0, arg1, arg2, arg3);
}

void CMenuManager::DrawControllerScreenExtraText(int arg0, int arg1, int arg2) {
	plugin::CallMethod<0x4892F0, CMenuManager *, int, int, int>(this, arg0, arg1, arg2);
}

void CMenuManager::DrawControllerSetupScreen() {
	plugin::CallMethod<0x481210, CMenuManager *>(this);
}

void CMenuManager::DrawFrontEnd() {
	plugin::CallMethod<0x47A540, CMenuManager *>(this);
}

void CMenuManager::DrawFrontEndNormal() {
	plugin::CallMethod<0x47A5B0, CMenuManager *>(this);
}

void CMenuManager::DrawPlayerSetupScreen() {
	plugin::CallMethod<0x47F2B0, CMenuManager *>(this);
}

int CMenuManager::FadeIn(int alpha) {
	return plugin::CallMethodAndReturn<int, 0x48AC60, CMenuManager *, int>(this, alpha);
}

void CMenuManager::FilterOutColorMarkersFromString(char s, CRGBA &color) {
	plugin::CallMethod<0x4889C0, CMenuManager *, char, CRGBA &>(this, s, color);
}

int CMenuManager::GetStartOptionsCntrlConfigScreens() {
	return plugin::CallMethodAndReturn<int, 0x489270, CMenuManager *>(this);
}

void CMenuManager::InitialiseChangedLanguageSettings() {
	plugin::Call<0x47A4D0>();
}

void CMenuManager::LoadAllTextures() {
	plugin::CallMethod<0x47A230, CMenuManager *>(this);
}

void CMenuManager::LoadSettings() {
	plugin::CallMethod<0x488EE0, CMenuManager *>(this);
}

void CMenuManager::MessageScreen(char *message) {
	plugin::Call<0x48B7E0, char *>(message);
}

void CMenuManager::PickNewPlayerColour() {
	plugin::Call<0x488C40>();
}

void CMenuManager::PrintBriefs() {
	plugin::CallMethod<0x484D60, CMenuManager *>(this);
}

void CMenuManager::PrintErrorMessage() {
	plugin::Call<0x484F70>();
}

void CMenuManager::PrintStats() {
	plugin::CallMethod<0x482100, CMenuManager *>(this);
}

void CMenuManager::Process() {
	plugin::CallMethod<0x485100, CMenuManager *>(this);
}

void CMenuManager::ProcessButtonPresses() {
	plugin::CallMethod<0x4856F0, CMenuManager *>(this);
}

void CMenuManager::ProcessOnOffMenuOptions() {
	plugin::CallMethod<0x48AE60, CMenuManager *>(this);
}

void CMenuManager::RequestFrontEndShutDown() {
	plugin::Call<0x488750>();
}

void CMenuManager::RequestFrontEndStartUp() {
	plugin::Call<0x488770>();
}

void CMenuManager::ResetHelperText() {
	plugin::CallMethod<0x48B470, CMenuManager *>(this);
}

void CMenuManager::SaveLoadFileError_SetUpErrorScreen() {
	plugin::CallMethod<0x488930, CMenuManager *>(this);
}

void CMenuManager::SaveSettings() {
	plugin::CallMethod<0x488CC0, CMenuManager *>(this);
}

void CMenuManager::SetHelperText(int text) {
	plugin::CallMethod<0x48B450, CMenuManager *, int>(this, text);
}

void CMenuManager::ShutdownJustMenu() {
	plugin::CallMethod<0x488920, CMenuManager *>(this);
}

float CMenuManager::StretchX(float x) {
	return plugin::CallMethodAndReturn<float, 0x48ABE0, CMenuManager *, float>(this, x);
}

float CMenuManager::StretchY(float y) {
	return plugin::CallMethodAndReturn<float, 0x48AC20, CMenuManager *, float>(this, y);
}

void CMenuManager::SwitchMenuOnAndOff() {
	plugin::CallMethod<0x488790, CMenuManager *>(this);
}

void CMenuManager::UnloadTextures() {
	plugin::CallMethod<0x47A440, CMenuManager *>(this);
}

void CMenuManager::WaitForUserCD() {
	plugin::CallMethod<0x48ADD0, CMenuManager *>(this);
}
