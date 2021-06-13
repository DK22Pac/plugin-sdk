/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGangInfo.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CGangInfo) = ADDRESS_BY_VERSION(0x4C3F80, 0x4C4020, 0x4C3FB0);
int ctor_gaddr(CGangInfo) = GLOBAL_ADDRESS_BY_VERSION(0x4C3F80, 0x4C4020, 0x4C3FB0);

int dtor_addr(CGangInfo) = ADDRESS_BY_VERSION(0x4C3FA0, 0x4C4040, 0x4C3FD0);
int dtor_gaddr(CGangInfo) = GLOBAL_ADDRESS_BY_VERSION(0x4C3FA0, 0x4C4040, 0x4C3FD0);
