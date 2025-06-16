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
	static void AddBigMessage(const wchar_t* text, unsigned int time, unsigned short style);
	static void AddBigMessageQ(const wchar_t* text, unsigned int time, unsigned short style);
	static void AddBigMessageWithNumber(const wchar_t* text, unsigned int time, unsigned short style, int number, int number2, int number3, int number4, int number5, int number6);
	static void AddMessage(const wchar_t* text, unsigned int time, unsigned short flag);
	static void AddMessageJumpQ(const wchar_t* text, unsigned int time, unsigned short flag);
	static void AddMessageJumpQWithNumber(const wchar_t* text, unsigned int time, unsigned short flag, int number, int number2, int number3, int number4, int number5, int number6);
	static void AddMessageJumpQWithString(const wchar_t* text, unsigned int time, unsigned short flag, wchar_t* str);
	static void AddMessageWithNumber(const wchar_t* text, unsigned int time, unsigned short flag, int number, int number1, int number2, int number3, int number4, int number5);
	static void AddToPreviousBriefArray(wchar_t* text, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, wchar_t* str);
	static void ClearAllMessagesDisplayedByGame();
	static void ClearMessages();
	static void ClearSmallMessagesOnly();
	static void ClearThisBigPrint(const wchar_t* text);
	static void ClearThisPrint(const wchar_t* text);
	static void Display();
	static unsigned short GetWideStringLength(const wchar_t* text);
	static void Init();
	static void InsertNumberInString(const wchar_t* text, int number, int number1, int number2, int number3, int number4, int number5, wchar_t* dest);
	static void InsertPlayerControlKeysInString(wchar_t* text);
	static void InsertStringInString(wchar_t* text, const wchar_t* str);
	static void Process();
	static bool WideStringCompare(const wchar_t* str1, const wchar_t* str2, unsigned short lengthToCompare);
	static void WideStringCopy(wchar_t* dest, const wchar_t* src, unsigned short lengthToCopy);

	// automatic conversion to wide characters
	static void AddBigMessage(const char* text, unsigned int time, unsigned short flag);
	static void AddBigMessageQ(const char* text, unsigned int time, unsigned short flag);
	static void AddBigMessageWithNumber(const char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
	static void AddMessage(const char* text, unsigned int time, unsigned short flag);
	static void AddMessageJumpQ(const char* text, unsigned int time, unsigned short flag);
	static void AddMessageJumpQWithNumber(const char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
	static void AddMessageJumpQWithString(const char* text, unsigned int time, unsigned short flag, const char* str);
	static void AddMessageWithNumber(const char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
	static void AddToPreviousBriefArray(const char* text, int n1, int n2, int n3, int n4, int n5, int n6, const char* str);
	static void ClearThisPrint(const char* text);
	static void ClearThisBigPrint(const char* text);
	static void InsertNumberInString(const char* src, int n1, int n2, int n3, int n4, int n5, int n6, char* dst);
	static void InsertPlayerControlKeysInString(char* text);
	static void InsertStringInString(char* text, const char* str);
};
