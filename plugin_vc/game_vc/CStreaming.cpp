/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CStreaming.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE bool &CStreaming::ms_bLoadingBigModel = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x6F7759, 0, 0));
PLUGIN_VARIABLE int(&CStreaming::ms_imageOffsets)[6] = *reinterpret_cast<int(*)[6]>(GLOBAL_ADDRESS_BY_VERSION(0x7D1530, 0, 0));
PLUGIN_VARIABLE int(&CStreaming::ms_vehiclesLoaded)[2] = *reinterpret_cast<int(*)[2]>(GLOBAL_ADDRESS_BY_VERSION(0x860F38, 0, 0));
PLUGIN_VARIABLE bool(&CStreaming::ms_bIsPedFromPedGroupLoaded)[16] = *reinterpret_cast<bool(*)[16]>(GLOBAL_ADDRESS_BY_VERSION(0x861000, 0, 0));
PLUGIN_VARIABLE char *&CStreaming::ms_pStreamingBuffer = *reinterpret_cast<char **>(GLOBAL_ADDRESS_BY_VERSION(0x94B840, 0, 0));
PLUGIN_VARIABLE int &CStreaming::ms_channelError = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x94DB60, 0, 0));
PLUGIN_VARIABLE int &CStreaming::ms_lastImageRead = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x94DBE4, 0, 0));
PLUGIN_VARIABLE CStreamingInfo(&CStreaming::ms_aInfoForModel)[7951] = *reinterpret_cast<CStreamingInfo(*)[7951]>(GLOBAL_ADDRESS_BY_VERSION(0x94DDD0, 0, 0));
PLUGIN_VARIABLE int &CStreaming::ms_numModelsRequested = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x975354, 0, 0));
PLUGIN_VARIABLE int &CStreaming::ms_imageSize = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x978578, 0, 0));
PLUGIN_VARIABLE tModelRequest &CStreaming::ms_endLoadedList = *reinterpret_cast<tModelRequest *>(GLOBAL_ADDRESS_BY_VERSION(0x978640, 0, 0));
PLUGIN_VARIABLE tModelRequest &CStreaming::ms_startRequestedList = *reinterpret_cast<tModelRequest *>(GLOBAL_ADDRESS_BY_VERSION(0x97871C, 0, 0));
PLUGIN_VARIABLE int &CStreaming::ms_currentPedGrp = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x97F1F8, 0, 0));
PLUGIN_VARIABLE int &CStreaming::ms_oldSectorX = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x97F2DC, 0, 0));
PLUGIN_VARIABLE int &CStreaming::ms_oldSectorY = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x97F2E0, 0, 0));
PLUGIN_VARIABLE int &CStreaming::ms_numPedsLoaded = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x97F340, 0, 0));
PLUGIN_VARIABLE int &CStreaming::ms_numPriorityRequests = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x97F884, 0, 0));
PLUGIN_VARIABLE tModelRequest &CStreaming::ms_endRequestedList = *reinterpret_cast<tModelRequest *>(GLOBAL_ADDRESS_BY_VERSION(0xA0D1F4, 0, 0));
PLUGIN_VARIABLE tModelRequest &CStreaming::ms_startLoadedList = *reinterpret_cast<tModelRequest *>(GLOBAL_ADDRESS_BY_VERSION(0xA0DAE0, 0, 0));
PLUGIN_VARIABLE int &CStreaming::ms_streamingBufferSize = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xA0FC90, 0, 0));
PLUGIN_VARIABLE CDirectory *&CStreaming::ms_pExtraObjectsDir = *reinterpret_cast<CDirectory **>(GLOBAL_ADDRESS_BY_VERSION(0xA10730, 0, 0));
PLUGIN_VARIABLE bool &CStreaming::ms_disableStreaming = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10B1E, 0, 0));

int addrof(CStreaming::AddModelsToRequestList) = ADDRESS_BY_VERSION(0x40EA10, 0, 0);
int gaddrof(CStreaming::AddModelsToRequestList) = GLOBAL_ADDRESS_BY_VERSION(0x40EA10, 0, 0);

void CStreaming::AddModelsToRequestList(CVector const *pos, unsigned int streamingFlags) {
    plugin::CallDynGlobal<CVector const *, unsigned int>(gaddrof(CStreaming::AddModelsToRequestList), pos, streamingFlags);
}

