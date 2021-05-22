/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "COnscreenTimerEntry.h"

PLUGIN_SOURCE_FILE

int addrof(COnscreenTimerEntry::Process) = ADDRESS_BY_VERSION(0x429160, 0x429160, 0x429160);
int gaddrof(COnscreenTimerEntry::Process) = GLOBAL_ADDRESS_BY_VERSION(0x429160, 0x429160, 0x429160);

void COnscreenTimerEntry::Process() {
    plugin::CallMethodDynGlobal<COnscreenTimerEntry *>(gaddrof(COnscreenTimerEntry::Process), this);
}

int addrof(COnscreenTimerEntry::ProcessForDisplay) = ADDRESS_BY_VERSION(0x429110, 0x429110, 0x429110);
int gaddrof(COnscreenTimerEntry::ProcessForDisplay) = GLOBAL_ADDRESS_BY_VERSION(0x429110, 0x429110, 0x429110);

bool COnscreenTimerEntry::ProcessForDisplay() {
    return plugin::CallMethodAndReturnDynGlobal<bool, COnscreenTimerEntry *>(gaddrof(COnscreenTimerEntry::ProcessForDisplay), this);
}

int addrof(COnscreenTimerEntry::ProcessForDisplayClock) = ADDRESS_BY_VERSION(0x429080, 0x429080, 0x429080);
int gaddrof(COnscreenTimerEntry::ProcessForDisplayClock) = GLOBAL_ADDRESS_BY_VERSION(0x429080, 0x429080, 0x429080);

void COnscreenTimerEntry::ProcessForDisplayClock() {
    plugin::CallMethodDynGlobal<COnscreenTimerEntry *>(gaddrof(COnscreenTimerEntry::ProcessForDisplayClock), this);
}

int addrof(COnscreenTimerEntry::ProcessForDisplayCounter) = ADDRESS_BY_VERSION(0x4290F0, 0x4290F0, 0x4290F0);
int gaddrof(COnscreenTimerEntry::ProcessForDisplayCounter) = GLOBAL_ADDRESS_BY_VERSION(0x4290F0, 0x4290F0, 0x4290F0);

void COnscreenTimerEntry::ProcessForDisplayCounter() {
    plugin::CallMethodDynGlobal<COnscreenTimerEntry *>(gaddrof(COnscreenTimerEntry::ProcessForDisplayCounter), this);
}
