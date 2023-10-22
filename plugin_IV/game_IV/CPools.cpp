/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPools.h"
#include "Patch.h"

static CPool<CObject, CObject>** CPools__ms_pObjectsPoolAddr;
CPool<CObject, CObject>*& CPools::ms_pObjectsPool = *(CPool<CObject> **)CPools__ms_pObjectsPoolAddr;


static CPool<CTask, char[128]>** CPools__ms_pTaskPoolAddr;
CPool<CTask, char[128]>*& CPools::ms_pTaskPool = *(CPool<CTask, char[128]> **)CPools__ms_pTaskPoolAddr;

static CPool<CPed, CPed>** CPools__ms_pPedPoolAddr;
CPool<CPed, CPed>*& CPools::ms_pPedPool = *(CPool<CPed, CPed> **)CPools__ms_pPedPoolAddr;

template<>
void plugin::InitPatterns<CPools>() {
    CPools__ms_pObjectsPoolAddr = (CPool<CObject, CObject>**)plugin::patch::GetPointer(plugin::GetPattern("A3 ? ? ? ? C3 C7 05 ? ? ? ? ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC CC 56 6A 01", 1));
    CPools__ms_pTaskPoolAddr = (CPool<CTask, char[128]>**)plugin::patch::GetPointer(plugin::GetPattern("A3 ? ? ? ? C3 C7 05 ? ? ? ? ? ? ? ? C3 CC CC CC CC CC CC CC CC CC CC CC F3 0F 10 41", 1));
    CPools__ms_pPedPoolAddr = (CPool<CPed, CPed>**)plugin::patch::GetPointer(plugin::GetPattern("A1 ? ? ? ? F3 0F 11 7C 24 ? F3 0F 11 74 247", 1));
}
