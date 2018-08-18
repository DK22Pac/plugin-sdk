/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once

#include "../injector/injector.hpp"
#include "DynAddress.h"

namespace plugin {

class patch {
public:
    static void Nop(int address, size_t size, bool vp = true);
    static void RedirectCall(int address, void *func, bool vp = true);
    static void RedirectJump(int address, void *func, bool vp = true);
    static void SetChar(int address, char value, bool vp = true);
    static void SetUChar(int address, unsigned char value, bool vp = true);
    static void SetShort(int address, short value, bool vp = true);
    static void SetUShort(int address, unsigned short value, bool vp = true);
    static void SetInt(int address, int value, bool vp = true);
    static void SetUInt(int address, unsigned int value, bool vp = true);
    static void SetFloat(int address, float value, bool vp = true);
    static void SetPointer(int address, void *value, bool vp = true);
    static char GetChar(int address, bool vp = true);
    static unsigned char GetUChar(int address, bool vp = true);
    static short GetShort(int address, bool vp = true);
    static unsigned short GetUShort(int address, bool vp = true);
    static int GetInt(int address, bool vp = true);
    static unsigned int GetUInt(int address, bool vp = true);
    static float GetFloat(int address, bool vp = true);
    static void *GetPointer(int address, bool vp = true);
    static void SetRaw(int address, void* value, size_t size, bool vp = true);
    static void GetRaw(int address, void* ret, size_t size, bool vp = true);
    static void RedirectShortJump(int address, void* dest = nullptr, bool vp = true);
    static void PutRetn(int address, unsigned short BytesToPop = 0, bool vp = true);
    static void PutRetn0(int address, unsigned short BytesToPop = 0, bool vp = true);

    template <typename T>
    static void Set(int address, T value, bool vp = true) {
        injector::WriteMemory(GetGlobalAddress(address), value, vp);
    }

    template <typename T>
    static T Get(int address, bool vp = true) {
        return injector::ReadMemory<T>(GetGlobalAddress(address), vp);
    }

    template <typename T>
    static T TranslateCallOffset(int address) {
        if (GetUChar(address) == 0xE8) {
            auto offset = GetInt(address + 1);
            offset += (GetGlobalAddress(address) + 5);
            return reinterpret_cast<T>(offset);
        }
        return nullptr;
    }

    template <typename T>
    static T TranslateJumpOffset(int address) {
        if (GetUChar(address) == 0xE9) {
            auto offset = GetInt(address + 1);
            offset += (GetGlobalAddress(address) + 5);
            return reinterpret_cast<T>(offset);
        }
        return nullptr;
    }

    static void ReplaceFunction(int address, void *func, bool vp = true);
    static void ReplaceFunctionCall(int address, void *func, bool vp = true);
};

}
