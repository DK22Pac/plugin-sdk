/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "COnscreenTimerEntry.h"

PLUGIN_SOURCE_FILE

int addrof(COnscreenTimerEntry::Process) = ADDRESS_BY_VERSION(0x44CB10, 0, 0, 0, 0, 0);
int gaddrof(COnscreenTimerEntry::Process) = GLOBAL_ADDRESS_BY_VERSION(0x44CB10, 0, 0, 0, 0, 0);

void COnscreenTimerEntry::Process() {
    plugin::CallMethodDynGlobal<COnscreenTimerEntry *>(gaddrof(COnscreenTimerEntry::Process), this);
}

int addrof(COnscreenTimerEntry::ProcessForDisplayClock) = ADDRESS_BY_VERSION(0x44CA40, 0, 0, 0, 0, 0);
int gaddrof(COnscreenTimerEntry::ProcessForDisplayClock) = GLOBAL_ADDRESS_BY_VERSION(0x44CA40, 0, 0, 0, 0, 0);

void COnscreenTimerEntry::ProcessForDisplayClock() {
    plugin::CallMethodDynGlobal<COnscreenTimerEntry *>(gaddrof(COnscreenTimerEntry::ProcessForDisplayClock), this);
}
