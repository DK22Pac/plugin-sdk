/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CStreaming.h"

CStreamingInfo *CStreaming::ms_aInfoForModel = (CStreamingInfo *)0x94DDD0;

void CStreaming::RequestModel(int modelIndex, int flags) {
    plugin::Call<0x40E310, int, int>(modelIndex, flags);
}

void CStreaming::LoadAllRequestedModels(bool onlyQuickRequests) {
    plugin::Call<0x40B5F0, bool>(onlyQuickRequests);
}

void CStreaming::SetModelIsDeletable(int modelIndex) {
    plugin::Call<0x40AEA0, int>(modelIndex);
}
