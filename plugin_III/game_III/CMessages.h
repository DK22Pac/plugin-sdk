/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

struct tMessage {
    wchar_t        *m_pText;
    unsigned short  m_nFlag;
private:
    char _pad6[2];
public:
    unsigned int    m_nTime;
    unsigned int    m_nStartTime;
    int             m_nNumber[6];
    wchar_t        *m_pString;
};

VALIDATE_SIZE(tMessage, 0x2C);

struct tBigMessage {
    tMessage m_Current;
    tMessage m_Stack[3];
};

VALIDATE_SIZE(tBigMessage, 0xB0);

struct tPreviousBrief {
    wchar_t *m_pText;
    int      m_nNumber[6];
    wchar_t *m_pString;
};

VALIDATE_SIZE(tPreviousBrief, 0x20);

class CMessages {
public:
    static tPreviousBrief *PreviousBriefs; // static PreviousBrief PreviousBriefs[5]
    static tMessage *BriefMessages; // static Message BriefMessages[8];
    static tBigMessage *BIGMessages; // static BigMessage BIGMessages[6];

    static void Init();
    static int GetWideStringLength(const wchar_t* str);
    static int WideStringCopy(wchar_t* dst, const wchar_t* src, unsigned short size);
    static bool WideStringCompare(const wchar_t* str1, const wchar_t* str2, unsigned short size);
    static void Process();
    static void Display();
    static void AddMessage(const wchar_t* text, unsigned int time, unsigned short flag);
    static void AddMessageJumpQ(const wchar_t* text, unsigned int time, unsigned short flag);
    static void AddMessageSoon(const wchar_t* text, unsigned int time, unsigned short flag);
    static void ClearMessages();
    static void ClearSmallMessagesOnly();
    static void AddBigMessage(const wchar_t* text, unsigned int time, unsigned short flag);
    static void AddBigMessageQ(const wchar_t* text, unsigned int time, unsigned short flag);
    static void AddToPreviousBriefArray(const wchar_t* text, int n1, int n2, int n3, int n4, int n5, int n6, const wchar_t* str);
    static void InsertNumberInString(const wchar_t* src, int n1, int n2, int n3, int n4, int n5, int n6, wchar_t* dst);
    static void InsertStringInString(wchar_t* text, const wchar_t* str);
    static void InsertPlayerControlKeysInString(wchar_t* text);
    static void AddMessageWithNumber(const wchar_t* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
    static void AddMessageJumpQWithNumber(const wchar_t* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
    static void AddMessageSoonWithNumber(const wchar_t* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
    static void AddBigMessageWithNumber(const wchar_t* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
    static void AddBigMessageWithNumberQ(const wchar_t* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
    static void AddMessageWithString(const wchar_t* text, unsigned int time, unsigned short flag, const wchar_t* str);
    static void AddMessageJumpQWithString(const wchar_t* text, unsigned int time, unsigned short flag, const wchar_t* str);
    static void ClearThisPrint(const wchar_t* text);
    static void ClearThisBigPrint(const wchar_t* text);
    static void ClearAllMessagesDisplayedByGame();

    // automatic conversion to wide characters
    static void AddMessage(const char* text, unsigned int time, unsigned short flag);
    static void AddMessageJumpQ(const char* text, unsigned int time, unsigned short flag);
    static void AddMessageSoon(const char* text, unsigned int time, unsigned short flag);
    static void AddBigMessage(const char* text, unsigned int time, unsigned short flag);
    static void AddBigMessageQ(const char* text, unsigned int time, unsigned short flag);
    static void AddToPreviousBriefArray(const char* text, int n1, int n2, int n3, int n4, int n5, int n6, const char* str);
    static void InsertNumberInString(const char* src, int n1, int n2, int n3, int n4, int n5, int n6, char* dst);
    static void InsertStringInString(char* text, const char* str);
    static void InsertPlayerControlKeysInString(char* text);
    static void AddMessageWithNumber(const char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
    static void AddMessageJumpQWithNumber(const char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
    static void AddMessageSoonWithNumber(const char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
    static void AddBigMessageWithNumber(const char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
    static void AddBigMessageWithNumberQ(const char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
    static void AddMessageWithString(const char* text, unsigned int time, unsigned short flag, const char* str);
    static void AddMessageJumpQWithString(const char* text, unsigned int time, unsigned short flag, const char* str);
    static void ClearThisPrint(const char* text);
    static void ClearThisBigPrint(const char* text);
};