int addrof(CStreaming::AddToLoadedVehiclesList) = ADDRESS_BY_VERSION(0x408B40, 0, 0);
int gaddrof(CStreaming::AddToLoadedVehiclesList) = GLOBAL_ADDRESS_BY_VERSION(0x408B40, 0, 0);

bool CStreaming::AddToLoadedVehiclesList(int modelIndex) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CStreaming::AddToLoadedVehiclesList), modelIndex);
}

int addrof(CStreaming::AreAnimsUsedByRequestedModels) = ADDRESS_BY_VERSION(0x40C9C0, 0, 0);
int gaddrof(CStreaming::AreAnimsUsedByRequestedModels) = GLOBAL_ADDRESS_BY_VERSION(0x40C9C0, 0, 0);

bool CStreaming::AreAnimsUsedByRequestedModels(int animFileIndex) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CStreaming::AreAnimsUsedByRequestedModels), animFileIndex);
}

int addrof(CStreaming::ConvertBufferToObject) = ADDRESS_BY_VERSION(0x40C1E0, 0, 0);
int gaddrof(CStreaming::ConvertBufferToObject) = GLOBAL_ADDRESS_BY_VERSION(0x40C1E0, 0, 0);

void CStreaming::ConvertBufferToObject(char *streamingBuffer, int modelIndex) {
    plugin::CallDynGlobal<char *, int>(gaddrof(CStreaming::ConvertBufferToObject), streamingBuffer, modelIndex);
}

int addrof(CStreaming::DeleteAllRwObjects) = ADDRESS_BY_VERSION(0x40F470, 0, 0);
int gaddrof(CStreaming::DeleteAllRwObjects) = GLOBAL_ADDRESS_BY_VERSION(0x40F470, 0, 0);

void CStreaming::DeleteAllRwObjects() {
    plugin::CallDynGlobal(gaddrof(CStreaming::DeleteAllRwObjects));
}

int addrof(CStreaming::DeleteFarAwayRwObjects) = ADDRESS_BY_VERSION(0x40F5E0, 0, 0);
int gaddrof(CStreaming::DeleteFarAwayRwObjects) = GLOBAL_ADDRESS_BY_VERSION(0x40F5E0, 0, 0);

void CStreaming::DeleteFarAwayRwObjects(CVector const *pos) {
    plugin::CallDynGlobal<CVector const *>(gaddrof(CStreaming::DeleteFarAwayRwObjects), pos);
}

int addrof(CStreaming::DeleteRwObjectsAfterDeath) = ADDRESS_BY_VERSION(0x40F200, 0, 0);
int gaddrof(CStreaming::DeleteRwObjectsAfterDeath) = GLOBAL_ADDRESS_BY_VERSION(0x40F200, 0, 0);

void CStreaming::DeleteRwObjectsAfterDeath(CVector const *pos) {
    plugin::CallDynGlobal<CVector const *>(gaddrof(CStreaming::DeleteRwObjectsAfterDeath), pos);
}

int addrof(CStreaming::DeleteRwObjectsBehindCamera) = ADDRESS_BY_VERSION(0x40CC70, 0, 0);
int gaddrof(CStreaming::DeleteRwObjectsBehindCamera) = GLOBAL_ADDRESS_BY_VERSION(0x40CC70, 0, 0);

void CStreaming::DeleteRwObjectsBehindCamera(int maxStreamingMemAllowed) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::DeleteRwObjectsBehindCamera), maxStreamingMemAllowed);
}

int addrof(CStreaming::DeleteRwObjectsBehindCameraInSectorList) = ADDRESS_BY_VERSION(0x40CBE0, 0, 0);
int gaddrof(CStreaming::DeleteRwObjectsBehindCameraInSectorList) = GLOBAL_ADDRESS_BY_VERSION(0x40CBE0, 0, 0);

bool CStreaming::DeleteRwObjectsBehindCameraInSectorList(CPtrList *ptrList, int maxStreamingMemAllowed) {
    return plugin::CallAndReturnDynGlobal<bool, CPtrList *, int>(gaddrof(CStreaming::DeleteRwObjectsBehindCameraInSectorList), ptrList, maxStreamingMemAllowed);
}

int addrof(CStreaming::DeleteRwObjectsInOverlapSectorList) = ADDRESS_BY_VERSION(0x40F0F0, 0, 0);
int gaddrof(CStreaming::DeleteRwObjectsInOverlapSectorList) = GLOBAL_ADDRESS_BY_VERSION(0x40F0F0, 0, 0);

