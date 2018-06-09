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

tPreviousBrief *CMessages::PreviousBriefs = (tPreviousBrief *)0xC1A570;

tMessage *CMessages::BriefMessages = (tMessage *)0xC1A7F0;

tBigMessage *CMessages::BIGMessages = (tBigMessage *)0xC1A970;

// Returns length of a string
unsigned int CMessages::GetStringLength(char *string)
{
	return ((unsigned int (__cdecl *)(char *))FUNC_CMessages__GetStringLength)(string);
}

// Copies string src to dest
void CMessages::StringCopy(char *dest, char *src, unsigned short len)
{
	((void (__cdecl *)(char *, char *, unsigned short))FUNC_CMessages__StringCopy)(dest, src, len);
}

// Compares 2 strings
unsigned char CMessages::StringCompare(char *str1, char *str2, unsigned short len)
{
	return ((unsigned char (__cdecl *)(char *, char *, unsigned short))FUNC_CMessages__StringCompare)(str1, str2, len);
}

void CMessages::CutString(int count, char *str, char **dest)
{
	((void (__cdecl *)(int, char *, char **))FUNC_CMessages__CutString)(count, str, dest);
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
void CMessages::AddToPreviousBriefArray(char *text, int n1, int n2, int n3, int n4, int n5, int n6, char *string)
{
	((void (__cdecl *)(char *, int, int, int, int, int, int, char *))FUNC_CMessages__AddToPreviousBriefArray)(text, n1, n2, n3, n4, n5, n6, string);
}

// Removes messages from previous brief
void CMessages::ClearPreviousBriefArray()
{
	((void (__cdecl *)())FUNC_CMessages__ClearPreviousBriefArray)();
}

// Inserts numbers into string
void CMessages::InsertNumberInString(char *src, int n1, int n2, int n3, int n4, int n5, int n6, char *dst)
{
	((void (__cdecl *)(char *, int, int, int, int, int, int, char *))FUNC_CMessages__InsertNumberInString)(src, n1, n2, n3, n4, n5, n6, dst);
}

// Inserts string into src
void CMessages::InsertStringInString(char *src, char *string)
{
	((void (__cdecl *)(char *, char *))FUNC_CMessages__InsertStringInString)(src, string);
}

// Inserts key events into string
void CMessages::InsertPlayerControlKeysInString(char *string)
{
	((void (__cdecl *)(char *))FUNC_CMessages__InsertPlayerControlKeysInString)(string);
}

// Adds message with numbers to queue
void CMessages::AddMessageWithNumber(char *text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6, bool bPreviousBrief)
{
	((void (__cdecl *)(char *, unsigned int, unsigned short, int, int, int, int, int, int, bool))FUNC_CMessages__AddMessageWithNumber)(text, time, flag, n1, n2, n3, n4, n5, n6, bPreviousBrief);
}

// Adds message with numbers and shows it instantly
void CMessages::AddMessageJumpQWithNumber(char *text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6, bool bPreviousBrief)
{
	((void (__cdecl *)(char *, unsigned int, unsigned short, int, int, int, int, int, int, bool))FUNC_CMessages__AddMessageJumpQWithNumber)(text, time, flag, n1, n2, n3, n4, n5, n6, bPreviousBrief);
}

// Adds big message with numbers and shows it instantly , see eMessageStyle
void CMessages::AddBigMessageWithNumber(char *text, unsigned int time, unsigned short style, int n1, int n2, int n3, int n4, int n5, int n6)
{
	((void (__cdecl *)(char *, unsigned int, unsigned short, int, int, int, int, int, int))FUNC_CMessages__AddBigMessageWithNumber)(text, time, style, n1, n2, n3, n4, n5, n6);
}

// Adds big message with numbers to queue , see eMessageStyle
void CMessages::AddBigMessageWithNumberQ(char *text, unsigned int time, unsigned short style, int n1, int n2, int n3, int n4, int n5, int n6)
{
	((void (__cdecl *)(char *, unsigned int, unsigned short, int, int, int, int, int, int))FUNC_CMessages__AddBigMessageWithNumberQ)(text, time, style, n1, n2, n3, n4, n5, n6);
}

// Adds message with string to queue
void CMessages::AddMessageWithString(char *text, unsigned int time, unsigned short flag, char *string, char bPreviousBrief)
{
	((void (__cdecl *)(char *, unsigned int, unsigned short, char *, char))FUNC_CMessages__AddMessageWithString)(text, time, flag, string, bPreviousBrief);
}

// Adds message with string and shows it instantly
void CMessages::AddMessageJumpQWithString(char *text, unsigned int time, unsigned short flag, char *string, char bPreviousBrief)
{
	((void (__cdecl *)(char *, unsigned int, unsigned short, char *, char))FUNC_CMessages__AddMessageJumpQWithString)(text, time, flag, string, bPreviousBrief);
}

// Removes small message with this text
void CMessages::ClearThisPrint(char *text)
{
	((void (__cdecl *)(char *))FUNC_CMessages__ClearThisPrint)(text);
}

// Removes big message with this text
void CMessages::ClearThisBigPrint(char *text)
{
	((void (__cdecl *)(char *))FUNC_CMessages__ClearThisBigPrint)(text);
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
void CMessages::AddMessage(char *text, unsigned int time, unsigned short flag, bool bPreviousBrief)
{
	((void (__cdecl *)(char *, unsigned int, unsigned short, bool))FUNC_CMessages__AddMessage)(text, time, flag, bPreviousBrief);
}

// Adds message and shows it instantly
void CMessages::AddMessageJumpQ(char *text, unsigned int time, unsigned short flag, bool bPreviousBrief)
{
	((void (__cdecl *)(char *, unsigned int, unsigned short, bool))FUNC_CMessages__AddMessageJumpQ)(text, time, flag, bPreviousBrief);
}

// Adds big message and shows it instantly , see eMessageStyle
void CMessages::AddBigMessage(char *text, unsigned int time, unsigned short style)
{
	((void (__cdecl *)(char *, unsigned int, unsigned short))FUNC_CMessages__AddBigMessage)(text, time, style);
}

// Adds big message to queue , see eMessageStyle
void CMessages::AddBigMessageQ(char *text, unsigned int time, unsigned short style)
{
	((void (__cdecl *)(char *, unsigned int, unsigned short))FUNC_CMessages__AddBigMessageQ)(text, time, style);
}