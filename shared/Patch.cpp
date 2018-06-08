/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "Patch.h"

void plugin::patch::Nop(int address, size_t size, bool vp) {
    injector::MakeNOP(GetGlobalAddress(address), size, vp);
}

void plugin::patch::RedirectCall(int address, void *func, bool vp) {
    injector::MakeCALL(GetGlobalAddress(address), func, vp);
}

void plugin::patch::RedirectJump(int address, void *func, bool vp) {
    injector::MakeJMP(GetGlobalAddress(address), func, vp);
}

void plugin::patch::SetChar(int address, char value, bool vp) {
    injector::WriteMemory(GetGlobalAddress(address), value, vp);
}

void plugin::patch::SetUChar(int address, unsigned char value, bool vp) {
    injector::WriteMemory(GetGlobalAddress(address), value, vp);
}

void plugin::patch::SetShort(int address, short value, bool vp) {
    injector::WriteMemory(GetGlobalAddress(address), value, vp);
}

void plugin::patch::SetUShort(int address, unsigned short value, bool vp) {
    injector::WriteMemory(GetGlobalAddress(address), value, vp);
}

void plugin::patch::SetInt(int address, int value, bool vp) {
    injector::WriteMemory(GetGlobalAddress(address), value, vp);
}

void plugin::patch::SetUInt(int address, unsigned int value, bool vp) {
    injector::WriteMemory(GetGlobalAddress(address), value, vp);
}

void plugin::patch::SetFloat(int address, float value, bool vp) {
    injector::WriteMemory(GetGlobalAddress(address), value, vp);
}

void plugin::patch::SetPointer(int address, void *value, bool vp) {
    injector::WriteMemory(GetGlobalAddress(address), value, vp);
}

char plugin::patch::GetChar(int address, bool vp) {
    return injector::ReadMemory<char>(GetGlobalAddress(address), vp);
}

unsigned char plugin::patch::GetUChar(int address, bool vp) {
    return injector::ReadMemory<unsigned char>(GetGlobalAddress(address), vp);
}

short plugin::patch::GetShort(int address, bool vp) {
    return injector::ReadMemory<short>(GetGlobalAddress(address), vp);
}

unsigned short plugin::patch::GetUShort(int address, bool vp) {
    return injector::ReadMemory<unsigned short>(GetGlobalAddress(address), vp);
}

int plugin::patch::GetInt(int address, bool vp) {
    return injector::ReadMemory<int>(GetGlobalAddress(address), vp);
}

unsigned int plugin::patch::GetUInt(int address, bool vp) {
    return injector::ReadMemory<unsigned int>(GetGlobalAddress(address), vp);
}

float plugin::patch::GetFloat(int address, bool vp) {
    return injector::ReadMemory<float>(GetGlobalAddress(address), vp);
}

void *plugin::patch::GetPointer(int address, bool vp) {
    return injector::ReadMemory<void *>(GetGlobalAddress(address), vp);
}

void plugin::patch::ReplaceFunction(int address, void *func, bool vp) {
    RedirectJump(address, func, vp);
}

void plugin::patch::ReplaceFunctionCall(int address, void *func, bool vp) {
    RedirectCall(address, func, vp);
}
