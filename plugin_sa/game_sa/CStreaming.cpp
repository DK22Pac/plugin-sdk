/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CStreaming.h"

PLUGIN_SOURCE_FILE

unsigned int &CStreaming::ms_memoryAvailable = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8A5A80, 0, 0, 0, 0, 0));
unsigned int &CStreaming::desiredNumVehiclesLoaded = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8A5A84, 0, 0, 0, 0, 0));
bool &CStreaming::ms_bLoadVehiclesInLoadScene = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x8A5A88, 0, 0, 0, 0, 0));
int *CStreaming::ms_aDefaultCopCarModel = reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8A5A8C, 0, 0, 0, 0, 0));
int &CStreaming::ms_DefaultCopBikeModel = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8A5A9C, 0, 0, 0, 0, 0));
int *CStreaming::ms_aDefaultCopModel = reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8A5AA0, 0, 0, 0, 0, 0));
int &CStreaming::ms_DefaultCopBikerModel = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8A5AB0, 0, 0, 0, 0, 0));
signed int *CStreaming::ms_aDefaultAmbulanceModel = reinterpret_cast<signed int *>(GLOBAL_ADDRESS_BY_VERSION(0x8A5AB4, 0, 0, 0, 0, 0));
signed int *CStreaming::ms_aDefaultMedicModel = reinterpret_cast<signed int *>(GLOBAL_ADDRESS_BY_VERSION(0x8A5AC4, 0, 0, 0, 0, 0));
signed int *CStreaming::ms_aDefaultFireEngineModel = reinterpret_cast<signed int *>(GLOBAL_ADDRESS_BY_VERSION(0x8A5AD4, 0, 0, 0, 0, 0));
signed int *CStreaming::ms_aDefaultFiremanModel = reinterpret_cast<signed int *>(GLOBAL_ADDRESS_BY_VERSION(0x8A5AE4, 0, 0, 0, 0, 0));
signed int *CStreaming::ms_aDefaultCabDriverModel = reinterpret_cast<signed int *>(GLOBAL_ADDRESS_BY_VERSION(0x8A5AF4, 0, 0, 0, 0, 0));
CDirectory *&CStreaming::ms_pExtraObjectsDir = *reinterpret_cast<CDirectory **>(GLOBAL_ADDRESS_BY_VERSION(0x8E48D0, 0, 0, 0, 0, 0));
tStreamingFileDesc *CStreaming::ms_files = reinterpret_cast<tStreamingFileDesc *>(GLOBAL_ADDRESS_BY_VERSION(0x8E48D8, 0, 0, 0, 0, 0));
bool &CStreaming::ms_bLoadingBigModel = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x8E4A58, 0, 0, 0, 0, 0));
tStreamingChannel *CStreaming::ms_channel = reinterpret_cast<tStreamingChannel *>(GLOBAL_ADDRESS_BY_VERSION(0x8E4A60, 0, 0, 0, 0, 0));
signed int &CStreaming::ms_channelError = *reinterpret_cast<signed int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E4B90, 0, 0, 0, 0, 0));
bool &CStreaming::m_bHarvesterModelsRequested = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x8E4B9C, 0, 0, 0, 0, 0));
bool &CStreaming::m_bStreamHarvesterModelsThisFrame = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x8E4B9D, 0, 0, 0, 0, 0));
unsigned int &CStreaming::ms_numPriorityRequests = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E4BA0, 0, 0, 0, 0, 0));
int &CStreaming::ms_lastCullZone = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E4BA4, 0, 0, 0, 0, 0));
unsigned short &CStreaming::ms_loadedGangCars = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0x8E4BA8, 0, 0, 0, 0, 0));
unsigned short &CStreaming::ms_loadedGangs = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0x8E4BAC, 0, 0, 0, 0, 0));
unsigned int &CStreaming::ms_numPedsLoaded = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E4BB0, 0, 0, 0, 0, 0));
unsigned int **CStreaming::ms_pedsLoaded = reinterpret_cast<unsigned int **>(GLOBAL_ADDRESS_BY_VERSION(0x8E4C00, 0, 0, 0, 0, 0));
int &CStreaming::ms_currentZoneType = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E4C20, 0, 0, 0, 0, 0));
CLoadedCarGroup &CStreaming::ms_vehiclesLoaded = *reinterpret_cast<CLoadedCarGroup *>(GLOBAL_ADDRESS_BY_VERSION(0x8E4C24, 0, 0, 0, 0, 0));
CStreamingInfo *&CStreaming::ms_pEndRequestedList = *reinterpret_cast<CStreamingInfo **>(GLOBAL_ADDRESS_BY_VERSION(0x8E4C54, 0, 0, 0, 0, 0));
CStreamingInfo *&CStreaming::ms_pStartRequestedList = *reinterpret_cast<CStreamingInfo **>(GLOBAL_ADDRESS_BY_VERSION(0x8E4C58, 0, 0, 0, 0, 0));
CStreamingInfo *&CStreaming::ms_pEndLoadedList = *reinterpret_cast<CStreamingInfo **>(GLOBAL_ADDRESS_BY_VERSION(0x8E4C5C, 0, 0, 0, 0, 0));
CStreamingInfo *&CStreaming::ms_startLoadedList = *reinterpret_cast<CStreamingInfo **>(GLOBAL_ADDRESS_BY_VERSION(0x8E4C60, 0, 0, 0, 0, 0));
int &CStreaming::ms_lastImageRead = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E4C64, 0, 0, 0, 0, 0));
signed int *CStreaming::ms_imageOffsets = reinterpret_cast<signed int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E4C8C, 0, 0, 0, 0, 0));
bool &CStreaming::ms_bEnableRequestListPurge = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x8E4CA4, 0, 0, 0, 0, 0));
unsigned int &CStreaming::ms_streamingBufferSize = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E4CA8, 0, 0, 0, 0, 0));
char *&CStreaming::ms_pStreamingBuffer = *reinterpret_cast<char **>(GLOBAL_ADDRESS_BY_VERSION(0x8E4CAC, 0, 0, 0, 0, 0));
unsigned int &CStreaming::ms_memoryUsed = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E4CB4, 0, 0, 0, 0, 0));
unsigned int &CStreaming::ms_numModelsRequested = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E4CB8, 0, 0, 0, 0, 0));
CStreamingInfo *CStreaming::ms_aInfoForModel = reinterpret_cast<CStreamingInfo *>(GLOBAL_ADDRESS_BY_VERSION(0x8E4CC0, 0, 0, 0, 0, 0));
bool &CStreaming::ms_disableStreaming = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x9654B0, 0, 0, 0, 0, 0));
int &CStreaming::ms_bIsInitialised = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x9654B8, 0, 0, 0, 0, 0));
bool &CStreaming::m_bBoatsNeeded = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x9654BC, 0, 0, 0, 0, 0));
bool &CStreaming::m_bLoadingScene = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x9654BD, 0, 0, 0, 0, 0));
bool &CStreaming::m_bCopBikeLoaded = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x9654BE, 0, 0, 0, 0, 0));
bool &CStreaming::m_bDisableCopBikes = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x9654BF, 0, 0, 0, 0, 0));
CLinkList<CEntity*> &CStreaming::ms_rwObjectInstances = *reinterpret_cast<CLinkList<CEntity*> *>(GLOBAL_ADDRESS_BY_VERSION(0x9654F0, 0, 0, 0, 0, 0));
RwStream &gRwStream = *reinterpret_cast<RwStream *>(GLOBAL_ADDRESS_BY_VERSION(0x8E48AC, 0, 0, 0, 0, 0));

