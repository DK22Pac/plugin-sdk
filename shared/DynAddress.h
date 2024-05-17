/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#if !(defined (_M_IX86) || defined (_X86_))
#define STARTING_ADDRESS (0x140000000)
#else
#define STARTING_ADDRESS (0x400000)
#endif

#include <vector>
#include <functional>
#include <cstdint>
#include <memory>

namespace plugin {

uintptr_t GetBaseAddress();

uintptr_t GetGlobalAddress(uintptr_t address);

const uintptr_t GetExternalAddress(const char* processName, uintptr_t shift, uintptr_t address);

#if !(defined (_M_IX86) || defined (_X86_))
void* MakeTrampoline(uintptr_t address, void* func);
#endif

}
