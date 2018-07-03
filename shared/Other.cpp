/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "Other.h"
#include <Windows.h>

unsigned int plugin::Random(unsigned int min, unsigned int max) {
    return min + (rand() % (max - min + 1));
}

bool plugin::KeyPressed(unsigned int keyCode) {
    return (GetKeyState(keyCode) & 0x8000) != 0;
}

bool plugin::IsPluginInstalled(const char *pluginName) {
    return GetModuleHandle(pluginName) ? true : false;
}

std::wstring plugin::AtoW(std::string const &str) {
    return std::wstring(str.begin(), str.end());
}

std::string plugin::WtoA(std::wstring const &str) {
    return std::string(str.begin(), str.end());
}