/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CPtrList.h"
#include "CStreamingInfo.h"
#include "CDirectory.h"


struct PLUGIN_API tModelRequest
{
  tModelRequest *pNextRequest;
  tModelRequest *pPrevRequest;
  char uLoadStatus;
  char uLoadFlags;
  __int16 nModelIndex;
  int uArchiveOffset;
  int uArchiveSize;
};


class PLUGIN_API CStreaming {
public:
    SUPPORTED_10EN static bool &ms_bLoadingBigModel;
    SUPPORTED_10EN static int(&ms_imageOffsets)[6]; // static int ms_imageOffsets[6]
    SUPPORTED_10EN static int(&ms_vehiclesLoaded)[2]; // static int ms_vehiclesLoaded[2]
    SUPPORTED_10EN static bool(&ms_bIsPedFromPedGroupLoaded)[16]; // static bool ms_bIsPedFromPedGroupLoaded[16]
    SUPPORTED_10EN static char *&ms_pStreamingBuffer;
    SUPPORTED_10EN static int &ms_channelError;
    SUPPORTED_10EN static int &ms_lastImageRead;
    SUPPORTED_10EN static CStreamingInfo(&ms_aInfoForModel)[7951]; // static CStreamingInfo ms_aInfoForModel[7951]
    SUPPORTED_10EN static int &ms_numModelsRequested;
    SUPPORTED_10EN static int &ms_imageSize;
    SUPPORTED_10EN static tModelRequest &ms_endLoadedList;
    SUPPORTED_10EN static tModelRequest &ms_startRequestedList;
    SUPPORTED_10EN static int &ms_currentPedGrp;
    SUPPORTED_10EN static int &ms_oldSectorX;
    SUPPORTED_10EN static int &ms_oldSectorY;
    SUPPORTED_10EN static int &ms_numPedsLoaded;
    SUPPORTED_10EN static int &ms_numPriorityRequests;
    SUPPORTED_10EN static tModelRequest &ms_endRequestedList;
    SUPPORTED_10EN static tModelRequest &ms_startLoadedList;
    SUPPORTED_10EN static int &ms_streamingBufferSize;
    SUPPORTED_10EN static CDirectory *&ms_pExtraObjectsDir;
    SUPPORTED_10EN static bool &ms_disableStreaming;

