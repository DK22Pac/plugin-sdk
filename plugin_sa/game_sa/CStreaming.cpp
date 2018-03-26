/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CStreaming.h"

int &CStreaming::ms_currentZoneType = *(int *)0x8E4C20;
unsigned int &CStreaming::ms_streamingBufferSize = *(unsigned int *)0x8E4CA8;
unsigned int &CStreaming::ms_memoryUsed = *(unsigned int *)0x8E4CB4;
unsigned int &CStreaming::ms_numModelsRequested = *(unsigned int *)0x8E4CB8;
bool &CStreaming::ms_disableStreaming = *(bool *)0x9654B0;

bool &CStreaming::ms_bLoadingBigModel = *(bool *)0x8E4A58;
bool &CStreaming::ms_bIsInitialised = *(bool *)0x8E4C00;
bool &CStreaming::m_bBoatsNeeded = *(bool *)0x9654BC;
bool &CStreaming::disablePoliceBikes = *(bool *)0x9654BF;
unsigned int &CStreaming::ms_memoryAvailable = *(unsigned int *)0x8A5A80;
unsigned int &CStreaming::desiredNumVehiclesLoaded = *(unsigned int *)0x8A5A84;
unsigned int &CStreaming::ms_numPriorityRequests = *(unsigned int *)0x8E4BA0;
int &CStreaming::ms_lastCullZone = *(int *)0x8E4BA4;
unsigned short &CStreaming::ms_loadedGangs = *(unsigned short *)0x8E4BAC;
unsigned int &CStreaming::ms_numPedsLoaded = *(unsigned int *)0x8E4BB0;
int &CStreaming::copBikeModel = *(int *)0x8A5A9C;
int &CStreaming::copBikerModel = *(int *)0x8A5AB0;

int *CStreaming::copCarModelByTown = (int *)0x8A5A8C;
int *CStreaming::copModelByTown = (int *)0x8A5AA0;
int *CStreaming::ambulanceByTown = (int *)0x8A5AB4;
int *CStreaming::medicModelsByTown = (int *)0x8A5AC4;
int *CStreaming::firetruckModelsByTown = (int *)0x8A5AD4;
int *CStreaming::firemanModelsByTown = (int *)0x8A5AE4;
int *CStreaming::taxiDriverModelsByTown = (int *)0x8A5AF4;
int *CStreaming::ms_pedsLoaded = (int *)0x8E4C00;
CStreamingInfo *CStreaming::ms_pEndRequestedList = (CStreamingInfo *)0x8E4C54;
CStreamingInfo *CStreaming::ms_pStartRequestedList = (CStreamingInfo *)0x8E4C58;
CStreamingInfo *CStreaming::ms_pEndLoadedList = (CStreamingInfo *)0x8E4C5C;
CStreamingInfo *CStreaming::ms_pStartLoadedList = (CStreamingInfo *)0x8E4C60;
CLoadedCarGroup &CStreaming::ms_vehiclesLoaded = *(CLoadedCarGroup*)0x8E4C24;
CStreamingInfo *CStreaming::ms_aInfoForModel = (CStreamingInfo *)0x8E4CC0;
CLinkList<RwObject*>& CStreaming::ms_rwObjectInstances = *(CLinkList<RwObject*>*)0x9654F0;
bool& CStreaming::bLoadVehiclesInLoadScene = *(bool*)0x8A5A88;
bool& CStreaming::m_bHarvesterModelsRequested = *(bool*)0x8E4B9C;
bool& CStreaming::m_bStreamHarvesterModelsThisFrame = *(bool*)0x8E4B9D;


void CStreaming::ImGonnaUseStreamingMemory()
{
	((void (__cdecl *)())0x407BE0)();
}

void CStreaming::IHaveUsedStreamingMemory()
{
	((void (__cdecl *)())0x407BF0)();
}

void CStreaming::MakeSpaceFor(unsigned int size)
{
	((void (__cdecl *)(unsigned int))0x40E120)(size);
}