int addrof(CStreaming::AddEntity) = ADDRESS_BY_VERSION(0x409650, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::AddEntity) = GLOBAL_ADDRESS_BY_VERSION(0x409650, 0, 0, 0, 0, 0);

void *CStreaming::AddEntity(CEntity *a2) {
    return plugin::CallAndReturnDynGlobal<void *, CEntity *>(gaddrof(CStreaming::AddEntity), a2);
}

int addrof(CStreaming::AddImageToList) = ADDRESS_BY_VERSION(0x407610, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::AddImageToList) = GLOBAL_ADDRESS_BY_VERSION(0x407610, 0, 0, 0, 0, 0);

int CStreaming::AddImageToList(char const *lpFileName, bool bNotPlayerImg) {
    return plugin::CallAndReturnDynGlobal<int, char const *, bool>(gaddrof(CStreaming::AddImageToList), lpFileName, bNotPlayerImg);
}

int addrof(CStreaming::AddLodsToRequestList) = ADDRESS_BY_VERSION(0x40C520, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::AddLodsToRequestList) = GLOBAL_ADDRESS_BY_VERSION(0x40C520, 0, 0, 0, 0, 0);

void CStreaming::AddLodsToRequestList(CVector const *Posn, unsigned int Streamingflags) {
    plugin::CallDynGlobal<CVector const *, unsigned int>(gaddrof(CStreaming::AddLodsToRequestList), Posn, Streamingflags);
}

int addrof(CStreaming::AddModelsToRequestList) = ADDRESS_BY_VERSION(0x40D3F0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::AddModelsToRequestList) = GLOBAL_ADDRESS_BY_VERSION(0x40D3F0, 0, 0, 0, 0, 0);

void CStreaming::AddModelsToRequestList(CVector const *posn, unsigned int StreamingFlags) {
    plugin::CallDynGlobal<CVector const *, unsigned int>(gaddrof(CStreaming::AddModelsToRequestList), posn, StreamingFlags);
}

int addrof(CStreaming::AddToLoadedVehiclesList) = ADDRESS_BY_VERSION(0x408000, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::AddToLoadedVehiclesList) = GLOBAL_ADDRESS_BY_VERSION(0x408000, 0, 0, 0, 0, 0);

bool CStreaming::AddToLoadedVehiclesList() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CStreaming::AddToLoadedVehiclesList));
}

int addrof(CStreaming::AreAnimsUsedByRequestedModels) = ADDRESS_BY_VERSION(0x407AD0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::AreAnimsUsedByRequestedModels) = GLOBAL_ADDRESS_BY_VERSION(0x407AD0, 0, 0, 0, 0, 0);

bool CStreaming::AreAnimsUsedByRequestedModels(int AnimFileIndex) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CStreaming::AreAnimsUsedByRequestedModels), AnimFileIndex);
}

int addrof(CStreaming::AreTexturesUsedByRequestedModels) = ADDRESS_BY_VERSION(0x409A90, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::AreTexturesUsedByRequestedModels) = GLOBAL_ADDRESS_BY_VERSION(0x409A90, 0, 0, 0, 0, 0);

bool CStreaming::AreTexturesUsedByRequestedModels(int txdIndex) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CStreaming::AreTexturesUsedByRequestedModels), txdIndex);
}

int addrof(CStreaming::ClearFlagForAll) = ADDRESS_BY_VERSION(0x407A40, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::ClearFlagForAll) = GLOBAL_ADDRESS_BY_VERSION(0x407A40, 0, 0, 0, 0, 0);

void CStreaming::ClearFlagForAll(unsigned int eStreamingFlag) {
    plugin::CallDynGlobal<unsigned int>(gaddrof(CStreaming::ClearFlagForAll), eStreamingFlag);
}

int addrof(CStreaming::ClearSlots) = ADDRESS_BY_VERSION(0x40BAA0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::ClearSlots) = GLOBAL_ADDRESS_BY_VERSION(0x40BAA0, 0, 0, 0, 0, 0);

void CStreaming::ClearSlots(int NumOfSlots) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::ClearSlots), NumOfSlots);
}

int addrof(CStreaming::ConvertBufferToObject) = ADDRESS_BY_VERSION(0x40C6B0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::ConvertBufferToObject) = GLOBAL_ADDRESS_BY_VERSION(0x40C6B0, 0, 0, 0, 0, 0);

char CStreaming::ConvertBufferToObject(char *pFileContect, int index, int ChannelIndex) {
    return plugin::CallAndReturnDynGlobal<char, char *, int, int>(gaddrof(CStreaming::ConvertBufferToObject), pFileContect, index, ChannelIndex);
}

int addrof(CStreaming::DeleteAllRwObjects) = ADDRESS_BY_VERSION(0x4090A0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::DeleteAllRwObjects) = GLOBAL_ADDRESS_BY_VERSION(0x4090A0, 0, 0, 0, 0, 0);

void CStreaming::DeleteAllRwObjects() {
    plugin::CallDynGlobal(gaddrof(CStreaming::DeleteAllRwObjects));
}

int addrof(CStreaming::DeleteLeastUsedEntityRwObject) = ADDRESS_BY_VERSION(0x409760, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::DeleteLeastUsedEntityRwObject) = GLOBAL_ADDRESS_BY_VERSION(0x409760, 0, 0, 0, 0, 0);

bool CStreaming::DeleteLeastUsedEntityRwObject(bool bNotOnScreen, unsigned int StreamingFlags) {
    return plugin::CallAndReturnDynGlobal<bool, bool, unsigned int>(gaddrof(CStreaming::DeleteLeastUsedEntityRwObject), bNotOnScreen, StreamingFlags);
}

int addrof(CStreaming::DeleteRwObjectsAfterDeath) = ADDRESS_BY_VERSION(0x409210, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::DeleteRwObjectsAfterDeath) = GLOBAL_ADDRESS_BY_VERSION(0x409210, 0, 0, 0, 0, 0);

void CStreaming::DeleteRwObjectsAfterDeath(CVector const *PlayerPosn) {
    plugin::CallDynGlobal<CVector const *>(gaddrof(CStreaming::DeleteRwObjectsAfterDeath), PlayerPosn);
}

int addrof(CStreaming::DeleteRwObjectsBehindCamera) = ADDRESS_BY_VERSION(0x40D7C0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::DeleteRwObjectsBehindCamera) = GLOBAL_ADDRESS_BY_VERSION(0x40D7C0, 0, 0, 0, 0, 0);

