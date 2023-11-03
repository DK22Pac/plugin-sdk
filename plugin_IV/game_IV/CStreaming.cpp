/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CStreaming.h"
#include "Patch.h"

static uint32_t* CStreaming__ms_scriptFlagsAddr;
int32_t& CStreaming::ms_scriptFlags = *(int32_t*)CStreaming__ms_scriptFlagsAddr;

static uint32_t CStreaming__LoadAllRequestedModelsAddr;
void CStreaming::LoadAllRequestedModels(int32_t onlyPriorityRequests) {
    plugin::CallDyn(CStreaming__LoadAllRequestedModelsAddr, onlyPriorityRequests);
}

static uint32_t CStreaming__RequestModelAddr;
void CStreaming::RequestModel(int32_t model, int32_t fileTypeId, int32_t flags) {
    plugin::CallDyn(CStreaming__RequestModelAddr, model, fileTypeId, flags);
}

static uint32_t CStreaming__ScriptRequestModelAddr;
void CStreaming::ScriptRequestModel(int32_t hash, uint32_t* unused) {
    plugin::CallDyn(CStreaming__ScriptRequestModelAddr, hash, unused);
}

static uint32_t CStreaming__ScriptHasModelLoadedAddr;
bool CStreaming::ScriptHasModelLoaded(int32_t hash) {
    return plugin::CallAndReturnDyn<bool>(CStreaming__ScriptHasModelLoadedAddr, hash);
}

template<>
void plugin::InitPatterns<CStreaming>() {
    CStreaming__ms_scriptFlagsAddr = (uint32_t*)plugin::patch::GetPointer(plugin::GetPattern("C7 05 ? ? ? ? ? ? ? ? 5E 59 C3 A1 ? ? ? ? 83 C8 0C", 2));

    CStreaming__LoadAllRequestedModelsAddr = plugin::GetPattern("8B 0D ? ? ? ? FF 74 24 04 8B 01 FF 50 18 C3", 0);
    CStreaming__RequestModelAddr = plugin::GetPattern("8B 44 24 08 FF 74 24 0C 6B C0 64", 0);
    CStreaming__ScriptRequestModelAddr = plugin::GetPattern("51 56 8D 44 24 04 50 FF 74 24 10 C7 44 24 ? ? ? ? ? E8 ? ? ? ? 83 C4 08 83 7C 24", 0);
    CStreaming__ScriptHasModelLoadedAddr = plugin::GetPattern("51 56 8D 44 24 04 50 FF 74 24 10 C7 44 24 ? ? ? ? ? E8 ? ? ? ? 8B F0", 0);
}
