/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPointList.h"

PLUGIN_SOURCE_FILE

int addrof(CPointList::Empty) = ADDRESS_BY_VERSION(0x699F00, 0, 0, 0, 0, 0);
int gaddrof(CPointList::Empty) = GLOBAL_ADDRESS_BY_VERSION(0x699F00, 0, 0, 0, 0, 0);

void CPointList::Empty() {
    plugin::CallMethodDynGlobal<CPointList *>(gaddrof(CPointList::Empty), this);
}
