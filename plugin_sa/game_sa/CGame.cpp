/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGame.h"

PLUGIN_SOURCE_FILE

char(&CGame::aDatFile)[32] = *reinterpret_cast<char(*)[32]>(GLOBAL_ADDRESS_BY_VERSION(0xB728EC, 0, 0, 0, 0, 0));
int &CGame::currLevel = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xB7290C, 0, 0, 0, 0, 0));
unsigned char &CGame::bMissionPackGame = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0xB72910, 0, 0, 0, 0, 0));
int &CGame::currArea = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xB72914, 0, 0, 0, 0, 0));
RwMatrix *&CGame::m_pWorkingMatrix1 = *reinterpret_cast<RwMatrix **>(GLOBAL_ADDRESS_BY_VERSION(0xB72920, 0, 0, 0, 0, 0));
RwMatrix *&CGame::m_pWorkingMatrix2 = *reinterpret_cast<RwMatrix **>(GLOBAL_ADDRESS_BY_VERSION(0xB72924, 0, 0, 0, 0, 0));
int &gameTxdSlot = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xB728E8, 0, 0, 0, 0, 0));

int addrof(CGame::CanSeeOutSideFromCurrArea) = ADDRESS_BY_VERSION(0x53C4A0, 0, 0, 0, 0, 0);
int gaddrof(CGame::CanSeeOutSideFromCurrArea) = GLOBAL_ADDRESS_BY_VERSION(0x53C4A0, 0, 0, 0, 0, 0);

bool CGame::CanSeeOutSideFromCurrArea() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGame::CanSeeOutSideFromCurrArea));
}

int addrof(CGame::CanSeeWaterFromCurrArea) = ADDRESS_BY_VERSION(0x53C4B0, 0, 0, 0, 0, 0);
int gaddrof(CGame::CanSeeWaterFromCurrArea) = GLOBAL_ADDRESS_BY_VERSION(0x53C4B0, 0, 0, 0, 0, 0);

bool CGame::CanSeeWaterFromCurrArea() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGame::CanSeeWaterFromCurrArea));
}

int addrof(CGame::DrasticTidyUpMemory) = ADDRESS_BY_VERSION(0x53C810, 0, 0, 0, 0, 0);
int gaddrof(CGame::DrasticTidyUpMemory) = GLOBAL_ADDRESS_BY_VERSION(0x53C810, 0, 0, 0, 0, 0);

void CGame::DrasticTidyUpMemory(bool a1) {
    plugin::CallDynGlobal<bool>(gaddrof(CGame::DrasticTidyUpMemory), a1);
}

int addrof(CGame::FinalShutdown) = ADDRESS_BY_VERSION(0x53BC30, 0, 0, 0, 0, 0);
int gaddrof(CGame::FinalShutdown) = GLOBAL_ADDRESS_BY_VERSION(0x53BC30, 0, 0, 0, 0, 0);

void CGame::FinalShutdown() {
    plugin::CallDynGlobal(gaddrof(CGame::FinalShutdown));
}

int addrof(CGame::GenerateTempPedAtStartOfNetworkGame) = ADDRESS_BY_VERSION(0x53C240, 0, 0, 0, 0, 0);
int gaddrof(CGame::GenerateTempPedAtStartOfNetworkGame) = GLOBAL_ADDRESS_BY_VERSION(0x53C240, 0, 0, 0, 0, 0);

void CGame::GenerateTempPedAtStartOfNetworkGame() {
    plugin::CallDynGlobal(gaddrof(CGame::GenerateTempPedAtStartOfNetworkGame));
}

int addrof(CGame::Init1) = ADDRESS_BY_VERSION(0x5BF840, 0, 0, 0, 0, 0);
int gaddrof(CGame::Init1) = GLOBAL_ADDRESS_BY_VERSION(0x5BF840, 0, 0, 0, 0, 0);

bool CGame::Init1(char const *datFile) {
    return plugin::CallAndReturnDynGlobal<bool, char const *>(gaddrof(CGame::Init1), datFile);
}

int addrof(CGame::Init2) = ADDRESS_BY_VERSION(0x5BA1A0, 0, 0, 0, 0, 0);
int gaddrof(CGame::Init2) = GLOBAL_ADDRESS_BY_VERSION(0x5BA1A0, 0, 0, 0, 0, 0);

bool CGame::Init2(char const *datFile) {
    return plugin::CallAndReturnDynGlobal<bool, char const *>(gaddrof(CGame::Init2), datFile);
}

int addrof(CGame::Init3) = ADDRESS_BY_VERSION(0x5BA400, 0, 0, 0, 0, 0);
int gaddrof(CGame::Init3) = GLOBAL_ADDRESS_BY_VERSION(0x5BA400, 0, 0, 0, 0, 0);

