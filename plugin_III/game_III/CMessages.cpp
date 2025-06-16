/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMessages.h"
#include <string>
#include <string.h>

tPreviousBrief *CMessages::PreviousBriefs = (tPreviousBrief *)0x713C08;
tMessage *CMessages::BriefMessages = (tMessage *)0x8786E0;
tBigMessage *CMessages::BIGMessages = (tBigMessage *)0x773628;

// Converted from cdecl void CMessages::Init(void) 0x529310
void CMessages::Init() {
    plugin::Call<0x529310>();
}

// Converted from cdecl int CMessages::GetWideStringLength(ushort *str) 0x529490
int CMessages::GetWideStringLength(const wchar_t* str) {
    return plugin::CallAndReturn<int, 0x529490, const wchar_t*>(str);
}

// Converted from cdecl int CMessages::WideStringCopy(ushort *dst,ushort *src,ushort size) 0x5294B0
int CMessages::WideStringCopy(wchar_t* dst, const wchar_t* src, unsigned short size) {
    return plugin::CallAndReturn<int, 0x5294B0, wchar_t*, const wchar_t*, unsigned short>(dst, src, size);
}

// Converted from cdecl bool CMessages::WideStringCompare(ushort *str1,ushort *str2,ushort size) 0x529510
bool CMessages::WideStringCompare(const wchar_t* str1, const wchar_t* str2, unsigned short size) {
    return plugin::CallAndReturn<bool, 0x529510, const wchar_t*, const wchar_t*, unsigned short>(str1, str2, size);
}

// Converted from cdecl void CMessages::Process(void) 0x529580
void CMessages::Process() {
    plugin::Call<0x529580>();
}

// Converted from cdecl void CMessages::Display(void) 0x529800
void CMessages::Display() {
    plugin::Call<0x529800>();
}

// Converted from cdecl void CMessages::AddMessage(ushort *text,uint time,ushort flag) 0x529900
void CMessages::AddMessage(const wchar_t* text, unsigned int time, unsigned short flag) {
    plugin::Call<0x529900, const wchar_t*, unsigned int, unsigned short>(text, time, flag);
}

// Converted from cdecl void CMessages::AddMessageJumpQ(ushort *text,uint time,ushort flag) 0x529A10
void CMessages::AddMessageJumpQ(const wchar_t* text, unsigned int time, unsigned short flag) {
    plugin::Call<0x529A10, const wchar_t*, unsigned int, unsigned short>(text, time, flag);
}

// Converted from cdecl void CMessages::AddMessageSoon(ushort *text,uint time,ushort flag) 0x529AF0
void CMessages::AddMessageSoon(const wchar_t* text, unsigned int time, unsigned short flag) {
    plugin::Call<0x529AF0, const wchar_t*, unsigned int, unsigned short>(text, time, flag);
}

// Converted from cdecl void CMessages::ClearMessages(void) 0x529CE0
void CMessages::ClearMessages() {
    plugin::Call<0x529CE0>();
}

// Converted from cdecl void CMessages::ClearSmallMessagesOnly(void) 0x529E00
void CMessages::ClearSmallMessagesOnly() {
    plugin::Call<0x529E00>();
}

// Converted from cdecl void CMessages::AddBigMessage(ushort *text,uint time,ushort flag) 0x529EB0
void CMessages::AddBigMessage(const wchar_t* text, unsigned int time, unsigned short flag) {
    plugin::Call<0x529EB0, const wchar_t*, unsigned int, unsigned short>(text, time, flag);
}

// Converted from cdecl void CMessages::AddBigMessageQ(ushort *text,uint time,ushort flag) 0x529F60
void CMessages::AddBigMessageQ(const wchar_t* text, unsigned int time, unsigned short flag) {
    plugin::Call<0x529F60, const wchar_t*, unsigned int, unsigned short>(text, time, flag);
}

// Converted from cdecl void CMessages::AddToPreviousBriefArray(ushort *text, int n1, int n2, int n3, int n4, int n5, int n6,ushort *str) 0x52A040
void CMessages::AddToPreviousBriefArray(const wchar_t* text, int n1, int n2, int n3, int n4, int n5, int n6, const wchar_t* str) {
    plugin::Call<0x52A040, const wchar_t*, int, int, int, int, int, int, const wchar_t*>(text, n1, n2, n3, n4, n5, n6, str);
}

