/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CText.h"

CText& TheText = *(CText*)0x94B220;

wchar_t* CText::Get(char const* key) {
    return plugin::CallMethodAndReturn<wchar_t*, 0x584F30, CText*, char const*>(this, key);
}

char* UnicodeToAscii(wchar_t* src) {
    return plugin::CallAndReturn<char*, 0x585840, wchar_t*>(src);
}
