/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CStreamingInfo.h"
#include "RenderWare.h"
#include "CEntity.h"
#include "CPtrList.h"
#include "CLinkList.h"
#include "CLoadedCarGroup.h"
#include "CDirectory.h"

enum eStreamStatus
{
  STREAM_STATUS_IDLE ,
  STREAM_STATUS_READING ,
  STREAM_STATUS_FINISHING_BIGFILE
};


struct tStreamingFileDesc
{
  char m_szName[40];
  bool bNotPlayerImg;
  char __pad[3];
  int m_StreamHandle;
};

struct tStreamingChannel
{
  int modelIds[16];
  int field_40[16];
  eStreamStatus m_nStreamStatus;
  int field_84;
  int field_88;
  int field_8C;
  int field_90;
  int m_nCdStreamStatus;
};


class PLUGIN_API CStreaming {
public:
    SUPPORTED_10US static unsigned int &ms_memoryAvailable;
    SUPPORTED_10US static unsigned int &desiredNumVehiclesLoaded;
    SUPPORTED_10US static bool &ms_bLoadVehiclesInLoadScene;
    SUPPORTED_10US static int *ms_aDefaultCopCarModel; // static int ms_aDefaultCopCarModel[4]
    SUPPORTED_10US static int &ms_DefaultCopBikeModel;
    SUPPORTED_10US static int *ms_aDefaultCopModel; // static int ms_aDefaultCopModel[4]
    SUPPORTED_10US static int &ms_DefaultCopBikerModel;
    SUPPORTED_10US static signed int *ms_aDefaultAmbulanceModel; // static signed int ms_aDefaultAmbulanceModel[4]
    SUPPORTED_10US static signed int *ms_aDefaultMedicModel; // static signed int ms_aDefaultMedicModel[4]
    SUPPORTED_10US static signed int *ms_aDefaultFireEngineModel; // static signed int ms_aDefaultFireEngineModel[4]
    SUPPORTED_10US static signed int *ms_aDefaultFiremanModel; // static signed int ms_aDefaultFiremanModel[4]
    SUPPORTED_10US static signed int *ms_aDefaultCabDriverModel; // static signed int ms_aDefaultCabDriverModel[7]
    SUPPORTED_10US static CDirectory *&ms_pExtraObjectsDir;
    SUPPORTED_10US static tStreamingFileDesc *ms_files; // static tStreamingFileDesc ms_files[8]
    SUPPORTED_10US static bool &ms_bLoadingBigModel;
    SUPPORTED_10US static tStreamingChannel *ms_channel; // static tStreamingChannel ms_channel[2]
    SUPPORTED_10US static signed int &ms_channelError;
    SUPPORTED_10US static bool &m_bHarvesterModelsRequested;
    SUPPORTED_10US static bool &m_bStreamHarvesterModelsThisFrame;
    SUPPORTED_10US static unsigned int &ms_numPriorityRequests;
    //! // initialized to -1 and never used
    SUPPORTED_10US static int &ms_lastCullZone;
    SUPPORTED_10US static unsigned short &ms_loadedGangCars;
    SUPPORTED_10US static unsigned short &ms_loadedGangs;
    SUPPORTED_10US static unsigned int &ms_numPedsLoaded;
    SUPPORTED_10US static unsigned int **ms_pedsLoaded; // static unsigned int* ms_pedsLoaded[8]
    SUPPORTED_10US static int &ms_currentZoneType;
    SUPPORTED_10US static CLoadedCarGroup &ms_vehiclesLoaded;
    SUPPORTED_10US static CStreamingInfo *&ms_pEndRequestedList;
    SUPPORTED_10US static CStreamingInfo *&ms_pStartRequestedList;
    SUPPORTED_10US static CStreamingInfo *&ms_pEndLoadedList;
    SUPPORTED_10US static CStreamingInfo *&ms_startLoadedList;
    //! initialized but not used?
    SUPPORTED_10US static int &ms_lastImageRead;
    //! initialized but never used?
    SUPPORTED_10US static signed int *ms_imageOffsets; // static signed int ms_imageOffsets[6]
    SUPPORTED_10US static bool &ms_bEnableRequestListPurge;
    SUPPORTED_10US static unsigned int &ms_streamingBufferSize;
    SUPPORTED_10US static char *&ms_pStreamingBuffer;
    SUPPORTED_10US static unsigned int &ms_memoryUsed;
    SUPPORTED_10US static unsigned int &ms_numModelsRequested;
    SUPPORTED_10US static CStreamingInfo *ms_aInfoForModel; // static CStreamingInfo ms_aInfoForModel[26316]
    SUPPORTED_10US static bool &ms_disableStreaming;
    SUPPORTED_10US static int &ms_bIsInitialised;
    SUPPORTED_10US static bool &m_bBoatsNeeded;
    SUPPORTED_10US static bool &m_bLoadingScene;
    SUPPORTED_10US static bool &m_bCopBikeLoaded;
    SUPPORTED_10US static bool &m_bDisableCopBikes;
    SUPPORTED_10US static CLinkList<CEntity*> &ms_rwObjectInstances;

