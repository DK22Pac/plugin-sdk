/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class CMessages {
public:
	static void AddBigMessage(wchar_t* pString, unsigned int time, unsigned short style);
	static void AddBigMessageQ(wchar_t* pString, unsigned int time, unsigned short style);
	static void AddBigMessageWithNumber(wchar_t* pString, unsigned int time, unsigned short style, int number, int number2, int number3, int number4, int number5, int number6);
	static void AddMessage(wchar_t* pString, unsigned int time, unsigned short flag);
	static void AddMessageJumpQ(wchar_t* pString, unsigned int time, unsigned short flag);
	static void AddMessageJumpQWithNumber(wchar_t* pString, unsigned int time, unsigned short flag, int number, int number2, int number3, int number4, int number5, int number6);
	static void AddMessageJumpQWithString(wchar_t* pString1, unsigned int time, unsigned short flag, wchar_t* pString2);
	static void AddMessageWithNumber(wchar_t* pString, unsigned int time, unsigned short flag, int number, int number1, int number2, int number3, int number4, int number5);
	static void AddToPreviousBriefArray(wchar_t* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, wchar_t* arg8);
	static void ClearAllMessagesDisplayedByGame();
	static void ClearMessages();
	static void ClearSmallMessagesOnly();
	static void ClearThisBigPrint(wchar_t* pString);
	static void ClearThisPrint(wchar_t* pString);
	static void Display();
	static unsigned short GetWideStringLength(wchar_t* pString);
	static void Init();
	static void InsertNumberInString(wchar_t* pString, int number, int number1, int number2, int number3, int number4, int number5, wchar_t* arg8);
	static void InsertPlayerControlKeysInString(wchar_t* pString);
	static void InsertStringInString(wchar_t* pString1, wchar_t* pString2);
	static void Process();
	static bool WideStringCompare(wchar_t* pString1, wchar_t* pString2, unsigned short lengthToCompare);
	static void WideStringCopy(wchar_t* pString1, wchar_t* pString2, unsigned short lengthToCopy);

    static void AddMessageJumpQ(char* pString, unsigned int time, unsigned short flag);
};
