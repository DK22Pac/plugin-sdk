/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCutsceneMgr.h"
#include "Patch.h"

int32_t& CCutsceneMgr::ms_running = *gpatternt(int32_t, "C7 05 ? ? ? ? ? ? ? ? C6 05 ? ? ? ? ? C6 05 ? ? ? ? ? C6 05 ? ? ? ? ? C6 05 ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? C7 05 ? ? ? ? ? ? ? ? B9", 2);
rage::sysArray<CSprite2d>& ms_sprites = *gpatternt(rage::sysArray<CSprite2d>, "BE ? ? ? ? 8B CE E8 ? ? ? ? 83 C6 04 81 FE ? ? ? ? 7C EE E8 ? ? ? ? 83 FF FF 74 0F", 1);

bool CCutsceneMgr::IsRunning() {
    return plugin::CallAndReturnDyn<bool>(gpattern("83 3D ? ? ? ? ? 0F 95 C0 C3 CC CC CC CC CC 8B 0D ? ? ? ? 8B 54 24 04"));
}

void CCutsceneMgr::LoadSprites() {
    plugin::CallDyn(gpattern("56 57 68 ? ? ? ? E8 ? ? ? ? 8B F0"));
}

void CCutsceneMgr::UnloadSprites() {
    plugin::CallDyn(gpattern("56 57 E8 ? ? ? ? 68 ? ? ? ? E8 ? ? ? ? 8B F8"));
}
