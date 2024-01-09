/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CModelInfo.h"

CModelInfo* ModelInfo = gpatternt(CModelInfo, "A3 ? ? ? ? E8 ? ? ? ? 8B C8 E8 ? ? ? ? 6A 00", 1);
CBaseModelInfo** CModelInfo::ms_modelInfoPtrs = gpatternt(CBaseModelInfo*, "68 ? ? ? ? E8 ? ? ? ? 83 C4 0C C7 05 ? ? ? ? ? ? ? ? E9", 1); // [31000]

CBaseModelInfo* CModelInfo::GetModelByHash(int32_t hash, uint32_t* indexOut) {
    return plugin::CallAndReturnDyn<CBaseModelInfo*>(gpattern("8B 44 24 04 89 44 24 04 66 A1 ? ? ? ? 66 85 C0 74 3F"), hash, indexOut);
}
