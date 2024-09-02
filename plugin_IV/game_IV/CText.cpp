/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CText.h"

CText& TheText = *gpatternt(CText, "B9 ? ? ? ? E8 ? ? ? ? B0 01 C3 C7 05", 1);

const wchar_t* CText::Get(const char* key) {
    return plugin::CallMethodAndReturnDyn<const wchar_t*, CText*, const char*>(injector::GetBranchDestination(gpattern("E8 ? ? ? ? 50 68 ? ? ? ? 8D 84 24 ? ? ? ? 68 ? ? ? ? 50 E8 ? ? ? ? 83 C4 18")).as_int(), this, key);
}

const wchar_t* CText::Get(uint32_t hash, const char* key) {
    return plugin::CallMethodAndReturnDyn<const wchar_t*>(injector::GetBranchDestination(gpattern("E8 ? ? ? ? 8B 4C 24 44 5E 33 CC E8 ? ? ? ? 83 C4 44 C2 04 00")).as_int(), this, hash, key);
}

void AsciiToUnicode(const char* src, wchar_t* dst) {
    return plugin::CallDyn(gpattern("8B 44 24 04 85 C0 74 22 80 38 00"), src, dst);
}

