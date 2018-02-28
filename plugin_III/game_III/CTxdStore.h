/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "TxdDef.h"
#include "CPool.h"

class CTxdStore {
public:
    static RwTexDictionary *&ms_pStoredTxd;
    static CPool<TxdDef> *&ms_pTxdPool;

    static void Initialise();
    static void Shutdown();
    static void GameShutdown();
    static int AddTxdSlot(char const* name);
    static void RemoveTxdSlot(int id);
    static char* GetTxdName(int id);
    static int FindTxdSlot(char const* name);
    static bool LoadTxd(int id, char const* name);
    static bool LoadTxd(int id, RwStream* stream);
    static bool StartLoadTxd(int id, RwStream* stream);
    static bool FinishLoadTxd(int id, RwStream* stream);
    static void Create(int id);
    static void RemoveTxd(int id);
    static void SetCurrentTxd(int id);
    static void PushCurrentTxd();
    static void PopCurrentTxd();
    static void AddRef(int id);
    static void RemoveRef(int id);
    static void RemoveRefWithoutDelete(int id);
    static int GetNumRefs(int id);
};

extern unsigned int &texNumLoaded;
extern float &texLoadTime;