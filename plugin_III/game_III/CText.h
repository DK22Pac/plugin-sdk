/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

struct PLUGIN_API CKeyEntry {
    wchar_t *value;
    char key[8];
};

class PLUGIN_API CKeyArray {
public:
    CKeyEntry *m_pEntries;
    int m_nNumEntries;

    SUPPORTED_10EN_11EN_STEAM CKeyEntry *BinarySearch(char const *key, CKeyEntry *entries, short low, short high);
    SUPPORTED_10EN_11EN_STEAM void Load(unsigned int length, unsigned char *data, unsigned int *offset);
    SUPPORTED_10EN_11EN_STEAM wchar_t *Search(char const *key);
    SUPPORTED_10EN_11EN_STEAM void Unload();
    SUPPORTED_10EN_11EN_STEAM void Update(wchar_t *chars);
};

class PLUGIN_API CData {
public:
    wchar_t *chars;
    int numChars;

    SUPPORTED_10EN_11EN_STEAM void Load(unsigned int length, char *data, int *offset);
    SUPPORTED_10EN_11EN_STEAM void Unload();
};

class PLUGIN_API CText {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CText)

public:
    CKeyArray keyArray;
    CData data;
    char encoding;

    SUPPORTED_10EN_11EN_STEAM wchar_t *Get(char const *key);
    SUPPORTED_10EN_11EN_STEAM wchar_t GetUpperCase(wchar_t c);
    SUPPORTED_10EN_11EN_STEAM void Load();
    SUPPORTED_10EN_11EN_STEAM void Unload();
    SUPPORTED_10EN_11EN_STEAM void UpperCase(wchar_t *s);
};

SUPPORTED_10EN_11EN_STEAM extern CText &TheText;
SUPPORTED_10EN_11EN_STEAM extern wchar_t(&WideErrorString)[25]; // wchar_t WideErrorString[25]

SUPPORTED_10EN_11EN_STEAM char *UnicodeToAscii(wchar_t *src);
SUPPORTED_10EN_11EN_STEAM char *UnicodeToAsciiForSaveLoad(wchar_t *src);
SUPPORTED_10EN_11EN_STEAM void TextCopy(wchar_t *dst, wchar_t const *src);

VALIDATE_SIZE(CKeyEntry, 0xC);
VALIDATE_SIZE(CKeyArray, 0x8);
VALIDATE_SIZE(CData, 0x8);
VALIDATE_SIZE(CText, 0x14);

#include "meta/meta.CText.h"
