/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMenuManager.h"

CMenuManager &FrontendMenuManager = *(CMenuManager *)0x869630;
unsigned int MAX_MENU_PAGES = 35;
tMenuPage *gMenuPages = (tMenuPage *)0x6D8B70;

void CMenuManager::MessageScreen(const char* pText, bool bFullscreen) {
    plugin::CallMethod<0x498943, CMenuManager*, const char*, bool>(this, pText, bFullscreen);
}