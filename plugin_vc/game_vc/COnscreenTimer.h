/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class COnscreenTimerEntry {
public:
	unsigned int m_nVarId;
	char m_acDescriptionTextKey[10];
	char m_acDisplayedText[40];
	char _pad0[2];
	bool m_bEnabled;
	unsigned char m_nTimerDirection;
	char _pad1[2];

    //funcs
    void Process();
};
VALIDATE_OFFSET(COnscreenTimerEntry, m_nVarId, 0x0);
VALIDATE_OFFSET(COnscreenTimerEntry, m_acDescriptionTextKey, 0x4);
VALIDATE_OFFSET(COnscreenTimerEntry, m_acDisplayedText, 0xE);
VALIDATE_OFFSET(COnscreenTimerEntry, _pad0, 0x36);
VALIDATE_OFFSET(COnscreenTimerEntry, m_bEnabled, 0x38);
VALIDATE_OFFSET(COnscreenTimerEntry, m_nTimerDirection, 0x39);
VALIDATE_OFFSET(COnscreenTimerEntry, _pad1, 0x3A);
VALIDATE_SIZE(COnscreenTimerEntry, 0x3C);

class COnscreenCounterEntry {
public:
	unsigned int m_nVarId;
	char m_acDescriptionTextKey[10];
	unsigned short m_nType;
	char m_acDisplayedText[40];
	char _pad0[2];
	bool m_bEnabled;
	char _pad1[1];
};
VALIDATE_OFFSET(COnscreenCounterEntry, m_nVarId, 0x0);
VALIDATE_OFFSET(COnscreenCounterEntry, m_acDescriptionTextKey, 0x4);
VALIDATE_OFFSET(COnscreenCounterEntry, m_nType, 0xE);
VALIDATE_OFFSET(COnscreenCounterEntry, m_acDisplayedText, 0x10);
VALIDATE_OFFSET(COnscreenCounterEntry, _pad0, 0x38);
VALIDATE_OFFSET(COnscreenCounterEntry, m_bEnabled, 0x3A);
VALIDATE_OFFSET(COnscreenCounterEntry, _pad1, 0x3B);
VALIDATE_SIZE(COnscreenCounterEntry, 0x3C);

class COnscreenTimer {
public:
	COnscreenTimerEntry m_aClocks[1];
	COnscreenCounterEntry m_aCounters[3];
	bool m_bDisplay;
	bool m_bTimerFeezed;
	char _pad0[2];
    
	//funcs
    void AddClock(unsigned int arg0, char* arg1, bool arg2);
    void AddCounter(unsigned int arg0, unsigned short arg1, char* arg2, unsigned short arg3);
    void ClearClock(unsigned int arg0);
    void ClearCounter(unsigned int arg0);
    void Init();
    void Process();
    void ProcessForDisplay();
};
VALIDATE_OFFSET(COnscreenTimer, m_aClocks, 0x0);
VALIDATE_OFFSET(COnscreenTimer, m_aCounters, 0x3C);
VALIDATE_OFFSET(COnscreenTimer, m_bDisplay, 0xF0);
VALIDATE_OFFSET(COnscreenTimer, m_bTimerFeezed, 0xF1);
VALIDATE_OFFSET(COnscreenTimer, _pad0, 0xF2);
VALIDATE_SIZE(COnscreenTimer, 0xF4);