/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVirtualBase.h"

class CText {
public:
    const wchar_t* Get(const char* key);
    const wchar_t* Get(uint32_t hash, const char* key);
};

extern CText& TheText;

extern void AsciiToUnicode(const char* src, wchar_t* dst);