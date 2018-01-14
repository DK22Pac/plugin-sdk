/*
    Plugin-SDK (Grand Theft Auto) source file
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
CDirectory *CStreaming::ms_pExtraObjectsDir = (CDirectory *)0x95CB90;

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
