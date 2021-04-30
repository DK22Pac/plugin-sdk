/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "C2deffectsModelInfo.h"

PLUGIN_SOURCE_FILE

int ctor_addr(C2deffectsModelInfo) = ADDRESS_BY_VERSION(0x50BE60, 0x50BF50, 0x50BEE0);
int ctor_gaddr(C2deffectsModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50BE60, 0x50BF50, 0x50BEE0);

int dtor_addr(C2deffectsModelInfo) = ADDRESS_BY_VERSION(0x50BE50, 0x50BF40, 0x50BED0);
int dtor_gaddr(C2deffectsModelInfo) = GLOBAL_ADDRESS_BY_VERSION(0x50BE50, 0x50BF40, 0x50BED0);
