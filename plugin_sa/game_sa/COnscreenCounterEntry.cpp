/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "COnscreenCounterEntry.h"

PLUGIN_SOURCE_FILE

int addrof(COnscreenCounterEntry::ProcessForDisplayCounter) = ADDRESS_BY_VERSION(0x44CA90, 0, 0, 0, 0, 0);
int gaddrof(COnscreenCounterEntry::ProcessForDisplayCounter) = GLOBAL_ADDRESS_BY_VERSION(0x44CA90, 0, 0, 0, 0, 0);

void COnscreenCounterEntry::ProcessForDisplayCounter(int type) {
    plugin::CallMethodDynGlobal<COnscreenCounterEntry *, int>(gaddrof(COnscreenCounterEntry::ProcessForDisplayCounter), this, type);
}

int addrof(COnscreenCounterEntry::SetColourID) = ADDRESS_BY_VERSION(0x44CB00, 0, 0, 0, 0, 0);
int gaddrof(COnscreenCounterEntry::SetColourID) = GLOBAL_ADDRESS_BY_VERSION(0x44CB00, 0, 0, 0, 0, 0);

void COnscreenCounterEntry::SetColourID(unsigned char ColourID) {
    plugin::CallMethodDynGlobal<COnscreenCounterEntry *, unsigned char>(gaddrof(COnscreenCounterEntry::SetColourID), this, ColourID);
}
