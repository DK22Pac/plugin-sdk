/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGame.h"

PLUGIN_SOURCE_FILE

bool &CGame::bDemoMode = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x68DD64, 0x68DD64, 0x68CD64));
bool &CGame::nastyGame = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x68DD68, 0x68DD68, 0x68CD68));
char *CGame::aDatFile = reinterpret_cast<char *>(GLOBAL_ADDRESS_BY_VERSION(0x8614D8, 0x8614E0, 0x8604E0));
int &CGame::currArea = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x978810, 0x978818, 0x977818));
int &CGame::currLevel = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xA0D9AC, 0xA0D9B4, 0xA0C9B4));
bool &CGame::germanGame = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10AB8, 0xA10AC0, 0xA0FAC0));
bool &CGame::playingIntro = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10B8D, 0xA10B96, 0xA0FB97));
bool &CGame::frenchGame = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10B95, 0xA10B9E, 0xA0FB9F));
bool &CGame::noProstitutes = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10B99, 0xA10BA2, 0xA0FBA3));

int addrof(CGame::CanSeeOutSideFromCurrArea) = ADDRESS_BY_VERSION(0x4A4390, 0x4A43B0, 0x4A4250);
int gaddrof(CGame::CanSeeOutSideFromCurrArea) = GLOBAL_ADDRESS_BY_VERSION(0x4A4390, 0x4A43B0, 0x4A4250);

bool CGame::CanSeeOutSideFromCurrArea() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGame::CanSeeOutSideFromCurrArea));
}

int addrof(CGame::CanSeeWaterFromCurrArea) = ADDRESS_BY_VERSION(0x4A4360, 0x4A4380, 0x4A4220);
int gaddrof(CGame::CanSeeWaterFromCurrArea) = GLOBAL_ADDRESS_BY_VERSION(0x4A4360, 0x4A4380, 0x4A4220);

bool CGame::CanSeeWaterFromCurrArea() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGame::CanSeeWaterFromCurrArea));
}

int addrof(CGame::DrasticTidyUpMemory) = ADDRESS_BY_VERSION(0x4A43F0, 0x4A4410, 0x4A42B0);
int gaddrof(CGame::DrasticTidyUpMemory) = GLOBAL_ADDRESS_BY_VERSION(0x4A43F0, 0x4A4410, 0x4A42B0);

void CGame::DrasticTidyUpMemory() {
    plugin::CallDynGlobal(gaddrof(CGame::DrasticTidyUpMemory));
}

int addrof(CGame::FinalShutdown) = ADDRESS_BY_VERSION(0x4A5010, 0x4A5030, 0x4A4EE0);
int gaddrof(CGame::FinalShutdown) = GLOBAL_ADDRESS_BY_VERSION(0x4A5010, 0x4A5030, 0x4A4EE0);

void CGame::FinalShutdown() {
    plugin::CallDynGlobal(gaddrof(CGame::FinalShutdown));
}

int addrof(CGame::InitAfterLostFocus) = ADDRESS_BY_VERSION(0x4A4FD0, 0x4A4FF0, 0x4A4EA0);
int gaddrof(CGame::InitAfterLostFocus) = GLOBAL_ADDRESS_BY_VERSION(0x4A4FD0, 0x4A4FF0, 0x4A4EA0);

void CGame::InitAfterLostFocus() {
    plugin::CallDynGlobal(gaddrof(CGame::InitAfterLostFocus));
}

int addrof(CGame::Initialise) = ADDRESS_BY_VERSION(0x4A4B10, 0x4A4B30, 0x4A49D0);
int gaddrof(CGame::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x4A4B10, 0x4A4B30, 0x4A49D0);

bool CGame::Initialise(char const *datFile) {
    return plugin::CallAndReturnDynGlobal<bool, char const *>(gaddrof(CGame::Initialise), datFile);
}

int addrof(CGame::InitialiseOnceAfterRW) = ADDRESS_BY_VERSION(0x4A5020, 0x4A5040, 0x4A4EF0);
int gaddrof(CGame::InitialiseOnceAfterRW) = GLOBAL_ADDRESS_BY_VERSION(0x4A5020, 0x4A5040, 0x4A4EF0);

bool CGame::InitialiseOnceAfterRW() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGame::InitialiseOnceAfterRW));
}

