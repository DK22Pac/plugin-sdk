/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPools.h"
#include "Patch.h"

static CPool** CPools__ms_pObjectsPoolAddr;
CPool*& CPools::ms_pObjectsPool = *(CPool **)CPools__ms_pObjectsPoolAddr;

static CPool** CPools__ms_pTaskPoolAddr;
CPool*& CPools::ms_pTaskPool = *(CPool **)CPools__ms_pTaskPoolAddr;

static CPool** CPools__ms_pPedPoolAddr;
CPool*& CPools::ms_pPedPool = *(CPool **)CPools__ms_pPedPoolAddr;

static CPool** CPools__ms_pCamPoolAddr;
CPool*& CPools::ms_pCamPool = *(CPool **)CPools__ms_pCamPoolAddr;

static CPool** CPools__ms_pVehiclePoolAddr;
CPool*& CPools::ms_pVehiclePool = *(CPool **)CPools__ms_pVehiclePoolAddr;

template<>
void plugin::InitPatterns<CPools>() {
    CPools__ms_pObjectsPoolAddr = (CPool**)plugin::patch::GetPointer(plugin::GetPattern("A3 ? ? ? ? C3 C7 05 ? ? ? ? ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC CC 56 6A 01", 1));
    CPools__ms_pTaskPoolAddr = (CPool**)plugin::patch::GetPointer(plugin::GetPattern("A3 ? ? ? ? C3 C7 05 ? ? ? ? ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC CC F3 0F 10 41", 1));
    CPools__ms_pPedPoolAddr = (CPool**)plugin::patch::GetPointer(plugin::GetPattern("A1 ? ? ? ? F3 0F 11 7C 24 ? F3 0F 11 74 24", 1));
    CPools__ms_pCamPoolAddr = (CPool**)plugin::patch::GetPointer(plugin::GetPattern("A3 ? ? ? ? C3 C7 05 ? ? ? ? ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC CC CC CC CC 8B 91", 1));
    CPools__ms_pVehiclePoolAddr = (CPool**)plugin::patch::GetPointer(plugin::GetPattern("A3 ? ? ? ? C3 C7 05 ? ? ? ? ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC CC E8", 1));

}
