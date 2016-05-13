#include "CMenuManager.h"

CMenuManager &FrontEndMenuManager = *(CMenuManager *)0xBA6748;

bool& CMenuManager::bInvertMouseX = *(bool *)0xBA6744;
bool& CMenuManager::bInvertMouseY = *(bool *)0xBA6745;

int& CMenuManager::nLastMenuPage = *(int *)0x8CDFF0;