void CStreaming::DeleteRwObjectsInOverlapSectorList(CPtrList *ptrlist, int sectorX, int sectorY) {
    plugin::CallDynGlobal<CPtrList *, int, int>(gaddrof(CStreaming::DeleteRwObjectsInOverlapSectorList), ptrlist, sectorX, sectorY);
}

int addrof(CStreaming::DeleteRwObjectsNotInFrustumInSectorList) = ADDRESS_BY_VERSION(0x40CB50, 0, 0);
int gaddrof(CStreaming::DeleteRwObjectsNotInFrustumInSectorList) = GLOBAL_ADDRESS_BY_VERSION(0x40CB50, 0, 0);

bool CStreaming::DeleteRwObjectsNotInFrustumInSectorList(CPtrList *ptrList, int maxStreamingMemAllowed) {
    return plugin::CallAndReturnDynGlobal<bool, CPtrList *, int>(gaddrof(CStreaming::DeleteRwObjectsNotInFrustumInSectorList), ptrList, maxStreamingMemAllowed);
}

int addrof(CStreaming::FinishLoadingLargeFile) = ADDRESS_BY_VERSION(0x40C770, 0, 0);
int gaddrof(CStreaming::FinishLoadingLargeFile) = GLOBAL_ADDRESS_BY_VERSION(0x40C770, 0, 0);

void CStreaming::FinishLoadingLargeFile(char *streamingBuffer, int modelID) {
    plugin::CallDynGlobal<char *, int>(gaddrof(CStreaming::FinishLoadingLargeFile), streamingBuffer, modelID);
}

int addrof(CStreaming::FlushChannels) = ADDRESS_BY_VERSION(0x40B580, 0, 0);
int gaddrof(CStreaming::FlushChannels) = GLOBAL_ADDRESS_BY_VERSION(0x40B580, 0, 0);

void CStreaming::FlushChannels() {
    plugin::CallDynGlobal(gaddrof(CStreaming::FlushChannels));
}

int addrof(CStreaming::FlushRequestList) = ADDRESS_BY_VERSION(0x40B4D0, 0, 0);
int gaddrof(CStreaming::FlushRequestList) = GLOBAL_ADDRESS_BY_VERSION(0x40B4D0, 0, 0);

void CStreaming::FlushRequestList() {
    plugin::CallDynGlobal(gaddrof(CStreaming::FlushRequestList));
}

int addrof(CStreaming::GetCdImageOffset) = ADDRESS_BY_VERSION(0x40BC30, 0, 0);
int gaddrof(CStreaming::GetCdImageOffset) = GLOBAL_ADDRESS_BY_VERSION(0x40BC30, 0, 0);

unsigned int CStreaming::GetCdImageOffset(int CdPosn) {
    return plugin::CallAndReturnDynGlobal<unsigned int, int>(gaddrof(CStreaming::GetCdImageOffset), CdPosn);
}

int addrof(CStreaming::GetNextFileOnCd) = ADDRESS_BY_VERSION(0x40BCA0, 0, 0);
int gaddrof(CStreaming::GetNextFileOnCd) = GLOBAL_ADDRESS_BY_VERSION(0x40BCA0, 0, 0);

int CStreaming::GetNextFileOnCd(int CdOffset, bool bOnlyPriorityRequests) {
    return plugin::CallAndReturnDynGlobal<int, int, bool>(gaddrof(CStreaming::GetNextFileOnCd), CdOffset, bOnlyPriorityRequests);
}

int addrof(CStreaming::HasSpecialCharLoaded) = ADDRESS_BY_VERSION(0x409A10, 0, 0);
int gaddrof(CStreaming::HasSpecialCharLoaded) = GLOBAL_ADDRESS_BY_VERSION(0x409A10, 0, 0);

bool CStreaming::HasSpecialCharLoaded(int SpecialSlotID) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CStreaming::HasSpecialCharLoaded), SpecialSlotID);
}

int addrof(CStreaming::IHaveUsedStreamingMemory) = ADDRESS_BY_VERSION(0x40C170, 0, 0);
int gaddrof(CStreaming::IHaveUsedStreamingMemory) = GLOBAL_ADDRESS_BY_VERSION(0x40C170, 0, 0);

