/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "CStyle.h"

CStyle** gCurrentStyle = (CStyle**)0x670684;

unsigned short& Font2 = *(unsigned short*)0x670650; // [17]

CStyle* GetCurrentStyle() {
    return *gCurrentStyle;
}

CStyle::CStyle() {
    plugin::CallMethod<0x4C08D0, CStyle*>(this);
}

void CStyle::Load(const char* path) {
    plugin::CallMethod<0x4C0820, CStyle*, const char*>(this, path);
}

void CStyle::Unload() {
    plugin::CallMethod<0x4C0130, CStyle*>(this);
}

short CStyle::GetBaseIndex(int base, short texture) {
    return plugin::CallMethodAndReturn<short, 0x4BF2A0, CStyle*, int, short>(this, base, texture);
}

int* CStyle::GetTileArray(unsigned short id) {
    return plugin::CallMethodAndReturn<int*, 0x4C2EB0, CStyle*, unsigned short>(this, id);
}

unsigned short CStyle::GetPhysPalette(unsigned short id) {
    return plugin::CallMethodAndReturn<short, 0x4BF530, CStyle*, unsigned short>(this, id);
}

void CStyle::SetFontStyles(int fonts) {
    plugin::CallStd<0x4BFCC0, int>(fonts);
}
