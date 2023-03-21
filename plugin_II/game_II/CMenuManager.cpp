/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CMenuManager.h"

CMenuManager** FrontendMenuManager = (CMenuManager**)0x5EB160;
tTargaFileTexture* StoredFrontendTextures = (tTargaFileTexture*)0x591F68; // [25]

CMenuManager* GetFrontendMenuManager() {
    return *FrontendMenuManager;
}

void CMenuManager::LoadTexture(unsigned short id) {
    plugin::CallStd<0x452D50, unsigned short>(id);
}

void CMenuManager::FindBackground(unsigned char screen, unsigned char* left, unsigned char* right) {
    plugin::CallStd<0x452E80, unsigned char, unsigned char*, unsigned char*>(screen, left, right);
}

bool CMenuManager::GetKeyboardKeyStates() {
    return plugin::CallMethodAndReturn<bool, 0x452000, CMenuManager*>(this);
}

bool CMenuManager::IsKeyDown(int key) {
    return this->m_nKeys[key];
}

void CMenuManager::SwitchToNewScreen(unsigned short page) {
    plugin::CallMethod<0x4587B0, CMenuManager*, unsigned short>(this, page);
}

int CMenuManager::Process() {
    return plugin::CallMethodAndReturn<int, 0x45A320, CMenuManager*>(this);
}

void CMenuManager::PopulateMenu() {
    plugin::CallMethod<0x453E20, CMenuManager*>(this);
}