void CStreaming::IHaveUsedStreamingMemory() {
    plugin::CallDynGlobal(gaddrof(CStreaming::IHaveUsedStreamingMemory));
}

int addrof(CStreaming::ImGonnaUseStreamingMemory) = ADDRESS_BY_VERSION(0x40C180, 0, 0);
int gaddrof(CStreaming::ImGonnaUseStreamingMemory) = GLOBAL_ADDRESS_BY_VERSION(0x40C180, 0, 0);

void CStreaming::ImGonnaUseStreamingMemory() {
    plugin::CallDynGlobal(gaddrof(CStreaming::ImGonnaUseStreamingMemory));
}

int addrof(CStreaming::Init) = ADDRESS_BY_VERSION(0x410800, 0, 0);
int gaddrof(CStreaming::Init) = GLOBAL_ADDRESS_BY_VERSION(0x410800, 0, 0);

void CStreaming::Init() {
    plugin::CallDynGlobal(gaddrof(CStreaming::Init));
}

int addrof(CStreaming::InitChannels) = ADDRESS_BY_VERSION(0x4100A0, 0, 0);
int gaddrof(CStreaming::InitChannels) = GLOBAL_ADDRESS_BY_VERSION(0x4100A0, 0, 0);

void CStreaming::InitChannels() {
    plugin::CallDynGlobal(gaddrof(CStreaming::InitChannels));
}

int addrof(CStreaming::InstanceLoadedModels) = ADDRESS_BY_VERSION(0x40E4E0, 0, 0);
int gaddrof(CStreaming::InstanceLoadedModels) = GLOBAL_ADDRESS_BY_VERSION(0x40E4E0, 0, 0);

void CStreaming::InstanceLoadedModels(CVector const *pos) {
    plugin::CallDynGlobal<CVector const *>(gaddrof(CStreaming::InstanceLoadedModels), pos);
}

int addrof(CStreaming::IsObjectInCdImage) = ADDRESS_BY_VERSION(0x40E4C0, 0, 0);
int gaddrof(CStreaming::IsObjectInCdImage) = GLOBAL_ADDRESS_BY_VERSION(0x40E4C0, 0, 0);

bool CStreaming::IsObjectInCdImage(int modelIndex) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CStreaming::IsObjectInCdImage), modelIndex);
}

int addrof(CStreaming::IsTxdUsedByRequestedModels) = ADDRESS_BY_VERSION(0x40CA90, 0, 0);
int gaddrof(CStreaming::IsTxdUsedByRequestedModels) = GLOBAL_ADDRESS_BY_VERSION(0x40CA90, 0, 0);

bool CStreaming::IsTxdUsedByRequestedModels(int txdIndex) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CStreaming::IsTxdUsedByRequestedModels), txdIndex);
}

int addrof(CStreaming::LoadAllRequestedModels) = ADDRESS_BY_VERSION(0x40B5F0, 0, 0);
int gaddrof(CStreaming::LoadAllRequestedModels) = GLOBAL_ADDRESS_BY_VERSION(0x40B5F0, 0, 0);

void CStreaming::LoadAllRequestedModels(bool bOnlyPriorityRequests) {
    plugin::CallDynGlobal<bool>(gaddrof(CStreaming::LoadAllRequestedModels), bOnlyPriorityRequests);
}

int addrof(CStreaming::LoadBigBuildingsWhenNeeded) = ADDRESS_BY_VERSION(0x40DFB0, 0, 0);
int gaddrof(CStreaming::LoadBigBuildingsWhenNeeded) = GLOBAL_ADDRESS_BY_VERSION(0x40DFB0, 0, 0);

void CStreaming::LoadBigBuildingsWhenNeeded() {
    plugin::CallDynGlobal(gaddrof(CStreaming::LoadBigBuildingsWhenNeeded));
}

int addrof_o(CStreaming::LoadCdDirectory, void (*)(char const *, int)) = ADDRESS_BY_VERSION(0x40FBC0, 0, 0);
int gaddrof_o(CStreaming::LoadCdDirectory, void (*)(char const *, int)) = GLOBAL_ADDRESS_BY_VERSION(0x40FBC0, 0, 0);

void CStreaming::LoadCdDirectory(char const *fileName, int id) {
    plugin::CallDynGlobal<char const *, int>(gaddrof_o(CStreaming::LoadCdDirectory, void (*)(char const *, int)), fileName, id);
}

