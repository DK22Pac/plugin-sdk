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
    
    //funcs
    void Process();
};

class COnscreenCounterEntry {
public:
    
};

class COnscreenTimer {
public:
    
    //funcs
    void AddClock(unsigned int arg0, char* arg1, bool arg2);
    void AddCounter(unsigned int arg0, unsigned short arg1, char* arg2, unsigned short arg3);
    void ClearClock(unsigned int arg0);
    void ClearCounter(unsigned int arg0);
    void Init();
    void Process();
    void ProcessForDisplay();
};