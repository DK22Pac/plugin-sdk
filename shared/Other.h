/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

namespace plugin {
    inline unsigned int Random(unsigned int min, unsigned int max) {
        return min + (rand() % (max - min + 1));
    }

    inline bool KeyPressed(unsigned int keyCode) {
        return (GetKeyState(keyCode) & 0x8000) != 0;
    }

    inline bool IsPluginInstalled(const char *pluginName) {
        return GetModuleHandle(pluginName) ? true : false;
    }
}