int addrof_o(CStreaming::LoadCdDirectory, void (*)()) = ADDRESS_BY_VERSION(0x40FE00, 0, 0);
int gaddrof_o(CStreaming::LoadCdDirectory, void (*)()) = GLOBAL_ADDRESS_BY_VERSION(0x40FE00, 0, 0);

void CStreaming::LoadCdDirectory() {
    plugin::CallDynGlobal(gaddrof_o(CStreaming::LoadCdDirectory, void (*)()));
}

int addrof(CStreaming::LoadInitialPeds) = ADDRESS_BY_VERSION(0x40AA30, 0, 0);
int gaddrof(CStreaming::LoadInitialPeds) = GLOBAL_ADDRESS_BY_VERSION(0x40AA30, 0, 0);

void CStreaming::LoadInitialPeds() {
    plugin::CallDynGlobal(gaddrof(CStreaming::LoadInitialPeds));
}

int addrof(CStreaming::LoadInitialVehicles) = ADDRESS_BY_VERSION(0x409940, 0, 0);
int gaddrof(CStreaming::LoadInitialVehicles) = GLOBAL_ADDRESS_BY_VERSION(0x409940, 0, 0);

void CStreaming::LoadInitialVehicles() {
    plugin::CallDynGlobal(gaddrof(CStreaming::LoadInitialVehicles));
}

int addrof(CStreaming::LoadInitialWeapons) = ADDRESS_BY_VERSION(0x40AA10, 0, 0);
int gaddrof(CStreaming::LoadInitialWeapons) = GLOBAL_ADDRESS_BY_VERSION(0x40AA10, 0, 0);

void CStreaming::LoadInitialWeapons() {
    plugin::CallDynGlobal(gaddrof(CStreaming::LoadInitialWeapons));
}

int addrof(CStreaming::LoadScene) = ADDRESS_BY_VERSION(0x40AF60, 0, 0);
int gaddrof(CStreaming::LoadScene) = GLOBAL_ADDRESS_BY_VERSION(0x40AF60, 0, 0);

void CStreaming::LoadScene(CVector const *pos) {
    plugin::CallDynGlobal<CVector const *>(gaddrof(CStreaming::LoadScene), pos);
}

int addrof(CStreaming::LoadSceneCollision) = ADDRESS_BY_VERSION(0x40AF30, 0, 0);
int gaddrof(CStreaming::LoadSceneCollision) = GLOBAL_ADDRESS_BY_VERSION(0x40AF30, 0, 0);

void CStreaming::LoadSceneCollision(CVector const *pos) {
    plugin::CallDynGlobal<CVector const *>(gaddrof(CStreaming::LoadSceneCollision), pos);
}

int addrof(CStreaming::MakeSpaceFor) = ADDRESS_BY_VERSION(0x40C190, 0, 0);
int gaddrof(CStreaming::MakeSpaceFor) = GLOBAL_ADDRESS_BY_VERSION(0x40C190, 0, 0);

void CStreaming::MakeSpaceFor(int memoryToCleanSize) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::MakeSpaceFor), memoryToCleanSize);
}

int addrof(CStreaming::MemoryCardLoad) = ADDRESS_BY_VERSION(0x408A20, 0, 0);
int gaddrof(CStreaming::MemoryCardLoad) = GLOBAL_ADDRESS_BY_VERSION(0x408A20, 0, 0);

void CStreaming::MemoryCardLoad(unsigned char *buffer, unsigned int num) {
    plugin::CallDynGlobal<unsigned char *, unsigned int>(gaddrof(CStreaming::MemoryCardLoad), buffer, num);
}

int addrof(CStreaming::MemoryCardSave) = ADDRESS_BY_VERSION(0x408A60, 0, 0);
int gaddrof(CStreaming::MemoryCardSave) = GLOBAL_ADDRESS_BY_VERSION(0x408A60, 0, 0);

void CStreaming::MemoryCardSave(unsigned char *text, unsigned int *num) {
    plugin::CallDynGlobal<unsigned char *, unsigned int *>(gaddrof(CStreaming::MemoryCardSave), text, num);
}

int addrof_o(CStreaming::ProcessEntitiesInSectorList, void (*)(CPtrList *, unsigned int)) = ADDRESS_BY_VERSION(0x40E7B0, 0, 0);
int gaddrof_o(CStreaming::ProcessEntitiesInSectorList, void (*)(CPtrList *, unsigned int)) = GLOBAL_ADDRESS_BY_VERSION(0x40E7B0, 0, 0);