void CStreaming::DisableCopBikes(bool bDisable)
{
    ((void(__cdecl *)(bool))0x407D10)(bDisable);
}

unsigned int CStreaming::GetDefaultMedicModel()
{
    return ((unsigned int(__cdecl *)())0x407D20)();
}

unsigned int CStreaming::GetDefaultAmbulanceModel()
{
    return ((unsigned int(__cdecl *)())0x407D30)();
}

unsigned int CStreaming::GetDefaultFiremanModel()
{
    return ((unsigned int(__cdecl *)())0x407D40)();
}

unsigned int CStreaming::GetDefaultFireEngineModel()
{
    return ((unsigned int(__cdecl *)())0x407DC0)();
}

unsigned int CStreaming::GetDefaultCopModel()
{
    return ((unsigned int(__cdecl *)())0x407C00)();
}

unsigned int CStreaming::GetDefaultCopCarModel(unsigned int arg0)
{
    return ((unsigned int(__cdecl *)(unsigned int))0x407C50)(arg0);
}

void CStreaming::LoadAllRequestedModels(bool onlyQuickRequests)
{
    ((void(__cdecl *)(bool))0x40EA10)(onlyQuickRequests);
}

// Used for loading player clothes
void CStreaming::LoadRequestedModels()
{
    ((void(__cdecl *)())0x40E3A0)();
}

void CStreaming::RemoveAllUnusedModels()
{
    ((void(__cdecl *)())0x40CF80)();
}

void CStreaming::RemoveModel(int modelIndex)
{
    ((void(__cdecl *)(int))0x4089A0)(modelIndex);
}

void CStreaming::RequestModel(int modelIndex, int flags)
{
    ((void(__cdecl *)(int, int))0x4087E0)(modelIndex, flags);
}

void CStreaming::SetModelIsDeletable(int modelIndex)
{
    ((void(__cdecl *)(int))0x409C10)(modelIndex);
}

void CStreaming::SetModelTxdIsDeletable(int modelIndex) {
    ((void(__cdecl *)(int))0x409C70)(modelIndex);
}

void CStreaming::SetMissionDoesntRequireModel(int modelIndex)
{
    ((void(__cdecl *)(int))0x409C90)(modelIndex);
}

void CStreaming::LoadScene(CVector const& point)
{
    ((void(__cdecl *)(CVector const&))0x40ED80)(point);
}

void CStreaming::LoadSceneCollision(CVector const& coord)
{
    ((void(__cdecl *)(CVector const&))0x40ED80)(coord);
}

// Converted from cdecl int CStreaming::AddEntity(CEntity *pEntity) 0x409650
int CStreaming::AddEntity(CEntity* pEntity) {
    return plugin::CallAndReturn<int, 0x409650, CEntity*>(pEntity);
}

// Converted from cdecl int CStreaming::AddImageToList(char const* filename, bool notPlayerFile) 0x407610
int CStreaming::AddImageToList(char const* filename, bool notPlayerFile) {
    return plugin::CallAndReturn<int, 0x407610, char const*, bool>(filename, notPlayerFile);
}

// Converted from cdecl void CStreaming::AddModelsToRequestList(CVector const &arg1, uint modelrequestflag) 0x40D3F0
void CStreaming::AddModelsToRequestList(CVector const& arg1, unsigned int modelrequestflag) {
    plugin::Call<0x40D3F0, CVector const&, unsigned int>(arg1, modelrequestflag);
}

// Converted from cdecl void CStreaming::AddToLoadedVehiclesList(int vehicleid) 0x408000
void CStreaming::AddToLoadedVehiclesList(int vehicleid) {
    plugin::Call<0x408000, int>(vehicleid);
}

// Converted from cdecl void CStreaming::DeleteAllRwObjects(void) 0x4090A0
void CStreaming::DeleteAllRwObjects() {
    plugin::Call<0x4090A0>();
}

