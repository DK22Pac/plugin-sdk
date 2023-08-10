/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGame.h"

PLUGIN_SOURCE_FILE

bool &CGame::bDemoMode = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x5F4DD0, 0x5F4CC0, 0x601CB8));
bool &CGame::nastyGame = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x5F4DD4, 0x5F4CC4, 0x601CBC));
char *CGame::aDatFile = reinterpret_cast<char *>(GLOBAL_ADDRESS_BY_VERSION(0x773A48, 0x773A48, 0x783B88));
int &CGame::currLevel = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x941514, 0x9416CC, 0x95180C));
bool &CGame::germanGame = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD1E, 0x95CED6, 0x96D016));
bool &CGame::playingIntro = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CDC2, 0x95CF7A, 0x96D0BA));
bool &CGame::frenchGame = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CDCB, 0x95CF83, 0x96D0C3));
bool &CGame::noProstitutes = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CDCF, 0x95CF87, 0x96D0C7));
int &gameTxdSlot = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x628D88, 0x628D88, 0x638D88));
int &gGameState = *reinterpret_cast<int*>(0x8F5838);

int addrof(CGame::DrasticTidyUpMemory) = ADDRESS_BY_VERSION(0x48CA10, 0x48CB10, 0x48CAA0);
int gaddrof(CGame::DrasticTidyUpMemory) = GLOBAL_ADDRESS_BY_VERSION(0x48CA10, 0x48CB10, 0x48CAA0);

void CGame::DrasticTidyUpMemory(bool flushDraw) {
    plugin::CallDynGlobal<bool>(gaddrof(CGame::DrasticTidyUpMemory), flushDraw);
}

int addrof(CGame::FinalShutdown) = ADDRESS_BY_VERSION(0x48BEC0, 0x48BFB0, 0x48BF40);
int gaddrof(CGame::FinalShutdown) = GLOBAL_ADDRESS_BY_VERSION(0x48BEC0, 0x48BFB0, 0x48BF40);

void CGame::FinalShutdown() {
    plugin::CallDynGlobal(gaddrof(CGame::FinalShutdown));
}

int addrof(CGame::Initialise) = ADDRESS_BY_VERSION(0x48BED0, 0x48BFC0, 0x48BF50);
int gaddrof(CGame::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x48BED0, 0x48BFC0, 0x48BF50);

bool CGame::Initialise(char const *datFile) {
    return plugin::CallAndReturnDynGlobal<bool, char const *>(gaddrof(CGame::Initialise), datFile);
}

int addrof(CGame::InitialiseOnceAfterRW) = ADDRESS_BY_VERSION(0x48BD50, 0x48BE40, 0x48BDD0);
int gaddrof(CGame::InitialiseOnceAfterRW) = GLOBAL_ADDRESS_BY_VERSION(0x48BD50, 0x48BE40, 0x48BDD0);

bool CGame::InitialiseOnceAfterRW() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGame::InitialiseOnceAfterRW));
}

int addrof(CGame::InitialiseOnceBeforeRW) = ADDRESS_BY_VERSION(0x48BB80, 0x48BC70, 0x48BC00);
int gaddrof(CGame::InitialiseOnceBeforeRW) = GLOBAL_ADDRESS_BY_VERSION(0x48BB80, 0x48BC70, 0x48BC00);

bool CGame::InitialiseOnceBeforeRW() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGame::InitialiseOnceBeforeRW));
}

int addrof(CGame::InitialiseRenderWare) = ADDRESS_BY_VERSION(0x48BBA0, 0x48BC90, 0x48BC20);
int gaddrof(CGame::InitialiseRenderWare) = GLOBAL_ADDRESS_BY_VERSION(0x48BBA0, 0x48BC90, 0x48BC20);

bool CGame::InitialiseRenderWare() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGame::InitialiseRenderWare));
}

int addrof(CGame::InitialiseWhenRestarting) = ADDRESS_BY_VERSION(0x48C740, 0x48C840, 0x48C7D0);
int gaddrof(CGame::InitialiseWhenRestarting) = GLOBAL_ADDRESS_BY_VERSION(0x48C740, 0x48C840, 0x48C7D0);

