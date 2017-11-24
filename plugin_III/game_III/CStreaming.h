/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_III.h"
#include "CStreamingInfo.h"

class CStreaming {
public:
    
    // variables
    static unsigned int &ms_streamingBufferSize;
    static unsigned int &ms_numPriorityRequests;
    static unsigned int &ms_memoryUsed;
    static unsigned int &ms_memoryAvailable;
    static unsigned int &desiredNumVehiclesLoaded;
    static int &ms_channelError;
    static bool &ms_bLoadingBigModel;
    static bool &ms_disableStreaming;
    static int &ms_vehiclesLoaded;
    static unsigned int &ms_numVehiclesLoaded;
    static unsigned short &ms_loadedGangs;
    static int &ms_currentPedLoading;
    static int &ms_currentPedGrp;
    static bool &ms_hasLoadedLODs;
    static int &ms_oldSectorX;
    static int &ms_oldSectorY;
    static unsigned int &timeBeforeNextLoad;
    static unsigned int &ms_imageSize;
    static int &ms_imageOffsets;
    static int &ms_lastImageRead;
    static int &ms_lastVehicleDeleted;
    static unsigned int &ms_numModelsRequested;

    static CStreamingInfo *ms_startLoadedList;
    static CStreamingInfo *ms_startRequestedList;
    static CStreamingInfo *ms_endRequestedList;

    static CStreamingInfo *ms_aInfoForModel;

    static void *ms_pStreamingBuffer;
    //static void *ms_pExtraObjectsDir; ???  0x95CB90  CStreaming::ms_pExtraObjectsDir  

    // functions
    static void RequestModel(int modelIndex, int flags);
    static void LoadRequestedModels();
    static void Init();
    static void FlushChannels();
    static void FlushRequestList();
    static int GetAvailableVehicleSlot();
    static bool IsTxdUsedByRequestedModels(int index);
    static void LoadAllRequestedModels(bool fileExists);
    static void RemoveModel(int modelIndex);
    static bool RemoveLeastUsedModel();
    static bool RemoveLoadedVehicle();
    static void RemoveAllUnusedModels();
    static void RemoveCurrentZonesModels();
    // empty function
    static void RemoveUnusedModelsInLoadedList();
    static void RequestModelStream(int streamnum);
    static void RequestSpecialChar(int index, char const* txdname, int modelrequestflag);
    static void RequestSpecialModel(int slot, char const* name, int modelrequestflag);
    static void RequestSubway();
    static void SetMissionDoesntRequireModel(int modelIndex);
    static void SetMissionDoesntRequireSpecialChar(int index);
    static void SetModelIsDeletable(int modelIndex);
    static void SetModelTxdIsDeletable(int modelIndex);
    static void Shutdown();
    static void StreamVehiclesAndPeds();
    static void Update();
    // empty function
    static void UpdateMemoryUsed();

};
