/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CHudColours.h"
#include "Patch.h"

rage::Color32* CHudColours::m_aColours; // [73]

static uint32_t CHudColours__GetAddr;
rage::Color32* CHudColours::Get(rage::Color32* out, uint32_t id) {
    return plugin::CallAndReturnDyn<rage::Color32*>(CHudColours__GetAddr, out, id);
}

static uint32_t CHudColours__Get_1Addr;
rage::Color32* CHudColours::Get(rage::Color32* out, uint32_t id, uint8_t alpha) {
    return plugin::CallAndReturnDyn<rage::Color32*>(CHudColours__Get_1Addr, out, id, alpha);
}

template<>
void plugin::InitPatterns<CHudColours>() {
    CHudColours::m_aColours = (rage::Color32*)plugin::patch::GetPointer(plugin::GetPattern("89 14 B5 ? ? ? ? 5E", 2));

    CHudColours__GetAddr = plugin::GetPattern("8B 54 24 08 56 8B 0C 95 ? ? ? ? 8B C1 8B F1", 0);
    CHudColours__Get_1Addr = plugin::GetPattern("8B 54 24 08 56 8B 0C 95 ? ? ? ? 8B C1 C1 E8 10", 0);
}
