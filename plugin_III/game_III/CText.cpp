/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CText.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CText &TheText = *reinterpret_cast<CText *>(GLOBAL_ADDRESS_BY_VERSION(0x941520, 0x9416D8, 0x951818));
PLUGIN_VARIABLE wchar_t(&WideErrorString)[25] = *reinterpret_cast<wchar_t(*)[25]>(GLOBAL_ADDRESS_BY_VERSION(0x95CCB6, 0x95CE6E, 0x96CFAE));

int addrof(CKeyArray::BinarySearch) = ADDRESS_BY_VERSION(0x52C060, 0x52C2A0, 0x52C230);
int gaddrof(CKeyArray::BinarySearch) = GLOBAL_ADDRESS_BY_VERSION(0x52C060, 0x52C2A0, 0x52C230);

CKeyEntry *CKeyArray::BinarySearch(char const *key, CKeyEntry *entries, short low, short high) {
    return plugin::CallMethodAndReturnDynGlobal<CKeyEntry *, CKeyArray *, char const *, CKeyEntry *, short, short>(gaddrof(CKeyArray::BinarySearch), this, key, entries, low, high);
}

int addrof(CKeyArray::Load) = ADDRESS_BY_VERSION(0x52BE70, 0x52C0B0, 0x52C040);
int gaddrof(CKeyArray::Load) = GLOBAL_ADDRESS_BY_VERSION(0x52BE70, 0x52C0B0, 0x52C040);

void CKeyArray::Load(unsigned int length, unsigned char *data, unsigned int *offset) {
    plugin::CallMethodDynGlobal<CKeyArray *, unsigned int, unsigned char *, unsigned int *>(gaddrof(CKeyArray::Load), this, length, data, offset);
}

int addrof(CKeyArray::Search) = ADDRESS_BY_VERSION(0x52BFB0, 0x52C1F0, 0x52C180);
int gaddrof(CKeyArray::Search) = GLOBAL_ADDRESS_BY_VERSION(0x52BFB0, 0x52C1F0, 0x52C180);

wchar_t *CKeyArray::Search(char const *key) {
    return plugin::CallMethodAndReturnDynGlobal<wchar_t *, CKeyArray *, char const *>(gaddrof(CKeyArray::Search), this, key);
}

int addrof(CKeyArray::Unload) = ADDRESS_BY_VERSION(0x52BF60, 0x52C1A0, 0x52C130);
int gaddrof(CKeyArray::Unload) = GLOBAL_ADDRESS_BY_VERSION(0x52BF60, 0x52C1A0, 0x52C130);

void CKeyArray::Unload() {
    plugin::CallMethodDynGlobal<CKeyArray *>(gaddrof(CKeyArray::Unload), this);
}

int addrof(CKeyArray::Update) = ADDRESS_BY_VERSION(0x52BF80, 0x52C1C0, 0x52C150);
int gaddrof(CKeyArray::Update) = GLOBAL_ADDRESS_BY_VERSION(0x52BF80, 0x52C1C0, 0x52C150);

void CKeyArray::Update(wchar_t *chars) {
    plugin::CallMethodDynGlobal<CKeyArray *, wchar_t *>(gaddrof(CKeyArray::Update), this, chars);
}

int addrof(CData::Load) = ADDRESS_BY_VERSION(0x52C120, 0x52C360, 0x52C2F0);
int gaddrof(CData::Load) = GLOBAL_ADDRESS_BY_VERSION(0x52C120, 0x52C360, 0x52C2F0);

void CData::Load(unsigned int length, char *data, int *offset) {
    plugin::CallMethodDynGlobal<CData *, unsigned int, char *, int *>(gaddrof(CData::Load), this, length, data, offset);
}

int addrof(CData::Unload) = ADDRESS_BY_VERSION(0x52C200, 0x52C440, 0x52C3D0);
int gaddrof(CData::Unload) = GLOBAL_ADDRESS_BY_VERSION(0x52C200, 0x52C440, 0x52C3D0);

void CData::Unload() {
    plugin::CallMethodDynGlobal<CData *>(gaddrof(CData::Unload), this);
}

