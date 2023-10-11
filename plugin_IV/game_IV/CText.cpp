/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CText.h"
#include "Patch.h"

CText* TheTextAddr = nullptr;
CText& TheText = *(CText*)TheTextAddr;

static uint32_t CText__GetAddr;
const wchar_t* CText::Get(const char* key) {
    return plugin::CallMethodAndReturnDyn<const wchar_t*, CText*, const char*>(CText__GetAddr, this, key);
}

static uint32_t AsciiToUnicodeAddr;
void AsciiToUnicode(const char* src, wchar_t* dst) {
    return plugin::CallDyn(AsciiToUnicodeAddr, src, dst);
}

template<>
void plugin::InitPatterns<CText>() {
    TheTextAddr = (CText*)plugin::patch::GetPointer(plugin::GetPattern("B9 ? ? ? ? E8 ? ? ? ? B0 01 C3 C7 05", 1));

    CText__GetAddr = plugin::GetPattern("83 EC 44 A1 ? ? ? ? 33 C4 89 44 24 40 8B 44 24 48 56 8B F1", 0);

    AsciiToUnicodeAddr = plugin::GetPattern("8B 44 24 04 85 C0 74 22 80 38 00", 0);
}
