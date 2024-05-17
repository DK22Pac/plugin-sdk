/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "DynAddress.h"
#include "Base.h"
#include "../injector/assembly.hpp"
#include "../injector/injector.hpp"
#include "../hooking/Hooking.Patterns.h"
#include <memory>

namespace plugin {
    class pattern {
    private:
        static inline std::unique_ptr<std::unordered_map<std::string_view, uintptr_t>> patternMap;
        static inline std::unique_ptr<std::unordered_map<std::string_view, uintptr_t>> modulePatternMap;

    public:
        static inline uintptr_t Get(std::string_view const& bytes, int32_t offset = 0) {
            if (!patternMap)
                patternMap = std::make_unique<std::unordered_map<std::string_view, uintptr_t>>();

            uintptr_t a = 0x0;
            auto it = patternMap->find(bytes);
            if (it != patternMap->end()) {
                a = it->second;
                goto return_addr;
            }
            {
                auto p = hook::pattern(bytes);
                a = p.empty() ? 0x0 : (uintptr_t)p.get_first(0);
            }
            patternMap->emplace(bytes, a);
        return_addr:
            a -= GetBaseAddress();
            a += STARTING_ADDRESS;
            return a ? a + offset : 0x0;
        }

        static inline uintptr_t GetExternal(void* module, std::string_view const& bytes, int32_t offset = 0) {
            if (!modulePatternMap)
                modulePatternMap = std::make_unique<std::unordered_map<std::string_view, uintptr_t>>();

            uintptr_t a = 0x0;
            auto it = modulePatternMap->find(bytes);
            if (it != modulePatternMap->end()) {
                a = it->second;
                goto return_addr;
            }
            {
                auto p = hook::module_pattern(module, bytes);
                a = p.empty() ? 0x0 : (uintptr_t)p.get_first(0);
            }
            modulePatternMap->emplace(bytes, a);
return_addr:
            a -= GetBaseAddress();
            a += STARTING_ADDRESS;
            return a ? a + offset : 0x0;
        }

        template<typename T = void*>
        static inline auto Read(std::string_view const& bytes, int32_t offset = 0) {
            uintptr_t const& a = Get(bytes, offset);

#if (defined (_M_IX86) || defined (_X86_))
            return a ? injector::ReadMemory<T>(GetGlobalAddress(a), true) : 0x0;
#else
            return a ? (T)injector::ReadRelativeOffset(GetGlobalAddress(a), 4, true).as_int() : 0x0;
#endif
        }

        template<typename T = void*>
        static inline auto ReadExternal(void* module, std::string_view const& bytes, int32_t offset = 0) {
            uintptr_t const& a = GetExternal(module, bytes, offset);

#if (defined (_M_IX86) || defined (_X86_))
            return a ? injector::ReadMemory<T>(GetGlobalAddress(a), true) : 0x0;
#else
            return a ? (T)injector::ReadRelativeOffset(GetGlobalAddress(a), 4, true).as_int() : 0x0;
#endif
        }
    };
}

#define gpattern(bytes) plugin::pattern::Get(bytes, 0)
#define gpatternt(t, bytes, offset) plugin::pattern::Read<t*>(bytes, offset)