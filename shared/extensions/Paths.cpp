/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "Paths.h"
#include <windows.h>
#include "Error.h"

#define MAX_VALUE(a,b) (((a) > (b)) ? (a) : (b))

struct PluginPathA {
    char _path[MAX_PATH + 1];
    char _filename[MAX_PATH + 1];
    char _temp_path[MAX_PATH + 1];

    static void func() {}

    PluginPathA() {
        _path[0] = '\0';
        _filename[0] = '\0';
        HMODULE h = NULL;
        if (!GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
            (LPCSTR)&func, &h))
        {
            plugin::InternalError("FILESYSTEM\nFailed to retrieve plugin dir path");
        }
        GetModuleFileNameA(h, _path, MAX_PATH);
        char *bslp = strrchr(_path, '\\');
        char *fslp = strrchr(_path, '/');
        char *slp = MAX_VALUE(bslp, fslp);
        if (slp) {
            strcpy_s(_filename, slp + 1);
            slp[1] = '\0';
        }
    }
};

struct GamePathA {
    char _path[MAX_PATH + 1];
    char _temp_path[MAX_PATH + 1];

    GamePathA() {
        _path[0] = '\0';
        HMODULE h = NULL;
        h = GetModuleHandleA(NULL);
        if (h == NULL)
            plugin::InternalError("FILESYSTEM\nFailed to retrieve game dir path");
        GetModuleFileNameA(h, _path, MAX_PATH);
        char *bslp = strrchr(_path, '\\');
        char *fslp = strrchr(_path, '/');
        char *slp = MAX_VALUE(bslp, fslp);
        if (slp)
            slp[1] = '\0';
    }
};

struct PluginPathW {
    wchar_t _path[MAX_PATH + 1];
    wchar_t _filename[MAX_PATH + 1];
    wchar_t _temp_path[MAX_PATH + 1];

    static void func() {}

    PluginPathW() {
        _path[0] = '\0';
        _filename[0] = '\0';
        HMODULE h = NULL;
        if (!GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
            (LPWSTR)&func, &h))
        {
            plugin::InternalError("FILESYSTEM\nFailed to retrieve plugin dir path");
        }
        GetModuleFileNameW(h, _path, MAX_PATH);
        wchar_t *bslp = wcsrchr(_path, '\\');
        wchar_t *fslp = wcsrchr(_path, '/');
        wchar_t *slp = MAX_VALUE(bslp, fslp);
        if (slp) {
            wcscpy_s(_filename, slp + 1);
            slp[1] = '\0';
        }
    }
};

struct GamePathW {
    wchar_t _path[MAX_PATH + 1];
    wchar_t _temp_path[MAX_PATH + 1];

    GamePathW() {
        _path[0] = '\0';
        HMODULE h = NULL;
        h = GetModuleHandleW(NULL);
        if (h == NULL)
            plugin::InternalError("FILESYSTEM\nFailed to retrieve game dir path");
        GetModuleFileNameW(h, _path, MAX_PATH);
        wchar_t *bslp = wcsrchr(_path, '\\');
        wchar_t *fslp = wcsrchr(_path, '/');
        wchar_t *slp = MAX_VALUE(bslp, fslp);
        if (slp)
            slp[1] = '\0';
    }
};



PluginPathA &PluginPathAInstance() {
    static PluginPathA pluginPath;
    return pluginPath;
}

GamePathA &GamePathAInstance() {
    static GamePathA gamePath;
    return gamePath;
}

PluginPathW &PluginPathWInstance() {
    static PluginPathW pluginPath;
    return pluginPath;
}

GamePathW &GamePathWInstance() {
    static GamePathW gamePath;
    return gamePath;
}

void plugin::paths::GetGameDirPathA(char *out) {
    strcpy_s(out, MAX_PATH, GamePathAInstance()._path);
}

const char *plugin::paths::GetGameDirPathA() {
    strcpy_s(GamePathAInstance()._temp_path, GamePathAInstance()._path);
    return GamePathAInstance()._temp_path;
}

void plugin::paths::GetPluginDirPathA(char *out) {
    strcpy_s(out, MAX_PATH, PluginPathAInstance()._path);
}

const char *plugin::paths::GetPluginDirPathA() {
    strcpy_s(PluginPathAInstance()._temp_path, PluginPathAInstance()._path);
    return PluginPathAInstance()._temp_path;
}

