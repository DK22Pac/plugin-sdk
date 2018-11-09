/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include <Windows.h>
#include <cstdio>
#include <string>
#include "extensions\Paths.h"

namespace plugin
{
    struct message_gen {
        template <typename... ArgTypes>
        static bool msga(char const *title, int iconType, char const *format, ArgTypes... Args) {
            static char text[1024];
            sprintf_s(text, format, Args...);
            std::string messageTitle;
            if (title)
                messageTitle = title;
            MessageBoxA(GetActiveWindow(), text, messageTitle.c_str(), iconType);
            return false;
        }

        template <typename... ArgTypes>
        static bool msgw(wchar_t const *title, int iconType, wchar_t const *format, ArgTypes... Args) {
            static wchar_t text[1024];
            swprintf_s(text, format, Args...);
            std::wstring messageTitle;
            if (title)
                messageTitle = title;
            MessageBoxW(GetActiveWindow(), text, messageTitle.c_str(), iconType);
            return false;
        }
    };

	template <typename... ArgTypes> bool Message(char const *format, ArgTypes... Args) {
        return message_gen::msga(plugin::paths::GetPluginFileNameA(), MB_ICONINFORMATION, format, Args...);
	}

    template <typename... ArgTypes> bool Warning(char const *format, ArgTypes... Args) {
        return message_gen::msga(plugin::paths::GetPluginFileNameA(), MB_ICONWARNING, format, Args...);
    }

    template <typename... ArgTypes> bool Error(char const *format, ArgTypes... Args) {
        return message_gen::msga(plugin::paths::GetPluginFileNameA(), MB_ICONERROR, format, Args...);
    }

    template <typename... ArgTypes> bool Message(wchar_t const *format, ArgTypes... Args) {
        return message_gen::msgw(plugin::paths::GetPluginFileNameW(), MB_ICONINFORMATION, format, Args...);
    }

    template <typename... ArgTypes> bool Warning(wchar_t const *format, ArgTypes... Args) {
        return message_gen::msgw(plugin::paths::GetPluginFileNameW(), MB_ICONWARNING, format, Args...);
    }

    template <typename... ArgTypes> bool Error(wchar_t const *format, ArgTypes... Args) {
        return message_gen::msgw(plugin::paths::GetPluginFileNameW(), MB_ICONERROR, format, Args...);
    }

    template <typename... ArgTypes> bool InternalMessage(char const *format, ArgTypes... Args) {
        return message_gen::msga("plugin-sdk", MB_ICONINFORMATION, format, Args...);
    }

    template <typename... ArgTypes> bool InternalWarning(char const *format, ArgTypes... Args) {
        return message_gen::msga("plugin-sdk", MB_ICONWARNING, format, Args...);
    }

    template <typename... ArgTypes> bool InternalError(char const *format, ArgTypes... Args) {
        return message_gen::msga("plugin-sdk", MB_ICONERROR, format, Args...);
    }

    template <typename... ArgTypes> bool InternalMessage(wchar_t const *format, ArgTypes... Args) {
        return message_gen::msgw(L"plugin-sdk", MB_ICONINFORMATION, format, Args...);
    }

    template <typename... ArgTypes> bool InternalWarning(wchar_t const *format, ArgTypes... Args) {
        return message_gen::msgw(L"plugin-sdk", MB_ICONWARNING, format, Args...);
    }

    template <typename... ArgTypes> bool InternalError(wchar_t const *format, ArgTypes... Args) {
        return message_gen::msgw(L"plugin-sdk", MB_ICONERROR, format, Args...);
    }
}
