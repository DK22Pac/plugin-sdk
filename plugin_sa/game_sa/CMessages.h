/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

enum eMessageStyle : unsigned short
{
    STYLE_MIDDLE,                 // InTheMiddle
    STYLE_BOTTOM_RIGHT,           // AtTheBottomRight
    STYLE_WHITE_MIDDLE,           // WhiteText_InTheMiddle
    STYLE_MIDDLE_SMALLER,         // InTheMiddle_Smaller
    STYLE_MIDDLE_SMALLER_HIGHER,  // InTheMiddle_Smaller_ABitHigherOnTheScreen
    STYLE_WHITE_MIDDLE_SMALLER,   // SmallWhiteText_InTheMiddleOfTheScreen
    STYLE_LIGHTBLUE_TOP,          // LightBlueText_OnTopOfTheScreen
	STYLE_COUNT                   // total number of styles
};

struct tMessage {
	char*           m_pText;
	unsigned short  m_wFlag;
	unsigned int    m_dwTime;
	unsigned int    m_dwStartTime;
	int             m_dwNumber[6];
	char*           m_pString;
	unsigned char   m_bPreviousBrief;
};
VALIDATE_OFFSET(tMessage, m_pText, 0x0);
VALIDATE_OFFSET(tMessage, m_wFlag, 0x4);
VALIDATE_OFFSET(tMessage, m_dwTime, 0x8);
VALIDATE_OFFSET(tMessage, m_dwStartTime, 0xC);
VALIDATE_OFFSET(tMessage, m_dwNumber, 0x10);
VALIDATE_OFFSET(tMessage, m_pString, 0x28);
VALIDATE_OFFSET(tMessage, m_bPreviousBrief, 0x2C);
VALIDATE_SIZE(tMessage, 0x30);

struct tBigMessage {
	tMessage m_Current;
	tMessage m_Stack[3];
};
VALIDATE_OFFSET(tBigMessage, m_Current, 0x0);
VALIDATE_OFFSET(tBigMessage, m_Stack, 0x30);
VALIDATE_SIZE(tBigMessage, 0xC0);

struct tPreviousBrief {
	char*  m_pText;
	int    m_nNumber[6];
	char*  m_pString;
};
VALIDATE_OFFSET(tPreviousBrief, m_pText, 0x0);
VALIDATE_OFFSET(tPreviousBrief, m_nNumber, 0x4);
VALIDATE_OFFSET(tPreviousBrief, m_pString, 0x1C);
VALIDATE_SIZE(tPreviousBrief, 0x20);

class PLUGIN_API CMessages {
public:
	static inline std::array<tPreviousBrief, 20>& PreviousBriefs = *(std::array<tPreviousBrief, 20>*)0xC1A570;
	static inline std::array<tMessage, 8>& BriefMessages = *(std::array<tMessage, 8>*)0xC1A7F0;
	static inline std::array<tBigMessage, eMessageStyle::STYLE_COUNT>& BIGMessages = *(std::array<tBigMessage, eMessageStyle::STYLE_COUNT>*)0xC1A970; // (for each text style)

	// Returns length of a string
	static unsigned int GetStringLength(const char* string);
	// Copies string src to dest
	static void StringCopy(char* dest, const char* src, unsigned short len);
	// Compares 2 strings
	static unsigned char StringCompare(const char* str1, const char* str2, unsigned short len);
	static void CutString(int count, const char* str, char** dest);
	// Removes registered messages
	static void ClearMessages(bool flag);
	// Removes small messages
	static void ClearSmallMessagesOnly();
	// Adds message to previous brief
	static void AddToPreviousBriefArray(const char* text, int n1, int n2, int n3, int n4, int n5, int n6, const char* string);
	// Removes messages from previous brief
	static void ClearPreviousBriefArray();
	// Inserts numbers into string
	static void InsertNumberInString(const char* src, int n1, int n2, int n3, int n4, int n5, int n6, char* dest);
	// Inserts string into text
	static void InsertStringInString(char* text, const char* string);
	// Inserts key events into string
	static void InsertPlayerControlKeysInString(char* string);
	// Adds message with numbers to queue
	static void AddMessageWithNumber(const char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6, bool bPreviousBrief = true);
	// Adds message with numbers and shows it instantly
	static void AddMessageJumpQWithNumber(const char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6, bool bPreviousBrief = true);
	// Adds big message with numbers and shows it instantly , see eMessageStyle
	static void AddBigMessageWithNumber(const char* text, unsigned int time, unsigned short style, int n1, int n2, int n3, int n4, int n5, int n6);
	// Adds big message with numbers to queue , see eMessageStyle
	static void AddBigMessageWithNumberQ(const char* text, unsigned int time, unsigned short style, int n1, int n2, int n3, int n4, int n5, int n6);
	// Adds message with string to queue
	static void AddMessageWithString(const char* text, unsigned int time, unsigned short flag, char* string, char bPreviousBrief = true);
	// Adds message with string and shows it instantly
	static void AddMessageJumpQWithString(const char* text, unsigned int time, unsigned short flag, char* string, char bPreviousBrief = true);
	// Removes small message with this text
	static void ClearThisPrint(const char* text);
	// Removes big message with this text
	static void ClearThisBigPrint(const char* text);
	// Removes first big message in messages stack , see eMessageStyle
	static void ClearThisPrintBigNow(unsigned short style);
	// Initialises messages
	static void Init(bool flag);
	// Removes all displayed messages
	static void ClearAllMessagesDisplayedByGame();
	// Processing messages. This is called from CWorld::Process
	static void Process();
	// Displays messages
	static void Display(bool flag);
	// Adds message to queue
	static void AddMessage(const char* text, unsigned int time, unsigned short flag, bool bPreviousBrief = true);
	// Adds message and shows it instantly
	static void AddMessageJumpQ(const char* text, unsigned int time, unsigned short flag, bool bPreviousBrief = true);
	// Adds big message and shows it instantly , see eMessageStyle
	static void AddBigMessage(const char* text, unsigned int time, unsigned short style);
	// Adds big message to queue , see eMessageStyle
	static void AddBigMessageQ(const char* text, unsigned int time, unsigned short style);
};
VALIDATE_SIZE(CMessages, 0x1);
