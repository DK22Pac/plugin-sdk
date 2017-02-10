/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_VC.h"

class COnscreenTimerEntry {
public:
	UInt32 m_nVarId;
	char m_acDescriptionTextKey[10];
	char m_acDisplayedText[40];
	char _pad0[2];
	Bool m_bEnabled;
	UInt8 m_nTimerDirection;
	char _pad1[2];

    //funcs
    void Process();
};

VALIDATE_SIZE(COnscreenTimerEntry, 0x3C);

class COnscreenCounterEntry {
public:
	UInt32 m_nVarId;
	char m_acDescriptionTextKey[10];
	UInt16 m_nType;
	char m_acDisplayedText[40];
	char _pad0[2];
	Bool m_bEnabled;
	char _pad1[1];
};

VALIDATE_SIZE(COnscreenCounterEntry, 0x3C);

class COnscreenTimer {
public:
	COnscreenTimerEntry m_aClocks[1];
	COnscreenCounterEntry m_aCounters[3];
	Bool m_bDisplay;
	Bool m_bTimerFeezed;
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

VALIDATE_SIZE(COnscreenTimer, 0xF4);