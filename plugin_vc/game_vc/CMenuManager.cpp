/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMenuManager.h"
#include "cDMAudio.h"

CMenuManager& FrontEndMenuManager = *(CMenuManager *)0x869630;
CMenuScreen* aScreens = (CMenuScreen*)0x6D8B70;

void CMenuManager::MessageScreen(const char* pText, bool bFullscreen) {
    plugin::CallMethod<0x498943, CMenuManager*, const char*, bool>(this, pText, bFullscreen);
}

int CMenuManager::FadeIn(int alpha) {
    return std::min(m_nMenuFadeAlpha, alpha);
}

bool CMenuManager::CheckHover(int x1, int x2, int y1, int y2) {
    bool x = m_nMousePosX > x1 && m_nMousePosX < x2;
    bool y = m_nMousePosY > y1 && m_nMousePosY < y2;
    return x && y;
}

void CMenuManager::DisplayHelperText(const char* text) {
    plugin::CallMethod<0x48F429, CMenuManager*>(this, text);
}

void CMenuManager::SwitchToNewScreen(int screen) {
    plugin::CallMethod<0x4983EF, CMenuManager*, int>(this, screen);
}

void CMenuManager::RequestFrontEndShutDown() {
    m_bShutDownFrontEndRequested = true;
}

void CMenuManager::RequestFrontEndStartUp() {
    m_bStartUpFrontEndRequested = true;
}

void CMenuManager::SwitchMenuOnAndOff() {
    plugin::CallMethod<0x498E5F, CMenuManager*>(this);
}

void CMenuManager::CheckSliderMovement(char value) {
    plugin::CallMethod<0x498A1B, CMenuManager*>(this, value);
}

void CMenuManager::ChangeRadioStation(char value) {
    plugin::CallMethod<0x4982D3, CMenuManager*>(this, value);
}

void CMenuManager::Draw(int unk) {
    plugin::CallMethod<0x49DF40, CMenuManager*>(this, unk);
}

void CMenuManager::UserInput() {
    plugin::CallMethod<0x4965BA, CMenuManager*>(this);
}

void CMenuManager::PrintMap() {
    plugin::CallMethod<0x49A5B7, CMenuManager*>(this);
}

void CMenuManager::SaveSettings() {
    plugin::CallMethod<0x490230, CMenuManager*>(this);
}

void CMenuManager::LoadSettings() {
    plugin::CallMethod<0x48FE76, CMenuManager*>(this);
}
