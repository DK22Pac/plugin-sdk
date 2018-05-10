/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CScriptsForBrains.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CScriptsForBrains) = ADDRESS_BY_VERSION(0x46B260, 0, 0, 0, 0, 0);
int ctor_gaddr(CScriptsForBrains) = GLOBAL_ADDRESS_BY_VERSION(0x46B260, 0, 0, 0, 0, 0);

int addrof(CScriptsForBrains::AddNewScriptBrain) = ADDRESS_BY_VERSION(0x46A930, 0, 0, 0, 0, 0);
int gaddrof(CScriptsForBrains::AddNewScriptBrain) = GLOBAL_ADDRESS_BY_VERSION(0x46A930, 0, 0, 0, 0, 0);

void CScriptsForBrains::AddNewScriptBrain(short ImgIndex, short Model, unsigned short Priority, signed char attachType, signed char Type, float Radius) {
    plugin::CallMethodDynGlobal<CScriptsForBrains *, short, short, unsigned short, signed char, signed char, float>(gaddrof(CScriptsForBrains::AddNewScriptBrain), this, ImgIndex, Model, Priority, attachType, Type, Radius);
}

int addrof(CScriptsForBrains::AddNewStreamedScriptBrainForCodeUse) = ADDRESS_BY_VERSION(0x46A9C0, 0, 0, 0, 0, 0);
int gaddrof(CScriptsForBrains::AddNewStreamedScriptBrainForCodeUse) = GLOBAL_ADDRESS_BY_VERSION(0x46A9C0, 0, 0, 0, 0, 0);

void CScriptsForBrains::AddNewStreamedScriptBrainForCodeUse(short a2, char *a3, signed char attachtype) {
    plugin::CallMethodDynGlobal<CScriptsForBrains *, short, char *, signed char>(gaddrof(CScriptsForBrains::AddNewStreamedScriptBrainForCodeUse), this, a2, a3, attachtype);
}

int addrof(CScriptsForBrains::CheckIfNewEntityNeedsScript) = ADDRESS_BY_VERSION(0x46FF20, 0, 0, 0, 0, 0);
int gaddrof(CScriptsForBrains::CheckIfNewEntityNeedsScript) = GLOBAL_ADDRESS_BY_VERSION(0x46FF20, 0, 0, 0, 0, 0);

void CScriptsForBrains::CheckIfNewEntityNeedsScript(CEntity *pEntity, signed char attachType, void *unused) {
    plugin::CallMethodDynGlobal<CScriptsForBrains *, CEntity *, signed char, void *>(gaddrof(CScriptsForBrains::CheckIfNewEntityNeedsScript), this, pEntity, attachType, unused);
}

int addrof(CScriptsForBrains::GetIndexOfScriptBrainWithThisName) = ADDRESS_BY_VERSION(0x46AA30, 0, 0, 0, 0, 0);
int gaddrof(CScriptsForBrains::GetIndexOfScriptBrainWithThisName) = GLOBAL_ADDRESS_BY_VERSION(0x46AA30, 0, 0, 0, 0, 0);

signed short CScriptsForBrains::GetIndexOfScriptBrainWithThisName(char const *name, signed char Attachtype) {
    return plugin::CallMethodAndReturnDynGlobal<signed short, CScriptsForBrains *, char const *, signed char>(gaddrof(CScriptsForBrains::GetIndexOfScriptBrainWithThisName), this, name, Attachtype);
}

int addrof(CScriptsForBrains::HasAttractorScriptBrainWithThisNameLoaded) = ADDRESS_BY_VERSION(0x46AB20, 0, 0, 0, 0, 0);
int gaddrof(CScriptsForBrains::HasAttractorScriptBrainWithThisNameLoaded) = GLOBAL_ADDRESS_BY_VERSION(0x46AB20, 0, 0, 0, 0, 0);

bool CScriptsForBrains::HasAttractorScriptBrainWithThisNameLoaded(char const *name) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CScriptsForBrains *, char const *>(gaddrof(CScriptsForBrains::HasAttractorScriptBrainWithThisNameLoaded), this, name);
}

int addrof(CScriptsForBrains::Init) = ADDRESS_BY_VERSION(0x46A8C0, 0, 0, 0, 0, 0);
int gaddrof(CScriptsForBrains::Init) = GLOBAL_ADDRESS_BY_VERSION(0x46A8C0, 0, 0, 0, 0, 0);

void CScriptsForBrains::Init() {
    plugin::CallMethodDynGlobal<CScriptsForBrains *>(gaddrof(CScriptsForBrains::Init), this);
}

int addrof(CScriptsForBrains::IsObjectWithinBrainActivationRange) = ADDRESS_BY_VERSION(0x46B3D0, 0, 0, 0, 0, 0);
int gaddrof(CScriptsForBrains::IsObjectWithinBrainActivationRange) = GLOBAL_ADDRESS_BY_VERSION(0x46B3D0, 0, 0, 0, 0, 0);

bool CScriptsForBrains::IsObjectWithinBrainActivationRange(CObject *entity, CVector const *point) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CScriptsForBrains *, CObject *, CVector const *>(gaddrof(CScriptsForBrains::IsObjectWithinBrainActivationRange), this, entity, point);
}

