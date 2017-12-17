/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGarage.h"

// Converted from cdecl bool CGarage::Open() 0x42E910
bool CGarage::Open() {
    return plugin::CallAndReturn<bool, 0x42E910>();
}

// Converted from cdecl bool CGarage::Close() 0x42E900
bool CGarage::Close() {
    return plugin::CallAndReturn<bool, 0x42E900>();
}