void CStreaming::DeleteRwObjectsBehindCamera(int memoryToCleanInBytes) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::DeleteRwObjectsBehindCamera), memoryToCleanInBytes);
}

int addrof(CStreaming::DeleteRwObjectsBehindCameraInSectorList) = ADDRESS_BY_VERSION(0x409940, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::DeleteRwObjectsBehindCameraInSectorList) = GLOBAL_ADDRESS_BY_VERSION(0x409940, 0, 0, 0, 0, 0);

bool CStreaming::DeleteRwObjectsBehindCameraInSectorList(CPtrList *List, int memoryToCleanInBytes) {
    return plugin::CallAndReturnDynGlobal<bool, CPtrList *, int>(gaddrof(CStreaming::DeleteRwObjectsBehindCameraInSectorList), List, memoryToCleanInBytes);
}

int addrof(CStreaming::DeleteRwObjectsInSectorList) = ADDRESS_BY_VERSION(0x407A70, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::DeleteRwObjectsInSectorList) = GLOBAL_ADDRESS_BY_VERSION(0x407A70, 0, 0, 0, 0, 0);

void CStreaming::DeleteRwObjectsInSectorList(CPtrList *PtrList, int arg2, int arg3) {
    plugin::CallDynGlobal<CPtrList *, int, int>(gaddrof(CStreaming::DeleteRwObjectsInSectorList), PtrList, arg2, arg3);
}

int addrof(CStreaming::DeleteRwObjectsNotInFrustumInSectorList) = ADDRESS_BY_VERSION(0x4099E0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::DeleteRwObjectsNotInFrustumInSectorList) = GLOBAL_ADDRESS_BY_VERSION(0x4099E0, 0, 0, 0, 0, 0);

char CStreaming::DeleteRwObjectsNotInFrustumInSectorList(CPtrList *List, int memoryToCleanInBytes) {
    return plugin::CallAndReturnDynGlobal<char, CPtrList *, int>(gaddrof(CStreaming::DeleteRwObjectsNotInFrustumInSectorList), List, memoryToCleanInBytes);
}

int addrof(CStreaming::DisableCopBikes) = ADDRESS_BY_VERSION(0x407D10, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::DisableCopBikes) = GLOBAL_ADDRESS_BY_VERSION(0x407D10, 0, 0, 0, 0, 0);

void CStreaming::DisableCopBikes(bool bDisable) {
    plugin::CallDynGlobal<bool>(gaddrof(CStreaming::DisableCopBikes), bDisable);
}

int addrof(CStreaming::FindMIPedSlotForInterior) = ADDRESS_BY_VERSION(0x407FB0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::FindMIPedSlotForInterior) = GLOBAL_ADDRESS_BY_VERSION(0x407FB0, 0, 0, 0, 0, 0);

int CStreaming::FindMIPedSlotForInterior(int RandFactor) {
    return plugin::CallAndReturnDynGlobal<int, int>(gaddrof(CStreaming::FindMIPedSlotForInterior), RandFactor);
}

int addrof(CStreaming::FinishLoadingLargeFile) = ADDRESS_BY_VERSION(0x408CB0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::FinishLoadingLargeFile) = GLOBAL_ADDRESS_BY_VERSION(0x408CB0, 0, 0, 0, 0, 0);

bool CStreaming::FinishLoadingLargeFile(char *FileName, int modelIndex) {
    return plugin::CallAndReturnDynGlobal<bool, char *, int>(gaddrof(CStreaming::FinishLoadingLargeFile), FileName, modelIndex);
}

int addrof(CStreaming::FlushChannels) = ADDRESS_BY_VERSION(0x40E460, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::FlushChannels) = GLOBAL_ADDRESS_BY_VERSION(0x40E460, 0, 0, 0, 0, 0);

bool CStreaming::FlushChannels() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CStreaming::FlushChannels));
}

int addrof(CStreaming::FlushRequestList) = ADDRESS_BY_VERSION(0x40E4E0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::FlushRequestList) = GLOBAL_ADDRESS_BY_VERSION(0x40E4E0, 0, 0, 0, 0, 0);

bool CStreaming::FlushRequestList() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CStreaming::FlushRequestList));
}

int addrof(CStreaming::ForceLayerToRead) = ADDRESS_BY_VERSION(0x407A10, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::ForceLayerToRead) = GLOBAL_ADDRESS_BY_VERSION(0x407A10, 0, 0, 0, 0, 0);

void CStreaming::ForceLayerToRead(int arg1) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::ForceLayerToRead), arg1);
}

int addrof(CStreaming::GetDefaultCabDriverModel) = ADDRESS_BY_VERSION(0x407D50, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::GetDefaultCabDriverModel) = GLOBAL_ADDRESS_BY_VERSION(0x407D50, 0, 0, 0, 0, 0);

int CStreaming::GetDefaultCabDriverModel() {
    return plugin::CallAndReturnDynGlobal<int>(gaddrof(CStreaming::GetDefaultCabDriverModel));
}

int addrof(CStreaming::GetDefaultCopCarModel) = ADDRESS_BY_VERSION(0x407C50, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::GetDefaultCopCarModel) = GLOBAL_ADDRESS_BY_VERSION(0x407C50, 0, 0, 0, 0, 0);

int CStreaming::GetDefaultCopCarModel(unsigned int bIncludeCopBike) {
    return plugin::CallAndReturnDynGlobal<int, unsigned int>(gaddrof(CStreaming::GetDefaultCopCarModel), bIncludeCopBike);
}

int addrof(CStreaming::GetDefaultCopModel) = ADDRESS_BY_VERSION(0x407C00, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::GetDefaultCopModel) = GLOBAL_ADDRESS_BY_VERSION(0x407C00, 0, 0, 0, 0, 0);

int CStreaming::GetDefaultCopModel() {
    return plugin::CallAndReturnDynGlobal<int>(gaddrof(CStreaming::GetDefaultCopModel));
}

int addrof(CStreaming::GetDefaultFiremanModel) = ADDRESS_BY_VERSION(0x407D40, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::GetDefaultFiremanModel) = GLOBAL_ADDRESS_BY_VERSION(0x407D40, 0, 0, 0, 0, 0);

int CStreaming::GetDefaultFiremanModel() {
    return plugin::CallAndReturnDynGlobal<int>(gaddrof(CStreaming::GetDefaultFiremanModel));
}

int addrof(CStreaming::GetDefaultMedicModel) = ADDRESS_BY_VERSION(0x407D20, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::GetDefaultMedicModel) = GLOBAL_ADDRESS_BY_VERSION(0x407D20, 0, 0, 0, 0, 0);

int CStreaming::GetDefaultMedicModel() {
    return plugin::CallAndReturnDynGlobal<int>(gaddrof(CStreaming::GetDefaultMedicModel));
}

int addrof(CStreaming::GetDiscInDrive) = ADDRESS_BY_VERSION(0x40E9B0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::GetDiscInDrive) = GLOBAL_ADDRESS_BY_VERSION(0x40E9B0, 0, 0, 0, 0, 0);

signed int CStreaming::GetDiscInDrive() {
    return plugin::CallAndReturnDynGlobal<signed int>(gaddrof(CStreaming::GetDiscInDrive));
}

