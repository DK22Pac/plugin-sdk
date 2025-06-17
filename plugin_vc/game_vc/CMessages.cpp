/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMessages.h"
#include <string>
#include <string.h>

// Converted from cdecl void CMessages::AddBigMessage(ushort *pString,uint time,ushort style)	0x584050	
void CMessages::AddBigMessage(const wchar_t* text, unsigned int time, unsigned short style) {
    plugin::Call<0x584050, const wchar_t*, unsigned int, unsigned short>(text, time, style);
}

// Converted from cdecl void CMessages::AddBigMessageQ(ushort *pString,uint time,ushort style)	0x583F40	
void CMessages::AddBigMessageQ(const wchar_t* text, unsigned int time, unsigned short style) {
    plugin::Call<0x583F40, const wchar_t*, unsigned int, unsigned short>(text, time, style);
}

// Converted from cdecl void CMessages::AddBigMessageWithNumber(ushort *pString, uint time, ushort style, int number, int number2, int number3, int number4, int number5, int number6)	0x583350	
void CMessages::AddBigMessageWithNumber(const wchar_t* text, unsigned int time, unsigned short style, int number, int number2, int number3, int number4, int number5, int number6) {
    plugin::Call<0x583350, const wchar_t*, unsigned int, unsigned short, int, int, int, int, int, int>(text, time, style, number, number2, number3, number4, number5, number6);
}

// Converted from cdecl void CMessages::AddMessage(ushort *pString, uint time, ushort flag)	00584410	
void CMessages::AddMessage(const wchar_t* text, unsigned int time, unsigned short flag) {
    plugin::Call<0x584410, const wchar_t*, unsigned int, unsigned short>(text, time, flag);
}

// Converted from cdecl void CMessages::AddMessageJumpQ(ushort *pString, uint time, ushort flag)	00584300	
void CMessages::AddMessageJumpQ(const wchar_t* text, unsigned int time, unsigned short flag) {
    plugin::Call<0x584300, const wchar_t*, unsigned int, unsigned short>(text, time, flag);
}

// Converted from cdecl void CMessages::AddMessageJumpQWithNumber(ushort *pString, uint time, ushort flag, int number, int number2, int number3, int number4, int number5, int number6)	0x583440	
void CMessages::AddMessageJumpQWithNumber(const wchar_t* text, unsigned int time, unsigned short flag, int number, int number2, int number3, int number4, int number5, int number6) {
    plugin::Call<0x583440, const wchar_t*, unsigned int, unsigned short, int, int, int, int, int, int>(text, time, flag, number, number2, number3, number4, number5, number6);
}

// Converted from cdecl void CMessages::AddMessageJumpQWithString(ushort *pString1, uint time, ushort flag, ushort *pString2)	0x583220	
void CMessages::AddMessageJumpQWithString(const wchar_t* text, unsigned int time, unsigned short flag, wchar_t* pString2) {
    plugin::Call<0x583220, const wchar_t*, unsigned int, unsigned short, wchar_t*>(text, time, flag, pString2);
}

// Converted from cdecl void CMessages::AddMessageWithNumber(ushort *pString,uint time,ushort flag,int number,int number1,int number2,int number3,int number4,int number5)	0x583560	
void CMessages::AddMessageWithNumber(const wchar_t* text, unsigned int time, unsigned short flag, int number, int number1, int number2, int number3, int number4, int number5) {
    plugin::Call<0x583560, const wchar_t*, unsigned int, unsigned short, int, int, int, int, int, int>(text, time, flag, number, number1, number2, number3, number4, number5);
}

