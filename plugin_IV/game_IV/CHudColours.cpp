/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CHudColours.h"

rage::Color32* CHudColours::m_aColours = gpatternt(rage::Color32, "89 14 B5 ? ? ? ? 5E", 2); // [73]

static uint32_t CHudColours__GetAddr;
rage::Color32* CHudColours::Get(rage::Color32* out, uint32_t id) {
    return plugin::CallAndReturnDyn<rage::Color32*>(gpattern("8B 54 24 08 56 8B 0C 95 ? ? ? ? 8B C1 8B F1"), out, id);
}

static uint32_t CHudColours__Get_1Addr;
rage::Color32* CHudColours::Get(rage::Color32* out, uint32_t id, uint8_t alpha) {
    return plugin::CallAndReturnDyn<rage::Color32*>(gpattern("8B 54 24 08 56 8B 0C 95 ? ? ? ? 8B C1 C1 E8 10"), out, id, alpha);
}

