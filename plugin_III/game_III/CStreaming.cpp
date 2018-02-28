/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CStreaming.h"

unsigned int &CStreaming::ms_streamingBufferSize = *(unsigned int *)0x942FB0;
unsigned int &CStreaming::timeBeforeNextLoad = *(unsigned int *)0x6212F8;
bool &CStreaming::ms_bLoadingBigModel = *(bool *)0x95CDB0;
int &CStreaming::ms_channelError = *(int *)0x880DB8;
int &CStreaming::ms_currentPedGrp = *(int *)0x8F2BBC;
int &CStreaming::ms_currentPedLoading = *(int *)0x8F2C74;
bool &CStreaming::ms_disableStreaming = *(bool *)0x95CD6E;
bool &CStreaming::ms_hasLoadedLODs = *(bool *)0x95CD47;
int &CStreaming::ms_imageOffsets = *(int *)0x6E60A0;
unsigned int &CStreaming::ms_imageSize = *(unsigned int *)0x8F1A34;
int &CStreaming::ms_lastImageRead = *(int *)0x880E2C;
int &CStreaming::ms_lastVehicleDeleted = *(int *)0x95CBF8;
unsigned short &CStreaming::ms_loadedGangs = *(unsigned short *)0x95CC60;
unsigned int &CStreaming::ms_memoryAvailable = *(unsigned int *)0x880F8C;
unsigned int &CStreaming::ms_memoryUsed = *(unsigned int *)0x940568;
unsigned int &CStreaming::ms_numModelsRequested = *(unsigned int *)0x8E2C10;
unsigned int &CStreaming::ms_numPriorityRequests = *(unsigned int *)0x8F31C4;
unsigned int &CStreaming::ms_numVehiclesLoaded = *(unsigned int *)0x8F2C80;
int &CStreaming::ms_oldSectorX = *(int *)0x8F2C84;
int &CStreaming::ms_oldSectorY = *(int *)0x8F2C88;
int &CStreaming::ms_vehiclesLoaded = *(int *)0x773560;

CStreamingInfo *CStreaming::ms_aInfoForModel = (CStreamingInfo *)0x6C7088;
CStreamingInfo *CStreaming::ms_endRequestedList = (CStreamingInfo *)0x940738;
CStreamingInfo *CStreaming::ms_startLoadedList = (CStreamingInfo *)0x942F60;
CStreamingInfo *CStreaming::ms_startRequestedList = (CStreamingInfo *)0x8F1B3C;

void *CStreaming::ms_pStreamingBuffer = (void *)0x87F818;
CDirectory **CStreaming::ms_pExtraObjectsDir = (CDirectory **)0x95CB90;

// Converted from cdecl void CStreaming::RequestModel(int modelIndex, int flags) 0x407EA0
void CStreaming::RequestModel(int modelIndex, int flags) {
    plugin::Call<0x407EA0, int, int>(modelIndex, flags);
}

// Converted from cdecl void CStreaming::LoadRequestedModels(void) 0x40A390
void CStreaming::LoadRequestedModels() {
    plugin::Call<0x40A390>();
}

// Converted from cdecl void CStreaming::Init(void) 0x406430
void CStreaming::Init() {
    plugin::Call<0x406430>();
}

// Converted from cdecl void CStreaming::FlushChannels(void) 0x40A610
void CStreaming::FlushChannels() {
    plugin::Call<0x40A610>();
}

// Converted from cdecl void CStreaming::FlushRequestList(void) 0x40A680
void CStreaming::FlushRequestList() {
    plugin::Call<0x40A680>();
}

// Converted from cdecl int CStreaming::GetAvailableVehicleSlot(void) 0x40B160
int CStreaming::GetAvailableVehicleSlot() {
    return plugin::CallAndReturn<int, 0x40B160>();
}

// Converted from cdecl bool CStreaming::IsTxdUsedByRequestedModels(int index) 0x4094C0
bool CStreaming::IsTxdUsedByRequestedModels(int index) {
    return plugin::CallAndReturn<bool, 0x4094C0, int>(index);
}

// Converted from cdecl void CStreaming::LoadAllRequestedModels(bool onlyQuickRequests) 0x40A440
void CStreaming::LoadAllRequestedModels(bool onlyQuickRequests) {
    plugin::Call<0x40A440, bool>(onlyQuickRequests);
}

// Converted from cdecl void CStreaming::RemoveModel(int modelIndex) 0x408830
void CStreaming::RemoveModel(int modelIndex) {
    plugin::Call<0x408830, int>(modelIndex);
}

// Converted from cdecl bool CStreaming::RemoveLeastUsedModel(void) 0x4089B0
bool CStreaming::RemoveLeastUsedModel() {
    return plugin::CallAndReturn<bool, 0x4089B0>();
}