// Converted from cdecl void CMessages::InsertNumberInString(ushort *src, int n1, int n2, int n3, int n4, int n5, int n6,ushort *dst) 0x52A1A0
void CMessages::InsertNumberInString(const wchar_t* src, int n1, int n2, int n3, int n4, int n5, int n6, wchar_t* dst) {
    plugin::Call<0x52A1A0, const wchar_t*, int, int, int, int, int, int, wchar_t*>(src, n1, n2, n3, n4, n5, n6, dst);
}

// Converted from cdecl void CMessages::InsertStringInString(ushort *text,ushort *str) 0x52A300
void CMessages::InsertStringInString(wchar_t* text, wchar_t* str) {
    plugin::Call<0x52A300, wchar_t*, wchar_t*>(text, str);
}

// Converted from cdecl void CMessages::InsertPlayerControlKeysInString(ushort *text) 0x52A490
void CMessages::InsertPlayerControlKeysInString(const wchar_t* text) {
    plugin::Call<0x52A490, const wchar_t*>(text);
}

// Converted from cdecl void CMessages::AddMessageWithNumber(ushort *text,uint time,ushort flag,int n1,int n2,int n3,int n4,int n5,int n6) 0x52A850
void CMessages::AddMessageWithNumber(const wchar_t* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6) {
    plugin::Call<0x52A850, const wchar_t*, unsigned int, unsigned short, int, int, int, int, int, int>(text, time, flag, n1, n2, n3, n4, n5, n6);
}

// Converted from cdecl void CMessages::AddMessageJumpQWithNumber(ushort *text,uint time,ushort flag, int n1, int n2, int n3, int n4, int n5, int n6) 0x52A9A0
void CMessages::AddMessageJumpQWithNumber(const wchar_t* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6) {
    plugin::Call<0x52A9A0, const wchar_t*, unsigned int, unsigned short, int, int, int, int, int, int>(text, time, flag, n1, n2, n3, n4, n5, n6);
}

// Converted from cdecl void CMessages::AddMessageSoonWithNumber(ushort *text,uint time,ushort flag, int n1, int n2, int n3, int n4, int n5, int n6) 0x52AAC0
void CMessages::AddMessageSoonWithNumber(const wchar_t* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6) {
    plugin::Call<0x52AAC0, const wchar_t*, unsigned int, unsigned short, int, int, int, int, int, int>(text, time, flag, n1, n2, n3, n4, n5, n6);
}

// Converted from cdecl void CMessages::AddBigMessageWithNumber(ushort *text,uint time,ushort flag, int n1, int n2, int n3, int n4, int n5, int n6) 0x52AD10
void CMessages::AddBigMessageWithNumber(const wchar_t* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6) {
    plugin::Call<0x52AD10, const wchar_t*, unsigned int, unsigned short, int, int, int, int, int, int>(text, time, flag, n1, n2, n3, n4, n5, n6);
}

// Converted from cdecl void CMessages::AddBigMessageWithNumberQ(ushort *text,uint time,ushort flag, int n1, int n2, int n3, int n4, int n5, int n6) 0x52AE00
void CMessages::AddBigMessageWithNumberQ(const wchar_t* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6) {
    plugin::Call<0x52AE00, const wchar_t*, unsigned int, unsigned short, int, int, int, int, int, int>(text, time, flag, n1, n2, n3, n4, n5, n6);
}

// Converted from cdecl void CMessages::AddMessageWithString(ushort *text,uint time,ushort flag,ushort *str) 0x52AF30
void CMessages::AddMessageWithString(const wchar_t* text, unsigned int time, unsigned short flag, const wchar_t* str) {
    plugin::Call<0x52AF30, const wchar_t*, unsigned int, unsigned short, const wchar_t*>(text, time, flag, str);
}

// Converted from cdecl void CMessages::AddMessageJumpQWithString(ushort *text,uint time,ushort flag,ushort *str) 0x52B050
void CMessages::AddMessageJumpQWithString(const wchar_t* text, unsigned int time, unsigned short flag, const wchar_t* str) {
    plugin::Call<0x52B050, const wchar_t*, unsigned int, unsigned short, const wchar_t*>(text, time, flag, str);
}

// Converted from cdecl void CMessages::ClearThisPrint(ushort *text) 0x52B140
void CMessages::ClearThisPrint(const wchar_t* text) {
    plugin::Call<0x52B140, const wchar_t*>(text);
}

