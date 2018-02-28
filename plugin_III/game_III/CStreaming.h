/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CStreamingInfo.h"
#include "CDirectory.h"
#include "CVector.h"
#include "eLevelName.h"
#include "CPtrList.h"
#include "CEntity.h"

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
    static CDirectory **ms_pExtraObjectsDir;     

    // functions
    static void RequestModel(int modelIndex, int flags);
    static void LoadRequestedModels();
    static void Init();
    static void FlushChannels();
    static void FlushRequestList();
    static int GetAvailableVehicleSlot();
    static bool IsTxdUsedByRequestedModels(int index);
    static void LoadAllRequestedModels(bool onlyQuickRequests);
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
    static void AddModelsToRequestList(CVector const& point);
    static void AddToLoadedVehiclesList(int vehicleId);
    static bool ConvertBufferToObject(char* pFileContect, int modelIndex);
    static void DeleteAllRwObjects();
    static void DeleteFarAwayRwObjects(CVector const& point);
    static void DeleteRwObjectsAfterDeath(CVector const& point);
    static void DeleteRwObjectsBehindCamera(int size);
    static bool DeleteRwObjectsBehindCameraInSectorList(CPtrList& list, int size);
    static void DeleteRwObjectsInOverlapSectorList(CPtrList& list, int arg1, int arg2);
    static void DeleteRwObjectsInSectorList(CPtrList& list);
    static bool DeleteRwObjectsNotInFrustumInSectorList(CPtrList& list, int size);
    static bool FinishLoadingLargeFile(char* FileName, int modelIndex);
    static unsigned int GetCdImageOffset(int arg0);
    static int GetNextFileOnCd(int arg0, bool arg1);
    static bool HasSpecialCharLoaded(int modelIndex);
    static void HaveAllBigBuildingsLoaded(eLevelName levelName);
    static void IHaveUsedStreamingMemory();
    // empty function
    static void ImGonnaUseStreamingMemory();
    static bool IsObjectInCdImage(int modelIndex);
    static void LoadCdDirectory(char const* archivename, int archiveID);
    static void LoadCdDirectory();
    static void LoadInitialPeds();
    static void LoadInitialVehicles();
    static void LoadScene(CVector const& point);
    static void MakeSpaceFor(int size);
    static void MemoryCardLoad(unsigned char* arg0, unsigned int arg1);
    static void MemoryCardSave(unsigned char* arg0, unsigned int* arg1);
    static void ProcessEntitiesInSectorList(CPtrList& list);
    static void ProcessEntitiesInSectorList(CPtrList& list, float x1, float y1, float z1, float x2, float y2, float z2);
    static bool ProcessLoadingChannel(int channelindex);
    static void RemoveBigBuildings(eLevelName levelName);
    static void RemoveBuildings(eLevelName levelName);
    static void RemoveIslandsNotUsed(eLevelName levelName);
    static bool RemoveReferencedTxds(int arg0);
    static void RemoveUnusedBigBuildings(eLevelName levelName);
    static void RemoveUnusedBuildings(eLevelName levelName);
    static void RequestBigBuildings(eLevelName levelName);
    static void RequestIslands(eLevelName levelName);
    static void RetryLoadFile(int streamnum);
    static void StreamZoneModels(CVector const& point);
};

void DeleteIsland(CEntity* entity);