void CGame::InitialiseWhenRestarting() {
    plugin::CallDynGlobal(gaddrof(CGame::InitialiseWhenRestarting));
}

int addrof(CGame::Process) = ADDRESS_BY_VERSION(0x48C850, 0x48C950, 0x48C8E0);
int gaddrof(CGame::Process) = GLOBAL_ADDRESS_BY_VERSION(0x48C850, 0x48C950, 0x48C8E0);

void CGame::Process() {
    plugin::CallDynGlobal(gaddrof(CGame::Process));
}

int addrof(CGame::ReInitGameObjectVariables) = ADDRESS_BY_VERSION(0x48C4B0, 0x48C5B0, 0x48C540);
int gaddrof(CGame::ReInitGameObjectVariables) = GLOBAL_ADDRESS_BY_VERSION(0x48C4B0, 0x48C5B0, 0x48C540);

void CGame::ReInitGameObjectVariables() {
    plugin::CallDynGlobal(gaddrof(CGame::ReInitGameObjectVariables));
}

int addrof(CGame::ReloadIPLs) = ADDRESS_BY_VERSION(0x48C620, 0x48C720, 0x48C6B0);
int gaddrof(CGame::ReloadIPLs) = GLOBAL_ADDRESS_BY_VERSION(0x48C620, 0x48C720, 0x48C6B0);

void CGame::ReloadIPLs() {
    plugin::CallDynGlobal(gaddrof(CGame::ReloadIPLs));
}

int addrof(CGame::ShutDownForRestart) = ADDRESS_BY_VERSION(0x48C6B0, 0x48C7B0, 0x48C740);
int gaddrof(CGame::ShutDownForRestart) = GLOBAL_ADDRESS_BY_VERSION(0x48C6B0, 0x48C7B0, 0x48C740);

void CGame::ShutDownForRestart() {
    plugin::CallDynGlobal(gaddrof(CGame::ShutDownForRestart));
}

int addrof(CGame::Shutdown) = ADDRESS_BY_VERSION(0x48C3A0, 0x48C490, 0x48C420);
int gaddrof(CGame::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x48C3A0, 0x48C490, 0x48C420);

bool CGame::Shutdown() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGame::Shutdown));
}

int addrof(CGame::ShutdownRenderWare) = ADDRESS_BY_VERSION(0x48BCB0, 0x48BDA0, 0x48BD30);
int gaddrof(CGame::ShutdownRenderWare) = GLOBAL_ADDRESS_BY_VERSION(0x48BCB0, 0x48BDA0, 0x48BD30);

void CGame::ShutdownRenderWare() {
    plugin::CallDynGlobal(gaddrof(CGame::ShutdownRenderWare));
}

int addrof(CGame::TidyUpMemory) = ADDRESS_BY_VERSION(0x48CA20, 0x48CB20, 0x48CAB0);
int gaddrof(CGame::TidyUpMemory) = GLOBAL_ADDRESS_BY_VERSION(0x48CA20, 0x48CB20, 0x48CAB0);

void CGame::TidyUpMemory(bool moveTextures, bool flushDraw) {
    plugin::CallDynGlobal<bool, bool>(gaddrof(CGame::TidyUpMemory), moveTextures, flushDraw);
}

int addrof(ValidateVersion) = ADDRESS_BY_VERSION(0x48BAD0, 0x48BBC0, 0x48BB50);
int gaddrof(ValidateVersion) = GLOBAL_ADDRESS_BY_VERSION(0x48BAD0, 0x48BBC0, 0x48BB50);

void ValidateVersion() {
    plugin::CallDynGlobal(gaddrof(ValidateVersion));
}

bool DoRwStuffStartOfFrame(short topRed, short topGreen, short topBlue, short bottomRed, short bottomGreen, short bottomBlue, short alpha) {
    return plugin::CallAndReturn<bool, 0x48CF10>(topRed, topGreen, topBlue, bottomRed, bottomGreen, bottomBlue, alpha);
}

void DoRwStuffEndOfFrame() {
    plugin::Call<0x48D440>();
}

CSprite2d* LoadSplash(const char* name) {
    return plugin::CallAndReturn<CSprite2d*, 0x48D550>(name);
}
