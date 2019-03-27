/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
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

void CStreaming::RequestSpecialChar(int slot, char const *Name, int streamingFlags)
{
    plugin::Call<0x409A30, int, char const*, int>(slot, Name, streamingFlags);
}

void CStreaming::SetModelIsDeletable(int modelIndex) {
    plugin::Call<0x40AEA0, int>(modelIndex);
}
