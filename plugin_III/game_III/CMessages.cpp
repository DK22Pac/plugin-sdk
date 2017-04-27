/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMessages.h"

PreviousBrief *CMessages::PreviousBriefs = (PreviousBrief *)0x713C08;
Message *CMessages::BriefMessages = (Message *)0x8786E0;
BigMessage *CMessages::BIGMessages = (BigMessage *)0x773628;

// Converted from cdecl void CMessages::Init(void) 0x529310
void CMessages::Init() {
    plugin::Call<0x529310>();
}

// Converted from cdecl int CMessages::GetWideStringLength(ushort *str) 0x529490
int CMessages::GetWideStringLength(wchar_t* str) {
    return plugin::CallAndReturn<int, 0x529490, wchar_t*>(str);
}

// Converted from cdecl int CMessages::WideStringCopy(ushort *dst,ushort *src,ushort size) 0x5294B0
int CMessages::WideStringCopy(wchar_t* dst, wchar_t* src, unsigned short size) {
    return plugin::CallAndReturn<int, 0x5294B0, wchar_t*, wchar_t*, unsigned short>(dst, src, size);
}

// Converted from cdecl bool CMessages::WideStringCompare(ushort *str1,ushort *str2,ushort size) 0x529510
bool CMessages::WideStringCompare(wchar_t* str1, wchar_t* str2, unsigned short size) {
    return plugin::CallAndReturn<bool, 0x529510, wchar_t*, wchar_t*, unsigned short>(str1, str2, size);
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
void CMessages::AddMessage(wchar_t* text, unsigned int time, unsigned short flag) {
    plugin::Call<0x529900, wchar_t*, unsigned int, unsigned short>(text, time, flag);
}

// Converted from cdecl void CMessages::AddMessageJumpQ(ushort *text,uint time,ushort flag) 0x529A10
void CMessages::AddMessageJumpQ(wchar_t* text, unsigned int time, unsigned short flag) {
    plugin::Call<0x529A10, wchar_t*, unsigned int, unsigned short>(text, time, flag);
}

// Converted from cdecl void CMessages::AddMessageSoon(ushort *text,uint time,ushort flag) 0x529AF0
void CMessages::AddMessageSoon(wchar_t* text, unsigned int time, unsigned short flag) {
    plugin::Call<0x529AF0, wchar_t*, unsigned int, unsigned short>(text, time, flag);
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
void CMessages::AddBigMessage(wchar_t* text, unsigned int time, unsigned short flag) {
    plugin::Call<0x529EB0, wchar_t*, unsigned int, unsigned short>(text, time, flag);
}

// Converted from cdecl void CMessages::AddBigMessageQ(ushort *text,uint time,ushort flag) 0x529F60
void CMessages::AddBigMessageQ(wchar_t* text, unsigned int time, unsigned short flag) {
    plugin::Call<0x529F60, wchar_t*, unsigned int, unsigned short>(text, time, flag);
}

// Converted from cdecl void CMessages::AddToPreviousBriefArray(ushort *text, int n1, int n2, int n3, int n4, int n5, int n6,ushort *str) 0x52A040
void CMessages::AddToPreviousBriefArray(wchar_t* text, int n1, int n2, int n3, int n4, int n5, int n6, wchar_t* str) {
    plugin::Call<0x52A040, wchar_t*, int, int, int, int, int, int, wchar_t*>(text, n1, n2, n3, n4, n5, n6, str);
}

// Converted from cdecl void CMessages::InsertNumberInString(ushort *src, int n1, int n2, int n3, int n4, int n5, int n6,ushort *dst) 0x52A1A0
void CMessages::InsertNumberInString(wchar_t* src, int n1, int n2, int n3, int n4, int n5, int n6, wchar_t* dst) {
    plugin::Call<0x52A1A0, wchar_t*, int, int, int, int, int, int, wchar_t*>(src, n1, n2, n3, n4, n5, n6, dst);
}

// Converted from cdecl void CMessages::InsertStringInString(ushort *text,ushort *str) 0x52A300
void CMessages::InsertStringInString(wchar_t* text, wchar_t* str) {
    plugin::Call<0x52A300, wchar_t*, wchar_t*>(text, str);
}

// Converted from cdecl void CMessages::InsertPlayerControlKeysInString(ushort *text) 0x52A490
void CMessages::InsertPlayerControlKeysInString(wchar_t* text) {
    plugin::Call<0x52A490, wchar_t*>(text);
}

// Converted from cdecl void CMessages::AddMessageWithNumber(ushort *text,uint time,ushort flag,int n1,int n2,int n3,int n4,int n5,int n6) 0x52A850
void CMessages::AddMessageWithNumber(wchar_t* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6) {
    plugin::Call<0x52A850, wchar_t*, unsigned int, unsigned short, int, int, int, int, int, int>(text, time, flag, n1, n2, n3, n4, n5, n6);
}

// Converted from cdecl void CMessages::AddMessageJumpQWithNumber(ushort *text,uint time,ushort flag, int n1, int n2, int n3, int n4, int n5, int n6) 0x52A9A0
void CMessages::AddMessageJumpQWithNumber(wchar_t* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6) {
    plugin::Call<0x52A9A0, wchar_t*, unsigned int, unsigned short, int, int, int, int, int, int>(text, time, flag, n1, n2, n3, n4, n5, n6);
}

// Converted from cdecl void CMessages::AddMessageSoonWithNumber(ushort *text,uint time,ushort flag, int n1, int n2, int n3, int n4, int n5, int n6) 0x52AAC0
void CMessages::AddMessageSoonWithNumber(wchar_t* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6) {
    plugin::Call<0x52AAC0, wchar_t*, unsigned int, unsigned short, int, int, int, int, int, int>(text, time, flag, n1, n2, n3, n4, n5, n6);
}

// Converted from cdecl void CMessages::AddBigMessageWithNumber(ushort *text,uint time,ushort flag, int n1, int n2, int n3, int n4, int n5, int n6) 0x52AD10
void CMessages::AddBigMessageWithNumber(wchar_t* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6) {
    plugin::Call<0x52AD10, wchar_t*, unsigned int, unsigned short, int, int, int, int, int, int>(text, time, flag, n1, n2, n3, n4, n5, n6);
}

// Converted from cdecl void CMessages::AddBigMessageWithNumberQ(ushort *text,uint time,ushort flag, int n1, int n2, int n3, int n4, int n5, int n6) 0x52AE00
void CMessages::AddBigMessageWithNumberQ(wchar_t* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6) {
    plugin::Call<0x52AE00, wchar_t*, unsigned int, unsigned short, int, int, int, int, int, int>(text, time, flag, n1, n2, n3, n4, n5, n6);
}

// Converted from cdecl void CMessages::AddMessageWithString(ushort *text,uint time,ushort flag,ushort *str) 0x52AF30
void CMessages::AddMessageWithString(wchar_t* text, unsigned int time, unsigned short flag, wchar_t* str) {
    plugin::Call<0x52AF30, wchar_t*, unsigned int, unsigned short, wchar_t*>(text, time, flag, str);
}

// Converted from cdecl void CMessages::AddMessageJumpQWithString(ushort *text,uint time,ushort flag,ushort *str) 0x52B050
void CMessages::AddMessageJumpQWithString(wchar_t* text, unsigned int time, unsigned short flag, wchar_t* str) {
    plugin::Call<0x52B050, wchar_t*, unsigned int, unsigned short, wchar_t*>(text, time, flag, str);
}

// Converted from cdecl void CMessages::ClearThisPrint(ushort *text) 0x52B140
void CMessages::ClearThisPrint(wchar_t* text) {
    plugin::Call<0x52B140, wchar_t*>(text);
}

// Converted from cdecl void CMessages::ClearThisBigPrint(ushort *text) 0x52B3C0
void CMessages::ClearThisBigPrint(wchar_t* text) {
    plugin::Call<0x52B3C0, wchar_t*>(text);
}

// Converted from cdecl void CMessages::ClearAllMessagesDisplayedByGame(void) 0x52B670
void CMessages::ClearAllMessagesDisplayedByGame() {
    plugin::Call<0x52B670>();
}