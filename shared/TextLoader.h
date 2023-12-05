/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include <string>
#include <unordered_map>
#include <map>

namespace plugin {
#ifdef GTASA
    using char_t = char;
    using string_t = std::string;
    using ifstream_t = std::ifstream;
#else
    using char_t = wchar_t;
    using string_t = std::wstring;
    using ifstream_t = std::wifstream;
#endif

    class TextLoader {
    private:
        std::unordered_map<std::string, string_t> stringMap;

    public:
        TextLoader() {}

        bool Load(const std::string& fileName);
        const char_t* Get(const char* key);

        void Clear();
    };

    extern void ApplyTable(string_t& str);
    extern std::map<char_t, char_t> table;

}
