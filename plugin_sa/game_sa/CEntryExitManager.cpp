/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEntryExitManager.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CEntryExit *(&CEntryExitManager::ms_entryExitStack)[4] = *reinterpret_cast<CEntryExit *(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x96A720, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CEntryExitManager::ms_bBurglaryHousesEnabled = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x96A730, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE int &CEntryExitManager::ms_oldAreaCode = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x96A734, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE CEntity *(&CEntryExitManager::ms_visibleEntityList)[32] = *reinterpret_cast<CEntity *(*)[32]>(GLOBAL_ADDRESS_BY_VERSION(0x96A738, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE int &CEntryExitManager::ms_entryExitStackPosn = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x96A7C4, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE bool &CEntryExitManager::ms_bDisabled = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x96A7C8, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE int &CEntryExitManager::ms_exitEnterState = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x96A7CC, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE CQuadTreeNode *&CEntryExitManager::mp_QuadTree = *reinterpret_cast<CQuadTreeNode **>(GLOBAL_ADDRESS_BY_VERSION(0x96A7D0, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE CEntryExit *&CEntryExitManager::mp_Active = *reinterpret_cast<CEntryExit **>(GLOBAL_ADDRESS_BY_VERSION(0x96A7D4, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE CPool<CEntryExit> *&CEntryExitManager::mp_poolEntryExits = *reinterpret_cast<CPool<CEntryExit> **>(GLOBAL_ADDRESS_BY_VERSION(0x96A7D8, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE unsigned int &CEntryExitManager::ms_numVisibleEntities = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x96A7DC, 0, 0, 0, 0, 0));

int addrof(CEntryExitManager::AddEntryExitToStack) = ADDRESS_BY_VERSION(0x43E410, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::AddEntryExitToStack) = GLOBAL_ADDRESS_BY_VERSION(0x43E410, 0, 0, 0, 0, 0);

void CEntryExitManager::AddEntryExitToStack(CEntryExit *a1) {
    plugin::CallDynGlobal<CEntryExit *>(gaddrof(CEntryExitManager::AddEntryExitToStack), a1);
}

int addrof(CEntryExitManager::AddOne) = ADDRESS_BY_VERSION(0x43FA00, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::AddOne) = GLOBAL_ADDRESS_BY_VERSION(0x43FA00, 0, 0, 0, 0, 0);

int CEntryExitManager::AddOne(float entranceX, float entranceY, float entranceZ, float entranceAngle, float entranceRangeX, float entranceRangeY, int unused, float exitX, float exitY, float exitZ, float exitAngle, int area, int flags, int skyColor, int timeOn, int timeOff, int numberOfPeds, char const *name) {
    return plugin::CallAndReturnDynGlobal<int, float, float, float, float, float, float, int, float, float, float, float, int, int, int, int, int, int, char const *>(gaddrof(CEntryExitManager::AddOne), entranceX, entranceY, entranceZ, entranceAngle, entranceRangeX, entranceRangeY, unused, exitX, exitY, exitZ, exitAngle, area, flags, skyColor, timeOn, timeOff, numberOfPeds, name);
}

int addrof(CEntryExitManager::DeleteOne) = ADDRESS_BY_VERSION(0x43FD50, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::DeleteOne) = GLOBAL_ADDRESS_BY_VERSION(0x43FD50, 0, 0, 0, 0, 0);

void CEntryExitManager::DeleteOne(int index) {
    plugin::CallDynGlobal<int>(gaddrof(CEntryExitManager::DeleteOne), index);
}

int addrof(CEntryExitManager::EnableBurglaryHouses) = ADDRESS_BY_VERSION(0x43F180, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::EnableBurglaryHouses) = GLOBAL_ADDRESS_BY_VERSION(0x43F180, 0, 0, 0, 0, 0);

void CEntryExitManager::EnableBurglaryHouses(bool enable) {
    plugin::CallDynGlobal<bool>(gaddrof(CEntryExitManager::EnableBurglaryHouses), enable);
}

int addrof(CEntryExitManager::FindNearestDoor) = ADDRESS_BY_VERSION(0x43F630, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::FindNearestDoor) = GLOBAL_ADDRESS_BY_VERSION(0x43F630, 0, 0, 0, 0, 0);

CEntity *CEntryExitManager::FindNearestDoor(CEntryExit const &entryExit, float range) {
    return plugin::CallAndReturnDynGlobal<CEntity *, CEntryExit const &, float>(gaddrof(CEntryExitManager::FindNearestDoor), entryExit, range);
}

int addrof(CEntryExitManager::FindNearestEntryExit) = ADDRESS_BY_VERSION(0x43F4B0, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::FindNearestEntryExit) = GLOBAL_ADDRESS_BY_VERSION(0x43F4B0, 0, 0, 0, 0, 0);

int CEntryExitManager::FindNearestEntryExit(CVector2D const &position, float range, int ignoreArea) {
    return plugin::CallAndReturnDynGlobal<int, CVector2D const &, float, int>(gaddrof(CEntryExitManager::FindNearestEntryExit), position, range, ignoreArea);
}

int addrof(CEntryExitManager::GetEntryExit) = ADDRESS_BY_VERSION(0x43EF00, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::GetEntryExit) = GLOBAL_ADDRESS_BY_VERSION(0x43EF00, 0, 0, 0, 0, 0);

CEntryExit *CEntryExitManager::GetEntryExit(int index) {
    return plugin::CallAndReturnDynGlobal<CEntryExit *, int>(gaddrof(CEntryExitManager::GetEntryExit), index);
}

int addrof(CEntryExitManager::GetEntryExitIndex) = ADDRESS_BY_VERSION(0x43EFD0, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::GetEntryExitIndex) = GLOBAL_ADDRESS_BY_VERSION(0x43EFD0, 0, 0, 0, 0, 0);

int CEntryExitManager::GetEntryExitIndex(char const *name, unsigned short enabledFlags, unsigned short disabledFlags) {
    return plugin::CallAndReturnDynGlobal<int, char const *, unsigned short, unsigned short>(gaddrof(CEntryExitManager::GetEntryExitIndex), name, enabledFlags, disabledFlags);
}

int addrof(CEntryExitManager::GetPositionRelativeToOutsideWorld) = ADDRESS_BY_VERSION(0x43F150, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::GetPositionRelativeToOutsideWorld) = GLOBAL_ADDRESS_BY_VERSION(0x43F150, 0, 0, 0, 0, 0);

void CEntryExitManager::GetPositionRelativeToOutsideWorld(CVector &positionInOut) {
    plugin::CallDynGlobal<CVector &>(gaddrof(CEntryExitManager::GetPositionRelativeToOutsideWorld), positionInOut);
}

int addrof(CEntryExitManager::GotoEntryExit) = ADDRESS_BY_VERSION(0x43FDB0, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::GotoEntryExit) = GLOBAL_ADDRESS_BY_VERSION(0x43FDB0, 0, 0, 0, 0, 0);

void CEntryExitManager::GotoEntryExit(CEntryExit *entryExit) {
    plugin::CallDynGlobal<CEntryExit *>(gaddrof(CEntryExitManager::GotoEntryExit), entryExit);
}

int addrof(CEntryExitManager::GotoEntryExitVC) = ADDRESS_BY_VERSION(0x43FEA0, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::GotoEntryExitVC) = GLOBAL_ADDRESS_BY_VERSION(0x43FEA0, 0, 0, 0, 0, 0);

void CEntryExitManager::GotoEntryExitVC(char const *name) {
    plugin::CallDynGlobal<char const *>(gaddrof(CEntryExitManager::GotoEntryExitVC), name);
}

int addrof(CEntryExitManager::GotoNextEntryExit) = ADDRESS_BY_VERSION(0x43FEF0, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::GotoNextEntryExit) = GLOBAL_ADDRESS_BY_VERSION(0x43FEF0, 0, 0, 0, 0, 0);

void CEntryExitManager::GotoNextEntryExit() {
    plugin::CallDynGlobal(gaddrof(CEntryExitManager::GotoNextEntryExit));
}

int addrof(CEntryExitManager::GotoPreviousEntryExit) = ADDRESS_BY_VERSION(0x43FF60, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::GotoPreviousEntryExit) = GLOBAL_ADDRESS_BY_VERSION(0x43FF60, 0, 0, 0, 0, 0);

void CEntryExitManager::GotoPreviousEntryExit() {
    plugin::CallDynGlobal(gaddrof(CEntryExitManager::GotoPreviousEntryExit));
}

int addrof(CEntryExitManager::Init) = ADDRESS_BY_VERSION(0x43F880, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::Init) = GLOBAL_ADDRESS_BY_VERSION(0x43F880, 0, 0, 0, 0, 0);

void CEntryExitManager::Init() {
    plugin::CallDynGlobal(gaddrof(CEntryExitManager::Init));
}

int addrof(CEntryExitManager::LinkEntryExit) = ADDRESS_BY_VERSION(0x43F050, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::LinkEntryExit) = GLOBAL_ADDRESS_BY_VERSION(0x43F050, 0, 0, 0, 0, 0);

void CEntryExitManager::LinkEntryExit(CEntryExit *entryExit) {
    plugin::CallDynGlobal<CEntryExit *>(gaddrof(CEntryExitManager::LinkEntryExit), entryExit);
}

int addrof(CEntryExitManager::Load) = ADDRESS_BY_VERSION(0x5D55C0, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::Load) = GLOBAL_ADDRESS_BY_VERSION(0x5D55C0, 0, 0, 0, 0, 0);

bool CEntryExitManager::Load() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CEntryExitManager::Load));
}

int addrof(CEntryExitManager::PostEntryExitsCreation) = ADDRESS_BY_VERSION(0x43F0A0, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::PostEntryExitsCreation) = GLOBAL_ADDRESS_BY_VERSION(0x43F0A0, 0, 0, 0, 0, 0);

void CEntryExitManager::PostEntryExitsCreation() {
    plugin::CallDynGlobal(gaddrof(CEntryExitManager::PostEntryExitsCreation));
}

int addrof(CEntryExitManager::ResetAreaCodeForVisibleObjects) = ADDRESS_BY_VERSION(0x43ED80, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::ResetAreaCodeForVisibleObjects) = GLOBAL_ADDRESS_BY_VERSION(0x43ED80, 0, 0, 0, 0, 0);

void CEntryExitManager::ResetAreaCodeForVisibleObjects() {
    plugin::CallDynGlobal(gaddrof(CEntryExitManager::ResetAreaCodeForVisibleObjects));
}

int addrof(CEntryExitManager::Save) = ADDRESS_BY_VERSION(0x5D5970, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::Save) = GLOBAL_ADDRESS_BY_VERSION(0x5D5970, 0, 0, 0, 0, 0);

bool CEntryExitManager::Save() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CEntryExitManager::Save));
}

int addrof(CEntryExitManager::SetAreaCodeForVisibleObjects) = ADDRESS_BY_VERSION(0x43ECF0, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::SetAreaCodeForVisibleObjects) = GLOBAL_ADDRESS_BY_VERSION(0x43ECF0, 0, 0, 0, 0, 0);

void CEntryExitManager::SetAreaCodeForVisibleObjects() {
    plugin::CallDynGlobal(gaddrof(CEntryExitManager::SetAreaCodeForVisibleObjects));
}

int addrof(CEntryExitManager::SetEnabled) = ADDRESS_BY_VERSION(0x43F9D0, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::SetEnabled) = GLOBAL_ADDRESS_BY_VERSION(0x43F9D0, 0, 0, 0, 0, 0);

void CEntryExitManager::SetEnabled(int index, bool enable) {
    plugin::CallDynGlobal<int, bool>(gaddrof(CEntryExitManager::SetEnabled), index, enable);
}

int addrof(CEntryExitManager::SetEnabledByName) = ADDRESS_BY_VERSION(0x43F9B0, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::SetEnabledByName) = GLOBAL_ADDRESS_BY_VERSION(0x43F9B0, 0, 0, 0, 0, 0);

void CEntryExitManager::SetEnabledByName(char const *name, bool enable) {
    plugin::CallDynGlobal<char const *, bool>(gaddrof(CEntryExitManager::SetEnabledByName), name, enable);
}

int addrof(CEntryExitManager::SetEntryExitFlag) = ADDRESS_BY_VERSION(0x43EF20, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::SetEntryExitFlag) = GLOBAL_ADDRESS_BY_VERSION(0x43EF20, 0, 0, 0, 0, 0);

void CEntryExitManager::SetEntryExitFlag(char const *name, unsigned int flag, bool enable) {
    plugin::CallDynGlobal<char const *, unsigned int, bool>(gaddrof(CEntryExitManager::SetEntryExitFlag), name, flag, enable);
}

int addrof(CEntryExitManager::SetEntryExitFlagWithIndex) = ADDRESS_BY_VERSION(0x43EF90, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::SetEntryExitFlagWithIndex) = GLOBAL_ADDRESS_BY_VERSION(0x43EF90, 0, 0, 0, 0, 0);

void CEntryExitManager::SetEntryExitFlagWithIndex(int index, unsigned int flag, bool enable) {
    plugin::CallDynGlobal<int, unsigned int, bool>(gaddrof(CEntryExitManager::SetEntryExitFlagWithIndex), index, flag, enable);
}

int addrof(CEntryExitManager::Shutdown) = ADDRESS_BY_VERSION(0x440B90, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::Shutdown) = GLOBAL_ADDRESS_BY_VERSION(0x440B90, 0, 0, 0, 0, 0);

void CEntryExitManager::Shutdown() {
    plugin::CallDynGlobal(gaddrof(CEntryExitManager::Shutdown));
}

int addrof(CEntryExitManager::ShutdownForRestart) = ADDRESS_BY_VERSION(0x440C40, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::ShutdownForRestart) = GLOBAL_ADDRESS_BY_VERSION(0x440C40, 0, 0, 0, 0, 0);

void CEntryExitManager::ShutdownForRestart() {
    plugin::CallDynGlobal(gaddrof(CEntryExitManager::ShutdownForRestart));
}

int addrof(CEntryExitManager::Update) = ADDRESS_BY_VERSION(0x440D10, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::Update) = GLOBAL_ADDRESS_BY_VERSION(0x440D10, 0, 0, 0, 0, 0);

void CEntryExitManager::Update() {
    plugin::CallDynGlobal(gaddrof(CEntryExitManager::Update));
}

int addrof(CEntryExitManager::WeAreInInteriorTransition) = ADDRESS_BY_VERSION(0x43E400, 0, 0, 0, 0, 0);
int gaddrof(CEntryExitManager::WeAreInInteriorTransition) = GLOBAL_ADDRESS_BY_VERSION(0x43E400, 0, 0, 0, 0, 0);

bool CEntryExitManager::WeAreInInteriorTransition() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CEntryExitManager::WeAreInInteriorTransition));
}
