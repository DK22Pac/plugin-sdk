/*
    Plugin-SDK (Grand Theft Auto San Andreas Unreal) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CText.h"

CText TheText;

const wchar_t* CText::Get(const char* str) {
    return plugin::CallAndReturnDyn<const wchar_t*>(gpattern("40 57 48 83 EC 70 48 8B 05 ? ? ? ? 48 33 C4"), this, str);
}
