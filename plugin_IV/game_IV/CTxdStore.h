/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Rage.h"
#include "CPool.h"

struct TxdDef {
    rage::pgDictionary<rage::pgRef<rage::grcTexturePC>>* dict;
    int32_t refName;
    uint32_t name;
    int32_t pad;
};

class CTxdStore {
public:
    static CPool<TxdDef>*& ms_pTxdPool;
    static rage::pgDictionary<rage::pgRef<rage::grcTexturePC>>*& ms_pStoredTxd;

public:
    static int32_t AddTxdSlot(const char* name);
    static void AddRef(int32_t slot);

    static int32_t FindTxdSlot(const char* name);
    static void PushCurrentTxd();
    static void SetCurrentTxd(int32_t slot);
    static void PopCurrentTxd();

    static void Initialise();

    static bool LoadTxd(int32_t slot, const char* name);

    static void RemoveTxdSlot(int32_t slot);
};

