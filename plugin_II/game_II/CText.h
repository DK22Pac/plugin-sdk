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

struct CKeyEntry {
    wchar_t* value;
    char key[8];
};

class CKeyArray {
public:
    CKeyEntry* entries;
    int numEntries;
};

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

VALIDATE_SIZE(CText, 0x14);

extern CText** TheText;
extern CText** TheTextNet;

extern CText* GetTheText();
extern CText* GetTheTextNet();
