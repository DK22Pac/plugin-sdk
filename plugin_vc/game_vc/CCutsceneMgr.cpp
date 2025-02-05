/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCutsceneMgr.h"

char* CCutsceneMgr::ms_cutsceneName = (char*)0x7EFE08;
bool& CCutsceneMgr::ms_running = *(bool*)0xA10AB2;

CCutsceneObject** CCutsceneMgr::ms_pCutsceneObjects = (CCutsceneObject**)0x938288;
int32_t& CCutsceneMgr::ms_numCutsceneObjs = *(int32_t*)0xA0FC74;

int32_t CCutsceneMgr::GetCutsceneTimeInMilliseconds() {
    return plugin::CallAndReturn<int32_t, 0x405F60>();
}
