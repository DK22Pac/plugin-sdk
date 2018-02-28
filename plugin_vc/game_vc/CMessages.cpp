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
void CMessages::AddBigMessage(wchar_t* pString, unsigned int time, unsigned short style) {
    plugin::Call<0x584050, wchar_t*, unsigned int, unsigned short>(pString, time, style);
}

// Converted from cdecl void CMessages::AddBigMessageQ(ushort *pString,uint time,ushort style)	0x583F40	
void CMessages::AddBigMessageQ(wchar_t* pString, unsigned int time, unsigned short style) {
    plugin::Call<0x583F40, wchar_t*, unsigned int, unsigned short>(pString, time, style);
}

// Converted from cdecl void CMessages::AddBigMessageWithNumber(ushort *pString, uint time, ushort style, int number, int number2, int number3, int number4, int number5, int number6)	0x583350	
void CMessages::AddBigMessageWithNumber(wchar_t* pString, unsigned int time, unsigned short style, int number, int number2, int number3, int number4, int number5, int number6) {
    plugin::Call<0x583350, wchar_t*, unsigned int, unsigned short, int, int, int, int, int, int>(pString, time, style, number, number2, number3, number4, number5, number6);
}

// Converted from cdecl void CMessages::AddMessage(ushort *pString, uint time, ushort flag)	00584410	
void CMessages::AddMessage(wchar_t* pString, unsigned int time, unsigned short flag) {
    plugin::Call<0x584410, wchar_t*, unsigned int, unsigned short>(pString, time, flag);
}

// Converted from cdecl void CMessages::AddMessageJumpQ(ushort *pString, uint time, ushort flag)	00584300	
void CMessages::AddMessageJumpQ(wchar_t* pString, unsigned int time, unsigned short flag) {
    plugin::Call<0x584300, wchar_t*, unsigned int, unsigned short>(pString, time, flag);
}

// Converted from cdecl void CMessages::AddMessageJumpQWithNumber(ushort *pString, uint time, ushort flag, int number, int number2, int number3, int number4, int number5, int number6)	0x583440	
void CMessages::AddMessageJumpQWithNumber(wchar_t* pString, unsigned int time, unsigned short flag, int number, int number2, int number3, int number4, int number5, int number6) {
    plugin::Call<0x583440, wchar_t*, unsigned int, unsigned short, int, int, int, int, int, int>(pString, time, flag, number, number2, number3, number4, number5, number6);
}

// Converted from cdecl void CMessages::AddMessageJumpQWithString(ushort *pString1, uint time, ushort flag, ushort *pString2)	0x583220	
void CMessages::AddMessageJumpQWithString(wchar_t* pString1, unsigned int time, unsigned short flag, wchar_t* pString2) {
    plugin::Call<0x583220, wchar_t*, unsigned int, unsigned short, wchar_t*>(pString1, time, flag, pString2);
}

// Converted from cdecl void CMessages::AddMessageWithNumber(ushort *pString,uint time,ushort flag,int number,int number1,int number2,int number3,int number4,int number5)	0x583560	
void CMessages::AddMessageWithNumber(wchar_t* pString, unsigned int time, unsigned short flag, int number, int number1, int number2, int number3, int number4, int number5) {
    plugin::Call<0x583560, wchar_t*, unsigned int, unsigned short, int, int, int, int, int, int>(pString, time, flag, number, number1, number2, number3, number4, number5);
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
void CMessages::ClearThisBigPrint(wchar_t* pString) {
    plugin::Call<0x582CF0, wchar_t*>(pString);
}

// Converted from cdecl void CMessages::ClearThisPrint(ushort *pString)	0x582FA0	
void CMessages::ClearThisPrint(wchar_t* pString) {
    plugin::Call<0x582FA0, wchar_t*>(pString);
}

// Converted from cdecl void CMessages::Display(void)	0x584550	
void CMessages::Display() {
    plugin::Call<0x584550>();
}

// Converted from cdecl ushort CMessages::GetWideStringLength(ushort *pString)	0x5849A0	
unsigned short CMessages::GetWideStringLength(wchar_t* pString) {
    return plugin::CallAndReturn<unsigned short, 0x5849A0, wchar_t*>(pString);
}

// Converted from cdecl void CMessages::Init(void)	0x5849C0
void CMessages::Init() {
    plugin::Call<0x5849C0>();
}

// Converted from cdecl void CMessages::InsertNumberInString(ushort *pString,int number,int number1,int number2,int number3,int number4,int number5,ushort *arg8)	0x583C80	
void CMessages::InsertNumberInString(wchar_t* pString, int number, int number1, int number2, int number3, int number4, int number5, wchar_t* arg8) {
    plugin::Call<0x583C80, wchar_t*, int, int, int, int, int, int, wchar_t*>(pString, number, number1, number2, number3, number4, number5, arg8);
}

// Converted from cdecl void CMessages::InsertPlayerControlKeysInString(ushort *pString)	0x5836B0	
void CMessages::InsertPlayerControlKeysInString(wchar_t* pString) {
    plugin::Call<0x5836B0, wchar_t*>(pString);
}

// Converted from cdecl void CMessages::InsertStringInString(ushort *pString1,ushort *pString2)	0x583AF0	
void CMessages::InsertStringInString(wchar_t* pString1, wchar_t* pString2) {
    plugin::Call<0x583AF0, wchar_t*, wchar_t*>(pString1, pString2);
}

// Converted from cdecl void CMessages::Process(void)	0x584650	
void CMessages::Process() {
    plugin::Call<0x584650>();
}

// Converted from cdecl bool CMessages::WideStringCompare(ushort *pString1,ushort *pString2,ushort lengthToCompare)	0x5848D0	
bool CMessages::WideStringCompare(wchar_t* pString1, wchar_t* pString2, unsigned short lengthToCompare) {
    return plugin::CallAndReturn<bool, 0x5848D0, wchar_t*, wchar_t*, unsigned short>(pString1, pString2, lengthToCompare);
}

// Converted from cdecl void CMessages::WideStringCopy(ushort *pString1,ushort *pString2,ushort lengthToCopy)	0x584940
void CMessages::WideStringCopy(wchar_t* pString1, wchar_t* pString2, unsigned short lengthToCopy) {
    plugin::Call<0x584940, wchar_t*, wchar_t*, unsigned short>(pString1, pString2, lengthToCopy);
}

void CMessages::AddMessageJumpQ(char* text, unsigned int time, unsigned short flag) {
    _SWSTRING_INIT(text, 1);
    AddMessageJumpQ(_SWSTRING(1), time, flag);
}
