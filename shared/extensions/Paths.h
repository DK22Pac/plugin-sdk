/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#define PLUGIN_PATH_MAX 260

namespace plugin {
    class paths {
    public:
        enum ePathDir {
            DirAbsolute,
            DirGame,
            DirPlugin
        };

        static void GetGameDirPathA(char *out);
        static const char *GetGameDirPathA();
        static void GetPluginDirPathA(char *out);
        static const char *GetPluginDirPathA();

        static void GetGameDirPathW(wchar_t *out);
        static const wchar_t *GetGameDirPathW();
        static void GetPluginDirPathW(wchar_t *out);
        static const wchar_t *GetPluginDirPathW();

        static void GetGameDirRelativePathA(char *out, const char *substring);
        static const char *GetGameDirRelativePathA(const char *substring);
        static void GetPluginDirRelativePathA(char *out, const char *substring);
        static const char *GetPluginDirRelativePathA(const char *substring);

        static void GetGameDirRelativePathW(wchar_t *out, const wchar_t *subpath);
        static const wchar_t *GetGameDirRelativePathW(const wchar_t *subpath);
        static void GetPluginDirRelativePathW(wchar_t *out, const wchar_t *subpath);
        static const wchar_t *GetPluginDirRelativePathW(const wchar_t *subpath);

        static const char *GetDirPath(const char *substring, ePathDir dir);
        static const wchar_t *GetDirPath(const wchar_t *substring, ePathDir dir);

        static const char *GetPluginFileName(char *out);
        static const wchar_t *GetPluginFileName(wchar_t *out);
        static const char *GetPluginFileNameA();
        static const wchar_t *GetPluginFileNameW();
    };
}

#ifdef UNICODE
#define GAME_PATH(a) (plugin::paths::GetGameDirRelativePathW(a))
#define PLUGIN_PATH(a) (plugin::paths::GetPluginDirRelativePathW(a))
#define PLUGIN_FILENAME (plugin::paths::GetPluginFileNameW())
#else
#define GAME_PATH(a) (plugin::paths::GetGameDirRelativePathA(a))
#define PLUGIN_PATH(a) (plugin::paths::GetPluginDirRelativePathA(a))
#define PLUGIN_FILENAME (plugin::paths::GetPluginFileNameA())
#endif
