/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTheScripts.h"

int32_t CTheScripts::GetScriptIndex(const char* scriptName) {
    return plugin::CallAndReturnDyn<int32_t>(gpattern("FF 74 24 04 E8 ? ? ? ? 83 C4 04 89 44 24 04 E9 ? ? ? ? CC CC CC CC CC CC CC CC CC CC CC 8B 15 ? ? ? ? 53 56 8B 72 08 33 C0 57 85 F6 7E 28 8B 7A 04 8B 5C 24 10 8D A4 24 ? ? ? ? F6 04 07 80 75 0F 8B 4A 0C 0F AF C8 03 0A 74 05 39 59 08 74 08 40 3B C6 7C E6 83 C8 FF 5F 5E 5B C3 CC CC CC CC CC CC CC CC CC CC CC CC CC CC CC 56 6A 0A"), scriptName);
}

int32_t CTheScripts::GetScriptHash(int32_t index) {
    return plugin::CallAndReturnDyn<int32_t>(gpattern("8B 0D ? ? ? ? 8B 54 24 04 8B 41 04 F6 04 02 80 74 08 33 C0 8B 00"), index);
}

int32_t CTheScripts::StartScript(int32_t scriptHash, int32_t arg2, int32_t arg3, int32_t arg4) {
    return plugin::CallAndReturnDyn<int32_t>(gpattern("53 55 8B 6C 24 0C 56 85 ED"), scriptHash, arg2, arg3, arg4);
}

int32_t CTheScripts::StartScript(const char* scriptName, int32_t arg2, int32_t arg3, int32_t arg4) {
    return plugin::CallAndReturnDyn<int32_t>(gpattern("56 8B 74 24 08 85 F6 74 12 8B C6"), scriptName, arg2, arg3, arg4);
}
