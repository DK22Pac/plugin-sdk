/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTxdStore.h"
#include "Patch.h"

static CPool<TxdDef, TxdDef>** CTxdStore__ms_pTxdPoolAddr;
CPool<TxdDef, TxdDef>*& CTxdStore::ms_pTxdPool = *(CPool<TxdDef> **)CTxdStore__ms_pTxdPoolAddr;

static void* CTxdStore__ms_pStoredTxdAddr;
rage::pgDictionary<rage::grcTexturePC>* CTxdStore::ms_pStoredTxd = (rage::pgDictionary<rage::grcTexturePC>*)CTxdStore__ms_pStoredTxdAddr;

static uint32_t CTxdStore__AddTxdSlotAddr;
int32_t CTxdStore::AddTxdSlot(const char* name) {
    return plugin::CallAndReturnDyn<int32_t>(CTxdStore__AddTxdSlotAddr, name);
}

static uint32_t CTxdStore__AddRefAddr;
void CTxdStore::AddRef(int32_t slot) {
    plugin::CallDyn(CTxdStore__AddRefAddr, slot);
}

static uint32_t CTxdStore__FindTxdSlotAddr;
int32_t CTxdStore::FindTxdSlot(const char* name) {
    return plugin::CallAndReturnDyn<int32_t>(CTxdStore__FindTxdSlotAddr, name);
}

static uint32_t CTxdStore__PushCurrentTxdAddr;
void CTxdStore::PushCurrentTxd() {
    plugin::CallDyn(CTxdStore__PushCurrentTxdAddr);
}

static uint32_t CTxdStore__SetCurrentTxdAddr;
void CTxdStore::SetCurrentTxd(int32_t slot) {
    plugin::CallDyn(CTxdStore__SetCurrentTxdAddr, slot);
}

static uint32_t CTxdStore__PopCurrentTxdAddr;
void CTxdStore::PopCurrentTxd() {
    plugin::CallDyn(CTxdStore__PopCurrentTxdAddr);
}

static uint32_t CTxdStore__InitialiseAddr;
void CTxdStore::Initialise() {
    plugin::CallDyn(CTxdStore__InitialiseAddr);
}

static uint32_t CTxdStore__LoadTxdAddr;
bool CTxdStore::LoadTxd(int32_t slot, const char* name) {
    return plugin::CallAndReturnDyn<bool>(CTxdStore__LoadTxdAddr, slot, name);
}

static uint32_t CTxdStore__RemoveTxdSlotAddr;
void CTxdStore::RemoveTxdSlot(int32_t slot) {
    plugin::CallDyn(CTxdStore__RemoveTxdSlotAddr, slot);
}

template<>
void plugin::InitPatterns<CTxdStore>() {
    CTxdStore__ms_pTxdPoolAddr = (CPool<TxdDef, TxdDef>**)plugin::patch::GetPointer(plugin::GetPattern("A3 ? ? ? ? C3 C7 05 ? ? ? ? ? ? ? ? C3 56", 1));
    CTxdStore__ms_pStoredTxdAddr = (rage::pgDictionary<rage::grcTexturePC>*)plugin::patch::GetPointer(plugin::GetPattern("8B 3D ? ? ? ? 85 FF 74 21", 2));

    CTxdStore__AddTxdSlotAddr = plugin::GetPattern("8B 0D ? ? ? ? 56 E8 ? ? ? ? FF 74 24 08 8B F0 C7 06 ? ? ? ? C7 46 ? ? ? ? ? E8 ? ? ? ? 8B 0D", 0);
    CTxdStore__AddRefAddr = plugin::GetPattern("8B 0D ? ? ? ? 8B 54 24 04 8B 41 04 F6 04 02 80 74 06 33 C0 FF 40 04 C3 8B 41 0C 0F AF C2 03 01 FF 40 04 C3 CC CC CC CC CC CC CC CC CC CC CC 8B 0D ? ? ? ? 56 8B 41 04", 0);
    CTxdStore__FindTxdSlotAddr = plugin::GetPattern("FF 74 24 04 E8 ? ? ? ? 83 C4 04 89 44 24 04 E9 ? ? ? ? CC CC CC CC CC CC CC CC CC CC CC 8B 0D", 0);
    CTxdStore__PushCurrentTxdAddr = plugin::GetPattern("A1 ? ? ? ? FF 05 ? ? ? ? A3 ? ? ? ? 85 C0", 0);
    CTxdStore__SetCurrentTxdAddr = plugin::GetPattern("8B 4C 24 04 83 F9 FF 74 31", 0);
    CTxdStore__PopCurrentTxdAddr = plugin::GetPattern("8B 0D ? ? ? ? FF 0D ? ? ? ? 8B 15", 0);
    CTxdStore__InitialiseAddr = plugin::GetPattern("6A 1C E8 ? ? ? ? 83 C4 04 85 C0 74 17 6A 10 FF 74 24 0C 8B C8 FF 74 24 0C E8 ? ? ? ? A3 ? ? ? ? C3 C7 05 ? ? ? ? ? ? ? ? C3 56", 0);
    CTxdStore__LoadTxdAddr = plugin::GetPattern("8B 0D ? ? ? ? 56 8B 41 04 57 8B 7C 24 0C F6 04 07 80 74 04 33 F6 EB 08 8B 71 0C 0F AF F7 03 31 E8", 0);
    CTxdStore__RemoveTxdSlotAddr = plugin::GetPattern("8B 0D ? ? ? ? 56 8B 41 04 8B 74 24 08 F6 04 06 80 75 2F 8B 41 0C 0F AF C6 03 01 74 25 FF 48 04 83 78 04 00 7F 1C FF 35 ? ? ? ? 56 E8 ? ? ? ? 83 C4 08 84 C0 75 09 56 E8 ? ? ? ? 83 C4 04 5E C3 CC CC CC CC CC CC CC CC CC CC CC 83 EC 08", 0);
}
