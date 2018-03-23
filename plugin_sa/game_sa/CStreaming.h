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

class PLUGIN_API CStreaming {
public:
    static int &ms_currentZoneType;
    static unsigned int &ms_streamingBufferSize;
    static unsigned int &ms_memoryUsed;
    static unsigned int &ms_numModelsRequested;
    static bool &ms_disableStreaming;

    static bool &ms_bLoadingBigModel;
    static unsigned int &ms_memoryAvailable;
    static unsigned int &desiredNumVehiclesLoaded;
    static unsigned int &ms_numPriorityRequests;
    static int &ms_lastCullZone; // initialized to -1 and never used
    static unsigned short &ms_loadedGangs;
    static unsigned int &ms_numPedsLoaded;
    static bool &ms_bIsInitialised;
    static bool &m_bBoatsNeeded;
    static int &copBikeModel;
    static int &copBikerModel;
    static bool &disablePoliceBikes;
    static int *copCarModelByTown;             // copCarModelByTown[4]	
    static int *copModelByTown;                // copModelByTown[4]	
    static int *ambulanceByTown;              // ambulanceByTown[4]
    static int *medicModelsByTown;            // medicModelsByTown[4]
    static int *firetruckModelsByTown;        // firetruckModelsByTown[4]
    static int *firemanModelsByTown;          // firemanModelsByTown[4]
    static int *taxiDriverModelsByTown;        // taxiDriverModelsByTown[7]
    static int *ms_pedsLoaded;                // CStreaming::ms_pedsLoaded[8] 
    static CStreamingInfo *ms_pEndRequestedList;
    static CStreamingInfo *ms_pStartRequestedList;
	static CStreamingInfo *ms_pEndLoadedList;
    static CStreamingInfo *ms_pStartLoadedList;
    static CStreamingInfo *ms_aInfoForModel;    //CStreamingInfo ms_aInfoForModel[26316]
	static CLoadedCarGroup& ms_vehiclesLoaded;
    static CLinkList<RwObject*>& ms_rwObjectInstances; 
    static bool& bLoadVehiclesInLoadScene;
    static bool& m_bHarvesterModelsRequested;
    static bool& m_bStreamHarvesterModelsThisFrame;

    static void ImGonnaUseStreamingMemory();
    static void IHaveUsedStreamingMemory();
    static void MakeSpaceFor(unsigned int size);

    static void DisableCopBikes(bool bDisable);
    static unsigned int GetDefaultMedicModel();
    static unsigned int GetDefaultAmbulanceModel();
    static unsigned int GetDefaultFiremanModel();
    static unsigned int GetDefaultFireEngineModel();
    static unsigned int GetDefaultCopModel();
    static unsigned int GetDefaultCopCarModel(unsigned int arg0);
    static void LoadAllRequestedModels(bool onlyQuickRequests);
    // Used for player clothes
    static void LoadRequestedModels();

    static void RemoveAllUnusedModels();
    static void RemoveModel(int modelIndex);
    static void RequestModel(int modelIndex, int flags);
    static void SetModelIsDeletable(int modelIndex);
    static void SetModelTxdIsDeletable(int modelIndex);
    static void SetMissionDoesntRequireModel(int modelIndex);
    static void LoadScene(CVector const& point);
    static void LoadSceneCollision(CVector const& coord);
	
