/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMessages.h"

#define VAR_CMessages__PreviousBriefs = 0xC1A570
#define VAR_CMessages__BriefMessages = 0xC1A7F0
#define VAR_CMessages__BIGMessages = 0xC1A970
#define FUNC_CMessages__GetStringLength 0x69DB50
#define FUNC_CMessages__StringCopy 0x69DB70
#define FUNC_CMessages__StringCompare 0x69DBD0
#define FUNC_CMessages__CutString 0x69DC50
#define FUNC_CMessages__ClearMessages 0x69DCD0
#define FUNC_CMessages__ClearSmallMessagesOnly 0x69DD30
#define FUNC_CMessages__AddToPreviousBriefArray 0x69DD50
#define FUNC_CMessages__ClearPreviousBriefArray 0x69DE70
#define FUNC_CMessages__InsertNumberInString 0x69DE90
#define FUNC_CMessages__InsertStringInString 0x69E040
#define FUNC_CMessages__InsertPlayerControlKeysInString 0x69E160
#define FUNC_CMessages__AddMessageWithNumber 0x69E360
#define FUNC_CMessages__AddMessageJumpQWithNumber 0x69E4E0
#define FUNC_CMessages__AddBigMessageWithNumber 0x69E5F0
#define FUNC_CMessages__AddBigMessageWithNumberQ 0x69E6E0
#define FUNC_CMessages__AddMessageWithString 0x69E800
#define FUNC_CMessages__AddMessageJumpQWithString 0x69E950
#define FUNC_CMessages__ClearThisPrint 0x69EA30
#define FUNC_CMessages__ClearThisBigPrint 0x69EBE0
#define FUNC_CMessages__ClearThisPrintBigNow 0x69ED80
#define FUNC_CMessages__Init 0x69EDC0
#define FUNC_CMessages__ClearAllMessagesDisplayedByGame 0x69EE00
#define FUNC_CMessages__Process 0x69EE60
#define FUNC_CMessages__Display 0x69EFC0
#define FUNC_CMessages__AddMessage 0x69F0B0
#define FUNC_CMessages__AddMessageJumpQ 0x69F1E0
#define FUNC_CMessages__AddBigMessage 0x69F2B0
#define FUNC_CMessages__AddBigMessageQ 0x69F370


// Returns length of a string
unsigned int CMessages::GetStringLength(const char* text)
{
	return ((unsigned int (__cdecl *)(const char*))FUNC_CMessages__GetStringLength)(text);
}

// Copies string src to dest
void CMessages::StringCopy(char* dest, const char* src, unsigned short len)
{
	((void (__cdecl *)(char*, const char*, unsigned short))FUNC_CMessages__StringCopy)(dest, src, len);
}

// Compares 2 strings
unsigned char CMessages::StringCompare(const char* str1, const char* str2, unsigned short len)
{
	return ((unsigned char (__cdecl *)(const char*, const char*, unsigned short))FUNC_CMessages__StringCompare)(str1, str2, len);
}

void CMessages::CutString(int count, const char* str, char** dest)
{
	((void (__cdecl *)(int, const char*, char**))FUNC_CMessages__CutString)(count, str, dest);
}

// Removes registered messages
void CMessages::ClearMessages(bool flag)
{
	((void (__cdecl *)(bool))FUNC_CMessages__ClearMessages)(flag);
}

// Removes small messages
void CMessages::ClearSmallMessagesOnly()
{
	((void (__cdecl *)())FUNC_CMessages__ClearSmallMessagesOnly)();
}

// Adds message to previous brief
void CMessages::AddToPreviousBriefArray(const char* text, int n1, int n2, int n3, int n4, int n5, int n6, const char* string)
{
	((void (__cdecl *)(const char*, int, int, int, int, int, int, const char*))FUNC_CMessages__AddToPreviousBriefArray)(text, n1, n2, n3, n4, n5, n6, string);
}

// Removes messages from previous brief
void CMessages::ClearPreviousBriefArray()
{
	((void (__cdecl *)())FUNC_CMessages__ClearPreviousBriefArray)();
}

// Inserts numbers into string
void CMessages::InsertNumberInString(const char* src, int n1, int n2, int n3, int n4, int n5, int n6, char* dst)
{
	((void (__cdecl *)(const char*, int, int, int, int, int, int, const char*))FUNC_CMessages__InsertNumberInString)(src, n1, n2, n3, n4, n5, n6, dst);
}

// Inserts string into src
void CMessages::InsertStringInString(char* text, const char* string)
{
	((void (__cdecl *)(char*, const char*))FUNC_CMessages__InsertStringInString)(text, string);
}

// Inserts key events into string
void CMessages::InsertPlayerControlKeysInString(char* string)
{
	((void (__cdecl *)(char*))FUNC_CMessages__InsertPlayerControlKeysInString)(string);
}