// Converted from cdecl bool CStreaming::RemoveLoadedVehicle(void) 0x40B180
bool CStreaming::RemoveLoadedVehicle() {
    return plugin::CallAndReturn<bool, 0x40B180>();
}

// Converted from cdecl void CStreaming::RemoveAllUnusedModels(void) 0x408940
void CStreaming::RemoveAllUnusedModels() {
    plugin::Call<0x408940>();
}

// Converted from cdecl void CStreaming::RemoveCurrentZonesModels(void) 0x40AD00
void CStreaming::RemoveCurrentZonesModels() {
    plugin::Call<0x40AD00>();
}

// Converted from cdecl void CStreaming::RemoveUnusedModelsInLoadedList(void) 0x4089A0
void CStreaming::RemoveUnusedModelsInLoadedList() {
    plugin::Call<0x4089A0>();
}

// Converted from cdecl void CStreaming::RequestModelStream(int streamnum) 0x40A060
void CStreaming::RequestModelStream(int streamnum) {
    plugin::Call<0x40A060, int>(streamnum);
}

// Converted from cdecl void CStreaming::RequestSpecialChar(int index, char const* txdname, int modelrequestflag) 0x40ADA0
void CStreaming::RequestSpecialChar(int index, char const* txdname, int modelrequestflag) {
    plugin::Call<0x40ADA0, int, char const*, int>(index, txdname, modelrequestflag);
}

// Converted from cdecl void CStreaming::RequestSpecialModel(int slot, char const* name, int modelrequestflag) 0x40A890
void CStreaming::RequestSpecialModel(int slot, char const* name, int modelrequestflag) {
    plugin::Call<0x40A890, int, char const*, int>(slot, name, modelrequestflag);
}

// Converted from cdecl void CStreaming::RequestSubway(void) 0x407FD0
void CStreaming::RequestSubway() {
    plugin::Call<0x407FD0>();
}

// Converted from cdecl void CStreaming::SetMissionDoesntRequireModel(int modelIndex) 0x40A820
void CStreaming::SetMissionDoesntRequireModel(int modelIndex) {
    plugin::Call<0x40A820, int>(modelIndex);
}

// Converted from cdecl void CStreaming::SetMissionDoesntRequireSpecialChar(int index) 0x40ADE0
void CStreaming::SetMissionDoesntRequireSpecialChar(int index) {
    plugin::Call<0x40ADE0, int>(index);
}

// Converted from cdecl void CStreaming::SetModelIsDeletable(int modelIndex) 0x40A790
void CStreaming::SetModelIsDeletable(int modelIndex) {
    plugin::Call<0x40A790, int>(modelIndex);
}

// Converted from cdecl void CStreaming::SetModelTxdIsDeletable(int modelIndex) 0x40A800
void CStreaming::SetModelTxdIsDeletable(int modelIndex) {
    plugin::Call<0x40A800, int>(modelIndex);
}

// Converted from cdecl void CStreaming::Shutdown(void) 0x406C80
void CStreaming::Shutdown() {
    plugin::Call<0x406C80>();
}

// Converted from cdecl void CStreaming::StreamVehiclesAndPeds(void) 0x40AE60
void CStreaming::StreamVehiclesAndPeds() {
    plugin::Call<0x40AE60>();
}

// Converted from cdecl void CStreaming::Update(void) 0x4076C0
void CStreaming::Update() {
    plugin::Call<0x4076C0>();
}

// Converted from cdecl void CStreaming::UpdateMemoryUsed(void) 0x4076B0
void CStreaming::UpdateMemoryUsed() {
    plugin::Call<0x4076B0>();
}

// Converted from cdecl void CStreaming::AddModelsToRequestList(CVector const& point) 0x4078F0
void CStreaming::AddModelsToRequestList(CVector const& point) {
    plugin::Call<0x4078F0, CVector const&>(point);
}

// Converted from cdecl void CStreaming::AddToLoadedVehiclesList(int vehicleId) 0x40B060
void CStreaming::AddToLoadedVehiclesList(int vehicleId) {
    plugin::Call<0x40B060, int>(vehicleId);
}

// Converted from cdecl bool CStreaming::ConvertBufferToObject(char *pFileContect, int modelIndex) 0x409740
bool CStreaming::ConvertBufferToObject(char* pFileContect, int modelIndex) {
    return plugin::CallAndReturn<bool, 0x409740, char*, int>(pFileContect, modelIndex);
}

// Converted from cdecl void CStreaming::DeleteAllRwObjects(void) 0x407390
void CStreaming::DeleteAllRwObjects() {
    plugin::Call<0x407390>();
}

// Converted from cdecl void CStreaming::DeleteFarAwayRwObjects(CVector const& point) 0x407070
void CStreaming::DeleteFarAwayRwObjects(CVector const& point) {
    plugin::Call<0x407070, CVector const&>(point);
}

