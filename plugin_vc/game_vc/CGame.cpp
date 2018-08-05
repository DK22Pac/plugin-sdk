/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGame.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE bool &CGame::bDemoMode = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x68DD64, 0x68DD64, 0x68CD64));
PLUGIN_VARIABLE bool &CGame::nastyGame = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x68DD68, 0x68DD68, 0x68CD68));
PLUGIN_VARIABLE char(&CGame::aDatFile)[32] = *reinterpret_cast<char(*)[32]>(GLOBAL_ADDRESS_BY_VERSION(0x8614D8, 0x8614E0, 0x8604E0));
PLUGIN_VARIABLE int &CGame::currArea = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x978810, 0x978818, 0x977818));
PLUGIN_VARIABLE int &CGame::currLevel = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xA0D9AC, 0xA0D9B4, 0xA0C9B4));
PLUGIN_VARIABLE bool &CGame::germanGame = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10AB8, 0xA10AC0, 0xA0FAC0));
PLUGIN_VARIABLE bool &CGame::playingIntro = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10B8D, 0xA10B96, 0xA0FB97));
PLUGIN_VARIABLE bool &CGame::frenchGame = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10B95, 0xA10B9E, 0xA0FB9F));
PLUGIN_VARIABLE bool &CGame::noProstitutes = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10B99, 0xA10BA2, 0xA0FBA3));
PLUGIN_VARIABLE int &splashTxdId = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x68E494, 0x68E494, 0x68D49C));
PLUGIN_VARIABLE bool &g_SlowMode = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xA10B5E, 0xA10B67, 0xA0FB68));

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

int addrof(AppEventHandler) = ADDRESS_BY_VERSION(0x4A5AD0, 0x4A5AF0, 0x4A59A0);
int gaddrof(AppEventHandler) = GLOBAL_ADDRESS_BY_VERSION(0x4A5AD0, 0x4A5AF0, 0x4A59A0);

RsEventStatus AppEventHandler(RsEvent event, void *param) {
    return plugin::CallAndReturnDynGlobal<RsEventStatus, RsEvent, void *>(gaddrof(AppEventHandler), event, param);
}

int addrof(InitialiseGame) = ADDRESS_BY_VERSION(0x4A5C40, 0x4A5C60, 0x4A5B10);
int gaddrof(InitialiseGame) = GLOBAL_ADDRESS_BY_VERSION(0x4A5C40, 0x4A5C60, 0x4A5B10);

bool InitialiseGame() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(InitialiseGame));
}

int addrof(FrontendIdle) = ADDRESS_BY_VERSION(0x4A5C60, 0x4A5C80, 0x4A5B30);
int gaddrof(FrontendIdle) = GLOBAL_ADDRESS_BY_VERSION(0x4A5C60, 0x4A5C80, 0x4A5B30);

void FrontendIdle() {
    plugin::CallDynGlobal(gaddrof(FrontendIdle));
}

int addrof(Idle) = ADDRESS_BY_VERSION(0x4A5D80, 0x4A5DA0, 0x4A5C50);
int gaddrof(Idle) = GLOBAL_ADDRESS_BY_VERSION(0x4A5D80, 0x4A5DA0, 0x4A5C50);

void Idle(void *param) {
    plugin::CallDynGlobal<void *>(gaddrof(Idle), param);
}

int addrof(Render2dStuff) = ADDRESS_BY_VERSION(0x4A6190, 0x4A61B0, 0x4A6060);
int gaddrof(Render2dStuff) = GLOBAL_ADDRESS_BY_VERSION(0x4A6190, 0x4A61B0, 0x4A6060);

void Render2dStuff() {
    plugin::CallDynGlobal(gaddrof(Render2dStuff));
}

int addrof(RenderEffects) = ADDRESS_BY_VERSION(0x4A6510, 0x4A6530, 0x4A63E0);
int gaddrof(RenderEffects) = GLOBAL_ADDRESS_BY_VERSION(0x4A6510, 0x4A6530, 0x4A63E0);

void RenderEffects() {
    plugin::CallDynGlobal(gaddrof(RenderEffects));
}

int addrof(RenderScene) = ADDRESS_BY_VERSION(0x4A6570, 0x4A6590, 0x4A6440);
int gaddrof(RenderScene) = GLOBAL_ADDRESS_BY_VERSION(0x4A6570, 0x4A6590, 0x4A6440);

void RenderScene() {
    plugin::CallDynGlobal(gaddrof(RenderScene));
}

int addrof(ProcessSlowMode) = ADDRESS_BY_VERSION(0x4A65D0, 0x4A65F0, 0x4A64A0);
int gaddrof(ProcessSlowMode) = GLOBAL_ADDRESS_BY_VERSION(0x4A65D0, 0x4A65F0, 0x4A64A0);

void ProcessSlowMode() {
    plugin::CallDynGlobal(gaddrof(ProcessSlowMode));
}

int addrof(LoadingScreen) = ADDRESS_BY_VERSION(0x4A69D0, 0x4A69F0, 0x4A68A0);
int gaddrof(LoadingScreen) = GLOBAL_ADDRESS_BY_VERSION(0x4A69D0, 0x4A69F0, 0x4A68A0);

void LoadingScreen(char const *title, char const *message, char const *screenName) {
    plugin::CallDynGlobal<char const *, char const *, char const *>(gaddrof(LoadingScreen), title, message, screenName);
}

int addrof(ResetLoadingScreenBar) = ADDRESS_BY_VERSION(0x4A6D80, 0x4A6DA0, 0x4A6C50);
int gaddrof(ResetLoadingScreenBar) = GLOBAL_ADDRESS_BY_VERSION(0x4A6D80, 0x4A6DA0, 0x4A6C50);