// Converted from cdecl void CStreaming::DeleteRwObjectsBehindCamera(int arg1) 0x40D7C0
void CStreaming::DeleteRwObjectsBehindCamera(int arg1) {
    plugin::Call<0x40D7C0, int>(arg1);
}

// Converted from cdecl void CStreaming::DeleteRwObjectsInSectorList(CPtrList &arg1, int arg2, int arg3) 0x407A70
void CStreaming::DeleteRwObjectsInSectorList(CPtrList& arg1, int arg2, int arg3) {
    plugin::Call<0x407A70, CPtrList&, int, int>(arg1, arg2, arg3);
}

// Converted from cdecl bool CStreaming::FinishLoadingLargeFile(char* FileName,int index) 0x408CB0
bool CStreaming::FinishLoadingLargeFile(char* FileName, int index) {
    return plugin::CallAndReturn<bool, 0x408CB0, char*, int>(FileName, index);
}

// Converted from cdecl void CStreaming::FlushChannels(void) 0x40E460
void CStreaming::FlushChannels() {
    plugin::Call<0x40E460>();
}

// Converted from cdecl void CStreaming::FlushRequestList(void) 0x40E4E0
void CStreaming::FlushRequestList() {
    plugin::Call<0x40E4E0>();
}

// Converted from cdecl void CStreaming::ForceLayerToRead(int arg1) 0x407A10
void CStreaming::ForceLayerToRead(int arg1) {
    plugin::Call<0x407A10, int>(arg1);
}

// Converted from cdecl int CStreaming::GetDefaultCabDriverModel(void) 0x407D50
int CStreaming::GetDefaultCabDriverModel() {
    return plugin::CallAndReturn<int, 0x407D50>();
}

// Converted from cdecl int CStreaming::GetNextFileOnCd(int arg1,bool arg2) 0x408E20
int CStreaming::GetNextFileOnCd(int arg1, bool arg2) {
    return plugin::CallAndReturn<int, 0x408E20, int, bool>(arg1, arg2);
}

// Converted from cdecl void CStreaming::Init(void) 0x5B8AD0
void CStreaming::Init() {
    plugin::Call<0x5B8AD0>();
}

// Converted from cdecl void CStreaming::InitImageList(void) 0x4083C0
void CStreaming::InitImageList() {
    plugin::Call<0x4083C0>();
}

// Converted from cdecl bool CStreaming::IsCarModelNeededInCurrentZone(int modelid) 0x407DD0
bool CStreaming::IsCarModelNeededInCurrentZone(int modelid) {
    return plugin::CallAndReturn<bool, 0x407DD0, int>(modelid);
}

// Converted from cdecl bool CStreaming::IsInitialised(void) 0x407600
bool CStreaming::IsInitialised() {
    return plugin::CallAndReturn<bool, 0x407600>();
}

// Converted from cdecl bool CStreaming::IsVeryBusy(void) 0x4076A0
bool CStreaming::IsVeryBusy() {
    return plugin::CallAndReturn<bool, 0x4076A0>();
}

// Converted from cdecl void CStreaming::LoadCdDirectory(char const *archivename, int archiveID) 0x5B6170
void CStreaming::LoadCdDirectory(char const* archivename, int archiveID) {
    plugin::Call<0x5B6170, char const*, int>(archivename, archiveID);
}

// Converted from cdecl void CStreaming::LoadInitialPeds(void) 0x40D3D0
void CStreaming::LoadInitialPeds() {
    plugin::Call<0x40D3D0>();
}

// Converted from cdecl void CStreaming::LoadInitialWeapons(void) 0x40A120
void CStreaming::LoadInitialWeapons() {
    plugin::Call<0x40A120>();
}

// Converted from cdecl void CStreaming::LoadZoneVehicle(CVector const& arg1) 0x40B4B0
void CStreaming::LoadZoneVehicle(CVector const& arg1) {
    plugin::Call<0x40B4B0, CVector const&>(arg1);
}