// Converted from cdecl void CStreaming::DeleteRwObjectsAfterDeath(CVector const& point) 0x407400
void CStreaming::DeleteRwObjectsAfterDeath(CVector const& point) {
    plugin::Call<0x407400, CVector const&>(point);
}

// Converted from cdecl void CStreaming::DeleteRwObjectsBehindCamera(int size) 0x408A60
void CStreaming::DeleteRwObjectsBehindCamera(int size) {
    plugin::Call<0x408A60, int>(size);
}

// Converted from cdecl bool CStreaming::DeleteRwObjectsBehindCameraInSectorList(CPtrList &list, int size) 0x409340
bool CStreaming::DeleteRwObjectsBehindCameraInSectorList(CPtrList& list, int size) {
    return plugin::CallAndReturn<bool, 0x409340, CPtrList&, int>(list, size);
}

// Converted from cdecl void CStreaming::DeleteRwObjectsInOverlapSectorList(CPtrList &list, int, int) 0x4075A0
void CStreaming::DeleteRwObjectsInOverlapSectorList(CPtrList& list, int arg1, int arg2) {
    plugin::Call<0x4075A0, CPtrList&, int, int>(list, arg1, arg2);
}

// Converted from cdecl void CStreaming::DeleteRwObjectsInSectorList(CPtrList &list) 0x407560
void CStreaming::DeleteRwObjectsInSectorList(CPtrList& list) {
    plugin::Call<0x407560, CPtrList&>(list);
}

// Converted from cdecl bool CStreaming::DeleteRwObjectsNotInFrustumInSectorList(CPtrList &list, int size) 0x4093C0
bool CStreaming::DeleteRwObjectsNotInFrustumInSectorList(CPtrList& list, int size) {
    return plugin::CallAndReturn<bool, 0x4093C0, CPtrList&, int>(list, size);
}

// Converted from cdecl bool CStreaming::FinishLoadingLargeFile(char *FileName, int modelIndex) 0x409580
bool CStreaming::FinishLoadingLargeFile(char* FileName, int modelIndex) {
    return plugin::CallAndReturn<bool, 0x409580, char*, int>(FileName, modelIndex);
}

// Converted from cdecl uint CStreaming::GetCdImageOffset(int) 0x409FF0
unsigned int CStreaming::GetCdImageOffset(int arg0) {
    return plugin::CallAndReturn<unsigned int, 0x409FF0, int>(arg0);
}

// Converted from cdecl int CStreaming::GetNextFileOnCd(int, bool) 0x409E50
int CStreaming::GetNextFileOnCd(int arg0, bool arg1) {
    return plugin::CallAndReturn<int, 0x409E50, int, bool>(arg0, arg1);
}

// Converted from cdecl bool CStreaming::HasSpecialCharLoaded(int modelIndex) 0x40ADC0
bool CStreaming::HasSpecialCharLoaded(int modelIndex) {
    return plugin::CallAndReturn<bool, 0x40ADC0, int>(modelIndex);
}

// Converted from cdecl void CStreaming::HaveAllBigBuildingsLoaded(eLevelName levelName) 0x408280
void CStreaming::HaveAllBigBuildingsLoaded(eLevelName levelName) {
    plugin::Call<0x408280, eLevelName>(levelName);
}

// Converted from cdecl void CStreaming::IHaveUsedStreamingMemory(void) 0x409BD0
void CStreaming::IHaveUsedStreamingMemory() {
    plugin::Call<0x409BD0>();
}

// Converted from cdecl void CStreaming::ImGonnaUseStreamingMemory(void) 0x409BC0
void CStreaming::ImGonnaUseStreamingMemory() {
    plugin::Call<0x409BC0>();
}

// Converted from cdecl bool CStreaming::IsObjectInCdImage(int modelIndex) 0x407E70
bool CStreaming::IsObjectInCdImage(int modelIndex) {
    return plugin::CallAndReturn<bool, 0x407E70, int>(modelIndex);
}

// Converted from cdecl void CStreaming::LoadCdDirectory(char const* archivename, int archiveID) 0x406DA0
void CStreaming::LoadCdDirectory(char const* archivename, int archiveID) {
    plugin::Call<0x406DA0, char const*, int>(archivename, archiveID);
}

// Converted from cdecl void CStreaming::LoadCdDirectory(void) 0x406CC0
void CStreaming::LoadCdDirectory() {
    plugin::Call<0x406CC0>();
}

// Converted from cdecl void CStreaming::LoadInitialPeds(void) 0x40AA00
void CStreaming::LoadInitialPeds() {
    plugin::Call<0x40AA00>();
}

