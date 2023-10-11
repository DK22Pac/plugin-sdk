/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CModelInfo.h"
#include "Patch.h"

static CBaseModelInfo** CModelInfo__ms_modelInfoPtrsAddr;
CBaseModelInfo** CModelInfo::ms_modelInfoPtrs = (CBaseModelInfo**)CModelInfo__ms_modelInfoPtrsAddr; // [31000]

static uint32_t CModelInfo__GetModelByHashAddr;
CBaseModelInfo* CModelInfo::GetModelByHash(int32_t hash, int32_t* indexOut) {
    return plugin::CallAndReturnDyn<CBaseModelInfo*>(CModelInfo__GetModelByHashAddr, hash, indexOut);
}

template<>
void plugin::InitPatterns<CModelInfo>() {
    CModelInfo__ms_modelInfoPtrsAddr = (CBaseModelInfo**)plugin::patch::GetPointer(plugin::GetPattern("68 ? ? ? ? E8 ? ? ? ? 83 C4 0C C7 05 ? ? ? ? ? ? ? ? E9", 1));

    CModelInfo__GetModelByHashAddr = plugin::GetPattern("8B 44 24 04 89 44 24 04 66 A1 ? ? ? ? 66 85 C0 74 3F", 0);
}