int addrof(CStreaming::GetNextFileOnCd) = ADDRESS_BY_VERSION(0x408E20, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::GetNextFileOnCd) = GLOBAL_ADDRESS_BY_VERSION(0x408E20, 0, 0, 0, 0, 0);

int CStreaming::GetNextFileOnCd(int pos, bool bNotPriority) {
    return plugin::CallAndReturnDynGlobal<int, int, bool>(gaddrof(CStreaming::GetNextFileOnCd), pos, bNotPriority);
}

int addrof(CStreaming::HasSpecialCharLoaded) = ADDRESS_BY_VERSION(0x407F00, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::HasSpecialCharLoaded) = GLOBAL_ADDRESS_BY_VERSION(0x407F00, 0, 0, 0, 0, 0);

bool CStreaming::HasSpecialCharLoaded(int slot) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CStreaming::HasSpecialCharLoaded), slot);
}

int addrof(CStreaming::HasVehicleUpgradeLoaded) = ADDRESS_BY_VERSION(0x407820, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::HasVehicleUpgradeLoaded) = GLOBAL_ADDRESS_BY_VERSION(0x407820, 0, 0, 0, 0, 0);

bool CStreaming::HasVehicleUpgradeLoaded(int ModelIndex) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CStreaming::HasVehicleUpgradeLoaded), ModelIndex);
}

int addrof(CStreaming::IHaveUsedStreamingMemory) = ADDRESS_BY_VERSION(0x407BF0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::IHaveUsedStreamingMemory) = GLOBAL_ADDRESS_BY_VERSION(0x407BF0, 0, 0, 0, 0, 0);

void CStreaming::IHaveUsedStreamingMemory() {
    plugin::CallDynGlobal(gaddrof(CStreaming::IHaveUsedStreamingMemory));
}

int addrof(CStreaming::ImGonnaUseStreamingMemory) = ADDRESS_BY_VERSION(0x407BE0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::ImGonnaUseStreamingMemory) = GLOBAL_ADDRESS_BY_VERSION(0x407BE0, 0, 0, 0, 0, 0);

void CStreaming::ImGonnaUseStreamingMemory() {
    plugin::CallDynGlobal(gaddrof(CStreaming::ImGonnaUseStreamingMemory));
}

int addrof(CStreaming::Init) = ADDRESS_BY_VERSION(0x5B9020, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::Init) = GLOBAL_ADDRESS_BY_VERSION(0x5B9020, 0, 0, 0, 0, 0);

void CStreaming::Init() {
    plugin::CallDynGlobal(gaddrof(CStreaming::Init));
}

int addrof(CStreaming::Init2) = ADDRESS_BY_VERSION(0x5B8AD0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::Init2) = GLOBAL_ADDRESS_BY_VERSION(0x5B8AD0, 0, 0, 0, 0, 0);

void CStreaming::Init2() {
    plugin::CallDynGlobal(gaddrof(CStreaming::Init2));
}

int addrof(CStreaming::InitImageList) = ADDRESS_BY_VERSION(0x4083C0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::InitImageList) = GLOBAL_ADDRESS_BY_VERSION(0x4083C0, 0, 0, 0, 0, 0);

void CStreaming::InitImageList() {
    plugin::CallDynGlobal(gaddrof(CStreaming::InitImageList));
}

int addrof(CStreaming::InstanceLoadedModels) = ADDRESS_BY_VERSION(0x4084F0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::InstanceLoadedModels) = GLOBAL_ADDRESS_BY_VERSION(0x4084F0, 0, 0, 0, 0, 0);

void CStreaming::InstanceLoadedModels(CVector const *posn) {
    plugin::CallDynGlobal<CVector const *>(gaddrof(CStreaming::InstanceLoadedModels), posn);
}

int addrof(CStreaming::IsCarModelNeededInCurrentZone) = ADDRESS_BY_VERSION(0x407DD0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::IsCarModelNeededInCurrentZone) = GLOBAL_ADDRESS_BY_VERSION(0x407DD0, 0, 0, 0, 0, 0);

bool CStreaming::IsCarModelNeededInCurrentZone(int VehicleModelIndex) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CStreaming::IsCarModelNeededInCurrentZone), VehicleModelIndex);
}

int addrof(CStreaming::IsInitialised) = ADDRESS_BY_VERSION(0x407600, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::IsInitialised) = GLOBAL_ADDRESS_BY_VERSION(0x407600, 0, 0, 0, 0, 0);

bool CStreaming::IsInitialised() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CStreaming::IsInitialised));
}

int addrof(CStreaming::IsObjectInCdImage) = ADDRESS_BY_VERSION(0x407800, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::IsObjectInCdImage) = GLOBAL_ADDRESS_BY_VERSION(0x407800, 0, 0, 0, 0, 0);

bool CStreaming::IsObjectInCdImage(int ModelInex) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CStreaming::IsObjectInCdImage), ModelInex);
}

int addrof(CStreaming::IsVeryBusy) = ADDRESS_BY_VERSION(0x4076A0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::IsVeryBusy) = GLOBAL_ADDRESS_BY_VERSION(0x4076A0, 0, 0, 0, 0, 0);

bool CStreaming::IsVeryBusy() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CStreaming::IsVeryBusy));
}

int addrof(CStreaming::Load) = ADDRESS_BY_VERSION(0x5D29E0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::Load) = GLOBAL_ADDRESS_BY_VERSION(0x5D29E0, 0, 0, 0, 0, 0);

void CStreaming::Load() {
    plugin::CallDynGlobal(gaddrof(CStreaming::Load));
}

int addrof(CStreaming::LoadAllRequestedModels) = ADDRESS_BY_VERSION(0x40EA10, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::LoadAllRequestedModels) = GLOBAL_ADDRESS_BY_VERSION(0x40EA10, 0, 0, 0, 0, 0);

void CStreaming::LoadAllRequestedModels(bool bOnlyPriorityRequests) {
    plugin::CallDynGlobal<bool>(gaddrof(CStreaming::LoadAllRequestedModels), bOnlyPriorityRequests);
}

int addrof_o(CStreaming::LoadCdDirectory, void (*)(char const *, int)) = ADDRESS_BY_VERSION(0x5B6170, 0, 0, 0, 0, 0);
int gaddrof_o(CStreaming::LoadCdDirectory, void (*)(char const *, int)) = GLOBAL_ADDRESS_BY_VERSION(0x5B6170, 0, 0, 0, 0, 0);

void CStreaming::LoadCdDirectory(char const *ArchiveName, int archiveID) {
    plugin::CallDynGlobal<char const *, int>(gaddrof_o(CStreaming::LoadCdDirectory, void (*)(char const *, int)), ArchiveName, archiveID);
}

int addrof_o(CStreaming::LoadCdDirectory, void (*)()) = ADDRESS_BY_VERSION(0x5B82C0, 0, 0, 0, 0, 0);
int gaddrof_o(CStreaming::LoadCdDirectory, void (*)()) = GLOBAL_ADDRESS_BY_VERSION(0x5B82C0, 0, 0, 0, 0, 0);