// Converted from cdecl void CStreaming::PossiblyStreamCarOutAfterCreation(int modelid) 0x40BA70
void CStreaming::PossiblyStreamCarOutAfterCreation(int modelid) {
    plugin::Call<0x40BA70, int>(modelid);
}

// Converted from cdecl void CStreaming::ProcessEntitiesInSectorList(CPtrList &list, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float distance, int modelrequestflag) 0x40C270
void CStreaming::ProcessEntitiesInSectorList(CPtrList& list, float arg2, float arg3, float arg4, float arg5, float arg6, float arg7, float distance, int modelrequestflag) {
    plugin::Call<0x40C270, CPtrList&, float, float, float, float, float, float, float, int>(list, arg2, arg3, arg4, arg5, arg6, arg7, distance, modelrequestflag);
}

// Converted from cdecl void CStreaming::ProcessEntitiesInSectorList(CPtrList &list ,uint modelrequestflag) 0x40C450
void CStreaming::ProcessEntitiesInSectorList(CPtrList& list, unsigned int modelrequestflag) {
    plugin::Call<0x40C450, CPtrList&, unsigned int>(list, modelrequestflag);
}

// Converted from cdecl bool CStreaming::ProcessLoadingChannel(int channelindex) 0x40E170
bool CStreaming::ProcessLoadingChannel(int channelindex) {
    return plugin::CallAndReturn<bool, 0x40E170, int>(channelindex);
}

// Converted from cdecl void CStreaming::ReInit(void) 0x40E560
void CStreaming::ReInit() {
    plugin::Call<0x40E560>();
}

// Converted from cdecl void CStreaming::ReadIniFile(void) 0x5BCCD0
void CStreaming::ReadIniFile() {
    plugin::Call<0x5BCCD0>();
}

// Converted from cdecl void CStreaming::ReclassifyLoadedCars(void) 0x40AFA0
void CStreaming::ReclassifyLoadedCars() {
    plugin::Call<0x40AFA0>();
}

// Converted from cdecl void CStreaming::RemoveBigBuildings(void) 0x4093B0
void CStreaming::RemoveBigBuildings() {
    plugin::Call<0x4093B0>();
}

// Converted from cdecl void CStreaming::RemoveBuildingsNotInArea(int area) 0x4094B0
void CStreaming::RemoveBuildingsNotInArea(int area) {
    plugin::Call<0x4094B0, int>(area);
}

// Converted from cdecl void CStreaming::RemoveCarModel(int vehicleid) 0x4080F0
void CStreaming::RemoveCarModel(int vehicleid) {
    plugin::Call<0x4080F0, int>(vehicleid);
}

// Converted from cdecl void CStreaming::RemoveCurrentZonesModels(void) 0x40B080
void CStreaming::RemoveCurrentZonesModels() {
    plugin::Call<0x40B080>();
}

// Converted from cdecl void CStreaming::RemoveInappropriatePedModels(void) 0x40B3A0
void CStreaming::RemoveInappropriatePedModels() {
    plugin::Call<0x40B3A0>();
}

// Converted from cdecl bool CStreaming::RemoveLeastUsedModel(uchar flag) 0x40CFD0
bool CStreaming::RemoveLeastUsedModel(unsigned char flag) {
    return plugin::CallAndReturn<bool, 0x40CFD0, unsigned char>(flag);
}

// Converted from cdecl bool CStreaming::RemoveLoadedVehicle(void) 0x40C020
bool CStreaming::RemoveLoadedVehicle() {
    return plugin::CallAndReturn<bool, 0x40C020>();
}

// Converted from cdecl void CStreaming::RenderEntity(CLink<CEntity *> *arg1) 0x4096D0
void CStreaming::RenderEntity(CLink<CEntity*> *arg1) {
    plugin::Call<0x4096D0, CLink<CEntity*>*>(arg1);
}

