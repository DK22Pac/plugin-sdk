/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CData {
public:
    wchar_t* chars;
    int numChars;
};
VALIDATE_OFFSET(CData, chars, 0x0);
VALIDATE_OFFSET(CData, numChars, 0x4);
VALIDATE_SIZE(CData, 0x8);

struct CKeyEntry {
    wchar_t* value;
    char key[8];
};
VALIDATE_OFFSET(CKeyEntry, value, 0x0);
VALIDATE_OFFSET(CKeyEntry, key, 0x4);
VALIDATE_SIZE(CKeyEntry, 0xC);

class CKeyArray {
public:
    CKeyEntry* entries;
    int numEntries;
};
VALIDATE_OFFSET(CKeyArray, entries, 0x0);
VALIDATE_OFFSET(CKeyArray, numEntries, 0x4);
VALIDATE_SIZE(CKeyArray, 0x8);

class PLUGIN_API CText {
public:
    CKeyArray keyArray;
    CData data;
    char language;

public:
    CText();
    CText(char lang);
    wchar_t* Get(const char* str);
    void Load();
    void Unload();
    void LoadChunk(const char* type, int size);
    void Update(wchar_t* chars);
};
VALIDATE_OFFSET(CText, keyArray, 0x0);
VALIDATE_OFFSET(CText, data, 0x8);
VALIDATE_OFFSET(CText, language, 0x10);
VALIDATE_SIZE(CText, 0x14);

extern CText** TheText;
extern CText** TheTextNet;

extern CText* GetTheText();
extern CText* GetTheTextNet();
