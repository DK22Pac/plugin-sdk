/*
    Plugin-SDK (Grand Theft Auto San Andreas Unreal) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFont.h"

CFontDetails& CFont::Details = *gpatternt(CFontDetails, "C7 05 ? ? ? ? ? ? ? ? F3 0F 11 05 ? ? ? ? 75 09", 2);

void CFont::PrintString(float x, float y, const char* str) {
    plugin::CallDyn(gpattern("40 53 48 83 EC 70 41 0F B7 00"), x, y, str);
}

void CFont::RenderFontBuffer() {
    plugin::CallDyn(gpattern("4C 8B DC 55 49 8D AB ? ? ? ? 48 81 EC ? ? ? ? 48 8B 05 ? ? ? ? 48 33 C4 48 89 85 ? ? ? ? 48 8D 05"));
}