// Converted from cdecl void CStreaming::RequestBigBuildings(CVector const &arg1) 0x409430
void CStreaming::RequestBigBuildings(CVector const& arg1) {
    plugin::Call<0x409430, CVector const&>(arg1);
}

// Converted from cdecl void CStreaming::RequestFile(int index, int offset, int size, int imgid, int modelrequestflag) 0x40A080
void CStreaming::RequestFile(int index, int offset, int size, int imgid, int modelrequestflag) {
    plugin::Call<0x40A080, int, int, int, int, int>(index, offset, size, imgid, modelrequestflag);
}

// Converted from cdecl void CStreaming::RequestFilesInChannel(int channelindex) 0x409050
void CStreaming::RequestFilesInChannel(int channelindex) {
    plugin::Call<0x409050, int>(channelindex);
}

// Converted from cdecl void CStreaming::RequestModelStream(int streamnum) 0x40CBA0
void CStreaming::RequestModelStream(int streamnum) {
    plugin::Call<0x40CBA0, int>(streamnum);
}

// Converted from cdecl void CStreaming::RequestSpecialChar(int index,char const *txdname,int modelrequestflag) 0x40B450
void CStreaming::RequestSpecialChar(int index, char const* txdname, int modelrequestflag) {
    plugin::Call<0x40B450, int, char const*, int>(index, txdname, modelrequestflag);
}

// Converted from cdecl void CStreaming::RequestSpecialModel(int slot,char const *name, int modelrequestflag) 0x409D10
void CStreaming::RequestSpecialModel(int slot, char const* name, int modelrequestflag) {
    plugin::Call<0x409D10, int, char const*, int>(slot, name, modelrequestflag);
}

// Converted from cdecl void CStreaming::RequestVehicleUpgrade(int modelid, int modelrequestflag) 0x408C70
void CStreaming::RequestVehicleUpgrade(int modelid, int modelrequestflag) {
    plugin::Call<0x408C70, int, int>(modelid, modelrequestflag);
}

// Converted from cdecl void CStreaming::RetryLoadFile(int streamnum) 0x4076C0
void CStreaming::RetryLoadFile(int streamnum) {
    plugin::Call<0x4076C0, int>(streamnum);
}

// Converted from cdecl void CStreaming::Save(void) 0x5D29A0
void CStreaming::Save() {
    plugin::Call<0x5D29A0>();
}

// Converted from cdecl void CStreaming::SetLoadVehiclesInLoadScene(bool bLoadVehiclesInLoadScene) 0x407A30
void CStreaming::SetLoadVehiclesInLoadScene(bool bLoadVehiclesInLoadScene) {
    plugin::Call<0x407A30, bool>(bLoadVehiclesInLoadScene);
}

// Converted from cdecl void CStreaming::SetMissionDoesntRequireAnim(int index) 0x48B570
void CStreaming::SetMissionDoesntRequireAnim(int index) {
    plugin::Call<0x48B570, int>(index);
}

// Converted from cdecl void CStreaming::SetMissionDoesntRequireSpecialChar(int index) 0x40B490
void CStreaming::SetMissionDoesntRequireSpecialChar(int index) {
    plugin::Call<0x40B490, int>(index);
}

// Converted from cdecl void CStreaming::Shutdown(void) 0x4084B0
void CStreaming::Shutdown() {
    plugin::Call<0x4084B0>();
}

// Converted from cdecl void CStreaming::StartRenderEntities(void) 0x4096C0
void CStreaming::StartRenderEntities() {
    plugin::Call<0x4096C0>();
}

// Converted from cdecl bool CStreaming::StreamAmbulanceAndMedic(bool bStream) 0x40A2A0
bool CStreaming::StreamAmbulanceAndMedic(bool bStream) {
    return plugin::CallAndReturn<bool, 0x40A2A0, bool>(bStream);
}

