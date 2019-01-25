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

    class FormattingUtils {
        static const unsigned int BUF_SIZE = 10;
        static unsigned int currentBuf;
        static char buf[BUF_SIZE][4096];
        static unsigned int currentBufW;
        static wchar_t bufW[BUF_SIZE][4096];
    public:
        template<typename T> static T const &Arg(T const &arg) { return arg; }
        static char const *Arg(std::string const &arg) { return arg.c_str(); }
        static wchar_t const *Arg(std::wstring const &arg) { return arg.c_str(); }
        static char *GetBuf();
        static wchar_t *GetBufW();
    };

    template<typename ...ArgTypes>
    char *FormatStatic(const std::string &format, ArgTypes... args) {
        char *buf = FormattingUtils::GetBuf();
        snprintf(buf, 4096, format.c_str(), FormattingUtils::Arg(args)...);
        return buf;
    }

    template<typename ...ArgTypes>
    std::string Format(const std::string &format, ArgTypes... args) {
        return FormatStatic(format, FormattingUtils::Arg(args)...);
    }

    template<typename ...ArgTypes>
    wchar_t *FormatStatic(const std::wstring &format, ArgTypes... args) {
        wchar_t *buf = FormattingUtils::GetBufW();
        _snwprintf(buf, 4096, format.c_str(), FormattingUtils::Arg(args)...);
        return buf;
    }

    template<typename ...ArgTypes>
    std::wstring Format(const std::wstring &format, ArgTypes... args) {
        return FormatStatic(format, FormattingUtils::Arg(args)...);
    }
}
