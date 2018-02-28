/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

struct PagerMessage {
    wchar_t *m_pText;
    unsigned short m_nSpeedMs;
    short m_nCurrentPosition;
    unsigned short m_nStringLength;
    unsigned short m_nPriority;
    int m_nTimeToChangePosition;
    short field_10;
private:
    char _pad12[2];
public:
    int m_nNumber[6];
};

VALIDATE_SIZE(PagerMessage, 0x2C);

class CPager {
public:
    short m_nNumDisplayLetters;
private:
    char _pad2[2];
public:
    PagerMessage m_messages[8];

    void Init();
    void Process();
    void Display();
    void AddMessage(wchar_t* text, unsigned short speed, unsigned short priority, unsigned short arg3);
    void AddMessageWithNumber(wchar_t* text, int n1, int n2, int n3, int n4, int n5, int n6, unsigned short speed, unsigned short priority, unsigned short arg9);
    void ClearMessages();
    void RestartCurrentMessage();

    void AddMessage(char* text, unsigned short speed, unsigned short priority, unsigned short arg3);
    void AddMessageWithNumber(char* text, int n1, int n2, int n3, int n4, int n5, int n6, unsigned short speed, unsigned short priority, unsigned short arg9);
};

VALIDATE_SIZE(CPager, 0x164);