// Converted from cdecl void CStreaming::StreamCopModels(int townID) 0x40A150
void CStreaming::StreamCopModels(int townID) {
    plugin::Call<0x40A150, int>(townID);
}

// Converted from cdecl bool CStreaming::StreamFireEngineAndFireman(bool bStream) 0x40A400
bool CStreaming::StreamFireEngineAndFireman(bool bStream) {
    return plugin::CallAndReturn<bool, 0x40A400, bool>(bStream);
}

// Converted from cdecl void CStreaming::StreamOneNewCar(void) 0x40B4F0
void CStreaming::StreamOneNewCar() {
    plugin::Call<0x40B4F0>();
}

// Converted from cdecl void CStreaming::StreamPedsIntoRandomSlots(int *modelid) 0x40BDA0
void CStreaming::StreamPedsIntoRandomSlots(int* modelid) {
    plugin::Call<0x40BDA0, int*>(modelid);
}

// Converted from cdecl void CStreaming::StreamVehiclesAndPeds(void) 0x40B700
void CStreaming::StreamVehiclesAndPeds() {
    plugin::Call<0x40B700>();
}

// Converted from cdecl void CStreaming::StreamVehiclesAndPeds_Always(CVector const &arg1) 0x40B650
void CStreaming::StreamVehiclesAndPeds_Always(CVector const& arg1) {
    plugin::Call<0x40B650, CVector const&>(arg1);
}

// Converted from cdecl void CStreaming::StreamZoneModels(void) 0x40A560
void CStreaming::StreamZoneModels() {
    plugin::Call<0x40A560>();
}

// Converted from cdecl void CStreaming::StreamZoneModels_Gangs(void) 0x40AA10
void CStreaming::StreamZoneModels_Gangs() {
    plugin::Call<0x40AA10>();
}

// Converted from cdecl void CStreaming::Update(void) 0x40E670
void CStreaming::Update() {
    plugin::Call<0x40E670>();
}

// Converted from cdecl void CStreaming::UpdateForAnimViewer(void) 0x40E960
void CStreaming::UpdateForAnimViewer() {
    plugin::Call<0x40E960>();
}

// Converted from cdecl void CStreaming::RequestTxd(uint index,uint modelrequestflag) 0x407100
void CStreaming::RequestTxd(unsigned int index, unsigned int modelrequestflag) {
    plugin::Call<0x407100, unsigned int, unsigned int>(index, modelrequestflag);
}

// Converted from cdecl bool CStreaming::HasVehicleUpgradeLoaded(int modelid) 0x407820
bool CStreaming::HasVehicleUpgradeLoaded(int modelid) {
    return plugin::CallAndReturn<bool, 0x407820, int>(modelid);
}

// Converted from cdecl void CStreaming::ClearFlagForAll(uint arg1) 0x407A40
void CStreaming::ClearFlagForAll(unsigned int arg1) {
    plugin::Call<0x407A40, unsigned int>(arg1);
}

// Converted from cdecl void CStreaming::RequestAllModels(void) 0x4095C0
void CStreaming::RequestAllModels() {
    plugin::Call<0x4095C0>();
}

// Converted from cdecl void CStreaming::RemoveEntity(CLink<CEntity *> *pEntity) 0x409710
void CStreaming::RemoveEntity(CLink<CEntity*> *pEntity) {
    plugin::Call<0x409710, CLink<CEntity*>*>(pEntity);
}

// Converted from cdecl bool CStreaming::DeleteLeastUsedEntityRwObject(bool arg1,uchar flag) 0x409760
bool CStreaming::DeleteLeastUsedEntityRwObject(bool arg1, unsigned char flag) {
    return plugin::CallAndReturn<bool, 0x409760, bool, unsigned char>(arg1, flag);
}

// Converted from cdecl bool CStreaming::DeleteRwObjectsBehindCameraInSectorList(CPtrList &arg1, int arg2) 0x409940
bool CStreaming::DeleteRwObjectsBehindCameraInSectorList(CPtrList& arg1, int arg2) {
    return plugin::CallAndReturn<bool, 0x409940, CPtrList&, int>(arg1, arg2);
}