    SUPPORTED_10US static void *AddEntity(CEntity *a2);
    //! return StreamingFile Index in CStreaming::ms_files
    SUPPORTED_10US static int AddImageToList(char const *lpFileName, bool bNotPlayerImg);
    SUPPORTED_10US static void AddLodsToRequestList(CVector const *Posn, unsigned int Streamingflags);
    SUPPORTED_10US static void AddModelsToRequestList(CVector const *posn, unsigned int StreamingFlags);
    SUPPORTED_10US static bool AddToLoadedVehiclesList();
    SUPPORTED_10US static bool AreAnimsUsedByRequestedModels(int AnimFileIndex);
    SUPPORTED_10US static bool AreTexturesUsedByRequestedModels(int txdIndex);
    SUPPORTED_10US static void ClearFlagForAll(unsigned int eStreamingFlag);
    SUPPORTED_10US static void ClearSlots(int NumOfSlots);
    //! ChanndelIndex is unused
    SUPPORTED_10US static char ConvertBufferToObject(char *pFileContect, int index, int ChannelIndex);
    SUPPORTED_10US static void DeleteAllRwObjects();
    SUPPORTED_10US static bool DeleteLeastUsedEntityRwObject(bool bNotOnScreen, unsigned int StreamingFlags);
    SUPPORTED_10US static void DeleteRwObjectsAfterDeath(CVector const *PlayerPosn);
    SUPPORTED_10US static void DeleteRwObjectsBehindCamera(int memoryToCleanInBytes);
    SUPPORTED_10US static bool DeleteRwObjectsBehindCameraInSectorList(CPtrList *List, int memoryToCleanInBytes);
    //! unused
    SUPPORTED_10US static void DeleteRwObjectsInSectorList(CPtrList *PtrList, int arg2, int arg3);
    SUPPORTED_10US static char DeleteRwObjectsNotInFrustumInSectorList(CPtrList *List, int memoryToCleanInBytes);
    SUPPORTED_10US static void DisableCopBikes(bool bDisable);
    //! RandFactor : random number between 1-7
    SUPPORTED_10US static int FindMIPedSlotForInterior(int RandFactor);
    SUPPORTED_10US static bool FinishLoadingLargeFile(char *FileName, int modelIndex);
    SUPPORTED_10US static bool FlushChannels();
    SUPPORTED_10US static bool FlushRequestList();
    SUPPORTED_10US static void ForceLayerToRead(int arg1);
    SUPPORTED_10US static int GetDefaultCabDriverModel();
    SUPPORTED_10US static int GetDefaultCopCarModel(unsigned int bIncludeCopBike);
    SUPPORTED_10US static int GetDefaultCopModel();
    SUPPORTED_10US static int GetDefaultFiremanModel();
    SUPPORTED_10US static int GetDefaultMedicModel();
    //! unused
    SUPPORTED_10US static signed int GetDiscInDrive();
    //! return modelIndex
    SUPPORTED_10US static int GetNextFileOnCd(int pos, bool bNotPriority);
    SUPPORTED_10US static bool HasSpecialCharLoaded(int slot);
    SUPPORTED_10US static bool HasVehicleUpgradeLoaded(int ModelIndex);
    //! does nothing (NOP)
    SUPPORTED_10US static void IHaveUsedStreamingMemory();
    //! does nothing (NOP)
    SUPPORTED_10US static void ImGonnaUseStreamingMemory();
    SUPPORTED_10US static void Init();
    SUPPORTED_10US static void Init2();
    SUPPORTED_10US static void InitImageList();
    SUPPORTED_10US static void InstanceLoadedModels(CVector const *posn);
    SUPPORTED_10US static bool IsCarModelNeededInCurrentZone(int VehicleModelIndex);
    //! unused
    SUPPORTED_10US static bool IsInitialised();
    SUPPORTED_10US static bool IsObjectInCdImage(int ModelInex);
    SUPPORTED_10US static bool IsVeryBusy();
    SUPPORTED_10US static void Load();
    SUPPORTED_10US static void LoadAllRequestedModels(bool bOnlyPriorityRequests);
    SUPPORTED_10US static void LoadCdDirectory(char const *ArchiveName, int archiveID);
    SUPPORTED_10US static void LoadCdDirectory();
    SUPPORTED_10US static void LoadInitialPeds();
    //! does nothing (NOP)
    SUPPORTED_10US static void LoadInitialVehicles();
    SUPPORTED_10US static void LoadInitialWeapons();
    SUPPORTED_10US static void LoadRequestedModels();
    SUPPORTED_10US static void LoadScene(CVector const *Posn);
    SUPPORTED_10US static void LoadSceneCollision(CVector const *Posn);
    //! unused
    SUPPORTED_10US static void LoadZoneVehicle(CVector const *posn);
    SUPPORTED_10US static void MakeSpaceFor(int memoryToCleanInBytes);
    SUPPORTED_10US static void PossiblyStreamCarOutAfterCreation(int modelId);
    SUPPORTED_10US static void ProcessEntitiesInSectorList(CPtrList *list, float posn_x, float posn_y, float min_posn_x, float min_posn_y, float max_posn_x, float max_posn_y, float distance, unsigned int Streamingflags);
    SUPPORTED_10US static void ProcessEntitiesInSectorList(CPtrList *list, unsigned int streamingFlags);
    SUPPORTED_10US static bool ProcessLoadingChannel(int channelIndex);
    SUPPORTED_10US static void PurgeRequestList();
    SUPPORTED_10US static unsigned int ReInit();
    SUPPORTED_10US static void ReadIniFile();
    SUPPORTED_10US static void ReclassifyLoadedCars();
    SUPPORTED_10US static void RemoveAllUnusedModels();
    SUPPORTED_10US static void RemoveBigBuildings();
    SUPPORTED_10US static void RemoveBuildingsNotInArea(int AreaCode);
    SUPPORTED_10US static void RemoveCarModel(int modelIndex);
    SUPPORTED_10US static void RemoveCurrentZonesModels();
    SUPPORTED_10US static void RemoveDodgyPedsFromRandomSlots();
    SUPPORTED_10US static void RemoveEntity(CLink<CEntity*> *streamingLink);
    SUPPORTED_10US static void RemoveInappropriatePedModels();
    SUPPORTED_10US static bool RemoveLeastUsedModel(unsigned int StreamingFlags);
    SUPPORTED_10US static bool RemoveLoadedVehicle();
    SUPPORTED_10US static bool RemoveLoadedZoneModel();
    SUPPORTED_10US static void RemoveModel(int Modelindex);
    //! does nothing (NOP)
    SUPPORTED_10US static unsigned int RemoveUnusedModelsInLoadedList();
    SUPPORTED_10US static void RenderEntity(CLink<CEntity*> *streamingLink);
    SUPPORTED_10US static void RequestBigBuildings(CVector const *posn);
    SUPPORTED_10US static void RequestFile(int index, int offset, int size, int imgId, int streamingFlags);
    //! unused
    SUPPORTED_10US static void RequestFilesInChannel(int channelId);
    SUPPORTED_10US static void RequestModel(int dwModelId, int Streamingflags);
    SUPPORTED_10US static void RequestModelStream(int streamNum);
    //! unused
    SUPPORTED_10US static void RequestPlayerSection(int modelIndex, char const *string, int streamingFlags);
    SUPPORTED_10US static void RequestSpecialChar(int slot, char const *Name, int streamingFlags);
    SUPPORTED_10US static void RequestSpecialModel(int slot, char *name, int StreamingFlags);
    SUPPORTED_10US static void RequestTxdModel(int TxdModelID, int Streamingflags);
    SUPPORTED_10US static void RequestVehicleUpgrade(int modelIndex, int StreamingFlags);
    SUPPORTED_10US static void RetryLoadFile(int streamNum);
    SUPPORTED_10US static void Save();
    SUPPORTED_10US static void SetLoadVehiclesInLoadScene(bool bEnable);
    SUPPORTED_10US static void SetMissionDoesntRequireAnim(int slot);
    SUPPORTED_10US static void SetMissionDoesntRequireModel(int modelIndex);
    SUPPORTED_10US static void SetMissionDoesntRequireSpecialChar(int slot);
    SUPPORTED_10US static void SetModelIsDeletable(int modelIndex);
    SUPPORTED_10US static void SetModelTxdIsDeletable(int modelIndex);
    //! unused
    SUPPORTED_10US static void SetSpecialCharIsDeletable(int slot);
    SUPPORTED_10US static void Shutdown();
    SUPPORTED_10US static void StartRenderEntities();
    SUPPORTED_10US static bool StreamAmbulanceAndMedic(bool bStreamForAccident);
    SUPPORTED_10US static void StreamCopModels(int townID);
    SUPPORTED_10US static bool StreamFireEngineAndFireman(bool bStreamForFire);
    SUPPORTED_10US static void StreamOneNewCar();
    //! interiorType : 0 - house , 1 - shop , 2 - office
    SUPPORTED_10US static void StreamPedsForInterior(int interiorType);
    SUPPORTED_10US static void StreamPedsIntoRandomSlots(int *pModelID);
    SUPPORTED_10US static void StreamVehiclesAndPeds();
    SUPPORTED_10US static void StreamVehiclesAndPeds_Always(CVector const *posn);
    SUPPORTED_10US static void StreamZoneModels(CVector const *posn);
    SUPPORTED_10US static void StreamZoneModels_Gangs(CVector const *unused);
    SUPPORTED_10US static void Update();
    //! unused
    SUPPORTED_10US static void UpdateForAnimViewer();
    SUPPORTED_10US static bool WeAreTryingToPhaseVehicleOut(int modelIndex);
};

SUPPORTED_10US extern RwStream &gRwStream;


#include "meta/meta.CStreaming.h"
