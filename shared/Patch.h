/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include <cstdint>

#include "../injector/assembly.hpp"
#include "../injector/injector.hpp"
#include "DynAddress.h"
#include <vector>
#include <memory>

namespace plugin {

class patch {
public:
    static void Nop(uintptr_t address, size_t size, bool vp = true);
    static void RedirectCall(uintptr_t address, void *func, bool vp = true);
    static void RedirectJump(uintptr_t address, void *func, bool vp = true);
    static void SetChar(uintptr_t address, char value, bool vp = true);
    static void SetUChar(uintptr_t address, unsigned char value, bool vp = true);
    static void SetShort(uintptr_t address, short value, bool vp = true);
    static void SetUShort(uintptr_t address, unsigned short value, bool vp = true);
    static void SetInt(uintptr_t address, uintptr_t value, bool vp = true);
    static void SetUInt(uintptr_t address, uintptr_t value, bool vp = true);
    static void SetFloat(uintptr_t address, float value, bool vp = true);
    static void SetPointer(uintptr_t address, void *value, bool vp = true);
    static char GetChar(uintptr_t address, bool vp = true);
    static unsigned char GetUChar(uintptr_t address, bool vp = true);
    static short GetShort(uintptr_t address, bool vp = true);
    static unsigned short GetUShort(uintptr_t address, bool vp = true);
    static uintptr_t GetInt(uintptr_t address, bool vp = true);
    static uintptr_t GetUInt(uintptr_t address, bool vp = true);
    static float GetFloat(uintptr_t address, bool vp = true);
    static void *GetPointer(uintptr_t address, bool vp = true);
    static void SetRaw(uintptr_t address, void* value, size_t size, bool vp = true);
    static void GetRaw(uintptr_t address, void* ret, size_t size, bool vp = true);
    static void RedirectShortJump(uintptr_t address, void* dest = nullptr, bool vp = true);
    static void PutRetn(uintptr_t address, unsigned short BytesToPop = 0, bool vp = true);
    static void PutRetn0(uintptr_t address, unsigned short BytesToPop = 0, bool vp = true);
    static void PutRetn1(uintptr_t address, unsigned short BytesToPop = 0, bool vp = true);

    template <typename T>
    static void Set(uintptr_t address, T value, bool vp = true) {
        injector::WriteMemory(GetGlobalAddress(address), value, vp);
    }

    template <typename T>
    static T Get(uintptr_t address, bool vp = true) {
        return injector::ReadMemory<T>(GetGlobalAddress(address), vp);
    }

    template <typename T>
    static T TranslateCallOffset(uintptr_t address) {
        if (GetUChar(address) == 0xE8) {
            auto offset = GetInt(address + 1);
            offset += (GetGlobalAddress(address) + 5);
            return reinterpret_cast<T>(offset);
        }
        return nullptr;
    }

    template <typename T>
    static T TranslateJumpOffset(uintptr_t address) {
        if (GetUChar(address) == 0xE9) {
            auto offset = GetInt(address + 1);
            offset += (GetGlobalAddress(address) + 5);
            return reinterpret_cast<T>(offset);
        }
        return nullptr;
    }

    static void ReplaceFunction(uintptr_t address, void *func, bool vp = true);
    static void ReplaceFunctionCall(uintptr_t address, void *func, bool vp = true);

    static void SetPointer(std::vector<uintptr_t> const& addresses, void* value, bool vp = true) {
        for (auto& address : addresses) {
            SetPointer(address, value, vp);
        }
    }

    template <typename T>
    static void Set(std::vector<uintptr_t> const& addresses, T value, bool vp = true) {
        for (auto& address : addresses) {
            Set(address, value, vp);
        }
    }

    static void SetInt(std::vector<uintptr_t> const& addresses, uintptr_t value, bool vp = true) {
        for (auto& address : addresses) {
            SetInt(address, value, vp);
        }
    }

    static void SetFloat(std::vector<uintptr_t> const& addresses, float value, bool vp = true) {
        for (auto& address : addresses) {
            SetFloat(address, value, vp);
        }
    }

    static void RedirectJump(std::vector<uintptr_t> const& addresses, void* func, bool vp = true) {
        for (auto& address : addresses) {
            RedirectJump(address, func, vp);
        }
    }

    static void RedirectCall(std::vector<uintptr_t> const& addresses, void* func, bool vp = true) {
        for (auto& address : addresses) {
            RedirectCall(address, func, vp);
        }
    }

    static void Nop(std::vector<uintptr_t> const& addresses, size_t size, bool vp = true) {
        for (auto& address : addresses) {
            Nop(address, size, vp);
        }
    }

    using RegPack = injector::reg_pack;

    static void StaticHook(uintptr_t start, uintptr_t end, void (*func)(RegPack&)) {
        struct staticHook {
            void (*func)(RegPack&);

            staticHook(void(*f)(RegPack&)) : func(f) {}

            void operator()(RegPack& regs) {
                func(regs);
            }
        };

        static std::unique_ptr<staticHook> ptr;
        ptr.reset(new staticHook(func));

        injector::MakeInline(start, end, *ptr);
    }

    template <typename T>
    static void StaticHook(uintptr_t start, uintptr_t end) {
        injector::MakeInline<T>(start, end);
    }
};

}

#define _override(index, classname, func) \
do {\
	void** vtable = *reinterpret_cast<void***>(this); \
    auto _func = &classname::func; \
    vtable[index] = *reinterpret_cast<void**>(&_func); \
} while(0)
