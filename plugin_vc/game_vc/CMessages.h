/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_VC.h"

class CMessages {

	static void AddBigMessage(unsigned short* pString, unsigned int time, unsigned short style);
	static void AddBigMessageQ(unsigned short* pString, unsigned int time, unsigned short style);
	static void AddBigMessageWithNumber(unsigned short* pString, unsigned int time, unsigned short style, int number, int number2, int number3, int number4, int number5, int number6);
	static void AddMessage(unsigned short* pString, unsigned int time, unsigned short flag);
	static void AddMessageJumpQ(unsigned short* pString, unsigned int time, unsigned short flag);
	static void AddMessageJumpQWithNumber(unsigned short* pString, unsigned int time, unsigned short flag, int number, int number2, int number3, int number4, int number5, int number6);
	static void AddMessageJumpQWithString(unsigned short* pString1, unsigned int time, unsigned short flag, unsigned short* pString2);
	static void AddMessageWithNumber(unsigned short* pString, unsigned int time, unsigned short flag, int number, int number1, int number2, int number3, int number4, int number5);
	static void AddToPreviousBriefArray(unsigned short* arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, unsigned short* arg8);
	static void ClearAllMessagesDisplayedByGame();
	static void ClearMessages();
	static void ClearSmallMessagesOnly();
	static void ClearThisBigPrint(unsigned short* pString);
	static void ClearThisPrint(unsigned short* pString);
	static void Display();
	static unsigned short GetWideStringLength(unsigned short* pString);
	static void Init();
	static void InsertNumberInString(unsigned short* pString, int number, int number1, int number2, int number3, int number4, int number5, unsigned short* arg8);
	static void InsertPlayerControlKeysInString(unsigned short* pString);
	static void InsertStringInString(unsigned short* pString1, unsigned short* pString2);
	static void Process();
	static bool WideStringCompare(unsigned short* pString1, unsigned short* pString2, unsigned short lengthToCompare);
	static void WideStringCopy(unsigned short* pString1, unsigned short* pString2, unsigned short lengthToCopy);

};