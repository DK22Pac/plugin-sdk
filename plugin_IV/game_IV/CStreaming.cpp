/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CStreaming.h"

int32_t& CStreaming::ms_scriptFlags = *gpatternt(int32_t, "C7 05 ? ? ? ? ? ? ? ? 5E 59 C3 A1 ? ? ? ? 83 C8 0C", 2);

void CStreaming::LoadAllRequestedModels(int32_t onlyPriorityRequests) {
    plugin::CallDyn(gpattern("8B 0D ? ? ? ? FF 74 24 04 8B 01 FF 50 18 C3"), onlyPriorityRequests);
}

void CStreaming::RequestModel(int32_t model, int32_t fileTypeId, int32_t flags) {
    plugin::CallDyn(gpattern("8B 44 24 08 FF 74 24 0C 6B C0 64"), model, fileTypeId, flags);
}

void CStreaming::ScriptRequestModel(int32_t hash, uint32_t* unused) {
    plugin::CallDyn(gpattern("51 56 8D 44 24 04 50 FF 74 24 10 C7 44 24 ? ? ? ? ? E8 ? ? ? ? 83 C4 08 83 7C 24"), hash, unused);
}

bool CStreaming::ScriptHasModelLoaded(int32_t hash) {
    return plugin::CallAndReturnDyn<bool>(gpattern("51 56 8D 44 24 04 50 FF 74 24 10 C7 44 24 ? ? ? ? ? E8 ? ? ? ? 8B F0"), hash);
}

void CStreaming::RequestScript(int32_t hash, int32_t flags) {
    plugin::CallDyn(gpattern("FF 35 ? ? ? ? FF 74 24 08 E8 ? ? ? ? 83 C4 08 84 C0 74 16 FF 74 24 08 FF 35 ? ? ? ? FF 74 24 0C E8 ? ? ? ? 83 C4 0C C3 CC CC CC 56"), hash, flags);
}

void CStreaming::SetIsModelDeletable(int32_t model, int32_t fileTypeId) {
    plugin::CallDyn(gpattern("8B 44 24 08 6B C0 64 6A 02"), model, fileTypeId);
}