// Converted from cdecl bool CStreaming::DeleteRwObjectsNotInFrustumInSectorList(CPtrList &arg1, int arg2) 0x4099E0
bool CStreaming::DeleteRwObjectsNotInFrustumInSectorList(CPtrList& arg1, int arg2) {
    return plugin::CallAndReturn<bool, 0x4099E0, CPtrList&, int>(arg1, arg2);
}

// Converted from cdecl void CStreaming::RequestPlayerSection(int index, char const *arg2,int modelrequestflag) 0x409FF0
void CStreaming::RequestPlayerSection(int index, char const* arg2, int modelrequestflag) {
    plugin::Call<0x409FF0, int, char const*, int>(index, arg2, modelrequestflag);
}

// Converted from cdecl void CStreaming::PurgeRequestList(void) 0x40C1E0
void CStreaming::PurgeRequestList() {
    plugin::Call<0x40C1E0>();
}

// Converted from cdecl void CStreaming::AddLodsToRequestList(CVector const &arg1, uint modelrequestflag) 0x40C520
void CStreaming::AddLodsToRequestList(CVector const& arg1, unsigned int modelrequestflag) {
    plugin::Call<0x40C520, CVector const&, unsigned int>(arg1, modelrequestflag);
}

// Converted from cdecl bool CStreaming::ConvertBufferToObject(char *pFileContect,int index, int streamnum) 0x40C6B0
bool CStreaming::ConvertBufferToObject(char* pFileContect, int index, int streamnum) {
    return plugin::CallAndReturn<bool, 0x40C6B0, char*, int, int>(pFileContect, index, streamnum);
}

// Converted from cdecl void CStreaming::LoadCdDirectory(void) 0x5B82C0 // load all .img except player.img
void CStreaming::LoadCdDirectory() {
    plugin::Call<0x5B82C0>();
}

// Converted from cdecl void CStreaming::Load(void) 0x5D29E0
void CStreaming::Load() {
    plugin::Call<0x5D29E0>();
}

// Converted from cdecl void CStreaming::InstanceLoadedModels(CVector const &arg1) 0x4084F0
void CStreaming::InstanceLoadedModels(CVector const& arg1) {
    plugin::Call<0x4084F0, CVector const&>(arg1);
}

// Converted from cdecl void CStreaming::DeleteRwObjectsAfterDeath(CVector const &arg1) 0x409210
void CStreaming::DeleteRwObjectsAfterDeath(CVector const& arg1) {
    plugin::Call<0x409210, CVector const&>(arg1);
}

// Converted from cdecl void CStreaming::StreamPedsForInterior(int interior) 0x40BBB0
void CStreaming::StreamPedsForInterior(int interior) {
    plugin::Call<0x40BBB0, int>(interior);
}

// Converted from cdecl bool CStreaming::AreAnimsUsedByRequestedModels(int arg1) 0x407AD0
bool CStreaming::AreAnimsUsedByRequestedModels(int arg1) {
    return plugin::CallAndReturn<bool, 0x407AD0, int>(arg1);
}

// Converted from cdecl bool CStreaming::HasModelLoaded(int modelid) 0x407800
bool CStreaming::HasModelLoaded(int modelid) {
    return plugin::CallAndReturn<bool, 0x407800, int>(modelid);
}

// Converted from cdecl bool CStreaming::AreTexturesUsedByRequestedModels(int arg1) 0x409A90
bool CStreaming::AreTexturesUsedByRequestedModels(int arg1) {
    return plugin::CallAndReturn<bool, 0x409A90, int>(arg1);
}

// Converted from cdecl void CStreaming::RemoveTexture(int index) 0x40C180
void CStreaming::RemoveTexture(int index) {
    plugin::Call<0x40C180, int>(index);
}