void CStreaming::LoadCdDirectory() {
    plugin::CallDynGlobal(gaddrof_o(CStreaming::LoadCdDirectory, void (*)()));
}

int addrof(CStreaming::LoadInitialPeds) = ADDRESS_BY_VERSION(0x40D3D0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::LoadInitialPeds) = GLOBAL_ADDRESS_BY_VERSION(0x40D3D0, 0, 0, 0, 0, 0);

void CStreaming::LoadInitialPeds() {
    plugin::CallDynGlobal(gaddrof(CStreaming::LoadInitialPeds));
}

int addrof(CStreaming::LoadInitialVehicles) = ADDRESS_BY_VERSION(0x407F20, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::LoadInitialVehicles) = GLOBAL_ADDRESS_BY_VERSION(0x407F20, 0, 0, 0, 0, 0);

void CStreaming::LoadInitialVehicles() {
    plugin::CallDynGlobal(gaddrof(CStreaming::LoadInitialVehicles));
}

int addrof(CStreaming::LoadInitialWeapons) = ADDRESS_BY_VERSION(0x40A120, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::LoadInitialWeapons) = GLOBAL_ADDRESS_BY_VERSION(0x40A120, 0, 0, 0, 0, 0);

void CStreaming::LoadInitialWeapons() {
    plugin::CallDynGlobal(gaddrof(CStreaming::LoadInitialWeapons));
}

int addrof(CStreaming::LoadRequestedModels) = ADDRESS_BY_VERSION(0x40E3A0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::LoadRequestedModels) = GLOBAL_ADDRESS_BY_VERSION(0x40E3A0, 0, 0, 0, 0, 0);

void CStreaming::LoadRequestedModels() {
    plugin::CallDynGlobal(gaddrof(CStreaming::LoadRequestedModels));
}

int addrof(CStreaming::LoadScene) = ADDRESS_BY_VERSION(0x40EB70, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::LoadScene) = GLOBAL_ADDRESS_BY_VERSION(0x40EB70, 0, 0, 0, 0, 0);

void CStreaming::LoadScene(CVector const *Posn) {
    plugin::CallDynGlobal<CVector const *>(gaddrof(CStreaming::LoadScene), Posn);
}

int addrof(CStreaming::LoadSceneCollision) = ADDRESS_BY_VERSION(0x40ED80, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::LoadSceneCollision) = GLOBAL_ADDRESS_BY_VERSION(0x40ED80, 0, 0, 0, 0, 0);

void CStreaming::LoadSceneCollision(CVector const *Posn) {
    plugin::CallDynGlobal<CVector const *>(gaddrof(CStreaming::LoadSceneCollision), Posn);
}

int addrof(CStreaming::LoadZoneVehicle) = ADDRESS_BY_VERSION(0x40B4B0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::LoadZoneVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x40B4B0, 0, 0, 0, 0, 0);

void CStreaming::LoadZoneVehicle(CVector const *posn) {
    plugin::CallDynGlobal<CVector const *>(gaddrof(CStreaming::LoadZoneVehicle), posn);
}

int addrof(CStreaming::MakeSpaceFor) = ADDRESS_BY_VERSION(0x40E120, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::MakeSpaceFor) = GLOBAL_ADDRESS_BY_VERSION(0x40E120, 0, 0, 0, 0, 0);

void CStreaming::MakeSpaceFor(int memoryToCleanInBytes) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::MakeSpaceFor), memoryToCleanInBytes);
}

int addrof(CStreaming::PossiblyStreamCarOutAfterCreation) = ADDRESS_BY_VERSION(0x40BA70, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::PossiblyStreamCarOutAfterCreation) = GLOBAL_ADDRESS_BY_VERSION(0x40BA70, 0, 0, 0, 0, 0);

void CStreaming::PossiblyStreamCarOutAfterCreation(int modelId) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::PossiblyStreamCarOutAfterCreation), modelId);
}

int addrof_o(CStreaming::ProcessEntitiesInSectorList, void (*)(CPtrList *, float, float, float, float, float, float, float, unsigned int)) = ADDRESS_BY_VERSION(0x40C270, 0, 0, 0, 0, 0);
int gaddrof_o(CStreaming::ProcessEntitiesInSectorList, void (*)(CPtrList *, float, float, float, float, float, float, float, unsigned int)) = GLOBAL_ADDRESS_BY_VERSION(0x40C270, 0, 0, 0, 0, 0);

void CStreaming::ProcessEntitiesInSectorList(CPtrList *list, float posn_x, float posn_y, float min_posn_x, float min_posn_y, float max_posn_x, float max_posn_y, float distance, unsigned int Streamingflags) {
    plugin::CallDynGlobal<CPtrList *, float, float, float, float, float, float, float, unsigned int>(gaddrof_o(CStreaming::ProcessEntitiesInSectorList, void (*)(CPtrList *, float, float, float, float, float, float, float, unsigned int)), list, posn_x, posn_y, min_posn_x, min_posn_y, max_posn_x, max_posn_y, distance, Streamingflags);
}

int addrof_o(CStreaming::ProcessEntitiesInSectorList, void (*)(CPtrList *, unsigned int)) = ADDRESS_BY_VERSION(0x40C450, 0, 0, 0, 0, 0);
int gaddrof_o(CStreaming::ProcessEntitiesInSectorList, void (*)(CPtrList *, unsigned int)) = GLOBAL_ADDRESS_BY_VERSION(0x40C450, 0, 0, 0, 0, 0);

void CStreaming::ProcessEntitiesInSectorList(CPtrList *list, unsigned int streamingFlags) {
    plugin::CallDynGlobal<CPtrList *, unsigned int>(gaddrof_o(CStreaming::ProcessEntitiesInSectorList, void (*)(CPtrList *, unsigned int)), list, streamingFlags);
}

int addrof(CStreaming::ProcessLoadingChannel) = ADDRESS_BY_VERSION(0x40E170, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::ProcessLoadingChannel) = GLOBAL_ADDRESS_BY_VERSION(0x40E170, 0, 0, 0, 0, 0);

bool CStreaming::ProcessLoadingChannel(int channelIndex) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CStreaming::ProcessLoadingChannel), channelIndex);
}

int addrof(CStreaming::PurgeRequestList) = ADDRESS_BY_VERSION(0x40C1E0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::PurgeRequestList) = GLOBAL_ADDRESS_BY_VERSION(0x40C1E0, 0, 0, 0, 0, 0);

void CStreaming::PurgeRequestList() {
    plugin::CallDynGlobal(gaddrof(CStreaming::PurgeRequestList));
}

int addrof(CStreaming::ReInit) = ADDRESS_BY_VERSION(0x40E560, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::ReInit) = GLOBAL_ADDRESS_BY_VERSION(0x40E560, 0, 0, 0, 0, 0);

unsigned int CStreaming::ReInit() {
    return plugin::CallAndReturnDynGlobal<unsigned int>(gaddrof(CStreaming::ReInit));
}