    static int AddEntity(CEntity* pEntity);
    static int AddImageToList(char const* filename, bool notPlayerFile);
    static void AddModelsToRequestList(CVector const& arg1, unsigned int modelrequestflag);
    static void AddToLoadedVehiclesList(int vehicleid);
    static void DeleteAllRwObjects();
    static void DeleteRwObjectsBehindCamera(int arg1);
    static void DeleteRwObjectsInSectorList(CPtrList& arg1, int arg2, int arg3);
    static bool FinishLoadingLargeFile(char* FileName, int index);
    static void FlushChannels();
    static void FlushRequestList();
    static void ForceLayerToRead(int arg1);
    static int GetDefaultCabDriverModel();
    static int GetNextFileOnCd(int arg1, bool arg2);
    static void Init();
    static void InitImageList();
    static bool IsCarModelNeededInCurrentZone(int modelid);
    static bool IsInitialised();
    static bool IsVeryBusy();
    static void LoadCdDirectory(char const* archivename, int archiveID);
    static void LoadInitialPeds();
    static void LoadInitialWeapons();
    static void LoadZoneVehicle(CVector const& arg1);
    static void PossiblyStreamCarOutAfterCreation(int modelid);
    static void ProcessEntitiesInSectorList(CPtrList& list, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float distance, int modelrequestflag);
    static void ProcessEntitiesInSectorList(CPtrList& list, unsigned int modelrequestflag);
    static bool ProcessLoadingChannel(int channelindex);
    static void ReInit();
    static void ReadIniFile();
    static void ReclassifyLoadedCars();
    static void RemoveBigBuildings();
    static void RemoveBuildingsNotInArea(int area);
    static void RemoveCarModel(int vehicleid);
    static void RemoveCurrentZonesModels();
    static void RemoveInappropriatePedModels();
    static bool RemoveLeastUsedModel(unsigned char flag);
    static bool RemoveLoadedVehicle();
    static void RenderEntity(CLink<CEntity*> *arg1);
    static void RequestBigBuildings(CVector const& arg1);
    static void RequestFile(int index, int offset, int size, int imgid, int modelrequestflag);
    static void RequestFilesInChannel(int channelindex);
    static void RequestModelStream(int streamnum);
    static void RequestSpecialChar(int index, char const* txdname, int modelrequestflag);
    static void RequestSpecialModel(int slot, char const* name, int modelrequestflag);
    static void RequestVehicleUpgrade(int modelid, int modelrequestflag);
    static void RetryLoadFile(int streamnum);
    static void Save();
    static void SetLoadVehiclesInLoadScene(bool bLoadVehiclesInLoadScene);
    static void SetMissionDoesntRequireAnim(int index);
    static void SetMissionDoesntRequireSpecialChar(int index);
    static void Shutdown();
    static void StartRenderEntities();
    static bool StreamAmbulanceAndMedic(bool bStream);
    static void StreamCopModels(int townID);
    static bool StreamFireEngineAndFireman(bool bStream);
    static void StreamOneNewCar();
    static void StreamPedsIntoRandomSlots(int* modelid);
    static void StreamVehiclesAndPeds();
    static void StreamVehiclesAndPeds_Always(CVector const& arg1);
    static void StreamZoneModels();
    static void StreamZoneModels_Gangs();
    static void Update();
    static void UpdateForAnimViewer();
    static void RequestTxd(unsigned int index, unsigned int modelrequestflag);
    static bool HasVehicleUpgradeLoaded(int modelid);
    static void ClearFlagForAll(unsigned int arg1);
    static void RequestAllModels();
    static void RemoveEntity(CLink<CEntity*> *pEntity);
    static bool DeleteLeastUsedEntityRwObject(bool arg1, unsigned char flag);
    static bool DeleteRwObjectsBehindCameraInSectorList(CPtrList& arg1, int arg2);
    static bool DeleteRwObjectsNotInFrustumInSectorList(CPtrList& arg1, int arg2);
    static void RequestPlayerSection(int index, char const* arg2, int modelrequestflag);
    static void PurgeRequestList();
    static void AddLodsToRequestList(CVector const& arg1, unsigned int modelrequestflag);
    static bool ConvertBufferToObject(char* pFileContect, int index, int streamnum);
    static void LoadCdDirectory();
    static void Load();
    static void InstanceLoadedModels(CVector const& arg1);
    static void DeleteRwObjectsAfterDeath(CVector const& arg1);
    static void StreamPedsForInterior(int interior);
    static bool AreAnimsUsedByRequestedModels(int arg1);
    static bool HasModelLoaded(int modelid);
    static bool AreTexturesUsedByRequestedModels(int arg1);
    static void RemoveTexture(int index);
};
