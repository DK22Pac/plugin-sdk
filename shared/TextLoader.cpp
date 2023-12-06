/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "plugin.h"
#include "TextLoader.h"
#include <locale>
#include <codecvt>
#include <iostream>
#include <fstream>

#include "CText.h"

#pragma warning(disable : 4996)

namespace plugin {
    std::map<char_t, char_t> table = {
    #if defined(GTAIV)
        // https://github.com/Sergeanur/GXT-compiler/blob/main/tables/iv_table.txt
            { 0x152, 0x8C },
            { 0x153, 0x9C },
            { 0x160, 0x8A },
            { 0x161, 0x9A },
            { 0x178, 0x9F },
            { 0x17D, 0x8E },
            { 0x17E, 0x9E },
            { 0x192, 0x83 },
            { 0x2C6, 0x88 },
            { 0x2DC, 0x98 },
            { 0x2013, 0x96 },
            { 0x2014, 0x97 },
            { 0x2018, 0x91 },
            { 0x2019, 0x92 },
            { 0x201A, 0x82 },
            { 0x201C, 0x93 },
            { 0x201D, 0x94 },
            { 0x201E, 0x84 },
            { 0x2020, 0x86 },
            { 0x2021, 0x87 },
            { 0x2022, 0x95 },
            { 0x2026, 0x85 },
            { 0x2030, 0x89 },
            { 0x2039, 0x8B },
            { 0x203A, 0x9B },
            { 0x20AC, 0x80 },
            { 0x2122, 0x99 },
        #elif defined(GTASA) || defined(GTAVC)
        // https://github.com/Sergeanur/GXT-compiler/blob/main/tables/vc_sa_table.txt
            { 0x3C, 0x5B },
            { 0x3E, 0x5D },
            { 0xA1, 0x5E },
            { 0xB4, 0xB1 },
            { 0xBF, 0xAF },
            { 0xC0, 0x80 },
            { 0xC1, 0x81 },
            { 0xC2, 0x82 },
            { 0xC4, 0x83 },
            { 0xC6, 0x84 },
            { 0xC7, 0x85 },
            { 0xC8, 0x86 },
            { 0xC9, 0x87 },
            { 0xCA, 0x88 },
            { 0xCB, 0x89 },
            { 0xCC, 0x8A },
            { 0xCD, 0x8B },
            { 0xCE, 0x8C },
            { 0xCF, 0x8D },
            { 0xD1, 0xAD },
            { 0xD2, 0x8E },
            { 0xD3, 0x8F },
            { 0xD4, 0x90 },
            { 0xD6, 0x91 },
            { 0xD9, 0x92 },
            { 0xDA, 0x93 },
            { 0xDB, 0x94 },
            { 0xDC, 0x95 },
            { 0xDF, 0x96 },
            { 0xE0, 0x97 },
            { 0xE1, 0x98 },
            { 0xE2, 0x99 },
            { 0xE4, 0x9A },
            { 0xE6, 0x9B },
            { 0xE7, 0x9C },
            { 0xE8, 0x9D },
            { 0xE9, 0x9E },
            { 0xEA, 0x9F },
            { 0xEB, 0xA0 },
            { 0xEC, 0xA1 },
            { 0xED, 0xA2 },
            { 0xEE, 0xA3 },
            { 0xEF, 0xA4 },
            { 0xF1, 0xAE },
            { 0xF2, 0xA5 },
            { 0xF3, 0xA6 },
            { 0xF4, 0xA7 },
            { 0xF6, 0xA8 },
            { 0xF9, 0xA9 },
            { 0xFA, 0xAA },
            { 0xFB, 0xAB },
            { 0xFC, 0xAC },
        #elif GTA3
        // https://github.com/Sergeanur/GXT-compiler/blob/main/tables/iii_table.txt
            { 0xA1, 0xB0 },
            { 0xB4, 0xB1 },
            { 0xBF, 0xAF },
            { 0xC0, 0x80 },
            { 0xC1, 0x81 },
            { 0xC2, 0x82 },
            { 0xC4, 0x83 },
            { 0xC6, 0x84 },
            { 0xC7, 0x85 },
            { 0xC8, 0x86 },
            { 0xC9, 0x87 },
            { 0xCA, 0x88 },
            { 0xCB, 0x89 },
            { 0xCC, 0x8A },
            { 0xCD, 0x8B },
            { 0xCE, 0x8C },
            { 0xCF, 0x8D },
            { 0xD1, 0xAD },
            { 0xD2, 0x8E },
            { 0xD3, 0x8F },
            { 0xD4, 0x90 },
            { 0xD6, 0x91 },
            { 0xD9, 0x92 },
            { 0xDA, 0x93 },
            { 0xDB, 0x94 },
            { 0xDC, 0x95 },
            { 0xDF, 0x96 },
            { 0xE0, 0x97 },
            { 0xE1, 0x98 },
            { 0xE2, 0x99 },
            { 0xE4, 0x9A },
            { 0xE6, 0x9B },
            { 0xE7, 0x9C },
            { 0xE8, 0x9D },
            { 0xE9, 0x9E },
            { 0xEA, 0x9F },
            { 0xEB, 0xA0 },
            { 0xEC, 0xA1 },
            { 0xED, 0xA2 },
            { 0xEE, 0xA3 },
            { 0xEF, 0xA4 },
            { 0xF1, 0xAE },
            { 0xF2, 0xA5 },
            { 0xF3, 0xA6 },
            { 0xF4, 0xA7 },
            { 0xF6, 0xA8 },
            { 0xF9, 0xA9 },
            { 0xFA, 0xAA },
            { 0xFB, 0xAB },
            { 0xFC, 0xAC },
        #endif
    };

    void ApplyTable(string_t& str) {
        bool tag = false;
        for (auto& c : str) {
            if (c == '~')
                tag ^= true;

            if (tag)
                continue;

            auto it = table.find(c);
            if (it != table.end()) {
                c = it->second;
            }
        }
    }

    bool TextLoader::Load(const std::string& fileName) {
        ifstream_t file(fileName);
        file.imbue(std::locale(file.getloc(), new std::codecvt_utf8_utf16<char_t, 0x10ffff, std::little_endian>));

        if (!file.is_open()) {
            return false;
        }

        string_t line;
        std::string currentKey;
        string_t currentValue;

        while (std::getline(file, line)) {
            if (line.size() > 0 && line.front() != '/' && line.front() != '#') {
                if (line.size() > 2 && line.front() == '[' && line.back() == ']') {
#ifdef GTASA
                    currentKey = line.substr(1, line.size() - 2);
#else
                    std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
                    currentKey = converter.to_bytes(line.substr(1, line.size() - 2));
#endif
                    currentValue = {};
                }
                else {
                    currentValue = line;
                }

                if (!currentKey.empty() && !currentValue.empty()) {
                    ApplyTable(currentValue);
                    stringMap[currentKey] = currentValue;
                }
            }
        }

        file.close();

        return true;
    }

    const char_t* TextLoader::Get(const char* key) {
        auto iter = stringMap.find(key);

        if (iter != stringMap.end()) {
            return iter->second.c_str();
        }

#ifdef GTA2
        return GetTheText()->Get(key);
#else
        return TheText.Get(key);
#endif
    }

    void TextLoader::Clear() {
        stringMap.clear();
    }

}