bool CGame::Init3(char const *datFile) {
    return plugin::CallAndReturnDynGlobal<bool, char const *>(gaddrof(CGame::Init3), datFile);
}

int addrof(CGame::InitAfterLostFocus) = ADDRESS_BY_VERSION(0x53BC60, 0, 0, 0, 0, 0);
int gaddrof(CGame::InitAfterLostFocus) = GLOBAL_ADDRESS_BY_VERSION(0x53BC60, 0, 0, 0, 0, 0);

void CGame::InitAfterLostFocus() {
    plugin::CallDynGlobal(gaddrof(CGame::InitAfterLostFocus));
}

int addrof(CGame::Initialise) = ADDRESS_BY_VERSION(0x53BC80, 0, 0, 0, 0, 0);
int gaddrof(CGame::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x53BC80, 0, 0, 0, 0, 0);

bool CGame::Initialise(char const *datFile) {
    return plugin::CallAndReturnDynGlobal<bool, char const *>(gaddrof(CGame::Initialise), datFile);
}

int addrof(CGame::InitialiseCoreDataAfterRW) = ADDRESS_BY_VERSION(0x5BFA90, 0, 0, 0, 0, 0);
int gaddrof(CGame::InitialiseCoreDataAfterRW) = GLOBAL_ADDRESS_BY_VERSION(0x5BFA90, 0, 0, 0, 0, 0);

bool CGame::InitialiseCoreDataAfterRW() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGame::InitialiseCoreDataAfterRW));
}

int addrof(CGame::InitialiseEssentialsAfterRW) = ADDRESS_BY_VERSION(0x5BA160, 0, 0, 0, 0, 0);
int gaddrof(CGame::InitialiseEssentialsAfterRW) = GLOBAL_ADDRESS_BY_VERSION(0x5BA160, 0, 0, 0, 0, 0);

bool CGame::InitialiseEssentialsAfterRW() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGame::InitialiseEssentialsAfterRW));
}

int addrof(CGame::InitialiseOnceBeforeRW) = ADDRESS_BY_VERSION(0x53BB50, 0, 0, 0, 0, 0);
int gaddrof(CGame::InitialiseOnceBeforeRW) = GLOBAL_ADDRESS_BY_VERSION(0x53BB50, 0, 0, 0, 0, 0);

bool CGame::InitialiseOnceBeforeRW() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGame::InitialiseOnceBeforeRW));
}

int addrof(CGame::InitialiseRenderWare) = ADDRESS_BY_VERSION(0x5BD600, 0, 0, 0, 0, 0);
int gaddrof(CGame::InitialiseRenderWare) = GLOBAL_ADDRESS_BY_VERSION(0x5BD600, 0, 0, 0, 0, 0);

bool CGame::InitialiseRenderWare() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGame::InitialiseRenderWare));
}

int addrof(CGame::InitialiseWhenRestarting) = ADDRESS_BY_VERSION(0x53C680, 0, 0, 0, 0, 0);
int gaddrof(CGame::InitialiseWhenRestarting) = GLOBAL_ADDRESS_BY_VERSION(0x53C680, 0, 0, 0, 0, 0);

void CGame::InitialiseWhenRestarting() {
    plugin::CallDynGlobal(gaddrof(CGame::InitialiseWhenRestarting));
}

int addrof(CGame::Process) = ADDRESS_BY_VERSION(0x53BEE0, 0, 0, 0, 0, 0);
int gaddrof(CGame::Process) = GLOBAL_ADDRESS_BY_VERSION(0x53BEE0, 0, 0, 0, 0, 0);

void CGame::Process() {
    plugin::CallDynGlobal(gaddrof(CGame::Process));
}

int addrof(CGame::ReInitGameObjectVariables) = ADDRESS_BY_VERSION(0x53BCF0, 0, 0, 0, 0, 0);
int gaddrof(CGame::ReInitGameObjectVariables) = GLOBAL_ADDRESS_BY_VERSION(0x53BCF0, 0, 0, 0, 0, 0);

void CGame::ReInitGameObjectVariables() {
    plugin::CallDynGlobal(gaddrof(CGame::ReInitGameObjectVariables));
}

int addrof(CGame::ReloadIPLs) = ADDRESS_BY_VERSION(0x53BED0, 0, 0, 0, 0, 0);
int gaddrof(CGame::ReloadIPLs) = GLOBAL_ADDRESS_BY_VERSION(0x53BED0, 0, 0, 0, 0, 0);

void CGame::ReloadIPLs() {
    plugin::CallDynGlobal(gaddrof(CGame::ReloadIPLs));
}