    SUPPORTED_10EN static void AddModelsToRequestList(CVector const *pos, unsigned int streamingFlags);
    SUPPORTED_10EN static bool AddToLoadedVehiclesList(int modelIndex);
    SUPPORTED_10EN static bool AreAnimsUsedByRequestedModels(int animFileIndex);
    SUPPORTED_10EN static void ConvertBufferToObject(char *streamingBuffer, int modelIndex);
    SUPPORTED_10EN static void DeleteAllRwObjects();
    SUPPORTED_10EN static void DeleteFarAwayRwObjects(CVector const *pos);
    SUPPORTED_10EN static void DeleteRwObjectsAfterDeath(CVector const *pos);
    SUPPORTED_10EN static void DeleteRwObjectsBehindCamera(int maxStreamingMemAllowed);
    SUPPORTED_10EN static bool DeleteRwObjectsBehindCameraInSectorList(CPtrList *ptrList, int maxStreamingMemAllowed);
    SUPPORTED_10EN static void DeleteRwObjectsInOverlapSectorList(CPtrList *ptrlist, int sectorX, int sectorY);
    SUPPORTED_10EN static bool DeleteRwObjectsNotInFrustumInSectorList(CPtrList *ptrList, int maxStreamingMemAllowed);
    SUPPORTED_10EN static void FinishLoadingLargeFile(char *streamingBuffer, int modelID);
    SUPPORTED_10EN static void FlushChannels();
    SUPPORTED_10EN static void FlushRequestList();
    SUPPORTED_10EN static unsigned int GetCdImageOffset(int CdPosn);
    SUPPORTED_10EN static int GetNextFileOnCd(int CdOffset, bool bOnlyPriorityRequests);
    SUPPORTED_10EN static bool HasSpecialCharLoaded(int SpecialSlotID);
    //! unused function
    SUPPORTED_10EN static void IHaveUsedStreamingMemory();
    //! empty function
    SUPPORTED_10EN static void ImGonnaUseStreamingMemory();
    SUPPORTED_10EN static void Init();
    SUPPORTED_10EN static void InitChannels();
    SUPPORTED_10EN static void InstanceLoadedModels(CVector const *pos);
    SUPPORTED_10EN static bool IsObjectInCdImage(int modelIndex);
    SUPPORTED_10EN static bool IsTxdUsedByRequestedModels(int txdIndex);
    SUPPORTED_10EN static void LoadAllRequestedModels(bool bOnlyPriorityRequests);
    SUPPORTED_10EN static void LoadBigBuildingsWhenNeeded();
    SUPPORTED_10EN static void LoadCdDirectory(char const *fileName, int id);
    SUPPORTED_10EN static void LoadCdDirectory();
    SUPPORTED_10EN static void LoadInitialPeds();
    SUPPORTED_10EN static void LoadInitialVehicles();
    SUPPORTED_10EN static void LoadInitialWeapons();
    SUPPORTED_10EN static void LoadScene(CVector const *pos);
    SUPPORTED_10EN static void LoadSceneCollision(CVector const *pos);
    SUPPORTED_10EN static void MakeSpaceFor(int memoryToCleanSize);
    //! unused
    SUPPORTED_10EN static void MemoryCardLoad(unsigned char *buffer, unsigned int num);
    SUPPORTED_10EN static void MemoryCardSave(unsigned char *text, unsigned int *num);
    SUPPORTED_10EN static void ProcessEntitiesInSectorList(CPtrList *a1, unsigned int Streamingflags);
    SUPPORTED_10EN static void ProcessEntitiesInSectorList(CPtrList *ptrList, float X1, float Y1, float X2, float Y2, float X3, float Y3, unsigned int Streamingflags);
    SUPPORTED_10EN static bool ProcessLoadingChannel(int channelIndex);
    SUPPORTED_10EN static void ReInit();
    SUPPORTED_10EN static void RemoveBuildings(int levelID);
    SUPPORTED_10EN static char RemoveBuildingsNotInArea(int LevelID);
    SUPPORTED_10EN static void RemoveCurrentZonesModels();
    SUPPORTED_10EN static void RemoveIslandsNotUsed(int levelID);
    SUPPORTED_10EN static bool RemoveLeastUsedModel(int streamingFlags);
    SUPPORTED_10EN static bool RemoveLoadedVehicle();
    SUPPORTED_10EN static bool RemoveLoadedZoneModel();
    SUPPORTED_10EN static void RemoveModel(int modelIndex);
    SUPPORTED_10EN static void RemoveUnusedBigBuildings(int LevelID);
    SUPPORTED_10EN static void RemoveUnusedBuildings(int levelID);
    //! empty function
    SUPPORTED_10EN static void RemoveUnusedModelsInLoadedList();
    SUPPORTED_10EN static void RequestBigBuildings(int levelID);
    SUPPORTED_10EN static void RequestModel(int modelIndex, int Streamingflags);
    SUPPORTED_10EN static void RequestModelStream(int ChannelID);
    SUPPORTED_10EN static void RequestSpecialChar(int SpecialSlotID, char const *Name, int streamingFlags);
    SUPPORTED_10EN static char RequestSpecialModel(int SpecialModelID, char *name, int StreamingFlags);
    SUPPORTED_10EN static void RetryLoadFile(int nChannel);
    SUPPORTED_10EN static void SetMissionDoesntRequireModel(int modelIndex);
    SUPPORTED_10EN static void SetMissionDoesntRequireSpecialChar(int SpecialSlotID);
    SUPPORTED_10EN static void SetModelIsDeletable(int modelIndex);
    SUPPORTED_10EN static void SetModelTxdIsDeletable(int modelIndex);
    SUPPORTED_10EN static void Shutdown();
    SUPPORTED_10EN static void StreamVehiclesAndPeds();
    SUPPORTED_10EN static void StreamZoneModels(CVector const *arg1);
    SUPPORTED_10EN static void Update();
};

#include "meta/meta.CStreaming.h"