int addrof(CStreaming::ReadIniFile) = ADDRESS_BY_VERSION(0x5BCCD0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::ReadIniFile) = GLOBAL_ADDRESS_BY_VERSION(0x5BCCD0, 0, 0, 0, 0, 0);

void CStreaming::ReadIniFile() {
    plugin::CallDynGlobal(gaddrof(CStreaming::ReadIniFile));
}

int addrof(CStreaming::ReclassifyLoadedCars) = ADDRESS_BY_VERSION(0x40AFA0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::ReclassifyLoadedCars) = GLOBAL_ADDRESS_BY_VERSION(0x40AFA0, 0, 0, 0, 0, 0);

void CStreaming::ReclassifyLoadedCars() {
    plugin::CallDynGlobal(gaddrof(CStreaming::ReclassifyLoadedCars));
}

int addrof(CStreaming::RemoveAllUnusedModels) = ADDRESS_BY_VERSION(0x40CF80, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RemoveAllUnusedModels) = GLOBAL_ADDRESS_BY_VERSION(0x40CF80, 0, 0, 0, 0, 0);

void CStreaming::RemoveAllUnusedModels() {
    plugin::CallDynGlobal(gaddrof(CStreaming::RemoveAllUnusedModels));
}

int addrof(CStreaming::RemoveBigBuildings) = ADDRESS_BY_VERSION(0x4093B0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RemoveBigBuildings) = GLOBAL_ADDRESS_BY_VERSION(0x4093B0, 0, 0, 0, 0, 0);

void CStreaming::RemoveBigBuildings() {
    plugin::CallDynGlobal(gaddrof(CStreaming::RemoveBigBuildings));
}

int addrof(CStreaming::RemoveBuildingsNotInArea) = ADDRESS_BY_VERSION(0x4094B0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RemoveBuildingsNotInArea) = GLOBAL_ADDRESS_BY_VERSION(0x4094B0, 0, 0, 0, 0, 0);

void CStreaming::RemoveBuildingsNotInArea(int AreaCode) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::RemoveBuildingsNotInArea), AreaCode);
}

int addrof(CStreaming::RemoveCarModel) = ADDRESS_BY_VERSION(0x4080F0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RemoveCarModel) = GLOBAL_ADDRESS_BY_VERSION(0x4080F0, 0, 0, 0, 0, 0);

void CStreaming::RemoveCarModel(int modelIndex) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::RemoveCarModel), modelIndex);
}

int addrof(CStreaming::RemoveCurrentZonesModels) = ADDRESS_BY_VERSION(0x40B080, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RemoveCurrentZonesModels) = GLOBAL_ADDRESS_BY_VERSION(0x40B080, 0, 0, 0, 0, 0);

void CStreaming::RemoveCurrentZonesModels() {
    plugin::CallDynGlobal(gaddrof(CStreaming::RemoveCurrentZonesModels));
}

int addrof(CStreaming::RemoveDodgyPedsFromRandomSlots) = ADDRESS_BY_VERSION(0x40BE60, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RemoveDodgyPedsFromRandomSlots) = GLOBAL_ADDRESS_BY_VERSION(0x40BE60, 0, 0, 0, 0, 0);

void CStreaming::RemoveDodgyPedsFromRandomSlots() {
    plugin::CallDynGlobal(gaddrof(CStreaming::RemoveDodgyPedsFromRandomSlots));
}

int addrof(CStreaming::RemoveEntity) = ADDRESS_BY_VERSION(0x409710, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RemoveEntity) = GLOBAL_ADDRESS_BY_VERSION(0x409710, 0, 0, 0, 0, 0);

void CStreaming::RemoveEntity(CLink<CEntity*> *streamingLink) {
    plugin::CallDynGlobal<CLink<CEntity*> *>(gaddrof(CStreaming::RemoveEntity), streamingLink);
}

int addrof(CStreaming::RemoveInappropriatePedModels) = ADDRESS_BY_VERSION(0x40B3A0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RemoveInappropriatePedModels) = GLOBAL_ADDRESS_BY_VERSION(0x40B3A0, 0, 0, 0, 0, 0);

void CStreaming::RemoveInappropriatePedModels() {
    plugin::CallDynGlobal(gaddrof(CStreaming::RemoveInappropriatePedModels));
}

int addrof(CStreaming::RemoveLeastUsedModel) = ADDRESS_BY_VERSION(0x40CFD0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RemoveLeastUsedModel) = GLOBAL_ADDRESS_BY_VERSION(0x40CFD0, 0, 0, 0, 0, 0);

bool CStreaming::RemoveLeastUsedModel(unsigned int StreamingFlags) {
    return plugin::CallAndReturnDynGlobal<bool, unsigned int>(gaddrof(CStreaming::RemoveLeastUsedModel), StreamingFlags);
}

int addrof(CStreaming::RemoveLoadedVehicle) = ADDRESS_BY_VERSION(0x40C020, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RemoveLoadedVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x40C020, 0, 0, 0, 0, 0);

bool CStreaming::RemoveLoadedVehicle() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CStreaming::RemoveLoadedVehicle));
}

int addrof(CStreaming::RemoveLoadedZoneModel) = ADDRESS_BY_VERSION(0x40B340, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RemoveLoadedZoneModel) = GLOBAL_ADDRESS_BY_VERSION(0x40B340, 0, 0, 0, 0, 0);

bool CStreaming::RemoveLoadedZoneModel() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CStreaming::RemoveLoadedZoneModel));
}

int addrof(CStreaming::RemoveModel) = ADDRESS_BY_VERSION(0x4089A0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RemoveModel) = GLOBAL_ADDRESS_BY_VERSION(0x4089A0, 0, 0, 0, 0, 0);

void CStreaming::RemoveModel(int Modelindex) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::RemoveModel), Modelindex);
}

int addrof(CStreaming::RemoveUnusedModelsInLoadedList) = ADDRESS_BY_VERSION(0x407AC0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RemoveUnusedModelsInLoadedList) = GLOBAL_ADDRESS_BY_VERSION(0x407AC0, 0, 0, 0, 0, 0);

unsigned int CStreaming::RemoveUnusedModelsInLoadedList() {
    return plugin::CallAndReturnDynGlobal<unsigned int>(gaddrof(CStreaming::RemoveUnusedModelsInLoadedList));
}

int addrof(CStreaming::RenderEntity) = ADDRESS_BY_VERSION(0x4096D0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RenderEntity) = GLOBAL_ADDRESS_BY_VERSION(0x4096D0, 0, 0, 0, 0, 0);

void CStreaming::RenderEntity(CLink<CEntity*> *streamingLink) {
    plugin::CallDynGlobal<CLink<CEntity*> *>(gaddrof(CStreaming::RenderEntity), streamingLink);
}

int addrof(CStreaming::RequestBigBuildings) = ADDRESS_BY_VERSION(0x409430, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RequestBigBuildings) = GLOBAL_ADDRESS_BY_VERSION(0x409430, 0, 0, 0, 0, 0);

void CStreaming::RequestBigBuildings(CVector const *posn) {
    plugin::CallDynGlobal<CVector const *>(gaddrof(CStreaming::RequestBigBuildings), posn);
}

