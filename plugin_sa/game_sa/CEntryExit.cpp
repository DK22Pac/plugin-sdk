/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CEntryExit.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE bool &CEntryExit::ms_bWarping = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x96A7B8, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE CObject *&CEntryExit::ms_pDoor = *reinterpret_cast<CObject **>(GLOBAL_ADDRESS_BY_VERSION(0x96A7BC, 0, 0, 0, 0, 0));
PLUGIN_VARIABLE CEntryExit *&CEntryExit::ms_spawnPoint = *reinterpret_cast<CEntryExit **>(GLOBAL_ADDRESS_BY_VERSION(0x96A7C0, 0, 0, 0, 0, 0));

int ctor_addr(CEntryExit) = ADDRESS_BY_VERSION(0x43F130, 0, 0, 0, 0, 0);
int ctor_gaddr(CEntryExit) = GLOBAL_ADDRESS_BY_VERSION(0x43F130, 0, 0, 0, 0, 0);

int addrof(CEntryExit::GenerateAmbientPeds) = ADDRESS_BY_VERSION(0x43E8B0, 0, 0, 0, 0, 0);
int gaddrof(CEntryExit::GenerateAmbientPeds) = GLOBAL_ADDRESS_BY_VERSION(0x43E8B0, 0, 0, 0, 0, 0);

void CEntryExit::GenerateAmbientPeds(CVector const &position) {
    plugin::CallMethodDynGlobal<CEntryExit *, CVector const &>(gaddrof(CEntryExit::GenerateAmbientPeds), this, position);
}

int addrof(CEntryExit::GetEntryExitToDisplayNameOf) = ADDRESS_BY_VERSION(0x43E650, 0, 0, 0, 0, 0);
int gaddrof(CEntryExit::GetEntryExitToDisplayNameOf) = GLOBAL_ADDRESS_BY_VERSION(0x43E650, 0, 0, 0, 0, 0);

CEntryExit *CEntryExit::GetEntryExitToDisplayNameOf() {
    return plugin::CallMethodAndReturnDynGlobal<CEntryExit *, CEntryExit *>(gaddrof(CEntryExit::GetEntryExitToDisplayNameOf), this);
}

int addrof(CEntryExit::GetPositionRelativeToOutsideWorld) = ADDRESS_BY_VERSION(0x43EA00, 0, 0, 0, 0, 0);
int gaddrof(CEntryExit::GetPositionRelativeToOutsideWorld) = GLOBAL_ADDRESS_BY_VERSION(0x43EA00, 0, 0, 0, 0, 0);

void CEntryExit::GetPositionRelativeToOutsideWorld(CVector &positionInOut) {
    plugin::CallMethodDynGlobal<CEntryExit *, CVector &>(gaddrof(CEntryExit::GetPositionRelativeToOutsideWorld), this, positionInOut);
}

int addrof(CEntryExit::IsInArea) = ADDRESS_BY_VERSION(0x43E460, 0, 0, 0, 0, 0);
int gaddrof(CEntryExit::IsInArea) = GLOBAL_ADDRESS_BY_VERSION(0x43E460, 0, 0, 0, 0, 0);

bool CEntryExit::IsInArea(CVector const &position) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CEntryExit *, CVector const &>(gaddrof(CEntryExit::IsInArea), this, position);
}

int addrof(CEntryExit::RequestAmbientPeds) = ADDRESS_BY_VERSION(0x43E6D0, 0, 0, 0, 0, 0);
int gaddrof(CEntryExit::RequestAmbientPeds) = GLOBAL_ADDRESS_BY_VERSION(0x43E6D0, 0, 0, 0, 0, 0);

void CEntryExit::RequestAmbientPeds() {
    plugin::CallMethodDynGlobal<CEntryExit *>(gaddrof(CEntryExit::RequestAmbientPeds), this);
}

int addrof(CEntryExit::RequestObjectsInFrustum) = ADDRESS_BY_VERSION(0x43E690, 0, 0, 0, 0, 0);
int gaddrof(CEntryExit::RequestObjectsInFrustum) = GLOBAL_ADDRESS_BY_VERSION(0x43E690, 0, 0, 0, 0, 0);

void CEntryExit::RequestObjectsInFrustum() {
    plugin::CallMethodDynGlobal<CEntryExit *>(gaddrof(CEntryExit::RequestObjectsInFrustum), this);
}

int addrof(CEntryExit::TransitionFinished) = ADDRESS_BY_VERSION(0x4404A0, 0, 0, 0, 0, 0);
int gaddrof(CEntryExit::TransitionFinished) = GLOBAL_ADDRESS_BY_VERSION(0x4404A0, 0, 0, 0, 0, 0);

bool CEntryExit::TransitionFinished(CPed *player) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CEntryExit *, CPed *>(gaddrof(CEntryExit::TransitionFinished), this, player);
}

int addrof(CEntryExit::TransitionStarted) = ADDRESS_BY_VERSION(0x43FFD0, 0, 0, 0, 0, 0);
int gaddrof(CEntryExit::TransitionStarted) = GLOBAL_ADDRESS_BY_VERSION(0x43FFD0, 0, 0, 0, 0, 0);

bool CEntryExit::TransitionStarted(CPed *player) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CEntryExit *, CPed *>(gaddrof(CEntryExit::TransitionStarted), this, player);
}

int addrof(CEntryExit::WarpGangWithPlayer) = ADDRESS_BY_VERSION(0x43F1F0, 0, 0, 0, 0, 0);
int gaddrof(CEntryExit::WarpGangWithPlayer) = GLOBAL_ADDRESS_BY_VERSION(0x43F1F0, 0, 0, 0, 0, 0);

void CEntryExit::WarpGangWithPlayer(CPed *player) {
    plugin::CallMethodDynGlobal<CEntryExit *, CPed *>(gaddrof(CEntryExit::WarpGangWithPlayer), this, player);
}
