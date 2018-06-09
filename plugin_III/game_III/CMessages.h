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
    static int GetWideStringLength(wchar_t* str);
    static int WideStringCopy(wchar_t* dst, wchar_t* src, unsigned short size);
    static bool WideStringCompare(wchar_t* str1, wchar_t* str2, unsigned short size);
    static void Process();
    static void Display();
    static void AddMessage(wchar_t* text, unsigned int time, unsigned short flag);
    static void AddMessageJumpQ(wchar_t* text, unsigned int time, unsigned short flag);
    static void AddMessageSoon(wchar_t* text, unsigned int time, unsigned short flag);
    static void ClearMessages();
    static void ClearSmallMessagesOnly();
    static void AddBigMessage(wchar_t* text, unsigned int time, unsigned short flag);
    static void AddBigMessageQ(wchar_t* text, unsigned int time, unsigned short flag);
    static void AddToPreviousBriefArray(wchar_t* text, int n1, int n2, int n3, int n4, int n5, int n6, wchar_t* str);
    static void InsertNumberInString(wchar_t* src, int n1, int n2, int n3, int n4, int n5, int n6, wchar_t* dst);
    static void InsertStringInString(wchar_t* text, wchar_t* str);
    static void InsertPlayerControlKeysInString(wchar_t* text);
    static void AddMessageWithNumber(wchar_t* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
    static void AddMessageJumpQWithNumber(wchar_t* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
    static void AddMessageSoonWithNumber(wchar_t* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
    static void AddBigMessageWithNumber(wchar_t* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
    static void AddBigMessageWithNumberQ(wchar_t* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
    static void AddMessageWithString(wchar_t* text, unsigned int time, unsigned short flag, wchar_t* str);
    static void AddMessageJumpQWithString(wchar_t* text, unsigned int time, unsigned short flag, wchar_t* str);
    static void ClearThisPrint(wchar_t* text);
    static void ClearThisBigPrint(wchar_t* text);
    static void ClearAllMessagesDisplayedByGame();

    static void AddMessage(char* text, unsigned int time, unsigned short flag);
    static void AddMessageJumpQ(char* text, unsigned int time, unsigned short flag);
    static void AddMessageSoon(char* text, unsigned int time, unsigned short flag);
    static void AddBigMessage(char* text, unsigned int time, unsigned short flag);
    static void AddBigMessageQ(char* text, unsigned int time, unsigned short flag);
    static void AddToPreviousBriefArray(char* text, int n1, int n2, int n3, int n4, int n5, int n6, char* str);
    static void InsertNumberInString(char* src, int n1, int n2, int n3, int n4, int n5, int n6, char* dst);
    static void InsertStringInString(char* text, char* str);
    static void InsertPlayerControlKeysInString(char* text);
    static void AddMessageWithNumber(char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
    static void AddMessageJumpQWithNumber(char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
    static void AddMessageSoonWithNumber(char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
    static void AddBigMessageWithNumber(char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
    static void AddBigMessageWithNumberQ(char* text, unsigned int time, unsigned short flag, int n1, int n2, int n3, int n4, int n5, int n6);
    static void AddMessageWithString(char* text, unsigned int time, unsigned short flag, char* str);
    static void AddMessageJumpQWithString(char* text, unsigned int time, unsigned short flag, char* str);
    static void ClearThisPrint(char* text);
    static void ClearThisBigPrint(char* text);
};