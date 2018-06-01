/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPager.h"

PLUGIN_SOURCE_FILE

int addrof(CPager::ClearMessages) = ADDRESS_BY_VERSION(0x584B40, 0x584B60, 0x584970);
int gaddrof(CPager::ClearMessages) = GLOBAL_ADDRESS_BY_VERSION(0x584B40, 0x584B60, 0x584970);

void CPager::ClearMessages() {
    plugin::CallDynGlobal(gaddrof(CPager::ClearMessages));
}

int addrof(CPager::Display) = ADDRESS_BY_VERSION(0x584B90, 0x584BB0, 0x5849C0);
int gaddrof(CPager::Display) = GLOBAL_ADDRESS_BY_VERSION(0x584B90, 0x584BB0, 0x5849C0);

void CPager::Display() {
    plugin::CallDynGlobal(gaddrof(CPager::Display));
}

int addrof(CPager::Init) = ADDRESS_BY_VERSION(0x584DB0, 0x584DD0, 0x584BE0);
int gaddrof(CPager::Init) = GLOBAL_ADDRESS_BY_VERSION(0x584DB0, 0x584DD0, 0x584BE0);

void CPager::Init() {
    plugin::CallDynGlobal(gaddrof(CPager::Init));
}

int addrof(CPager::Process) = ADDRESS_BY_VERSION(0x584C40, 0x584C60, 0x584A70);
int gaddrof(CPager::Process) = GLOBAL_ADDRESS_BY_VERSION(0x584C40, 0x584C60, 0x584A70);

void CPager::Process() {
    plugin::CallDynGlobal(gaddrof(CPager::Process));
}
