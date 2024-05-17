/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "Patch.h"

void plugin::patch::Nop(uintptr_t address, size_t size, bool vp) {
    injector::MakeNOP(GetGlobalAddress(address), size, vp);
}

void plugin::patch::RedirectCall(uintptr_t address, void *func, bool vp) {
    injector::MakeCALL(GetGlobalAddress(address), func, vp);
}

void plugin::patch::RedirectJump(uintptr_t address, void *func, bool vp) {
    injector::MakeJMP(GetGlobalAddress(address), func, vp);
}

void plugin::patch::SetChar(uintptr_t address, char value, bool vp) {
    injector::WriteMemory(GetGlobalAddress(address), value, vp);
}

void plugin::patch::SetUChar(uintptr_t address, unsigned char value, bool vp) {
    injector::WriteMemory(GetGlobalAddress(address), value, vp);
}

void plugin::patch::SetShort(uintptr_t address, short value, bool vp) {
    injector::WriteMemory(GetGlobalAddress(address), value, vp);
}

void plugin::patch::SetUShort(uintptr_t address, unsigned short value, bool vp) {
    injector::WriteMemory(GetGlobalAddress(address), value, vp);
}

void plugin::patch::SetInt(uintptr_t address, uintptr_t value, bool vp) {
    injector::WriteMemory(GetGlobalAddress(address), value, vp);
}

void plugin::patch::SetUInt(uintptr_t address, uintptr_t value, bool vp) {
    injector::WriteMemory(GetGlobalAddress(address), value, vp);
}

void plugin::patch::SetFloat(uintptr_t address, float value, bool vp) {
    injector::WriteMemory(GetGlobalAddress(address), value, vp);
}

void plugin::patch::SetPointer(uintptr_t address, void *value, bool vp) {
    injector::WriteMemory(GetGlobalAddress(address), value, vp);
}

char plugin::patch::GetChar(uintptr_t address, bool vp) {
    return injector::ReadMemory<char>(GetGlobalAddress(address), vp);
}

unsigned char plugin::patch::GetUChar(uintptr_t address, bool vp) {
    return injector::ReadMemory<unsigned char>(GetGlobalAddress(address), vp);
}

short plugin::patch::GetShort(uintptr_t address, bool vp) {
    return injector::ReadMemory<short>(GetGlobalAddress(address), vp);
}

unsigned short plugin::patch::GetUShort(uintptr_t address, bool vp) {
    return injector::ReadMemory<unsigned short>(GetGlobalAddress(address), vp);
}

uintptr_t plugin::patch::GetInt(uintptr_t address, bool vp) {
    return injector::ReadMemory<uintptr_t>(GetGlobalAddress(address), vp);
}

uintptr_t plugin::patch::GetUInt(uintptr_t address, bool vp) {
    return injector::ReadMemory<uintptr_t>(GetGlobalAddress(address), vp);
}

float plugin::patch::GetFloat(uintptr_t address, bool vp) {
    return injector::ReadMemory<float>(GetGlobalAddress(address), vp);
}

void *plugin::patch::GetPointer(uintptr_t address, bool vp) {
    return injector::ReadMemory<void *>(GetGlobalAddress(address), vp);
}

void plugin::patch::ReplaceFunction(uintptr_t address, void *func, bool vp) {
    RedirectJump(address, func, vp);
}

void plugin::patch::ReplaceFunctionCall(uintptr_t address, void *func, bool vp) {
    RedirectCall(address, func, vp);
}

void plugin::patch::SetRaw(uintptr_t address, void* value, size_t size, bool vp) {   
    injector::WriteMemoryRaw(GetGlobalAddress(address), value, size, vp);
}

void plugin::patch::GetRaw(uintptr_t address,void* ret, size_t size, bool vp) {

    injector::ReadMemoryRaw(GetGlobalAddress(address), ret, size, vp);
}

void plugin::patch::RedirectShortJump(uintptr_t address, void* dest, bool vp) {

    uintptr_t GlobalAddress = GetGlobalAddress(address);
    injector::WriteMemory<uint8_t>(GlobalAddress, 0xEB, vp);
    if (dest)
        injector::MakeRelativeOffset(GlobalAddress + 1, dest, 1, vp);
}

void plugin::patch::PutRetn(uintptr_t address, unsigned short BytesToPop, bool vp) {
    injector::MakeRET(GetGlobalAddress(address), BytesToPop, vp);
}

void plugin::patch::PutRetn0(uintptr_t address, unsigned short BytesToPop, bool vp) {

    uintptr_t GlobalAddress = GetGlobalAddress(address);
    injector::WriteMemory(GlobalAddress, 0x33, vp); // xor eax, eax
    injector::WriteMemory(GlobalAddress + 1, 0xC0, vp);
    injector::MakeRET(GlobalAddress + 2, BytesToPop, vp);
}

void plugin::patch::PutRetn1(uintptr_t address, unsigned short BytesToPop, bool vp) {

    uintptr_t GlobalAddress = GetGlobalAddress(address);
    injector::WriteMemory(GlobalAddress, 0xB1, vp); // xor eax, eax
    injector::WriteMemory(GlobalAddress + 1, 0x01, vp);
    injector::MakeRET(GlobalAddress + 2, BytesToPop, vp);
}

