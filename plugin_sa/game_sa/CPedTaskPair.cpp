/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedTaskPair.h"

PLUGIN_SOURCE_FILE

int addrof(CPedTaskPair::Flush) = ADDRESS_BY_VERSION(0x5E95B0, 0, 0, 0, 0, 0);
int gaddrof(CPedTaskPair::Flush) = GLOBAL_ADDRESS_BY_VERSION(0x5E95B0, 0, 0, 0, 0, 0);

void CPedTaskPair::Flush() {
    plugin::CallMethodDynGlobal<CPedTaskPair *>(gaddrof(CPedTaskPair::Flush), this);
}