void plugin::paths::GetGameDirPathW(wchar_t *out) {
    wcscpy_s(out, MAX_PATH, GamePathWInstance()._path);
}

const wchar_t *plugin::paths::GetGameDirPathW() {
    wcscpy_s(GamePathWInstance()._temp_path, GamePathWInstance()._path);
    return GamePathWInstance()._temp_path;
}

void plugin::paths::GetPluginDirPathW(wchar_t *out) {
    wcscpy_s(out, MAX_PATH, PluginPathWInstance()._path);
}

const wchar_t *plugin::paths::GetPluginDirPathW() {
    wcscpy_s(PluginPathWInstance()._temp_path, PluginPathWInstance()._path);
    return PluginPathWInstance()._temp_path;
}

void plugin::paths::GetGameDirRelativePathA(char *out, const char *subpath) {
    strcpy_s(out, MAX_PATH, GamePathAInstance()._path);
    strcat_s(out, MAX_PATH, subpath);
}

const char *plugin::paths::GetGameDirRelativePathA(const char *subpath) {
    strcpy_s(GamePathAInstance()._temp_path, GamePathAInstance()._path);
    strcat_s(GamePathAInstance()._temp_path, subpath);
    return GamePathAInstance()._temp_path;
}

void plugin::paths::GetPluginDirRelativePathA(char *out, const char *subpath) {
    strcpy_s(out, MAX_PATH, PluginPathAInstance()._path);
    strcat_s(out, MAX_PATH, subpath);
}

const char *plugin::paths::GetPluginDirRelativePathA(const char *subpath) {
    strcpy_s(PluginPathAInstance()._temp_path, PluginPathAInstance()._path);
    strcat_s(PluginPathAInstance()._temp_path, subpath);
    return PluginPathAInstance()._temp_path;
}


void plugin::paths::GetGameDirRelativePathW(wchar_t *out, const wchar_t *subpath) {
    wcscpy_s(out, MAX_PATH, GamePathWInstance()._path);
    wcscat_s(out, MAX_PATH, subpath);
}

const wchar_t *plugin::paths::GetGameDirRelativePathW(const wchar_t *subpath) {
    wcscpy_s(GamePathWInstance()._temp_path, GamePathWInstance()._path);
    wcscat_s(GamePathWInstance()._temp_path, subpath);
    return GamePathWInstance()._temp_path;
}

void plugin::paths::GetPluginDirRelativePathW(wchar_t *out, const wchar_t *subpath) {
    wcscpy_s(out, MAX_PATH, PluginPathWInstance()._path);
    wcscat_s(out, MAX_PATH, subpath);
}

const wchar_t *plugin::paths::GetPluginDirRelativePathW(const wchar_t *subpath) {
    wcscpy_s(PluginPathWInstance()._temp_path, PluginPathWInstance()._path);
    wcscat_s(PluginPathWInstance()._temp_path, subpath);
    return PluginPathWInstance()._temp_path;
}

const char *plugin::paths::GetDirPath(const char *substring, ePathDir dir) {
    if (dir == DirGame)
        return GetGameDirRelativePathA(substring);
    else if (dir == DirPlugin)
        return GetPluginDirRelativePathA(substring);
    strcpy_s(PluginPathAInstance()._temp_path, substring);
    return PluginPathAInstance()._temp_path;

}

const wchar_t *plugin::paths::GetDirPath(const wchar_t *substring, ePathDir dir) {
    if (dir == DirGame)
        return GetGameDirRelativePathW(substring);
    else if (dir == DirPlugin)
        return GetPluginDirRelativePathW(substring);
    wcscpy_s(PluginPathWInstance()._temp_path, substring);
    return PluginPathWInstance()._temp_path;
}

const char *plugin::paths::GetPluginFileName(char *out) {
    strcpy_s(out, MAX_PATH, PluginPathAInstance()._filename);
    return out;
}

const wchar_t *plugin::paths::GetPluginFileName(wchar_t *out) {
    wcscpy_s(out, MAX_PATH, PluginPathWInstance()._filename);
    return out;
}

const char *plugin::paths::GetPluginFileNameA() {
    strcpy_s(PluginPathAInstance()._temp_path, PluginPathAInstance()._filename);
    return PluginPathAInstance()._temp_path;
}

const wchar_t *plugin::paths::GetPluginFileNameW() {
    wcscpy_s(PluginPathWInstance()._temp_path, PluginPathWInstance()._filename);
    return PluginPathWInstance()._temp_path;
}
