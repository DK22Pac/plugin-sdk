/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "Patch.h"
#include <Windows.h>

int plugin::patch::GetBaseAddress() {
    static int addr = reinterpret_cast<int>(GetModuleHandleA(NULL));
    return addr;
}
