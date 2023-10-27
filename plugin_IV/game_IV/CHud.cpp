/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CHud.h"
#include "Patch.h"

CSprite2d* CHud::Sprites; // [36]
CHudComponent* CHud::Components; // [76]

static bool* CHud__HideAllComponents;
bool& CHud::HideAllComponents = *(bool*)CHud__HideAllComponents;

template<>
void plugin::InitPatterns<CHud>() {
    CHud::Sprites = (CSprite2d*)plugin::patch::GetPointer(plugin::GetPattern("8D 8E ? ? ? ? E8 ? ? ? ? 83 C6 04 81 FE", 2));
    CHud::Components = (CHudComponent*)plugin::patch::GetPointer(plugin::GetPattern("8B 3C B5 ? ? ? ? 85 FF 74 20", 3));
    CHud__HideAllComponents = (bool*)plugin::patch::GetPointer(plugin::GetPattern("80 3D ? ? ? ? ? 75 18 6A 00", 2));
}