// Adds message with numbers to queue
void CMessages::AddMessageWithNumber(const char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6, bool bPreviousBrief)
{
	((void (__cdecl *)(const char*, unsigned int, unsigned short, int, int, int, int, int, int, bool))FUNC_CMessages__AddMessageWithNumber)(text, time, flag, n1, n2, n3, n4, n5, n6, bPreviousBrief);
}

// Adds message with numbers and shows it instantly
void CMessages::AddMessageJumpQWithNumber(const char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6, bool bPreviousBrief)
{
	((void (__cdecl *)(const char*, unsigned int, unsigned short, int, int, int, int, int, int, bool))FUNC_CMessages__AddMessageJumpQWithNumber)(text, time, flag, n1, n2, n3, n4, n5, n6, bPreviousBrief);
}

// Adds big message with numbers and shows it instantly , see eMessageStyle
void CMessages::AddBigMessageWithNumber(const char* text, unsigned int time, unsigned short style, int n1, int n2, int n3, int n4, int n5, int n6)
{
	((void (__cdecl *)(const char*, unsigned int, unsigned short, int, int, int, int, int, int))FUNC_CMessages__AddBigMessageWithNumber)(text, time, style, n1, n2, n3, n4, n5, n6);
}

// Adds big message with numbers to queue , see eMessageStyle
void CMessages::AddBigMessageWithNumberQ(const char* text, unsigned int time, unsigned short style, int n1, int n2, int n3, int n4, int n5, int n6)
{
	((void (__cdecl *)(const char*, unsigned int, unsigned short, int, int, int, int, int, int))FUNC_CMessages__AddBigMessageWithNumberQ)(text, time, style, n1, n2, n3, n4, n5, n6);
}

// Adds message with string to queue
void CMessages::AddMessageWithString(const char* text, unsigned int time, unsigned short flag, char* string, char bPreviousBrief)
{
	((void (__cdecl *)(const char*, unsigned int, unsigned short, char*, char))FUNC_CMessages__AddMessageWithString)(text, time, flag, string, bPreviousBrief);
}

// Adds message with string and shows it instantly
void CMessages::AddMessageJumpQWithString(const char* text, unsigned int time, unsigned short flag, char* string, char bPreviousBrief)
{
	((void (__cdecl *)(const char*, unsigned int, unsigned short, char*, char))FUNC_CMessages__AddMessageJumpQWithString)(text, time, flag, string, bPreviousBrief);
}

// Removes small message with this text
void CMessages::ClearThisPrint(const char* text)
{
	((void (__cdecl *)(const char*))FUNC_CMessages__ClearThisPrint)(text);
}

// Removes big message with this text
void CMessages::ClearThisBigPrint(const char* text)
{
	((void (__cdecl *)(const char*))FUNC_CMessages__ClearThisBigPrint)(text);
}

// Removes first big message in messages stack , see eMessageStyle
void CMessages::ClearThisPrintBigNow(unsigned short style)
{
	((void (__cdecl *)(unsigned short))FUNC_CMessages__ClearThisPrintBigNow)(style);
}

// Initialises messages
void CMessages::Init(bool flag)
{
	((void (__cdecl *)(bool))FUNC_CMessages__Init)(flag);
}

// Removes all displayed messages
void CMessages::ClearAllMessagesDisplayedByGame()
{
	((void (__cdecl *)())FUNC_CMessages__ClearAllMessagesDisplayedByGame)();
}

// Processing messages. This is called from CWorld::Process
void CMessages::Process()
{
	((void (__cdecl *)())FUNC_CMessages__Process)();
}

// Displays messages
void CMessages::Display(bool flag)
{
	((void (__cdecl *)(bool))FUNC_CMessages__Display)(flag);
}

// Adds message to queue
void CMessages::AddMessage(const char* text, unsigned int time, unsigned short flag, bool bPreviousBrief)
{
	((void (__cdecl *)(const char*, unsigned int, unsigned short, bool))FUNC_CMessages__AddMessage)(text, time, flag, bPreviousBrief);
}

// Adds message and shows it instantly
void CMessages::AddMessageJumpQ(const char* text, unsigned int time, unsigned short flag, bool bPreviousBrief)
{
	((void (__cdecl *)(const char*, unsigned int, unsigned short, bool))FUNC_CMessages__AddMessageJumpQ)(text, time, flag, bPreviousBrief);
}

// Adds big message and shows it instantly , see eMessageStyle
void CMessages::AddBigMessage(const char* text, unsigned int time, unsigned short style)
{
	((void (__cdecl *)(const char*, unsigned int, unsigned short))FUNC_CMessages__AddBigMessage)(text, time, style);
}

// Adds big message to queue , see eMessageStyle
void CMessages::AddBigMessageQ(const char* text, unsigned int time, unsigned short style)
{
	((void (__cdecl *)(const char*, unsigned int, unsigned short))FUNC_CMessages__AddBigMessageQ)(text, time, style);
}