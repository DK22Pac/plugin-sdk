/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CHud.h"

CSprite2d* CHud::Sprites = gpatternt(CSprite2d, "8D 8E ? ? ? ? E8 ? ? ? ? 83 C6 04 81 FE", 2); // [36]
CHudComponent** CHud::Components = gpatternt(CHudComponent*, "8B 3C B5 ? ? ? ? 85 FF 74 20", 3); // [67]
int32_t& CHud::NumComponents = *gpatternt(int32_t, "C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? E8 ? ? ? ? E9 ? ? ? ? CC CC CC", 2);
bool& CHud::HideAllComponents = *gpatternt(bool, "80 3D ? ? ? ? ? 75 18 6A 00", 2);