int ctor_addr(CText) = ADDRESS_BY_VERSION(0x52C5B0, 0x52C7F0, 0x52C780);
int ctor_gaddr(CText) = GLOBAL_ADDRESS_BY_VERSION(0x52C5B0, 0x52C7F0, 0x52C780);

int dtor_addr(CText) = ADDRESS_BY_VERSION(0x52C620, 0x52C860, 0x52C7F0);
int dtor_gaddr(CText) = GLOBAL_ADDRESS_BY_VERSION(0x52C620, 0x52C860, 0x52C7F0);

int addrof(CText::Get) = ADDRESS_BY_VERSION(0x52C5A0, 0x52C7E0, 0x52C770);
int gaddrof(CText::Get) = GLOBAL_ADDRESS_BY_VERSION(0x52C5A0, 0x52C7E0, 0x52C770);

wchar_t *CText::Get(char const *key) {
    return plugin::CallMethodAndReturnDynGlobal<wchar_t *, CText *, char const *>(gaddrof(CText::Get), this, key);
}

int addrof(CText::GetUpperCase) = ADDRESS_BY_VERSION(0x52C220, 0x52C460, 0x52C3F0);
int gaddrof(CText::GetUpperCase) = GLOBAL_ADDRESS_BY_VERSION(0x52C220, 0x52C460, 0x52C3F0);

wchar_t CText::GetUpperCase(wchar_t c) {
    return plugin::CallMethodAndReturnDynGlobal<wchar_t, CText *, wchar_t>(gaddrof(CText::GetUpperCase), this, c);
}

int addrof(CText::Load) = ADDRESS_BY_VERSION(0x52C3C0, 0x52C600, 0x52C590);
int gaddrof(CText::Load) = GLOBAL_ADDRESS_BY_VERSION(0x52C3C0, 0x52C600, 0x52C590);

void CText::Load() {
    plugin::CallMethodDynGlobal<CText *>(gaddrof(CText::Load), this);
}

int addrof(CText::Unload) = ADDRESS_BY_VERSION(0x52C580, 0x52C7C0, 0x52C750);
int gaddrof(CText::Unload) = GLOBAL_ADDRESS_BY_VERSION(0x52C580, 0x52C7C0, 0x52C750);

void CText::Unload() {
    plugin::CallMethodDynGlobal<CText *>(gaddrof(CText::Unload), this);
}

int addrof(CText::UpperCase) = ADDRESS_BY_VERSION(0x52C2C0, 0x52C500, 0x52C490);
int gaddrof(CText::UpperCase) = GLOBAL_ADDRESS_BY_VERSION(0x52C2C0, 0x52C500, 0x52C490);

void CText::UpperCase(wchar_t *s) {
    plugin::CallMethodDynGlobal<CText *, wchar_t *>(gaddrof(CText::UpperCase), this, s);
}

int addrof(UnicodeToAscii) = ADDRESS_BY_VERSION(0x52C2F0, 0x52C530, 0x52C4C0);
int gaddrof(UnicodeToAscii) = GLOBAL_ADDRESS_BY_VERSION(0x52C2F0, 0x52C530, 0x52C4C0);

char *UnicodeToAscii(wchar_t *src) {
    return plugin::CallAndReturnDynGlobal<char *, wchar_t *>(gaddrof(UnicodeToAscii), src);
}

int addrof(UnicodeToAsciiForSaveLoad) = ADDRESS_BY_VERSION(0x52C340, 0x52C580, 0x52C510);
int gaddrof(UnicodeToAsciiForSaveLoad) = GLOBAL_ADDRESS_BY_VERSION(0x52C340, 0x52C580, 0x52C510);

char *UnicodeToAsciiForSaveLoad(wchar_t *src) {
    return plugin::CallAndReturnDynGlobal<char *, wchar_t *>(gaddrof(UnicodeToAsciiForSaveLoad), src);
}

int addrof(TextCopy) = ADDRESS_BY_VERSION(0x52C390, 0x52C5D0, 0x52C560);
int gaddrof(TextCopy) = GLOBAL_ADDRESS_BY_VERSION(0x52C390, 0x52C5D0, 0x52C560);

void TextCopy(wchar_t *dst, wchar_t const *src) {
    plugin::CallDynGlobal<wchar_t *, wchar_t const *>(gaddrof(TextCopy), dst, src);
}