void CStreaming::ProcessEntitiesInSectorList(CPtrList *a1, unsigned int Streamingflags) {
    plugin::CallDynGlobal<CPtrList *, unsigned int>(gaddrof_o(CStreaming::ProcessEntitiesInSectorList, void (*)(CPtrList *, unsigned int)), a1, Streamingflags);
}

int addrof_o(CStreaming::ProcessEntitiesInSectorList, void (*)(CPtrList *, float, float, float, float, float, float, unsigned int)) = ADDRESS_BY_VERSION(0x40E870, 0, 0);
int gaddrof_o(CStreaming::ProcessEntitiesInSectorList, void (*)(CPtrList *, float, float, float, float, float, float, unsigned int)) = GLOBAL_ADDRESS_BY_VERSION(0x40E870, 0, 0);

void CStreaming::ProcessEntitiesInSectorList(CPtrList *ptrList, float X1, float Y1, float X2, float Y2, float X3, float Y3, unsigned int Streamingflags) {
    plugin::CallDynGlobal<CPtrList *, float, float, float, float, float, float, unsigned int>(gaddrof_o(CStreaming::ProcessEntitiesInSectorList, void (*)(CPtrList *, float, float, float, float, float, float, unsigned int)), ptrList, X1, Y1, X2, Y2, X3, Y3, Streamingflags);
}

int addrof(CStreaming::ProcessLoadingChannel) = ADDRESS_BY_VERSION(0x40BEB0, 0, 0);
int gaddrof(CStreaming::ProcessLoadingChannel) = GLOBAL_ADDRESS_BY_VERSION(0x40BEB0, 0, 0);

bool CStreaming::ProcessLoadingChannel(int channelIndex) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CStreaming::ProcessLoadingChannel), channelIndex);
}

int addrof(CStreaming::ReInit) = ADDRESS_BY_VERSION(0x40FEC0, 0, 0);
int gaddrof(CStreaming::ReInit) = GLOBAL_ADDRESS_BY_VERSION(0x40FEC0, 0, 0);

void CStreaming::ReInit() {
    plugin::CallDynGlobal(gaddrof(CStreaming::ReInit));
}

int addrof(CStreaming::RemoveBuildings) = ADDRESS_BY_VERSION(0x40DD00, 0, 0);
int gaddrof(CStreaming::RemoveBuildings) = GLOBAL_ADDRESS_BY_VERSION(0x40DD00, 0, 0);

void CStreaming::RemoveBuildings(int levelID) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::RemoveBuildings), levelID);
}

int addrof(CStreaming::RemoveBuildingsNotInArea) = ADDRESS_BY_VERSION(0x40DAA0, 0, 0);
int gaddrof(CStreaming::RemoveBuildingsNotInArea) = GLOBAL_ADDRESS_BY_VERSION(0x40DAA0, 0, 0);

char CStreaming::RemoveBuildingsNotInArea(int LevelID) {
    return plugin::CallAndReturnDynGlobal<char, int>(gaddrof(CStreaming::RemoveBuildingsNotInArea), LevelID);
}

int addrof(CStreaming::RemoveCurrentZonesModels) = ADDRESS_BY_VERSION(0x409AE0, 0, 0);
int gaddrof(CStreaming::RemoveCurrentZonesModels) = GLOBAL_ADDRESS_BY_VERSION(0x409AE0, 0, 0);

void CStreaming::RemoveCurrentZonesModels() {
    plugin::CallDynGlobal(gaddrof(CStreaming::RemoveCurrentZonesModels));
}

int addrof(CStreaming::RemoveIslandsNotUsed) = ADDRESS_BY_VERSION(0x40D890, 0, 0);
int gaddrof(CStreaming::RemoveIslandsNotUsed) = GLOBAL_ADDRESS_BY_VERSION(0x40D890, 0, 0);

void CStreaming::RemoveIslandsNotUsed(int levelID) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::RemoveIslandsNotUsed), levelID);
}

int addrof(CStreaming::RemoveLeastUsedModel) = ADDRESS_BY_VERSION(0x40D5A0, 0, 0);
int gaddrof(CStreaming::RemoveLeastUsedModel) = GLOBAL_ADDRESS_BY_VERSION(0x40D5A0, 0, 0);

