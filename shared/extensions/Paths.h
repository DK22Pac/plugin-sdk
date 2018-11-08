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
        static char *GetGameDirPathA();
        static void GetPluginDirPathA(char *out);
        static char *GetPluginDirPathA();

        static void GetGameDirPathW(wchar_t *out);
        static wchar_t *GetGameDirPathW();
        static void GetPluginDirPathW(wchar_t *out);
        static wchar_t *GetPluginDirPathW();

        static void GetGameDirRelativePathA(char *out, char *substring);
        static char *GetGameDirRelativePathA(char *substring);
        static void GetPluginDirRelativePathA(char *out, char *substring);
        static char *GetPluginDirRelativePathA(char *substring);

        static void GetGameDirRelativePathW(wchar_t *out, wchar_t *subpath);
        static wchar_t *GetGameDirRelativePathW(wchar_t *subpath);
        static void GetPluginDirRelativePathW(wchar_t *out, wchar_t *subpath);
        static wchar_t *GetPluginDirRelativePathW(wchar_t *subpath);

        static char *GetDirPath(char *substring, ePathDir dir);
        static wchar_t *GetDirPath(wchar_t *substring, ePathDir dir);

        static char *GetPluginFileName(char *out);
        static wchar_t *GetPluginFileName(wchar_t *out);
        static char *GetPluginFileNameA();
        static wchar_t *GetPluginFileNameW();
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
