/*
Plugin-SDK (Grand Theft Auto Vice City) header file
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
    //variables
    static CPool<TxdDef> *&ms_pTxdPool;
    
    //funcs
    // add reference for txd
    static TxdDef* AddRef(int index);
    // allocate new slot for this txd
    static int AddTxdSlot(char const* name);
    // create rw tex dictionary for txd slot
    static void Create(int index);
    // find txd by name. Returning value is txd index
    static int FindTxdSlot(char const* name);
    static bool FinishLoadTxd(int index, RwStream* stream);
    static void GameShutdown();
    // get references count
    static int GetNumRefs(int index);
    static int GetTxdName(int index);
    // load txd from stream
    static bool LoadTxd(int index, RwStream* stream);
    // load txd from file
    static bool LoadTxd(int index, char const* filename);
    // restore txd
    static void PopCurrentTxd();
    // store current txd
    static void PushCurrentTxd();
    // remove reference, if references count is 0, then delete txd
    static void RemoveRef(int index);
    // remove reference without deleting
    static TxdDef* RemoveRefWithoutDelete(int index);
    // remove txd
    static void RemoveTxd(int index);
    // remove txd slot
    static void RemoveTxdSlot(int index);
    // set the txd to work with
    static void SetCurrentTxd(int index);
    // shutdown txd store
    static void Shutdown();
    static bool StartLoadTxd(int index, RwStream* stream);
    // initialise txd store
    static void Initialise();
};