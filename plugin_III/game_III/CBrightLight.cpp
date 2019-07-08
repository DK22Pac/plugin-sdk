/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBrightLight.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CBrightLight) = ADDRESS_BY_VERSION(0x51C340, 0x51C570, 0x51C500);
int ctor_gaddr(CBrightLight) = GLOBAL_ADDRESS_BY_VERSION(0x51C340, 0x51C570, 0x51C500);
