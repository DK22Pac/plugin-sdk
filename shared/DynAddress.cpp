/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "DynAddress.h"
#include <Windows.h>
#include "Base.h"

int _NOINLINE_ plugin::GetBaseAddress() {
    static int addr = reinterpret_cast<int>(GetModuleHandleA(NULL));
    return addr;
}

int _NOINLINE_ plugin::GetGlobalAddress(int address) {
    return GetBaseAddress() - 0x400000 + address;
}

const int _NOINLINE_ plugin::GetExternalAddress(const char* processName, int shift, int address) {
    static int addr = reinterpret_cast<int>(GetModuleHandleA(processName));
    return (GetBaseAddress() - 0x400000) + (addr - shift + address);
}
 