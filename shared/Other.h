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
#include <sys/stat.h>
#include <random>
#include <limits>

#if defined(GTA3) || defined(GTAVC) || defined(GTASA) || defined(GTAIV)
#include "CTimer.h"
#endif

#if defined(GTA3) || defined(GTAVC) || defined(GTASA) || \
defined(GTA3_UNREAL) || defined(GTAVC_UNREAL) || defined(GTASA_UNREAL)
#include "CVector2D.h"
#include "CVector.h"
#elif defined(GTAIV) || defined(GTA2)
#include "CVector.h"
#endif

namespace plugin {
    template<typename T = int32_t>
    static T RandomNumberInRange(T min, T max) {
        static_assert(std::is_arithmetic<T>::value, "Type T must be numeric");

        std::random_device rd;
        std::mt19937 gen(rd());

        if constexpr (std::is_integral<T>::value) {
            std::uniform_int_distribution<T> dis(min, max);
            return dis(gen);
        }
        else {
            std::uniform_real_distribution<T> dis(min, max);
            return dis(gen);
        }
    }

    template<typename T = int32_t>
    static T Random() {
        return RandomNumberInRange<T>(0, 999);
    }

    bool KeyPressed(unsigned int keyCode);
    bool IsPluginInstalled(const TCHAR *pluginName);
    std::wstring AtoW(std::string const &str);
    std::string WtoA(std::wstring const &str);

    bool CreateImageFromFile(std::string const& path, class Image*& img);

#if _HAS_CXX17
    std::vector<std::string> GetAllFilesInFolder(std::string const& path, std::string const& ext);
#endif

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

    static std::wstring ToWString(const std::string& str) {
        std::wstring wstr(str.size(), L'\0');
        std::mbstowcs(&wstr[0], str.c_str(), str.size());
        return wstr;
    }

    static std::string ToString(const std::wstring& wstr) {
        std::string str(wstr.size() * MB_CUR_MAX, '\0');
        std::wcstombs(&str[0], wstr.c_str(), str.size());
        return str;
    }

    static std::wstring ToUpper(std::wstring const& str, int32_t offset) {
        std::wstring result = str;
        int32_t i = 0;
        for (auto& c : result) {
            if (i > offset - 1)
                c = std::toupper(c);
            i++;
        }
        return result;
    }

    static std::wstring ToLower(std::wstring const& str, int32_t offset) {
        std::wstring result = str;
        int32_t i = 0;
        for (auto& c : result) {
            if (i > offset - 1)
                c = std::tolower(c);
            i++;
        }
        return result;
    }

    static std::string ToUpper(std::string const& str, int32_t offset) {
        std::string result = str;
        int32_t i = 0;
        for (auto& c : result) {
            if (i > offset - 1)
                c = std::toupper(c);
            i++;
        }
        return result;
    }

    static std::string ToLower(std::string const& str, int32_t offset) {
        std::string result = str;
        int32_t i = 0;
        for (auto& c : result) {
            if (i > offset - 1)
                c = std::tolower(c);
            i++;
        }
        return result;
    }

    static std::string RemoveExtension(std::string const& str) {
        std::string fileNoExt = str;
        size_t pos = fileNoExt.find_last_of('.');

        if (pos != std::string::npos) {
            fileNoExt.erase(pos);
        }

        return fileNoExt;
    }

    static std::string RemovePath(std::string const& str) {
        size_t pos = str.find_last_of("\\/");

        if (pos != std::string::npos) {
            return str.substr(pos + 1);
        }
        else {
            return str;
        }
    }

    template<typename T>
    static T DegToRad(T x) {
        return (x * PI / (T)180);
    }

    template<typename T>
    static T RadToDeg(T x) {
        return (x * (T)180 / PI);
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
#if defined(RW) || defined(RAGE)
        return CTimer::ms_fTimeStep / (50.0f / 30.0f);
#else
        return 1.0f / (50.0f / 30.0f);
#endif
    }

    static bool IsNearlyEqualF(float a, float b, float t) {
        return (fabs(a - b) <= t);
    }

    static bool FileExists(const char* name) {
        struct stat buffer;
        return (stat(name, &buffer) == 0);
    }

    struct CaseInsensitiveUnorderedMap {
        struct Comp {
            bool operator() (const std::string& lhs, const std::string& rhs) const {
                return _stricmp(lhs.c_str(), rhs.c_str()) == 0;
            }
        };

        struct Hash {
            std::size_t operator() (std::string str) const {
                for (std::size_t index = 0; index < str.size(); ++index) {
                    auto ch = static_cast<unsigned char>(str[index]);
                    str[index] = static_cast<unsigned char>(std::tolower(ch));
                }
                return std::hash<std::string>{}(str);
            }
        };
    };
}

#define DEGTORAD(x) plugin::DegToRad(x)
#define RADTODEG(x) plugin::RadToDeg(x)

#define CLAMP(v, low, high) plugin::Clamp(v, low, high)
#define INTERPF(a, b, f) plugin::InterpF(a, b, f)
