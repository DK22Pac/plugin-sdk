/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTxdStore.h"

RwTexDictionary *&CTxdStore::ms_pStoredTxd = *(RwTexDictionary **)0x9405BC;
CPool<TxdDef> *&CTxdStore::ms_pTxdPool = *(CPool<TxdDef> **)0x8F5FB8;
unsigned int &texNumLoaded = *(unsigned int *)0x8F252C;
float &texLoadTime = *(float *)0x8F1B50;

// Converted from cdecl void CTxdStore::Initialise(void) 0x527440
void CTxdStore::Initialise() {
    plugin::Call<0x527440>();
}

// Converted from cdecl void CTxdStore::Shutdown(void) 0x527470
void CTxdStore::Shutdown() {
    plugin::Call<0x527470>();
}

// Converted from cdecl void CTxdStore::GameShutdown(void) 0x527490
void CTxdStore::GameShutdown() {
    plugin::Call<0x527490>();
}

// Converted from cdecl int CTxdStore::AddTxdSlot(char const*name) 0x5274E0
int CTxdStore::AddTxdSlot(char const* name) {
    return plugin::CallAndReturn<int, 0x5274E0, char const*>(name);
}

// Converted from cdecl void CTxdStore::RemoveTxdSlot(int id) 0x527520
void CTxdStore::RemoveTxdSlot(int id) {
    plugin::Call<0x527520, int>(id);
}

// Converted from cdecl char* CTxdStore::GetTxdName(int id) 0x527590
char* CTxdStore::GetTxdName(int id) {
    return plugin::CallAndReturn<char*, 0x527590, int>(id);
}

// Converted from cdecl int CTxdStore::FindTxdSlot(char const*name) 0x5275D0
int CTxdStore::FindTxdSlot(char const* name) {
    return plugin::CallAndReturn<int, 0x5275D0, char const*>(name);
}

// Converted from cdecl bool CTxdStore::LoadTxd(int id,char const*name) 0x5276B0
bool CTxdStore::LoadTxd(int id, char const* name) {
    return plugin::CallAndReturn<bool, 0x5276B0, int, char const*>(id, name);
}

// Converted from cdecl bool CTxdStore::LoadTxd(int id,RwStream *stream) 0x527700
bool CTxdStore::LoadTxd(int id, RwStream* stream) {
    return plugin::CallAndReturn<bool, 0x527700, int, RwStream*>(id, stream);
}

// Converted from cdecl bool CTxdStore::StartLoadTxd(int id,RwStream *stream) 0x527770
bool CTxdStore::StartLoadTxd(int id, RwStream* stream) {
    return plugin::CallAndReturn<bool, 0x527770, int, RwStream*>(id, stream);
}

// Converted from cdecl bool CTxdStore::FinishLoadTxd(int id,RwStream *stream) 0x5277E0
bool CTxdStore::FinishLoadTxd(int id, RwStream* stream) {
    return plugin::CallAndReturn<bool, 0x5277E0, int, RwStream*>(id, stream);
}

// Converted from cdecl void CTxdStore::Create(int id) 0x527830
void CTxdStore::Create(int id) {
    plugin::Call<0x527830, int>(id);
}

// Converted from cdecl void CTxdStore::RemoveTxd(int id) 0x527870
void CTxdStore::RemoveTxd(int id) {
    plugin::Call<0x527870, int>(id);
}

// Converted from cdecl void CTxdStore::SetCurrentTxd(int id) 0x5278C0
void CTxdStore::SetCurrentTxd(int id) {
    plugin::Call<0x5278C0, int>(id);
}

// Converted from cdecl void CTxdStore::PushCurrentTxd(void) 0x527900
void CTxdStore::PushCurrentTxd() {
    plugin::Call<0x527900>();
}

// Converted from cdecl void CTxdStore::PopCurrentTxd(void) 0x527910
void CTxdStore::PopCurrentTxd() {
    plugin::Call<0x527910>();
}

// Converted from cdecl void CTxdStore::AddRef(int id) 0x527930
void CTxdStore::AddRef(int id) {
    plugin::Call<0x527930, int>(id);
}

// Converted from cdecl void CTxdStore::RemoveRef(int id) 0x527970
void CTxdStore::RemoveRef(int id) {
    plugin::Call<0x527970, int>(id);
}

// Converted from cdecl void CTxdStore::RemoveRefWithoutDelete(int id) 0x5279C0
void CTxdStore::RemoveRefWithoutDelete(int id) {
    plugin::Call<0x5279C0, int>(id);
}

// Converted from cdecl int CTxdStore::GetNumRefs(int id) 0x527A00
int CTxdStore::GetNumRefs(int id) {
    return plugin::CallAndReturn<int, 0x527A00, int>(id);
}