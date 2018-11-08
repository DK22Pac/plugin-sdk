/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include <string>
#include <Windows.h>

namespace plugin {

    unsigned int Random(unsigned int min, unsigned int max);
    bool KeyPressed(unsigned int keyCode);
    bool IsPluginInstalled(const TCHAR *pluginName);
    std::wstring AtoW(std::string const &str);
    std::string WtoA(std::wstring const &str);

    template<typename ...ArgTypes>
    char *FormatStatic(const std::string &format, ArgTypes... args) {
        static char buf[4096];
        snprintf(buf, 4096, format.c_str(), args...);
        return buf;
    }

    template<typename ...ArgTypes>
    std::string Format(const std::string &format, ArgTypes... args) {
        return FormatStatic(format, args...);
    }

    template<typename ...ArgTypes>
    wchar_t *FormatStatic(const std::wstring &format, ArgTypes... args) {
        static wchar_t buf[4096];
        _snwprintf(buf, 4096, format.c_str(), args...);
        return buf;
    }

    template<typename ...ArgTypes>
    std::wstring Format(const std::wstring &format, ArgTypes... args) {
        return FormatStatic(format, args...);
    }
}
