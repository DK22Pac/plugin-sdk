/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMenuManager.h"

CMenuManager &FrontEndMenuManager = *(CMenuManager *)0xBA6748;

bool& CMenuManager::bInvertMouseX = *(bool *)0xBA6744;
bool& CMenuManager::bInvertMouseY = *(bool *)0xBA6745;

int& CMenuManager::nLastMenuPage = *(int *)0x8CDFF0;

// class functions
CMenuManager::CMenuManager()
{
	((void(__thiscall *)(CMenuManager *))0x574350)(this);
}

CMenuManager::~CMenuManager()
{
	((void(__thiscall *)(CMenuManager *))0x579440)(this);
}

void CMenuManager::DrawWindow(const CRect& coords, const char* pKey, unsigned char nColour, CRGBA backColor, bool Unused, bool bBackground) {
	((void(__thiscall *)(CMenuManager *, const CRect&, const char*, unsigned char, CRGBA, bool, bool))0x573EE0)(this, coords, pKey, nColour, backColor, Unused, bBackground);
}

char CMenuManager::SwitchToNewScreen(char page) {
    return ((char(__thiscall *)(CMenuManager *, char))0x573680)(this, page);
}

void CMenuManager::SaveSettings() {
    ((void(__thiscall *)(CMenuManager *))0x57C660)(this);
}

char CMenuManager::InitialiseChangedLanguageSettings(char a2) {
    return ((char(__thiscall *)(CMenuManager *, char))0x573260)(this, a2);
}

char CMenuManager::SetRadioAutoRetuneOnOff(char a1) {
    return ((char(__stdcall *)(CMenuManager *, char))0x506F80)(this, a1);
}

void CMenuManager::ScrollRadioStations(char numStations) {
    ((void(__thiscall *)(CMenuManager *, char))0x573A00)(this, numStations);
}

void CMenuManager::ProcessMissionPackNewGame() {
    ((void(__thiscall *)(CMenuManager *))0x57D520)(this);
}

signed int CMenuManager::DoSettingsBeforeStartingAGame() {
    ((signed int(__thiscall *)(CMenuManager *))0x573330)(this);
}

char CMenuManager::SetDefaultPreferences(eMenuPage page) {
    return ((char(__thiscall *)(CMenuManager *, eMenuPage))0x573AE0)(this, page);
}