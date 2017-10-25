/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include <plugin_vc.h>
#include "CStreaming.h"

char CStreaming::RequestModel(int modelIndex, int flags) {
    return plugin::CallAndReturn<char, 0x40E310, int, int>(modelIndex, flags);
}

int CStreaming::LoadAllRequestedModels(int a1, char a2) {
    return plugin::CallAndReturn<int, 0x40B5F0, signed int, int>(a1, a2);
}

char CStreaming::SetModelIsDeletable(int modelIndex) {
    return plugin::CallAndReturn<int, 0x40AEA0, int>(modelIndex);
}
