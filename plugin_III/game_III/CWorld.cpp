/*
Plugin-SDK (Grand Theft Auto) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "game_III\CWorld.h"

// Converted from cdecl void CWorld::Add(CEntity *entity) 0x4AE930
void CWorld::Add(CEntity* entity) {
    plugin::Call<0x4AE930, CEntity*>(entity);
}

// Converted from cdecl void CWorld::Remove(CEntity *entity) 0x4AE9D0
void CWorld::Remove(CEntity* entity) {
    plugin::Call<0x4AE9D0, CEntity*>(entity);
}