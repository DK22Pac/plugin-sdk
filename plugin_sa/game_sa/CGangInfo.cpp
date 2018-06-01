/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGangInfo.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CGangInfo) = ADDRESS_BY_VERSION(0x5DE520, 0, 0, 0, 0, 0);
int ctor_gaddr(CGangInfo) = GLOBAL_ADDRESS_BY_VERSION(0x5DE520, 0, 0, 0, 0, 0);

int dtor_addr(CGangInfo) = ADDRESS_BY_VERSION(0x5DE540, 0, 0, 0, 0, 0);
int dtor_gaddr(CGangInfo) = GLOBAL_ADDRESS_BY_VERSION(0x5DE540, 0, 0, 0, 0, 0);
