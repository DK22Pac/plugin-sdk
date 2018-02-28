/*
Plugin-SDK (Grand Theft Auto Vice City) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "COnscreenTimer.h"

// Converted from thiscall void COnscreenTimer::AddClock(uint, char *, bool) 0x434B30
void COnscreenTimer::AddClock(unsigned int arg0, char* arg1, bool arg2) {
    plugin::CallMethod<0x434B30, COnscreenTimer *, unsigned int, char*, bool>(this, arg0, arg1, arg2);
}

// Converted from thiscall void COnscreenTimer::AddCounter(uint, ushort, char *, ushort) 0x434AE0
void COnscreenTimer::AddCounter(unsigned int arg0, unsigned short arg1, char* arg2, unsigned short arg3) {
    plugin::CallMethod<0x434AE0, COnscreenTimer *, unsigned int, unsigned short, char*, unsigned short>(this, arg0, arg1, arg2, arg3);
}

// Converted from thiscall void COnscreenTimer::ClearClock(uint) 0x434AA0
void COnscreenTimer::ClearClock(unsigned int arg0) {
    plugin::CallMethod<0x434AA0, COnscreenTimer *, unsigned int>(this, arg0);
}

// Converted from thiscall void COnscreenTimer::ClearCounter(uint) 0x434A60
void COnscreenTimer::ClearCounter(unsigned int arg0) {
    plugin::CallMethod<0x434A60, COnscreenTimer *, unsigned int>(this, arg0);
}

// Converted from thiscall void COnscreenTimer::Init(void) 0x434CE0
void COnscreenTimer::Init() {
    plugin::CallMethod<0x434CE0, COnscreenTimer *>(this);
}

// Converted from thiscall void COnscreenTimer::Process(void) 0x434B90
void COnscreenTimer::Process() {
    plugin::CallMethod<0x434B90, COnscreenTimer *>(this);
}

// Converted from thiscall void COnscreenTimer::ProcessForDisplay(void) 0x434BD0
void COnscreenTimer::ProcessForDisplay() {
    plugin::CallMethod<0x434BD0, COnscreenTimer *>(this);
}

// Converted from thiscall void COnscreenTimerEntry::Process(void) 0x434DE0
void COnscreenTimerEntry::Process() {
    plugin::CallMethod<0x434DE0, COnscreenTimerEntry *>(this);
}