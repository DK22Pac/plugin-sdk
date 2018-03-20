/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "DynAddress.h"
#include <Windows.h>

int plugin::GetBaseAddress() {
    static int addr = reinterpret_cast<int>(GetModuleHandleA(NULL));
    return addr;
}

int plugin::GetGlobalAddress(int address) {
    return GetBaseAddress() - 0x400000 + address;
}
