/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPool.h"

static uint32_t CPool__NewAddr;
void* CPool::New() {
    return plugin::CallMethodAndReturnDyn<void*>(CPool__NewAddr, this);
}

static uint32_t CPool__DeleteAddr;
void CPool::Delete(void* object) {
    return plugin::CallMethodDyn(CPool__DeleteAddr, this, object);
}

static uint32_t CPool__GetAtAddr;
void* CPool::GetAt() {
    return plugin::CallMethodAndReturnDyn<void*>(CPool__GetAtAddr, this);
}

static uint32_t CPool__GetIndexAddr;
int32_t CPool::GetIndex() {
    return plugin::CallMethodAndReturnDyn<int32_t>(CPool__GetIndexAddr, this);
}

template<>
void plugin::InitPatterns<CPool>() {
    CPool__NewAddr = plugin::GetPattern("53 8B D1 56 8B 42 10", 0);
    CPool__DeleteAddr = plugin::GetPattern("56 FF 74 24 08 8B F1 E8 ? ? ? ? 8B 56 04 80 0C 02 80", 0);
    CPool__GetAtAddr = plugin::GetPattern("8B 44 24 04 2B 01 99 F7 79 0C 8B 49 04", 0);
    CPool__GetIndexAddr = plugin::GetPattern("56 FF 74 24 08 8B F1 E8 ? ? ? ? 8B 4E 04", 0);
}