// Converted from cdecl void CStreaming::LoadInitialVehicles(void) 0x40ADF0
void CStreaming::LoadInitialVehicles() {
    plugin::Call<0x40ADF0>();
}

// Converted from cdecl void CStreaming::LoadScene(CVector const& point) 0x40A6D0
void CStreaming::LoadScene(CVector const& point) {
    plugin::Call<0x40A6D0, CVector const&>(point);
}

// Converted from cdecl void CStreaming::MakeSpaceFor(int size) 0x409B70
void CStreaming::MakeSpaceFor(int size) {
    plugin::Call<0x409B70, int>(size);
}

// Converted from cdecl void CStreaming::MemoryCardLoad(uchar *, uint) 0x40B250
void CStreaming::MemoryCardLoad(unsigned char* arg0, unsigned int arg1) {
    plugin::Call<0x40B250, unsigned char*, unsigned int>(arg0, arg1);
}

// Converted from cdecl void CStreaming::MemoryCardSave(uchar *, uint *) 0x40B210
void CStreaming::MemoryCardSave(unsigned char* arg0, unsigned int* arg1) {
    plugin::Call<0x40B210, unsigned char*, unsigned int*>(arg0, arg1);
}

// Converted from cdecl void CStreaming::ProcessEntitiesInSectorList(CPtrList &list) 0x407DD0
void CStreaming::ProcessEntitiesInSectorList(CPtrList& list) {
    plugin::Call<0x407DD0, CPtrList&>(list);
}

// Converted from cdecl void CStreaming::ProcessEntitiesInSectorList(CPtrList &list, float x1, float y1, float z1, float x2, float y2, float z2) 0x407C50
void CStreaming::ProcessEntitiesInSectorList(CPtrList& list, float x1, float y1, float z1, float x2, float y2, float z2) {
    plugin::Call<0x407C50, CPtrList&, float, float, float, float, float, float>(list, x1, y1, z1, x2, y2, z2);
}

// Converted from cdecl bool CStreaming::ProcessLoadingChannel(int channelindex) 0x409BE0
bool CStreaming::ProcessLoadingChannel(int channelindex) {
    return plugin::CallAndReturn<bool, 0x409BE0, int>(channelindex);
}

// Converted from cdecl void CStreaming::RemoveBigBuildings(eLevelName levelName) 0x408680
void CStreaming::RemoveBigBuildings(eLevelName levelName) {
    plugin::Call<0x408680, eLevelName>(levelName);
}

// Converted from cdecl void CStreaming::RemoveBuildings(eLevelName levelName) 0x4083D0
void CStreaming::RemoveBuildings(eLevelName levelName) {
    plugin::Call<0x4083D0, eLevelName>(levelName);
}

// Converted from cdecl void CStreaming::RemoveIslandsNotUsed(eLevelName levelName) 0x408780
void CStreaming::RemoveIslandsNotUsed(eLevelName levelName) {
    plugin::Call<0x408780, eLevelName>(levelName);
}

// Converted from cdecl bool CStreaming::RemoveReferencedTxds(int) 0x409450
bool CStreaming::RemoveReferencedTxds(int arg0) {
    return plugin::CallAndReturn<bool, 0x409450, int>(arg0);
}

// Converted from cdecl void CStreaming::RemoveUnusedBigBuildings(eLevelName levelName) 0x408640
void CStreaming::RemoveUnusedBigBuildings(eLevelName levelName) {
    plugin::Call<0x408640, eLevelName>(levelName);
}

// Converted from cdecl void CStreaming::RemoveUnusedBuildings(eLevelName levelName) 0x4083A0
void CStreaming::RemoveUnusedBuildings(eLevelName levelName) {
    plugin::Call<0x4083A0, eLevelName>(levelName);
}

// Converted from cdecl void CStreaming::RequestBigBuildings(eLevelName levelName) 0x408190
void CStreaming::RequestBigBuildings(eLevelName levelName) {
    plugin::Call<0x408190, eLevelName>(levelName);
}

// Converted from cdecl void CStreaming::RequestIslands(eLevelName levelName) 0x408210
void CStreaming::RequestIslands(eLevelName levelName) {
    plugin::Call<0x408210, eLevelName>(levelName);
}

// Converted from cdecl void CStreaming::RetryLoadFile(int streamnum) 0x4077F0
void CStreaming::RetryLoadFile(int streamnum) {
    plugin::Call<0x4077F0, int>(streamnum);
}

// Converted from cdecl void CStreaming::StreamZoneModels(CVector const& point) 0x40AA30
void CStreaming::StreamZoneModels(CVector const& point) {
    plugin::Call<0x40AA30, CVector const&>(point);
}

// Converted from cdecl void DeleteIsland(CEntity *entity) 0x408740
void DeleteIsland(CEntity* entity) {
    plugin::Call<0x408740, CEntity*>(entity);
}
