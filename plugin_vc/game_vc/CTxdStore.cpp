/*
Plugin-SDK (Grand Theft Auto Vice City) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTxdStore.h"

CPool<TxdDef> *&CTxdStore::ms_pTxdPool = *(CPool<TxdDef> **)0x9B6A4C;

// Converted from cdecl TxdDef* CTxdStore::AddRef(int index) 0x580A60
TxdDef* CTxdStore::AddRef(int index) {
    return plugin::CallAndReturn<TxdDef*, 0x580A60, int>(index);
}

// Converted from cdecl int CTxdStore::AddTxdSlot(char const* name) 0x580F00
int CTxdStore::AddTxdSlot(char const* name) {
    return plugin::CallAndReturn<int, 0x580F00, char const*>(name);
}

// Converted from cdecl void CTxdStore::Create(int index) 0x580B60
void CTxdStore::Create(int index) {
    plugin::Call<0x580B60, int>(index);
}

// Converted from cdecl int CTxdStore::FindTxdSlot(char const* name) 0x580D70
int CTxdStore::FindTxdSlot(char const* name) {
    return plugin::CallAndReturn<int, 0x580D70, char const*>(name);
}

// Converted from cdecl bool CTxdStore::FinishLoadTxd(int index,RwStream *stream) 0x580BA0
bool CTxdStore::FinishLoadTxd(int index, RwStream* stream) {
    return plugin::CallAndReturn<bool, 0x580BA0, int, RwStream*>(index, stream);
}

// Converted from cdecl void CTxdStore::GameShutdown(void) 0x580F40 
void CTxdStore::GameShutdown() {
    plugin::Call<0x580F40>();
}

// Converted from cdecl int CTxdStore::GetNumRefs(int index) 0x580990
int CTxdStore::GetNumRefs(int index) {
    return plugin::CallAndReturn<int, 0x580990, int>(index);
}

// Converted from cdecl int CTxdStore::GetTxdName(int index) 0x580E50
int CTxdStore::GetTxdName(int index) {
    return plugin::CallAndReturn<int, 0x580E50, int>(index);
}

// Converted from cdecl bool CTxdStore::LoadTxd(int index, RwStream *stream) 0x580C60
bool CTxdStore::LoadTxd(int index, RwStream* stream) {
    return plugin::CallAndReturn<bool, 0x580C60, int, RwStream*>(index, stream);
}

// Converted from cdecl bool CTxdStore::LoadTxd(int index, char const* filename) 0x580CD0
bool CTxdStore::LoadTxd(int index, char const* filename) {
    return plugin::CallAndReturn<bool, 0x580CD0, int, char const*>(index, filename);
}

// Converted from cdecl void CTxdStore::PopCurrentTxd(void) 0x580AA0 
void CTxdStore::PopCurrentTxd() {
    plugin::Call<0x580AA0>();
}

// Converted from cdecl void CTxdStore::PushCurrentTxd(void) 0x580AC0 
void CTxdStore::PushCurrentTxd() {
    plugin::Call<0x580AC0>();
}

// Converted from cdecl void CTxdStore::RemoveRef(int index) 0x580A10
void CTxdStore::RemoveRef(int index) {
    plugin::Call<0x580A10, int>(index);
}

// Converted from cdecl TxdDef* CTxdStore::RemoveRefWithoutDelete(int index) 0x5809D0
TxdDef* CTxdStore::RemoveRefWithoutDelete(int index) {
    return plugin::CallAndReturn<TxdDef*, 0x5809D0, int>(index);
}

// Converted from cdecl void CTxdStore::RemoveTxd(int index) 0x580B10
void CTxdStore::RemoveTxd(int index) {
    plugin::Call<0x580B10, int>(index);
}

// Converted from cdecl void CTxdStore::RemoveTxdSlot(int index) 0x580E90
void CTxdStore::RemoveTxdSlot(int index) {
    plugin::Call<0x580E90, int>(index);
}

// Converted from cdecl void CTxdStore::SetCurrentTxd(int index) 0x580AD0
void CTxdStore::SetCurrentTxd(int index) {
    plugin::Call<0x580AD0, int>(index);
}

// Converted from cdecl void CTxdStore::Shutdown(void) 0x580FF0 
void CTxdStore::Shutdown() {
    plugin::Call<0x580FF0>();
}

// Converted from cdecl bool CTxdStore::StartLoadTxd(int index,RwStream *stream) 0x580BF0
bool CTxdStore::StartLoadTxd(int index, RwStream* stream) {
    return plugin::CallAndReturn<bool, 0x580BF0, int, RwStream*>(index, stream);
}

// Converted from cdecl void CTxdStore::Initialise(void) 0x581010 
void CTxdStore::Initialise() {
    plugin::Call<0x581010>();
}