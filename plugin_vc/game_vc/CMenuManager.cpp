/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMenuManager.h"

CMenuManager &FrontEndMenuManager = *(CMenuManager *)0x869630;
unsigned int MAX_MENU_PAGES = 35;
CMenuScreen *gMenuPages = (CMenuScreen*)0x6D8B70;

void CMenuManager::MessageScreen(const char* pText, bool bFullscreen) {
    plugin::CallMethod<0x498943, CMenuManager*, const char*, bool>(this, pText, bFullscreen);
}

int CMenuManager::FadeIn(int alpha) {
    return min(m_nMenuFadeAlpha, alpha);
}

bool CMenuManager::CheckHover(int x1, int x2, int y1, int y2) {
    bool x = m_nMousePosX > x1 && m_nMousePosX < x2;
    bool y = m_nMousePosY > y1 && m_nMousePosY < y2;
    return x && y;
}
