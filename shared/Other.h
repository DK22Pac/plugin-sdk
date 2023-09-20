/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include <string>
#include <locale>
#include <codecvt>

#include <Windows.h>

#ifndef GTA2
#include "CTimer.h"
#include "CVector2D.h"
#endif

#include "CVector.h"

namespace plugin {
    void InitRandom();
    unsigned int Random(unsigned int min, unsigned int max);
    float Random(float min, float max);

    bool KeyPressed(unsigned int keyCode);
    bool IsPluginInstalled(const TCHAR *pluginName);
    std::wstring AtoW(std::string const &str);
    std::string WtoA(std::wstring const &str);

    bool LoadTGAFromFile(const char* path, unsigned short* width, unsigned short* height, unsigned char** pixels);

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

    static std::wstring ToWString(std::string const& str) {
        std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
        std::wstring wstr = converter.from_bytes(str);
        return wstr;
    }

    static std::string ToString(std::wstring const& wstr) {
        std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
        std::string str = converter.to_bytes(wstr);
        return str;
    }

    template<typename T>
    static T DegToRad(T x) {
        return (x * M_PI / (T)180);
    }

    template<typename T>
    static T RadToDeg(T x) {
        return (x * (T)180 / M_PI);
    }

    template<typename T, typename T2, typename T3>
    static T Clamp(T v, T2 low, T3 high) {
        return ((v) < (low) ? (low) : (v) > (high) ? (high) : (v));
    }

    static float InterpF(float a, float b, float f) {
        return (a + (f) * (b - a));
    }

    static CVector2D InterpV2D(CVector2D a, CVector2D b, float f) {
        return CVector2D((a.x + (f) * (b.x - a.x)),  (a.y + (f) * (b.y - a.y)));
    }

    static float GetTimeStepFix() {
#ifdef GTA2
        return 1.0f / (50.0f / 30.0f);
#else
        return CTimer::ms_fTimeStep / (50.0f / 30.0f);
#endif
    }

    static bool IsNearlyEqualF(float a, float b, float t) {
        return (fabs(a - b) <= t);
    }

    static bool FileExists(const char* name) {
        struct stat buffer;
        return (stat(name, &buffer) == 0);
    }
}

#ifdef UNICODE
#define _LoadTGAFromFile plugin::LoadTGAFromFileW
#else
#define _LoadTGAFromFile plugin::LoadTGAFromFile
#endif

#define DEGTORAD(x) plugin::DegToRad(x)
#define RADTODEG(x) plugin::RadToDeg(x)

#define CLAMP(v, low, high) plugin::Clamp(v, low, high)
#define INTERPF(a, b, f) plugin::InterpF(a, b, f)