int addrof(CStreaming::RequestFile) = ADDRESS_BY_VERSION(0x40A080, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RequestFile) = GLOBAL_ADDRESS_BY_VERSION(0x40A080, 0, 0, 0, 0, 0);

void CStreaming::RequestFile(int index, int offset, int size, int imgId, int streamingFlags) {
    plugin::CallDynGlobal<int, int, int, int, int>(gaddrof(CStreaming::RequestFile), index, offset, size, imgId, streamingFlags);
}

int addrof(CStreaming::RequestFilesInChannel) = ADDRESS_BY_VERSION(0x409050, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RequestFilesInChannel) = GLOBAL_ADDRESS_BY_VERSION(0x409050, 0, 0, 0, 0, 0);

void CStreaming::RequestFilesInChannel(int channelId) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::RequestFilesInChannel), channelId);
}

int addrof(CStreaming::RequestModel) = ADDRESS_BY_VERSION(0x4087E0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RequestModel) = GLOBAL_ADDRESS_BY_VERSION(0x4087E0, 0, 0, 0, 0, 0);

void CStreaming::RequestModel(int dwModelId, int Streamingflags) {
    plugin::CallDynGlobal<int, int>(gaddrof(CStreaming::RequestModel), dwModelId, Streamingflags);
}

int addrof(CStreaming::RequestModelStream) = ADDRESS_BY_VERSION(0x40CBA0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RequestModelStream) = GLOBAL_ADDRESS_BY_VERSION(0x40CBA0, 0, 0, 0, 0, 0);

void CStreaming::RequestModelStream(int streamNum) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::RequestModelStream), streamNum);
}

int addrof(CStreaming::RequestPlayerSection) = ADDRESS_BY_VERSION(0x409FF0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RequestPlayerSection) = GLOBAL_ADDRESS_BY_VERSION(0x409FF0, 0, 0, 0, 0, 0);

void CStreaming::RequestPlayerSection(int modelIndex, char const *string, int streamingFlags) {
    plugin::CallDynGlobal<int, char const *, int>(gaddrof(CStreaming::RequestPlayerSection), modelIndex, string, streamingFlags);
}

int addrof(CStreaming::RequestSpecialChar) = ADDRESS_BY_VERSION(0x40B450, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RequestSpecialChar) = GLOBAL_ADDRESS_BY_VERSION(0x40B450, 0, 0, 0, 0, 0);

void CStreaming::RequestSpecialChar(int slot, char const *Name, int streamingFlags) {
    plugin::CallDynGlobal<int, char const *, int>(gaddrof(CStreaming::RequestSpecialChar), slot, Name, streamingFlags);
}

int addrof(CStreaming::RequestSpecialModel) = ADDRESS_BY_VERSION(0x409D10, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RequestSpecialModel) = GLOBAL_ADDRESS_BY_VERSION(0x409D10, 0, 0, 0, 0, 0);

void CStreaming::RequestSpecialModel(int slot, char *name, int StreamingFlags) {
    plugin::CallDynGlobal<int, char *, int>(gaddrof(CStreaming::RequestSpecialModel), slot, name, StreamingFlags);
}

int addrof(CStreaming::RequestTxdModel) = ADDRESS_BY_VERSION(0x407100, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RequestTxdModel) = GLOBAL_ADDRESS_BY_VERSION(0x407100, 0, 0, 0, 0, 0);

void CStreaming::RequestTxdModel(int TxdModelID, int Streamingflags) {
    plugin::CallDynGlobal<int, int>(gaddrof(CStreaming::RequestTxdModel), TxdModelID, Streamingflags);
}

int addrof(CStreaming::RequestVehicleUpgrade) = ADDRESS_BY_VERSION(0x408C70, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RequestVehicleUpgrade) = GLOBAL_ADDRESS_BY_VERSION(0x408C70, 0, 0, 0, 0, 0);

void CStreaming::RequestVehicleUpgrade(int modelIndex, int StreamingFlags) {
    plugin::CallDynGlobal<int, int>(gaddrof(CStreaming::RequestVehicleUpgrade), modelIndex, StreamingFlags);
}

int addrof(CStreaming::RetryLoadFile) = ADDRESS_BY_VERSION(0x4076C0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::RetryLoadFile) = GLOBAL_ADDRESS_BY_VERSION(0x4076C0, 0, 0, 0, 0, 0);

void CStreaming::RetryLoadFile(int streamNum) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::RetryLoadFile), streamNum);
}

int addrof(CStreaming::Save) = ADDRESS_BY_VERSION(0x5D29A0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::Save) = GLOBAL_ADDRESS_BY_VERSION(0x5D29A0, 0, 0, 0, 0, 0);

void CStreaming::Save() {
    plugin::CallDynGlobal(gaddrof(CStreaming::Save));
}

int addrof(CStreaming::SetLoadVehiclesInLoadScene) = ADDRESS_BY_VERSION(0x407A30, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::SetLoadVehiclesInLoadScene) = GLOBAL_ADDRESS_BY_VERSION(0x407A30, 0, 0, 0, 0, 0);

void CStreaming::SetLoadVehiclesInLoadScene(bool bEnable) {
    plugin::CallDynGlobal<bool>(gaddrof(CStreaming::SetLoadVehiclesInLoadScene), bEnable);
}

int addrof(CStreaming::SetMissionDoesntRequireAnim) = ADDRESS_BY_VERSION(0x48B570, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::SetMissionDoesntRequireAnim) = GLOBAL_ADDRESS_BY_VERSION(0x48B570, 0, 0, 0, 0, 0);

void CStreaming::SetMissionDoesntRequireAnim(int slot) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::SetMissionDoesntRequireAnim), slot);
}

int addrof(CStreaming::SetMissionDoesntRequireModel) = ADDRESS_BY_VERSION(0x409C90, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::SetMissionDoesntRequireModel) = GLOBAL_ADDRESS_BY_VERSION(0x409C90, 0, 0, 0, 0, 0);

void CStreaming::SetMissionDoesntRequireModel(int modelIndex) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::SetMissionDoesntRequireModel), modelIndex);
}

int addrof(CStreaming::SetMissionDoesntRequireSpecialChar) = ADDRESS_BY_VERSION(0x40B490, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::SetMissionDoesntRequireSpecialChar) = GLOBAL_ADDRESS_BY_VERSION(0x40B490, 0, 0, 0, 0, 0);

void CStreaming::SetMissionDoesntRequireSpecialChar(int slot) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::SetMissionDoesntRequireSpecialChar), slot);
}

int addrof(CStreaming::SetModelIsDeletable) = ADDRESS_BY_VERSION(0x409C10, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::SetModelIsDeletable) = GLOBAL_ADDRESS_BY_VERSION(0x409C10, 0, 0, 0, 0, 0);

void CStreaming::SetModelIsDeletable(int modelIndex) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::SetModelIsDeletable), modelIndex);
}