int addrof(CGame::InitialiseOnceBeforeRW) = ADDRESS_BY_VERSION(0x4A52C0, 0x4A52E0, 0x4A5190);
int gaddrof(CGame::InitialiseOnceBeforeRW) = GLOBAL_ADDRESS_BY_VERSION(0x4A52C0, 0x4A52E0, 0x4A5190);

bool CGame::InitialiseOnceBeforeRW() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGame::InitialiseOnceBeforeRW));
}

int addrof(CGame::InitialiseRenderWare) = ADDRESS_BY_VERSION(0x4A51A0, 0x4A51C0, 0x4A5070);
int gaddrof(CGame::InitialiseRenderWare) = GLOBAL_ADDRESS_BY_VERSION(0x4A51A0, 0x4A51C0, 0x4A5070);

bool CGame::InitialiseRenderWare() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGame::InitialiseRenderWare));
}

int addrof(CGame::InitialiseWhenRestarting) = ADDRESS_BY_VERSION(0x4A4670, 0x4A4690, 0x4A44F0);
int gaddrof(CGame::InitialiseWhenRestarting) = GLOBAL_ADDRESS_BY_VERSION(0x4A4670, 0x4A4690, 0x4A44F0);

void CGame::InitialiseWhenRestarting() {
    plugin::CallDynGlobal(gaddrof(CGame::InitialiseWhenRestarting));
}

int addrof(CGame::Process) = ADDRESS_BY_VERSION(0x4A4410, 0x4A4430, 0x4A42D0);
int gaddrof(CGame::Process) = GLOBAL_ADDRESS_BY_VERSION(0x4A4410, 0x4A4430, 0x4A42D0);

void CGame::Process() {
    plugin::CallDynGlobal(gaddrof(CGame::Process));
}

int addrof(CGame::ReInitGameObjectVariables) = ADDRESS_BY_VERSION(0x4A4850, 0x4A4870, 0x4A4710);
int gaddrof(CGame::ReInitGameObjectVariables) = GLOBAL_ADDRESS_BY_VERSION(0x4A4850, 0x4A4870, 0x4A4710);

void CGame::ReInitGameObjectVariables() {
    plugin::CallDynGlobal(gaddrof(CGame::ReInitGameObjectVariables));
}

int addrof(CGame::ShutDownForRestart) = ADDRESS_BY_VERSION(0x4A47B0, 0x4A47D0, 0x4A4670);
int gaddrof(CGame::ShutDownForRestart) = GLOBAL_ADDRESS_BY_VERSION(0x4A47B0, 0x4A47D0, 0x4A4670);

void CGame::ShutDownForRestart() {
    plugin::CallDynGlobal(gaddrof(CGame::ShutDownForRestart));
}

int addrof(CGame::Shutdown) = ADDRESS_BY_VERSION(0x4A49E0, 0x4A4A00, 0x4A48A0);
int gaddrof(CGame::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x4A49E0, 0x4A4A00, 0x4A48A0);

bool CGame::Shutdown() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGame::Shutdown));
}

int addrof(CGame::ShutdownRenderWare) = ADDRESS_BY_VERSION(0x4A5110, 0x4A5130, 0x4A4FE0);
int gaddrof(CGame::ShutdownRenderWare) = GLOBAL_ADDRESS_BY_VERSION(0x4A5110, 0x4A5130, 0x4A4FE0);

void CGame::ShutdownRenderWare() {
    plugin::CallDynGlobal(gaddrof(CGame::ShutdownRenderWare));
}

int addrof(CGame::TidyUpMemory) = ADDRESS_BY_VERSION(0x4A43D0, 0x4A43F0, 0x4A4290);
int gaddrof(CGame::TidyUpMemory) = GLOBAL_ADDRESS_BY_VERSION(0x4A43D0, 0x4A43F0, 0x4A4290);

void CGame::TidyUpMemory(bool a1, bool clearD3Dmem) {
    plugin::CallDynGlobal<bool, bool>(gaddrof(CGame::TidyUpMemory), a1, clearD3Dmem);
}

int addrof(ValidateVersion) = ADDRESS_BY_VERSION(0x4A5320, 0x4A5340, 0x4A51F0);
int gaddrof(ValidateVersion) = GLOBAL_ADDRESS_BY_VERSION(0x4A5320, 0x4A5340, 0x4A51F0);

void ValidateVersion() {
    plugin::CallDynGlobal(gaddrof(ValidateVersion));
}