bool CStreaming::RemoveLeastUsedModel(int streamingFlags) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CStreaming::RemoveLeastUsedModel), streamingFlags);
}

int addrof(CStreaming::RemoveLoadedVehicle) = ADDRESS_BY_VERSION(0x408AA0, 0, 0);
int gaddrof(CStreaming::RemoveLoadedVehicle) = GLOBAL_ADDRESS_BY_VERSION(0x408AA0, 0, 0);

bool CStreaming::RemoveLoadedVehicle() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CStreaming::RemoveLoadedVehicle));
}

int addrof(CStreaming::RemoveLoadedZoneModel) = ADDRESS_BY_VERSION(0x409A50, 0, 0);
int gaddrof(CStreaming::RemoveLoadedZoneModel) = GLOBAL_ADDRESS_BY_VERSION(0x409A50, 0, 0);

bool CStreaming::RemoveLoadedZoneModel() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CStreaming::RemoveLoadedZoneModel));
}

int addrof(CStreaming::RemoveModel) = ADDRESS_BY_VERSION(0x40D6E0, 0, 0);
int gaddrof(CStreaming::RemoveModel) = GLOBAL_ADDRESS_BY_VERSION(0x40D6E0, 0, 0);

void CStreaming::RemoveModel(int modelIndex) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::RemoveModel), modelIndex);
}

int addrof(CStreaming::RemoveUnusedBigBuildings) = ADDRESS_BY_VERSION(0x40D9B0, 0, 0);
int gaddrof(CStreaming::RemoveUnusedBigBuildings) = GLOBAL_ADDRESS_BY_VERSION(0x40D9B0, 0, 0);

void CStreaming::RemoveUnusedBigBuildings(int LevelID) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::RemoveUnusedBigBuildings), LevelID);
}

int addrof(CStreaming::RemoveUnusedBuildings) = ADDRESS_BY_VERSION(0x40DF80, 0, 0);
int gaddrof(CStreaming::RemoveUnusedBuildings) = GLOBAL_ADDRESS_BY_VERSION(0x40DF80, 0, 0);

void CStreaming::RemoveUnusedBuildings(int levelID) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::RemoveUnusedBuildings), levelID);
}

int addrof(CStreaming::RemoveUnusedModelsInLoadedList) = ADDRESS_BY_VERSION(0x40D6D0, 0, 0);
int gaddrof(CStreaming::RemoveUnusedModelsInLoadedList) = GLOBAL_ADDRESS_BY_VERSION(0x40D6D0, 0, 0);

void CStreaming::RemoveUnusedModelsInLoadedList() {
    plugin::CallDynGlobal(gaddrof(CStreaming::RemoveUnusedModelsInLoadedList));
}

int addrof(CStreaming::RequestBigBuildings) = ADDRESS_BY_VERSION(0x40E260, 0, 0);
int gaddrof(CStreaming::RequestBigBuildings) = GLOBAL_ADDRESS_BY_VERSION(0x40E260, 0, 0);

void CStreaming::RequestBigBuildings(int levelID) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::RequestBigBuildings), levelID);
}

int addrof(CStreaming::RequestModel) = ADDRESS_BY_VERSION(0x40E310, 0, 0);
int gaddrof(CStreaming::RequestModel) = GLOBAL_ADDRESS_BY_VERSION(0x40E310, 0, 0);

void CStreaming::RequestModel(int modelIndex, int Streamingflags) {
    plugin::CallDynGlobal<int, int>(gaddrof(CStreaming::RequestModel), modelIndex, Streamingflags);
}

int addrof(CStreaming::RequestModelStream) = ADDRESS_BY_VERSION(0x40B8A0, 0, 0);
int gaddrof(CStreaming::RequestModelStream) = GLOBAL_ADDRESS_BY_VERSION(0x40B8A0, 0, 0);

void CStreaming::RequestModelStream(int ChannelID) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::RequestModelStream), ChannelID);
}

int addrof(CStreaming::RequestSpecialChar) = ADDRESS_BY_VERSION(0x409A30, 0, 0);
int gaddrof(CStreaming::RequestSpecialChar) = GLOBAL_ADDRESS_BY_VERSION(0x409A30, 0, 0);

void CStreaming::RequestSpecialChar(int SpecialSlotID, char const *Name, int streamingFlags) {
    plugin::CallDynGlobal<int, char const *, int>(gaddrof(CStreaming::RequestSpecialChar), SpecialSlotID, Name, streamingFlags);
}