int addrof(CScriptsForBrains::MarkAttractorScriptBrainWithThisNameAsNoLongerNeeded) = ADDRESS_BY_VERSION(0x46AAE0, 0, 0, 0, 0, 0);
int gaddrof(CScriptsForBrains::MarkAttractorScriptBrainWithThisNameAsNoLongerNeeded) = GLOBAL_ADDRESS_BY_VERSION(0x46AAE0, 0, 0, 0, 0, 0);

void CScriptsForBrains::MarkAttractorScriptBrainWithThisNameAsNoLongerNeeded(char const *name) {
    plugin::CallMethodDynGlobal<CScriptsForBrains *, char const *>(gaddrof(CScriptsForBrains::MarkAttractorScriptBrainWithThisNameAsNoLongerNeeded), this, name);
}

int addrof(CScriptsForBrains::RequestAttractorScriptBrainWithThisName) = ADDRESS_BY_VERSION(0x46AA80, 0, 0, 0, 0, 0);
int gaddrof(CScriptsForBrains::RequestAttractorScriptBrainWithThisName) = GLOBAL_ADDRESS_BY_VERSION(0x46AA80, 0, 0, 0, 0, 0);

void CScriptsForBrains::RequestAttractorScriptBrainWithThisName(char const *name) {
    plugin::CallMethodDynGlobal<CScriptsForBrains *, char const *>(gaddrof(CScriptsForBrains::RequestAttractorScriptBrainWithThisName), this, name);
}

int addrof(CScriptsForBrains::StartAttractorScriptBrainWithThisName) = ADDRESS_BY_VERSION(0x46B390, 0, 0, 0, 0, 0);
int gaddrof(CScriptsForBrains::StartAttractorScriptBrainWithThisName) = GLOBAL_ADDRESS_BY_VERSION(0x46B390, 0, 0, 0, 0, 0);

void CScriptsForBrains::StartAttractorScriptBrainWithThisName(char const *name, CEntity *pEntity, unsigned char bHasAScriptBrain) {
    plugin::CallMethodDynGlobal<CScriptsForBrains *, char const *, CEntity *, unsigned char>(gaddrof(CScriptsForBrains::StartAttractorScriptBrainWithThisName), this, name, pEntity, bHasAScriptBrain);
}

int addrof(CScriptsForBrains::StartNewStreamedScriptBrain) = ADDRESS_BY_VERSION(0x46B270, 0, 0, 0, 0, 0);
int gaddrof(CScriptsForBrains::StartNewStreamedScriptBrain) = GLOBAL_ADDRESS_BY_VERSION(0x46B270, 0, 0, 0, 0, 0);

void CScriptsForBrains::StartNewStreamedScriptBrain(unsigned char index, CEntity *pEntity, unsigned char bHasAScriptBrain) {
    plugin::CallMethodDynGlobal<CScriptsForBrains *, unsigned char, CEntity *, unsigned char>(gaddrof(CScriptsForBrains::StartNewStreamedScriptBrain), this, index, pEntity, bHasAScriptBrain);
}

int addrof(CScriptsForBrains::StartOrRequestNewStreamedScriptBrain) = ADDRESS_BY_VERSION(0x46CD80, 0, 0, 0, 0, 0);
int gaddrof(CScriptsForBrains::StartOrRequestNewStreamedScriptBrain) = GLOBAL_ADDRESS_BY_VERSION(0x46CD80, 0, 0, 0, 0, 0);

void CScriptsForBrains::StartOrRequestNewStreamedScriptBrain(unsigned char index, CEntity *pEntity, signed char attachType, unsigned char bAddToWaitingArray) {
    plugin::CallMethodDynGlobal<CScriptsForBrains *, unsigned char, CEntity *, signed char, unsigned char>(gaddrof(CScriptsForBrains::StartOrRequestNewStreamedScriptBrain), this, index, pEntity, attachType, bAddToWaitingArray);
}

int addrof(CScriptsForBrains::StartOrRequestNewStreamedScriptBrainWithThisName) = ADDRESS_BY_VERSION(0x46CED0, 0, 0, 0, 0, 0);
int gaddrof(CScriptsForBrains::StartOrRequestNewStreamedScriptBrainWithThisName) = GLOBAL_ADDRESS_BY_VERSION(0x46CED0, 0, 0, 0, 0, 0);

void CScriptsForBrains::StartOrRequestNewStreamedScriptBrainWithThisName(char const *name, CEntity *pEntity, signed char attachType) {
    plugin::CallMethodDynGlobal<CScriptsForBrains *, char const *, CEntity *, signed char>(gaddrof(CScriptsForBrains::StartOrRequestNewStreamedScriptBrainWithThisName), this, name, pEntity, attachType);
}

int addrof(CScriptsForBrains::SwitchAllObjectBrainsWithThisID) = ADDRESS_BY_VERSION(0x46A900, 0, 0, 0, 0, 0);
int gaddrof(CScriptsForBrains::SwitchAllObjectBrainsWithThisID) = GLOBAL_ADDRESS_BY_VERSION(0x46A900, 0, 0, 0, 0, 0);

void CScriptsForBrains::SwitchAllObjectBrainsWithThisID(signed char ID, bool bStatus) {
    plugin::CallMethodDynGlobal<CScriptsForBrains *, signed char, bool>(gaddrof(CScriptsForBrains::SwitchAllObjectBrainsWithThisID), this, ID, bStatus);
}
