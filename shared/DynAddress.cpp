/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma warning(disable: 4311)
#pragma warning(disable: 4302)

#include "DynAddress.h"
#include <windows.h>
#include "Base.h"
#if !(defined (_M_IX86) || defined (_X86_))
#include "..\modutils\Trampoline.h"
#endif

uintptr_t _NOINLINE_ plugin::GetBaseAddress() {
    static uintptr_t addr = reinterpret_cast<uintptr_t>(GetModuleHandleA(NULL));
    return addr;
}

uintptr_t _NOINLINE_ plugin::GetGlobalAddress(uintptr_t address) {
    return GetBaseAddress() - STARTING_ADDRESS + address;
}

const uintptr_t _NOINLINE_ plugin::GetExternalAddress(const char* processName, uintptr_t shift, uintptr_t address) {
    uintptr_t addr = reinterpret_cast<uintptr_t>(GetModuleHandleA(processName));
    return (GetBaseAddress() - STARTING_ADDRESS) + (addr - shift + address);
}

#if !(defined (_M_IX86) || defined (_X86_))
void* plugin::MakeTrampoline(uintptr_t address, void* func) {
    auto trampoline = Trampoline::MakeTrampoline(address);
    return trampoline->Jump(func);
}
#endif
