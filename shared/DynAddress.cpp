/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "DynAddress.h"
#include <Windows.h>
#include "Base.h"
#include "../hooking/Hooking.Patterns.h"
#include "../injector/hooking.hpp"

int _NOINLINE_ plugin::GetBaseAddress() {
    static int addr = reinterpret_cast<int>(GetModuleHandleA(NULL));
    return addr;
}

int _NOINLINE_ plugin::GetGlobalAddress(int address) {
    return GetBaseAddress() - 0x400000 + address;
}

const int _NOINLINE_ plugin::GetExternalAddress(const char* processName, int shift, int address) {
    int addr = reinterpret_cast<int>(GetModuleHandleA(processName));
    return (GetBaseAddress() - 0x400000) + (addr - shift + address);
}

const uint32_t _NOINLINE_ plugin::GetPattern(std::string_view bytes, int index, int offset) {
    uint32_t a = (uint32_t)hook::pattern(bytes).get(index).get<void>(offset) - plugin::GetBaseAddress();
    a += 0x400000;
    return a;
}

const uint32_t _NOINLINE_ plugin::GetPattern(std::string_view bytes, int offset) {
    uint32_t a = (uint32_t)hook::get_pattern(bytes, offset) - plugin::GetBaseAddress();
    a += 0x400000;
    return a;
}
 
template<typename T>
void _NOINLINE_ plugin::InitPatterns() {
}
