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
        static inline std::unique_ptr<std::unordered_map<std::string_view, uint32_t>> patternMap;
        static inline std::unique_ptr<std::unordered_map<std::string_view, uint32_t>> modulePatternMap;

    public:
        static inline uint32_t Get(std::string_view const& bytes, int32_t offset = 0) {
            if (!patternMap)
                patternMap = std::make_unique<std::unordered_map<std::string_view, uint32_t>>();

            uint32_t a = 0x0;
            auto it = patternMap->find(bytes);
            if (it != patternMap->end()) {
                a = it->second;
                goto return_addr;
            }
            a = (uint32_t)hook::pattern(bytes).get_first(0);
            patternMap->emplace(bytes, a);
        return_addr:
            a -= GetBaseAddress();
            a += 0x400000;
            return a + offset;
        }

        static inline uint32_t GetExternal(void* module, std::string_view const& bytes, int32_t offset = 0) {
            if (!modulePatternMap)
                modulePatternMap = std::make_unique<std::unordered_map<std::string_view, uint32_t>>();

            uint32_t a = 0x0;
            auto it = modulePatternMap->find(bytes);
            if (it != modulePatternMap->end()) {
                a = it->second;
                goto return_addr;
            }
            a = (uint32_t)hook::module_pattern(module, bytes).get_first(0);
            modulePatternMap->emplace(bytes, a);
return_addr:
            a -= GetBaseAddress();
            a += 0x400000;
            return a + offset;
        }

        template<typename T = void*>
        static inline auto Read(std::string_view const& bytes, int32_t offset = 0) {
            return injector::ReadMemory<T>(GetGlobalAddress(Get(bytes, offset)), true);
        }

        template<typename T = void*>
        static inline auto ReadExternal(void* module, std::string_view const& bytes, int32_t offset = 0) {
            return injector::ReadMemory<T>(GetGlobalAddress(GetExternal(module, bytes, offset)), true);
        }
    };
}

#define gpattern(bytes) plugin::pattern::Get(bytes, 0)
#define gpatternt(t, bytes, offset) plugin::pattern::Read<t*>(bytes, offset)