/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "COnscreenTimer.h"

PLUGIN_SOURCE_FILE

int addrof(COnscreenTimer::AddClock) = ADDRESS_BY_VERSION(0x429350, 0x429350, 0);
int gaddrof(COnscreenTimer::AddClock) = GLOBAL_ADDRESS_BY_VERSION(0x429350, 0x429350, 0);

void COnscreenTimer::AddClock(unsigned int offset, char *gxt) {
    plugin::CallMethodDynGlobal<COnscreenTimer *, unsigned int, char *>(gaddrof(COnscreenTimer::AddClock), this, offset, gxt);
}

int addrof(COnscreenTimer::AddCounter) = ADDRESS_BY_VERSION(0x4293B0, 0x4293B0, 0);
int gaddrof(COnscreenTimer::AddCounter) = GLOBAL_ADDRESS_BY_VERSION(0x4293B0, 0x4293B0, 0);

void COnscreenTimer::AddCounter(unsigned int offset, unsigned short type, char *gxt) {
    plugin::CallMethodDynGlobal<COnscreenTimer *, unsigned int, unsigned short, char *>(gaddrof(COnscreenTimer::AddCounter), this, offset, type, gxt);
}

int addrof(COnscreenTimer::ClearClock) = ADDRESS_BY_VERSION(0x429410, 0x429410, 0);
int gaddrof(COnscreenTimer::ClearClock) = GLOBAL_ADDRESS_BY_VERSION(0x429410, 0x429410, 0);

void COnscreenTimer::ClearClock(unsigned int offset) {
    plugin::CallMethodDynGlobal<COnscreenTimer *, unsigned int>(gaddrof(COnscreenTimer::ClearClock), this, offset);
}

int addrof(COnscreenTimer::ClearCounter) = ADDRESS_BY_VERSION(0x429450, 0x429450, 0);
int gaddrof(COnscreenTimer::ClearCounter) = GLOBAL_ADDRESS_BY_VERSION(0x429450, 0x429450, 0);

void COnscreenTimer::ClearCounter(unsigned int offset) {
    plugin::CallMethodDynGlobal<COnscreenTimer *, unsigned int>(gaddrof(COnscreenTimer::ClearCounter), this, offset);
}

int addrof(COnscreenTimer::Init) = ADDRESS_BY_VERSION(0x429220, 0x429220, 0);
int gaddrof(COnscreenTimer::Init) = GLOBAL_ADDRESS_BY_VERSION(0x429220, 0x429220, 0);

void COnscreenTimer::Init() {
    plugin::CallMethodDynGlobal<COnscreenTimer *>(gaddrof(COnscreenTimer::Init), this);
}

int addrof(COnscreenTimer::Process) = ADDRESS_BY_VERSION(0x429320, 0x429320, 0);
int gaddrof(COnscreenTimer::Process) = GLOBAL_ADDRESS_BY_VERSION(0x429320, 0x429320, 0);

void COnscreenTimer::Process() {
    plugin::CallMethodDynGlobal<COnscreenTimer *>(gaddrof(COnscreenTimer::Process), this);
}

int addrof(COnscreenTimer::ProcessForDisplay) = ADDRESS_BY_VERSION(0x4292E0, 0x4292E0, 0);
int gaddrof(COnscreenTimer::ProcessForDisplay) = GLOBAL_ADDRESS_BY_VERSION(0x4292E0, 0x4292E0, 0);

void COnscreenTimer::ProcessForDisplay() {
    plugin::CallMethodDynGlobal<COnscreenTimer *>(gaddrof(COnscreenTimer::ProcessForDisplay), this);
}
