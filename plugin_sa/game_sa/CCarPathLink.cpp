/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCarPathLink.h"

PLUGIN_SOURCE_FILE

int addrof(CCarPathLink::OneWayLaneOffset) = ADDRESS_BY_VERSION(0x44DB00, 0, 0, 0, 0, 0);
int gaddrof(CCarPathLink::OneWayLaneOffset) = GLOBAL_ADDRESS_BY_VERSION(0x44DB00, 0, 0, 0, 0, 0);

float CCarPathLink::OneWayLaneOffset() {
    return plugin::CallMethodAndReturnDynGlobal<float, CCarPathLink *>(gaddrof(CCarPathLink::OneWayLaneOffset), this);
}