int addrof(CStreaming::SetModelTxdIsDeletable) = ADDRESS_BY_VERSION(0x409C70, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::SetModelTxdIsDeletable) = GLOBAL_ADDRESS_BY_VERSION(0x409C70, 0, 0, 0, 0, 0);

void CStreaming::SetModelTxdIsDeletable(int modelIndex) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::SetModelTxdIsDeletable), modelIndex);
}

int addrof(CStreaming::SetSpecialCharIsDeletable) = ADDRESS_BY_VERSION(0x40B470, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::SetSpecialCharIsDeletable) = GLOBAL_ADDRESS_BY_VERSION(0x40B470, 0, 0, 0, 0, 0);

void CStreaming::SetSpecialCharIsDeletable(int slot) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::SetSpecialCharIsDeletable), slot);
}

int addrof(CStreaming::Shutdown) = ADDRESS_BY_VERSION(0x4084B0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x4084B0, 0, 0, 0, 0, 0);

void CStreaming::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CStreaming::Shutdown));
}

int addrof(CStreaming::StartRenderEntities) = ADDRESS_BY_VERSION(0x4096C0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::StartRenderEntities) = GLOBAL_ADDRESS_BY_VERSION(0x4096C0, 0, 0, 0, 0, 0);

void CStreaming::StartRenderEntities() {
    plugin::CallDynGlobal(gaddrof(CStreaming::StartRenderEntities));
}

int addrof(CStreaming::StreamAmbulanceAndMedic) = ADDRESS_BY_VERSION(0x40A2A0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::StreamAmbulanceAndMedic) = GLOBAL_ADDRESS_BY_VERSION(0x40A2A0, 0, 0, 0, 0, 0);

bool CStreaming::StreamAmbulanceAndMedic(bool bStreamForAccident) {
    return plugin::CallAndReturnDynGlobal<bool, bool>(gaddrof(CStreaming::StreamAmbulanceAndMedic), bStreamForAccident);
}

int addrof(CStreaming::StreamCopModels) = ADDRESS_BY_VERSION(0x40A150, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::StreamCopModels) = GLOBAL_ADDRESS_BY_VERSION(0x40A150, 0, 0, 0, 0, 0);

void CStreaming::StreamCopModels(int townID) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::StreamCopModels), townID);
}

int addrof(CStreaming::StreamFireEngineAndFireman) = ADDRESS_BY_VERSION(0x40A400, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::StreamFireEngineAndFireman) = GLOBAL_ADDRESS_BY_VERSION(0x40A400, 0, 0, 0, 0, 0);

bool CStreaming::StreamFireEngineAndFireman(bool bStreamForFire) {
    return plugin::CallAndReturnDynGlobal<bool, bool>(gaddrof(CStreaming::StreamFireEngineAndFireman), bStreamForFire);
}

int addrof(CStreaming::StreamOneNewCar) = ADDRESS_BY_VERSION(0x40B4F0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::StreamOneNewCar) = GLOBAL_ADDRESS_BY_VERSION(0x40B4F0, 0, 0, 0, 0, 0);

void CStreaming::StreamOneNewCar() {
    plugin::CallDynGlobal(gaddrof(CStreaming::StreamOneNewCar));
}

int addrof(CStreaming::StreamPedsForInterior) = ADDRESS_BY_VERSION(0x40BBB0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::StreamPedsForInterior) = GLOBAL_ADDRESS_BY_VERSION(0x40BBB0, 0, 0, 0, 0, 0);

void CStreaming::StreamPedsForInterior(int interiorType) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::StreamPedsForInterior), interiorType);
}

int addrof(CStreaming::StreamPedsIntoRandomSlots) = ADDRESS_BY_VERSION(0x40BDA0, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::StreamPedsIntoRandomSlots) = GLOBAL_ADDRESS_BY_VERSION(0x40BDA0, 0, 0, 0, 0, 0);

void CStreaming::StreamPedsIntoRandomSlots(int *pModelID) {
    plugin::CallDynGlobal<int *>(gaddrof(CStreaming::StreamPedsIntoRandomSlots), pModelID);
}

int addrof(CStreaming::StreamVehiclesAndPeds) = ADDRESS_BY_VERSION(0x40B700, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::StreamVehiclesAndPeds) = GLOBAL_ADDRESS_BY_VERSION(0x40B700, 0, 0, 0, 0, 0);

void CStreaming::StreamVehiclesAndPeds() {
    plugin::CallDynGlobal(gaddrof(CStreaming::StreamVehiclesAndPeds));
}

int addrof(CStreaming::StreamVehiclesAndPeds_Always) = ADDRESS_BY_VERSION(0x40B650, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::StreamVehiclesAndPeds_Always) = GLOBAL_ADDRESS_BY_VERSION(0x40B650, 0, 0, 0, 0, 0);

void CStreaming::StreamVehiclesAndPeds_Always(CVector const *posn) {
    plugin::CallDynGlobal<CVector const *>(gaddrof(CStreaming::StreamVehiclesAndPeds_Always), posn);
}

int addrof(CStreaming::StreamZoneModels) = ADDRESS_BY_VERSION(0x40A560, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::StreamZoneModels) = GLOBAL_ADDRESS_BY_VERSION(0x40A560, 0, 0, 0, 0, 0);

void CStreaming::StreamZoneModels(CVector const *posn) {
    plugin::CallDynGlobal<CVector const *>(gaddrof(CStreaming::StreamZoneModels), posn);
}

int addrof(CStreaming::StreamZoneModels_Gangs) = ADDRESS_BY_VERSION(0x40AA10, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::StreamZoneModels_Gangs) = GLOBAL_ADDRESS_BY_VERSION(0x40AA10, 0, 0, 0, 0, 0);

void CStreaming::StreamZoneModels_Gangs(CVector const *unused) {
    plugin::CallDynGlobal<CVector const *>(gaddrof(CStreaming::StreamZoneModels_Gangs), unused);
}

int addrof(CStreaming::Update) = ADDRESS_BY_VERSION(0x40E670, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::Update) = GLOBAL_ADDRESS_BY_VERSION(0x40E670, 0, 0, 0, 0, 0);

void CStreaming::Update() {
    plugin::CallDynGlobal(gaddrof(CStreaming::Update));
}

int addrof(CStreaming::UpdateForAnimViewer) = ADDRESS_BY_VERSION(0x40E960, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::UpdateForAnimViewer) = GLOBAL_ADDRESS_BY_VERSION(0x40E960, 0, 0, 0, 0, 0);

void CStreaming::UpdateForAnimViewer() {
    plugin::CallDynGlobal(gaddrof(CStreaming::UpdateForAnimViewer));
}

int addrof(CStreaming::WeAreTryingToPhaseVehicleOut) = ADDRESS_BY_VERSION(0x407F80, 0, 0, 0, 0, 0);
int gaddrof(CStreaming::WeAreTryingToPhaseVehicleOut) = GLOBAL_ADDRESS_BY_VERSION(0x407F80, 0, 0, 0, 0, 0);

bool CStreaming::WeAreTryingToPhaseVehicleOut(int modelIndex) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CStreaming::WeAreTryingToPhaseVehicleOut), modelIndex);
}
