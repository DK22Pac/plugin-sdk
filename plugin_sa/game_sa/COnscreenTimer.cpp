/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "COnscreenTimer.h"

PLUGIN_SOURCE_FILE

int addrof(COnscreenTimer::AddClock) = ADDRESS_BY_VERSION(0x44CD50, 0, 0, 0, 0, 0);
int gaddrof(COnscreenTimer::AddClock) = GLOBAL_ADDRESS_BY_VERSION(0x44CD50, 0, 0, 0, 0, 0);

void COnscreenTimer::AddClock(unsigned int varId, char *gxt, bool bTimerDirection) {
    plugin::CallMethodDynGlobal<COnscreenTimer *, unsigned int, char *, bool>(gaddrof(COnscreenTimer::AddClock), this, varId, gxt, bTimerDirection);
}

int addrof(COnscreenTimer::AddCounter) = ADDRESS_BY_VERSION(0x44CDA0, 0, 0, 0, 0, 0);
int gaddrof(COnscreenTimer::AddCounter) = GLOBAL_ADDRESS_BY_VERSION(0x44CDA0, 0, 0, 0, 0, 0);

void COnscreenTimer::AddCounter(int varId, short type, char *gxt, unsigned short counterIndex) {
    plugin::CallMethodDynGlobal<COnscreenTimer *, int, short, char *, unsigned short>(gaddrof(COnscreenTimer::AddCounter), this, varId, type, gxt, counterIndex);
}

int addrof(COnscreenTimer::AddCounterCounter) = ADDRESS_BY_VERSION(0x44CE00, 0, 0, 0, 0, 0);
int gaddrof(COnscreenTimer::AddCounterCounter) = GLOBAL_ADDRESS_BY_VERSION(0x44CE00, 0, 0, 0, 0, 0);

void COnscreenTimer::AddCounterCounter(unsigned int varId, unsigned int maxValue, char *gxt, unsigned short lineId) {
    plugin::CallMethodDynGlobal<COnscreenTimer *, unsigned int, unsigned int, char *, unsigned short>(gaddrof(COnscreenTimer::AddCounterCounter), this, varId, maxValue, gxt, lineId);
}

int addrof(COnscreenTimer::ClearClock) = ADDRESS_BY_VERSION(0x44CE60, 0, 0, 0, 0, 0);
int gaddrof(COnscreenTimer::ClearClock) = GLOBAL_ADDRESS_BY_VERSION(0x44CE60, 0, 0, 0, 0, 0);

int COnscreenTimer::ClearClock(unsigned int varId) {
    return plugin::CallMethodAndReturnDynGlobal<int, COnscreenTimer *, unsigned int>(gaddrof(COnscreenTimer::ClearClock), this, varId);
}

int addrof(COnscreenTimer::ClearCounter) = ADDRESS_BY_VERSION(0x44CE80, 0, 0, 0, 0, 0);
int gaddrof(COnscreenTimer::ClearCounter) = GLOBAL_ADDRESS_BY_VERSION(0x44CE80, 0, 0, 0, 0, 0);

void COnscreenTimer::ClearCounter(unsigned int varId) {
    plugin::CallMethodDynGlobal<COnscreenTimer *, unsigned int>(gaddrof(COnscreenTimer::ClearCounter), this, varId);
}

int addrof(COnscreenTimer::Init) = ADDRESS_BY_VERSION(0x44CBC0, 0, 0, 0, 0, 0);
int gaddrof(COnscreenTimer::Init) = GLOBAL_ADDRESS_BY_VERSION(0x44CBC0, 0, 0, 0, 0, 0);

void COnscreenTimer::Init() {
    plugin::CallMethodDynGlobal<COnscreenTimer *>(gaddrof(COnscreenTimer::Init), this);
}

int addrof(COnscreenTimer::Process) = ADDRESS_BY_VERSION(0x44CD30, 0, 0, 0, 0, 0);
int gaddrof(COnscreenTimer::Process) = GLOBAL_ADDRESS_BY_VERSION(0x44CD30, 0, 0, 0, 0, 0);

void COnscreenTimer::Process() {
    plugin::CallMethodDynGlobal<COnscreenTimer *>(gaddrof(COnscreenTimer::Process), this);
}

int addrof(COnscreenTimer::ProcessForDisplay) = ADDRESS_BY_VERSION(0x44CC20, 0, 0, 0, 0, 0);
int gaddrof(COnscreenTimer::ProcessForDisplay) = GLOBAL_ADDRESS_BY_VERSION(0x44CC20, 0, 0, 0, 0, 0);

void COnscreenTimer::ProcessForDisplay() {
    plugin::CallMethodDynGlobal<COnscreenTimer *>(gaddrof(COnscreenTimer::ProcessForDisplay), this);
}

int addrof(COnscreenTimer::SetClockBeepCountdownSecs) = ADDRESS_BY_VERSION(0x44CEE0, 0, 0, 0, 0, 0);
int gaddrof(COnscreenTimer::SetClockBeepCountdownSecs) = GLOBAL_ADDRESS_BY_VERSION(0x44CEE0, 0, 0, 0, 0, 0);

void COnscreenTimer::SetClockBeepCountdownSecs(unsigned int varID, unsigned int time) {
    plugin::CallMethodDynGlobal<COnscreenTimer *, unsigned int, unsigned int>(gaddrof(COnscreenTimer::SetClockBeepCountdownSecs), this, varID, time);
}

int addrof(COnscreenTimer::SetCounterColourID) = ADDRESS_BY_VERSION(0x44CF10, 0, 0, 0, 0, 0);
int gaddrof(COnscreenTimer::SetCounterColourID) = GLOBAL_ADDRESS_BY_VERSION(0x44CF10, 0, 0, 0, 0, 0);

void COnscreenTimer::SetCounterColourID(unsigned int varID, unsigned char ColourID) {
    plugin::CallMethodDynGlobal<COnscreenTimer *, unsigned int, unsigned char>(gaddrof(COnscreenTimer::SetCounterColourID), this, varID, ColourID);
}

int addrof(COnscreenTimer::SetCounterFlashWhenFirstDisplayed) = ADDRESS_BY_VERSION(0x44CEB0, 0, 0, 0, 0, 0);
int gaddrof(COnscreenTimer::SetCounterFlashWhenFirstDisplayed) = GLOBAL_ADDRESS_BY_VERSION(0x44CEB0, 0, 0, 0, 0, 0);

void COnscreenTimer::SetCounterFlashWhenFirstDisplayed(unsigned int varId, unsigned char bFlashWhenFirstDisplayed) {
    plugin::CallMethodDynGlobal<COnscreenTimer *, unsigned int, unsigned char>(gaddrof(COnscreenTimer::SetCounterFlashWhenFirstDisplayed), this, varId, bFlashWhenFirstDisplayed);
}