// Converted from cdecl void CMessages::AddToPreviousBriefArray(ushort * arg1,int arg2,int arg3,int arg4,int arg5,int arg6,int arg7,ushort *arg8)	0x583DE0	
void CMessages::AddToPreviousBriefArray(wchar_t* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, wchar_t* arg8) {
    plugin::Call<0x583DE0, wchar_t*, int, int, int, int, int, int, wchar_t*>(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

// Converted from cdecl void CMessages::ClearAllMessagesDisplayedByGame(void)	0x582C70	
void CMessages::ClearAllMessagesDisplayedByGame() {
    plugin::Call<0x582C70>();
}

// Converted from cdecl void CMessages::ClearMessages(void)	0x5841E0	
void CMessages::ClearMessages() {
    plugin::Call<0x5841E0>();
}

// Converted from cdecl void CMessages::ClearSmallMessagesOnly(void)	0x584130	
void CMessages::ClearSmallMessagesOnly() {
    plugin::Call<0x584130>();
}

// Converted from cdecl void CMessages::ClearThisBigPrint(ushort *pString)	0x582CF0	
void CMessages::ClearThisBigPrint(const wchar_t* text) {
    plugin::Call<0x582CF0, const wchar_t*>(text);
}

// Converted from cdecl void CMessages::ClearThisPrint(ushort *pString)	0x582FA0	
void CMessages::ClearThisPrint(const wchar_t* text) {
    plugin::Call<0x582FA0, const wchar_t*>(text);
}

// Converted from cdecl void CMessages::Display(void)	0x584550	
void CMessages::Display() {
    plugin::Call<0x584550>();
}

// Converted from cdecl ushort CMessages::GetWideStringLength(ushort *pString)	0x5849A0	
unsigned short CMessages::GetWideStringLength(const wchar_t* text) {
    return plugin::CallAndReturn<unsigned short, 0x5849A0, const wchar_t*>(text);
}

// Converted from cdecl void CMessages::Init(void)	0x5849C0
void CMessages::Init() {
    plugin::Call<0x5849C0>();
}

// Converted from cdecl void CMessages::InsertNumberInString(ushort *pString,int number,int number1,int number2,int number3,int number4,int number5,ushort *arg8)	0x583C80	
void CMessages::InsertNumberInString(const wchar_t* text, int number, int number1, int number2, int number3, int number4, int number5, wchar_t* dest) {
    plugin::Call<0x583C80, const wchar_t*, int, int, int, int, int, int, const wchar_t*>(text, number, number1, number2, number3, number4, number5, dest);
}

// Converted from cdecl void CMessages::InsertPlayerControlKeysInString(ushort *pString)	0x5836B0	
void CMessages::InsertPlayerControlKeysInString(wchar_t* text) {
    plugin::Call<0x5836B0, wchar_t*>(text);
}

// Converted from cdecl void CMessages::InsertStringInString(ushort *pString1,ushort *pString2)	0x583AF0	
void CMessages::InsertStringInString(wchar_t* text, const wchar_t* str) {
    plugin::Call<0x583AF0, wchar_t*, const wchar_t*>(text, str);
}

// Converted from cdecl void CMessages::Process(void)	0x584650	
void CMessages::Process() {
    plugin::Call<0x584650>();
}

// Converted from cdecl bool CMessages::WideStringCompare(ushort *pString1,ushort *pString2,ushort lengthToCompare)	0x5848D0	
bool CMessages::WideStringCompare(const wchar_t* str1, const wchar_t* str2, unsigned short lengthToCompare) {
    return plugin::CallAndReturn<bool, 0x5848D0, const wchar_t*, const wchar_t*, unsigned short>(str1, str2, lengthToCompare);
}

// Converted from cdecl void CMessages::WideStringCopy(ushort *pString1,ushort *pString2,ushort lengthToCopy)	0x584940
void CMessages::WideStringCopy(wchar_t* dest, const wchar_t* src, unsigned short lengthToCopy) {
    plugin::Call<0x584940, wchar_t*, const wchar_t*, unsigned short>(dest, src, lengthToCopy);
}

void CMessages::AddBigMessage(const char* text, unsigned int time, unsigned short flag) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    AddBigMessage(_SWSTRING_STATIC(1), time, flag);
}

void CMessages::AddBigMessageQ(const char* text, unsigned int time, unsigned short flag) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    AddBigMessageQ(_SWSTRING_STATIC(1), time, flag);
}

void CMessages::AddBigMessageWithNumber(const char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    AddBigMessageWithNumber(_SWSTRING_STATIC(1), time, flag, n1, n2, n3, n4, n5, n6);
}

void CMessages::AddMessage(const char* text, unsigned int time, unsigned short flag) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    AddMessage(_SWSTRING_STATIC(1), time, flag);
}

void CMessages::AddMessageJumpQ(const char* text, unsigned int time, unsigned short flag) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    AddMessage(_SWSTRING_STATIC(1), time, flag);
}

void CMessages::AddMessageJumpQWithNumber(const char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    AddMessageJumpQWithNumber(_SWSTRING_STATIC(1), time, flag, n1, n2, n3, n4, n5, n6);
}

void CMessages::AddMessageJumpQWithString(const char* text, unsigned int time, unsigned short flag, const char* str) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    _SWSTRING_STATIC_INIT(2); _SWSTRING_STATIC_FROM(2, str);
    AddMessageJumpQWithString(_SWSTRING_STATIC(1), time, flag, _SWSTRING_STATIC(2));
}

void CMessages::AddMessageWithNumber(const char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    AddMessageWithNumber(_SWSTRING_STATIC(1), time, flag, n1, n2, n3, n4, n5, n6);
}

void CMessages::AddToPreviousBriefArray(const char* text, int n1, int n2, int n3, int n4, int n5, int n6, const char* str) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    _SWSTRING_STATIC_INIT(2); _SWSTRING_STATIC_FROM(2, str);
    AddToPreviousBriefArray(_SWSTRING_STATIC(1), n1, n2, n3, n4, n5, n6, _SWSTRING_STATIC(2));
}

void CMessages::ClearThisPrint(const char* text) {
    _SWSTRING_INIT(text, 1);
    ClearThisPrint(_SWSTRING(1));
}

void CMessages::ClearThisBigPrint(const char* text) {
    _SWSTRING_INIT(text, 1);
    ClearThisBigPrint(_SWSTRING(1));
}

void CMessages::InsertNumberInString(const char* src, int n1, int n2, int n3, int n4, int n5, int n6, char* dst) {
    _SWSTRING_INIT(src, 1);
    _SWSTRING_INIT(dst, 2);
    _SWSTRING_STATIC_INIT(3);
    InsertNumberInString(_SWSTRING(1), n1, n2, n3, n4, n5, n6, _SWSTRING_STATIC(3));
    _SWSTRING_STATIC_TO(3, dst);
}

void CMessages::InsertPlayerControlKeysInString(char* text) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    InsertPlayerControlKeysInString(_SWSTRING_STATIC(1));
    _SWSTRING_STATIC_TO(1, text);
}

void CMessages::InsertStringInString(char* text, const char* str) {
    _SWSTRING_STATIC_INIT(1); _SWSTRING_STATIC_FROM(1, text);
    _SWSTRING_INIT(str, 2);
    InsertStringInString(_SWSTRING_STATIC(1), _SWSTRING(2));
    _SWSTRING_STATIC_TO(1, text);
}
