/*
    Plugin-SDK (Grand Theft Auto 2) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CText.h"

CText** TheText = (CText**)0x671550;
CText** TheTextNet = (CText**)0x5D31D8;

CText* GetTheText() {
    return *TheText;
}

CText* GetTheTextNet() {
    return *TheTextNet;
}

CText::CText() {
    plugin::CallMethod<0x4C2620, CText*>(this);
}

CText::CText(char lang) {
    this->keyArray = {};
    this->data = {};
    this->language = lang;
}

wchar_t* CText::Get(const char* str) {
    return plugin::CallMethodAndReturn<wchar_t*, 0x4C23A0, CText*>(this, str);
}

void CText::Load() {
    plugin::CallMethod<0x4C2540, CText*>(this);
}

void CText::Unload() {
    plugin::CallMethod<0x4C26C0, CText*>(this);
}

void CText::LoadChunk(const char* type, int size) {
    plugin::CallMethod<0x4C2330, CText*, const char*, int>(this, type, size);
}

void CText::Update(wchar_t* chars) {
    plugin::CallMethod<0x4C20B0, CText*, wchar_t*>(this, chars);
}