// Converted from cdecl void CMessages::ClearThisBigPrint(ushort *text) 0x52B3C0
void CMessages::ClearThisBigPrint(const wchar_t* text) {
    plugin::Call<0x52B3C0, const wchar_t*>(text);
}

// Converted from cdecl void CMessages::ClearAllMessagesDisplayedByGame(void) 0x52B670
void CMessages::ClearAllMessagesDisplayedByGame() {
    plugin::Call<0x52B670>();
}

void CMessages::AddMessage(const char* text, unsigned int time, unsigned short flag) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    AddMessage(_SWSTRING_STATIC(1), time, flag);
}

void CMessages::AddMessageJumpQ(const char* text, unsigned int time, unsigned short flag) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    AddMessage(_SWSTRING_STATIC(1), time, flag);
}

void CMessages::AddMessageSoon(const char* text, unsigned int time, unsigned short flag) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    AddMessageSoon(_SWSTRING_STATIC(1), time, flag);
}

void CMessages::AddBigMessage(const char* text, unsigned int time, unsigned short flag) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    AddBigMessage(_SWSTRING_STATIC(1), time, flag);
}

void CMessages::AddBigMessageQ(const char* text, unsigned int time, unsigned short flag) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    AddBigMessageQ(_SWSTRING_STATIC(1), time, flag);
}

void CMessages::AddToPreviousBriefArray(const char* text, int n1, int n2, int n3, int n4, int n5, int n6, const char* str) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    _SWSTRING_STATIC_INIT(2); _SWSTRING_STATIC_FROM(2, str);
    AddToPreviousBriefArray(_SWSTRING_STATIC(1), n1, n2, n3, n4, n5, n6, _SWSTRING_STATIC(2));
}

void CMessages::InsertNumberInString(const char* src, int n1, int n2, int n3, int n4, int n5, int n6, char* dst) {
    _SWSTRING_INIT(src, 1);
    _SWSTRING_INIT(dst, 2);
    _SWSTRING_STATIC_INIT(3);
    InsertNumberInString(_SWSTRING(1), n1, n2, n3, n4, n5, n6, _SWSTRING_STATIC(3));
    _SWSTRING_STATIC_TO(3, dst);
}

void CMessages::InsertStringInString(char* text, const char* str) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    _SWSTRING_INIT(str, 2);
    InsertStringInString(_SWSTRING_STATIC(1), _SWSTRING(2));
    _SWSTRING_STATIC_TO(1, text);
}

void CMessages::InsertPlayerControlKeysInString(char* text) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    InsertPlayerControlKeysInString(_SWSTRING_STATIC(1));
    _SWSTRING_STATIC_TO(1, text);
}

void CMessages::AddMessageWithNumber(const char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    AddMessageWithNumber(_SWSTRING_STATIC(1), time, flag, n1, n2, n3, n4, n5, n6);
}

void CMessages::AddMessageJumpQWithNumber(const char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    AddMessageJumpQWithNumber(_SWSTRING_STATIC(1), time, flag, n1, n2, n3, n4, n5, n6);
}

void CMessages::AddMessageSoonWithNumber(const char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    AddMessageSoonWithNumber(_SWSTRING_STATIC(1), time, flag, n1, n2, n3, n4, n5, n6);
}

void CMessages::AddBigMessageWithNumber(const char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    AddBigMessageWithNumber(_SWSTRING_STATIC(1), time, flag, n1, n2, n3, n4, n5, n6);
}

void CMessages::AddBigMessageWithNumberQ(const char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    AddBigMessageWithNumberQ(_SWSTRING_STATIC(1), time, flag, n1, n2, n3, n4, n5, n6);
}

void CMessages::AddMessageJumpQWithString(const char* text, unsigned int time, unsigned short flag, const char* str) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    _SWSTRING_STATIC_INIT(2); _SWSTRING_STATIC_FROM(2, str);
    AddMessageJumpQWithString(_SWSTRING_STATIC(1), time, flag, _SWSTRING_STATIC(2));
}

void CMessages::ClearThisPrint(const char* text) {
    _SWSTRING_INIT(text, 1);
    ClearThisPrint(_SWSTRING(1));
}

void CMessages::ClearThisBigPrint(const char* text) {
    _SWSTRING_INIT(text, 1);
    ClearThisBigPrint(_SWSTRING(1));
}