void ResetLoadingScreenBar() {
    plugin::CallDynGlobal(gaddrof(ResetLoadingScreenBar));
}

int addrof(GetLevelSplashScreen) = ADDRESS_BY_VERSION(0x4A6D90, 0x4A6DB0, 0x4A6C60);
int gaddrof(GetLevelSplashScreen) = GLOBAL_ADDRESS_BY_VERSION(0x4A6D90, 0x4A6DB0, 0x4A6C60);

char const *GetLevelSplashScreen(int screenId) {
    return plugin::CallAndReturnDynGlobal<char const *, int>(gaddrof(GetLevelSplashScreen), screenId);
}

int addrof(GetRandomSplashScreen) = ADDRESS_BY_VERSION(0x4A6DA0, 0x4A6DC0, 0x4A6C70);
int gaddrof(GetRandomSplashScreen) = GLOBAL_ADDRESS_BY_VERSION(0x4A6DA0, 0x4A6DC0, 0x4A6C70);

char const *GetRandomSplashScreen() {
    return plugin::CallAndReturnDynGlobal<char const *>(gaddrof(GetRandomSplashScreen));
}

int addrof(DestroySplashScreen) = ADDRESS_BY_VERSION(0x4A6E50, 0x4A6E70, 0x4A6D20);
int gaddrof(DestroySplashScreen) = GLOBAL_ADDRESS_BY_VERSION(0x4A6E50, 0x4A6E70, 0x4A6D20);

void DestroySplashScreen() {
    plugin::CallDynGlobal(gaddrof(DestroySplashScreen));
}

int addrof(LoadSplash) = ADDRESS_BY_VERSION(0x4A6E80, 0x4A6EA0, 0x4A6D50);
int gaddrof(LoadSplash) = GLOBAL_ADDRESS_BY_VERSION(0x4A6E80, 0x4A6EA0, 0x4A6D50);

CSprite2d *LoadSplash(char const *splashName) {
    return plugin::CallAndReturnDynGlobal<CSprite2d *, char const *>(gaddrof(LoadSplash), splashName);
}

int addrof(PluginAttach) = ADDRESS_BY_VERSION(0x4A6FA0, 0x4A6FC0, 0x4A6E70);
int gaddrof(PluginAttach) = GLOBAL_ADDRESS_BY_VERSION(0x4A6FA0, 0x4A6FC0, 0x4A6E70);

bool PluginAttach() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(PluginAttach));
}

int addrof(DoRWStuffEndOfFrame) = ADDRESS_BY_VERSION(0x4A7030, 0x4A7050, 0x4A6F00);
int gaddrof(DoRWStuffEndOfFrame) = GLOBAL_ADDRESS_BY_VERSION(0x4A7030, 0x4A7050, 0x4A6F00);

void DoRWStuffEndOfFrame() {
    plugin::CallDynGlobal(gaddrof(DoRWStuffEndOfFrame));
}

int addrof(DoFade) = ADDRESS_BY_VERSION(0x4A7060, 0x4A7080, 0x4A6F30);
int gaddrof(DoFade) = GLOBAL_ADDRESS_BY_VERSION(0x4A7060, 0x4A7080, 0x4A6F30);

void DoFade() {
    plugin::CallDynGlobal(gaddrof(DoFade));
}

int addrof(DoRWStuffStartOfFrame) = ADDRESS_BY_VERSION(0x4A72C0, 0x4A72E0, 0x4A7190);
int gaddrof(DoRWStuffStartOfFrame) = GLOBAL_ADDRESS_BY_VERSION(0x4A72C0, 0x4A72E0, 0x4A7190);

bool DoRWStuffStartOfFrame(short topR, short topG, short topB, short bottomR, short bottomG, short bottomB, short alpha) {
    return plugin::CallAndReturnDynGlobal<bool, short, short, short, short, short, short, short>(gaddrof(DoRWStuffStartOfFrame), topR, topG, topB, bottomR, bottomG, bottomB, alpha);
}

int addrof(TestModelIndices) = ADDRESS_BY_VERSION(0x4A75DC, 0x4A75FC, 0x4A74AC);
int gaddrof(TestModelIndices) = GLOBAL_ADDRESS_BY_VERSION(0x4A75DC, 0x4A75FC, 0x4A74AC);

void TestModelIndices() {
    plugin::CallDynGlobal(gaddrof(TestModelIndices));
}

int addrof(MatchModelString) = ADDRESS_BY_VERSION(0x4A75DD, 0x4A75FD, 0x4A74AD);
int gaddrof(MatchModelString) = GLOBAL_ADDRESS_BY_VERSION(0x4A75DD, 0x4A75FD, 0x4A74AD);

void MatchModelString(char *modelName, int modelIndex) {
    plugin::CallDynGlobal<char *, int>(gaddrof(MatchModelString), modelName, modelIndex);
}

int addrof(InitModelIndices) = ADDRESS_BY_VERSION(0x4A8C64, 0x4A8C84, 0x4A8B34);
int gaddrof(InitModelIndices) = GLOBAL_ADDRESS_BY_VERSION(0x4A8C64, 0x4A8C84, 0x4A8B34);

void InitModelIndices() {
    plugin::CallDynGlobal(gaddrof(InitModelIndices));
}

int addrof(LittleTest) = ADDRESS_BY_VERSION(0x4A9630, 0x4A9650, 0x4A9500);
int gaddrof(LittleTest) = GLOBAL_ADDRESS_BY_VERSION(0x4A9630, 0x4A9650, 0x4A9500);

void LittleTest() {
    plugin::CallDynGlobal(gaddrof(LittleTest));
}