int addrof(CStreaming::RequestSpecialModel) = ADDRESS_BY_VERSION(0x40AA60, 0, 0);
int gaddrof(CStreaming::RequestSpecialModel) = GLOBAL_ADDRESS_BY_VERSION(0x40AA60, 0, 0);

char CStreaming::RequestSpecialModel(int SpecialModelID, char *name, int StreamingFlags) {
    return plugin::CallAndReturnDynGlobal<char, int, char *, int>(gaddrof(CStreaming::RequestSpecialModel), SpecialModelID, name, StreamingFlags);
}

int addrof(CStreaming::RetryLoadFile) = ADDRESS_BY_VERSION(0x40ED80, 0, 0);
int gaddrof(CStreaming::RetryLoadFile) = GLOBAL_ADDRESS_BY_VERSION(0x40ED80, 0, 0);

void CStreaming::RetryLoadFile(int nChannel) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::RetryLoadFile), nChannel);
}

int addrof(CStreaming::SetMissionDoesntRequireModel) = ADDRESS_BY_VERSION(0x40AD60, 0, 0);
int gaddrof(CStreaming::SetMissionDoesntRequireModel) = GLOBAL_ADDRESS_BY_VERSION(0x40AD60, 0, 0);

void CStreaming::SetMissionDoesntRequireModel(int modelIndex) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::SetMissionDoesntRequireModel), modelIndex);
}

int addrof(CStreaming::SetMissionDoesntRequireSpecialChar) = ADDRESS_BY_VERSION(0x409970, 0, 0);
int gaddrof(CStreaming::SetMissionDoesntRequireSpecialChar) = GLOBAL_ADDRESS_BY_VERSION(0x409970, 0, 0);

void CStreaming::SetMissionDoesntRequireSpecialChar(int SpecialSlotID) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::SetMissionDoesntRequireSpecialChar), SpecialSlotID);
}

int addrof(CStreaming::SetModelIsDeletable) = ADDRESS_BY_VERSION(0x40AEA0, 0, 0);
int gaddrof(CStreaming::SetModelIsDeletable) = GLOBAL_ADDRESS_BY_VERSION(0x40AEA0, 0, 0);

void CStreaming::SetModelIsDeletable(int modelIndex) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::SetModelIsDeletable), modelIndex);
}

int addrof(CStreaming::SetModelTxdIsDeletable) = ADDRESS_BY_VERSION(0x40ADF0, 0, 0);
int gaddrof(CStreaming::SetModelTxdIsDeletable) = GLOBAL_ADDRESS_BY_VERSION(0x40ADF0, 0, 0);

void CStreaming::SetModelTxdIsDeletable(int modelIndex) {
    plugin::CallDynGlobal<int>(gaddrof(CStreaming::SetModelTxdIsDeletable), modelIndex);
}

int addrof(CStreaming::Shutdown) = ADDRESS_BY_VERSION(0x410060, 0, 0);
int gaddrof(CStreaming::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x410060, 0, 0);

void CStreaming::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CStreaming::Shutdown));
}

int addrof(CStreaming::StreamVehiclesAndPeds) = ADDRESS_BY_VERSION(0x408C90, 0, 0);
int gaddrof(CStreaming::StreamVehiclesAndPeds) = GLOBAL_ADDRESS_BY_VERSION(0x408C90, 0, 0);

void CStreaming::StreamVehiclesAndPeds() {
    plugin::CallDynGlobal(gaddrof(CStreaming::StreamVehiclesAndPeds));
}

int addrof(CStreaming::StreamZoneModels) = ADDRESS_BY_VERSION(0x40A050, 0, 0);
int gaddrof(CStreaming::StreamZoneModels) = GLOBAL_ADDRESS_BY_VERSION(0x40A050, 0, 0);

void CStreaming::StreamZoneModels(CVector const *arg1) {
    plugin::CallDynGlobal<CVector const *>(gaddrof(CStreaming::StreamZoneModels), arg1);
}

int addrof(CStreaming::Update) = ADDRESS_BY_VERSION(0x40EE80, 0, 0);
int gaddrof(CStreaming::Update) = GLOBAL_ADDRESS_BY_VERSION(0x40EE80, 0, 0);

void CStreaming::Update() {
    plugin::CallDynGlobal(gaddrof(CStreaming::Update));
}