int addrof(CGame::ShutDownForRestart) = ADDRESS_BY_VERSION(0x53C550, 0, 0, 0, 0, 0);
int gaddrof(CGame::ShutDownForRestart) = GLOBAL_ADDRESS_BY_VERSION(0x53C550, 0, 0, 0, 0, 0);

void CGame::ShutDownForRestart() {
    plugin::CallDynGlobal(gaddrof(CGame::ShutDownForRestart));
}

int addrof(CGame::Shutdown) = ADDRESS_BY_VERSION(0x53C900, 0, 0, 0, 0, 0);
int gaddrof(CGame::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x53C900, 0, 0, 0, 0, 0);

bool CGame::Shutdown() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGame::Shutdown));
}

int addrof(CGame::ShutdownRenderWare) = ADDRESS_BY_VERSION(0x53BB80, 0, 0, 0, 0, 0);
int gaddrof(CGame::ShutdownRenderWare) = GLOBAL_ADDRESS_BY_VERSION(0x53BB80, 0, 0, 0, 0, 0);

void CGame::ShutdownRenderWare() {
    plugin::CallDynGlobal(gaddrof(CGame::ShutdownRenderWare));
}

int addrof(CGame::TidyUpMemory) = ADDRESS_BY_VERSION(0x53C500, 0, 0, 0, 0, 0);
int gaddrof(CGame::TidyUpMemory) = GLOBAL_ADDRESS_BY_VERSION(0x53C500, 0, 0, 0, 0, 0);

void CGame::TidyUpMemory(bool a1, bool clearD3Dmem) {
    plugin::CallDynGlobal<bool, bool>(gaddrof(CGame::TidyUpMemory), a1, clearD3Dmem);
}

int addrof(MoveMem) = ADDRESS_BY_VERSION(0x53C250, 0, 0, 0, 0, 0);
int gaddrof(MoveMem) = GLOBAL_ADDRESS_BY_VERSION(0x53C250, 0, 0, 0, 0, 0);

bool MoveMem(void **pMem) {
    return plugin::CallAndReturnDynGlobal<bool, void **>(gaddrof(MoveMem), pMem);
}

int addrof(MoveColModelMemory) = ADDRESS_BY_VERSION(0x53C290, 0, 0, 0, 0, 0);
int gaddrof(MoveColModelMemory) = GLOBAL_ADDRESS_BY_VERSION(0x53C290, 0, 0, 0, 0, 0);

bool MoveColModelMemory(CColModel &colModel, bool a2) {
    return plugin::CallAndReturnDynGlobal<bool, CColModel &, bool>(gaddrof(MoveColModelMemory), colModel, a2);
}

int addrof(MoveGeometryMemory) = ADDRESS_BY_VERSION(0x53C3E0, 0, 0, 0, 0, 0);
int gaddrof(MoveGeometryMemory) = GLOBAL_ADDRESS_BY_VERSION(0x53C3E0, 0, 0, 0, 0, 0);

RpGeometry *MoveGeometryMemory(RpGeometry *geometry) {
    return plugin::CallAndReturnDynGlobal<RpGeometry *, RpGeometry *>(gaddrof(MoveGeometryMemory), geometry);
}

int addrof(TidyUpModelInfo2) = ADDRESS_BY_VERSION(0x53C440, 0, 0, 0, 0, 0);
int gaddrof(TidyUpModelInfo2) = GLOBAL_ADDRESS_BY_VERSION(0x53C440, 0, 0, 0, 0, 0);

bool TidyUpModelInfo2(CEntity *entity, bool a2) {
    return plugin::CallAndReturnDynGlobal<bool, CEntity *, bool>(gaddrof(TidyUpModelInfo2), entity, a2);
}

int addrof(ValidateVersion) = ADDRESS_BY_VERSION(0x5BA060, 0, 0, 0, 0, 0);
int gaddrof(ValidateVersion) = GLOBAL_ADDRESS_BY_VERSION(0x5BA060, 0, 0, 0, 0, 0);

void ValidateVersion() {
    plugin::CallDynGlobal(gaddrof(ValidateVersion));
}

int addrof(D3DDeviceRestoreCallback) = ADDRESS_BY_VERSION(0x5BA120, 0, 0, 0, 0, 0);
int gaddrof(D3DDeviceRestoreCallback) = GLOBAL_ADDRESS_BY_VERSION(0x5BA120, 0, 0, 0, 0, 0);

void D3DDeviceRestoreCallback() {
    plugin::CallDynGlobal(gaddrof(D3DDeviceRestoreCallback));
}

int addrof(DoHaspChecks) = ADDRESS_BY_VERSION(0x5BA150, 0, 0, 0, 0, 0);
int gaddrof(DoHaspChecks) = GLOBAL_ADDRESS_BY_VERSION(0x5BA150, 0, 0, 0, 0, 0);

bool DoHaspChecks() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(DoHaspChecks));
}
