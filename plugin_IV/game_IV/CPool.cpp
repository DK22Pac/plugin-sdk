/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPool.h"

void* CPool::New() {
    return plugin::CallMethodAndReturnDyn<void*>(gpattern("53 8B D1 56 8B 42 10"), this);
}

void CPool::Delete(void* object) {
    return plugin::CallMethodDyn(gpattern("56 FF 74 24 08 8B F1 E8 ? ? ? ? 8B 56 04 80 0C 02 80"), this, object);
}

void* CPool::GetAt() {
    return plugin::CallMethodAndReturnDyn<void*>(gpattern("8B 44 24 04 2B 01 99 F7 79 0C 8B 49 04"), this);
}

int32_t CPool::GetIndex() {
    return plugin::CallMethodAndReturnDyn<int32_t>(gpattern("56 FF 74 24 08 8B F1 E8 ? ? ? ? 8B 4E 04"), this);
}

