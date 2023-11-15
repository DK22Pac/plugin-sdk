/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class CTheScripts {
public:
    static int32_t GetScriptIndex(const char* scriptName);
    static int32_t GetScriptHash(int32_t index);
    static int32_t StartScript(int32_t scriptHash, int32_t arg2, int32_t arg3, int32_t arg4);
    static int32_t StartScript(const char* scriptName, int32_t arg2, int32_t arg3, int32_t arg4);
};