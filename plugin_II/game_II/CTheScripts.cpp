/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CTheScripts.h"

CTheScripts** TheScripts = (CTheScripts**)0x6644BC;

CTheScripts* GetTheScripts() {
    return *TheScripts;
}

CTheScripts::CTheScripts() {
    plugin::CallMethod<0x481960, CTheScripts*>(this);
}

void CTheScripts::Save(const char* saveName) {
    plugin::CallMethod<0x47EF40, CTheScripts*, const char*>(this, saveName);
}
