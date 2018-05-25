/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFileLoader.h"

PLUGIN_SOURCE_FILE

char(&CFileLoader::ms_line)[512] = *reinterpret_cast<char(*)[512]>(GLOBAL_ADDRESS_BY_VERSION(0xB71848, 0, 0, 0, 0, 0));
unsigned int &gAtomicModelId = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0xB71840, 0, 0, 0, 0, 0));

int addrof(CFileLoader::AddTexDictionaries) = ADDRESS_BY_VERSION(0x5B3910, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::AddTexDictionaries) = GLOBAL_ADDRESS_BY_VERSION(0x5B3910, 0, 0, 0, 0, 0);

void CFileLoader::AddTexDictionaries(RwTexDictionary *dictionary, RwTexDictionary *baseDictionary) {
    plugin::CallDynGlobal<RwTexDictionary *, RwTexDictionary *>(gaddrof(CFileLoader::AddTexDictionaries), dictionary, baseDictionary);
}

int addrof(CFileLoader::FindRelatedModelInfoCB) = ADDRESS_BY_VERSION(0x5B3930, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::FindRelatedModelInfoCB) = GLOBAL_ADDRESS_BY_VERSION(0x5B3930, 0, 0, 0, 0, 0);

RpAtomic *CFileLoader::FindRelatedModelInfoCB(RpAtomic *atomic, void *data) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *, void *>(gaddrof(CFileLoader::FindRelatedModelInfoCB), atomic, data);
}

int addrof(CFileLoader::FinishLoadClumpFile) = ADDRESS_BY_VERSION(0x537450, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::FinishLoadClumpFile) = GLOBAL_ADDRESS_BY_VERSION(0x537450, 0, 0, 0, 0, 0);

bool CFileLoader::FinishLoadClumpFile(RwStream *stream, unsigned int modelIndex) {
    return plugin::CallAndReturnDynGlobal<bool, RwStream *, unsigned int>(gaddrof(CFileLoader::FinishLoadClumpFile), stream, modelIndex);
}

int addrof(CFileLoader::LoadAnimatedClumpObject) = ADDRESS_BY_VERSION(0x5B40C0, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadAnimatedClumpObject) = GLOBAL_ADDRESS_BY_VERSION(0x5B40C0, 0, 0, 0, 0, 0);

void CFileLoader::LoadAnimatedClumpObject(char const *line) {
    plugin::CallDynGlobal<char const *>(gaddrof(CFileLoader::LoadAnimatedClumpObject), line);
}

int addrof_o(CFileLoader::LoadAtomicFile, void (*)(RwStream *, unsigned int)) = ADDRESS_BY_VERSION(0x5371F0, 0, 0, 0, 0, 0);
int gaddrof_o(CFileLoader::LoadAtomicFile, void (*)(RwStream *, unsigned int)) = GLOBAL_ADDRESS_BY_VERSION(0x5371F0, 0, 0, 0, 0, 0);

void CFileLoader::LoadAtomicFile(RwStream *stream, unsigned int modelIndex) {
    plugin::CallDynGlobal<RwStream *, unsigned int>(gaddrof_o(CFileLoader::LoadAtomicFile, void (*)(RwStream *, unsigned int)), stream, modelIndex);
}

int addrof_o(CFileLoader::LoadAtomicFile, void (*)(char const *)) = ADDRESS_BY_VERSION(0x5B39D0, 0, 0, 0, 0, 0);
int gaddrof_o(CFileLoader::LoadAtomicFile, void (*)(char const *)) = GLOBAL_ADDRESS_BY_VERSION(0x5B39D0, 0, 0, 0, 0, 0);

void CFileLoader::LoadAtomicFile(char const *filename) {
    plugin::CallDynGlobal<char const *>(gaddrof_o(CFileLoader::LoadAtomicFile, void (*)(char const *)), filename);
}

int addrof(CFileLoader::LoadAtomicFile2Return) = ADDRESS_BY_VERSION(0x537060, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadAtomicFile2Return) = GLOBAL_ADDRESS_BY_VERSION(0x537060, 0, 0, 0, 0, 0);

RpClump *CFileLoader::LoadAtomicFile2Return(char const *filename) {
    return plugin::CallAndReturnDynGlobal<RpClump *, char const *>(gaddrof(CFileLoader::LoadAtomicFile2Return), filename);
}

int addrof(CFileLoader::LoadAudioZone) = ADDRESS_BY_VERSION(0x5B4D70, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadAudioZone) = GLOBAL_ADDRESS_BY_VERSION(0x5B4D70, 0, 0, 0, 0, 0);

void CFileLoader::LoadAudioZone(char const *line) {
    plugin::CallDynGlobal<char const *>(gaddrof(CFileLoader::LoadAudioZone), line);
}

int addrof(CFileLoader::LoadBoundingBox) = ADDRESS_BY_VERSION(0x5374B0, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadBoundingBox) = GLOBAL_ADDRESS_BY_VERSION(0x5374B0, 0, 0, 0, 0, 0);

void CFileLoader::LoadBoundingBox(unsigned char *data, CBoundingBox &outBoundBox) {
    plugin::CallDynGlobal<unsigned char *, CBoundingBox &>(gaddrof(CFileLoader::LoadBoundingBox), data, outBoundBox);
}

int addrof_o(CFileLoader::LoadCarGenerator, void (*)(CFileCarGenerator *, int)) = ADDRESS_BY_VERSION(0x537990, 0, 0, 0, 0, 0);
int gaddrof_o(CFileLoader::LoadCarGenerator, void (*)(CFileCarGenerator *, int)) = GLOBAL_ADDRESS_BY_VERSION(0x537990, 0, 0, 0, 0, 0);

void CFileLoader::LoadCarGenerator(CFileCarGenerator *carGen, int iplId) {
    plugin::CallDynGlobal<CFileCarGenerator *, int>(gaddrof_o(CFileLoader::LoadCarGenerator, void (*)(CFileCarGenerator *, int)), carGen, iplId);
}

int addrof_o(CFileLoader::LoadCarGenerator, void (*)(char const *, int)) = ADDRESS_BY_VERSION(0x5B4740, 0, 0, 0, 0, 0);
int gaddrof_o(CFileLoader::LoadCarGenerator, void (*)(char const *, int)) = GLOBAL_ADDRESS_BY_VERSION(0x5B4740, 0, 0, 0, 0, 0);

void CFileLoader::LoadCarGenerator(char const *line, int iplId) {
    plugin::CallDynGlobal<char const *, int>(gaddrof_o(CFileLoader::LoadCarGenerator, void (*)(char const *, int)), line, iplId);
}

int addrof(CFileLoader::LoadCarPathNode) = ADDRESS_BY_VERSION(0x5B4380, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadCarPathNode) = GLOBAL_ADDRESS_BY_VERSION(0x5B4380, 0, 0, 0, 0, 0);

void CFileLoader::LoadCarPathNode(char const *line, int objModelIndex, int pathEntryIndex, bool a4) {
    plugin::CallDynGlobal<char const *, int, int, bool>(gaddrof(CFileLoader::LoadCarPathNode), line, objModelIndex, pathEntryIndex, a4);
}

int addrof_o(CFileLoader::LoadClumpFile, bool (*)(RwStream *, unsigned int)) = ADDRESS_BY_VERSION(0x5372D0, 0, 0, 0, 0, 0);
int gaddrof_o(CFileLoader::LoadClumpFile, bool (*)(RwStream *, unsigned int)) = GLOBAL_ADDRESS_BY_VERSION(0x5372D0, 0, 0, 0, 0, 0);

bool CFileLoader::LoadClumpFile(RwStream *stream, unsigned int modelIndex) {
    return plugin::CallAndReturnDynGlobal<bool, RwStream *, unsigned int>(gaddrof_o(CFileLoader::LoadClumpFile, bool (*)(RwStream *, unsigned int)), stream, modelIndex);
}

int addrof_o(CFileLoader::LoadClumpFile, void (*)(char const *)) = ADDRESS_BY_VERSION(0x5B3A30, 0, 0, 0, 0, 0);
int gaddrof_o(CFileLoader::LoadClumpFile, void (*)(char const *)) = GLOBAL_ADDRESS_BY_VERSION(0x5B3A30, 0, 0, 0, 0, 0);

void CFileLoader::LoadClumpFile(char const *filename) {
    plugin::CallDynGlobal<char const *>(gaddrof_o(CFileLoader::LoadClumpFile, void (*)(char const *)), filename);
}

int addrof(CFileLoader::LoadClumpObject) = ADDRESS_BY_VERSION(0x5B4040, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadClumpObject) = GLOBAL_ADDRESS_BY_VERSION(0x5B4040, 0, 0, 0, 0, 0);

int CFileLoader::LoadClumpObject(char const *line) {
    return plugin::CallAndReturnDynGlobal<int, char const *>(gaddrof(CFileLoader::LoadClumpObject), line);
}

int addrof_o(CFileLoader::LoadCollisionFile, bool (*)(unsigned char *, unsigned int, unsigned char)) = ADDRESS_BY_VERSION(0x538440, 0, 0, 0, 0, 0);
int gaddrof_o(CFileLoader::LoadCollisionFile, bool (*)(unsigned char *, unsigned int, unsigned char)) = GLOBAL_ADDRESS_BY_VERSION(0x538440, 0, 0, 0, 0, 0);

bool CFileLoader::LoadCollisionFile(unsigned char *data, unsigned int dataSize, unsigned char colId) {
    return plugin::CallAndReturnDynGlobal<bool, unsigned char *, unsigned int, unsigned char>(gaddrof_o(CFileLoader::LoadCollisionFile, bool (*)(unsigned char *, unsigned int, unsigned char)), data, dataSize, colId);
}

int addrof_o(CFileLoader::LoadCollisionFile, void (*)(char const *, unsigned char)) = ADDRESS_BY_VERSION(0x5B4E60, 0, 0, 0, 0, 0);
int gaddrof_o(CFileLoader::LoadCollisionFile, void (*)(char const *, unsigned char)) = GLOBAL_ADDRESS_BY_VERSION(0x5B4E60, 0, 0, 0, 0, 0);

void CFileLoader::LoadCollisionFile(char const *filename, unsigned char colId) {
    plugin::CallDynGlobal<char const *, unsigned char>(gaddrof_o(CFileLoader::LoadCollisionFile, void (*)(char const *, unsigned char)), filename, colId);
}

int addrof(CFileLoader::LoadCollisionFileFirstTime) = ADDRESS_BY_VERSION(0x5B5000, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadCollisionFileFirstTime) = GLOBAL_ADDRESS_BY_VERSION(0x5B5000, 0, 0, 0, 0, 0);

bool CFileLoader::LoadCollisionFileFirstTime(unsigned char *data, unsigned int dataSize, unsigned char colId) {
    return plugin::CallAndReturnDynGlobal<bool, unsigned char *, unsigned int, unsigned char>(gaddrof(CFileLoader::LoadCollisionFileFirstTime), data, dataSize, colId);
}

int addrof(CFileLoader::LoadCollisionModel) = ADDRESS_BY_VERSION(0x537580, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadCollisionModel) = GLOBAL_ADDRESS_BY_VERSION(0x537580, 0, 0, 0, 0, 0);

void CFileLoader::LoadCollisionModel(unsigned char *data, CColModel &outColModel) {
    plugin::CallDynGlobal<unsigned char *, CColModel &>(gaddrof(CFileLoader::LoadCollisionModel), data, outColModel);
}

int addrof(CFileLoader::LoadCollisionModelVer2) = ADDRESS_BY_VERSION(0x537EE0, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadCollisionModelVer2) = GLOBAL_ADDRESS_BY_VERSION(0x537EE0, 0, 0, 0, 0, 0);

void CFileLoader::LoadCollisionModelVer2(unsigned char *data, unsigned int dataSize, CColModel &outColModel, char const *modelName) {
    plugin::CallDynGlobal<unsigned char *, unsigned int, CColModel &, char const *>(gaddrof(CFileLoader::LoadCollisionModelVer2), data, dataSize, outColModel, modelName);
}

int addrof(CFileLoader::LoadCollisionModelVer3) = ADDRESS_BY_VERSION(0x537CE0, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadCollisionModelVer3) = GLOBAL_ADDRESS_BY_VERSION(0x537CE0, 0, 0, 0, 0, 0);

void CFileLoader::LoadCollisionModelVer3(unsigned char *data, unsigned int dataSize, CColModel &outColModel, char const *modelName) {
    plugin::CallDynGlobal<unsigned char *, unsigned int, CColModel &, char const *>(gaddrof(CFileLoader::LoadCollisionModelVer3), data, dataSize, outColModel, modelName);
}

int addrof(CFileLoader::LoadCollisionModelVer4) = ADDRESS_BY_VERSION(0x537AE0, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadCollisionModelVer4) = GLOBAL_ADDRESS_BY_VERSION(0x537AE0, 0, 0, 0, 0, 0);

void CFileLoader::LoadCollisionModelVer4(void *data, unsigned int dataSize, CColModel &outColModel, char const *modelName) {
    plugin::CallDynGlobal<void *, unsigned int, CColModel &, char const *>(gaddrof(CFileLoader::LoadCollisionModelVer4), data, dataSize, outColModel, modelName);
}

int addrof(CFileLoader::LoadCullZone) = ADDRESS_BY_VERSION(0x5B4B40, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadCullZone) = GLOBAL_ADDRESS_BY_VERSION(0x5B4B40, 0, 0, 0, 0, 0);

void CFileLoader::LoadCullZone(char const *line) {
    plugin::CallDynGlobal<char const *>(gaddrof(CFileLoader::LoadCullZone), line);
}

int addrof(CFileLoader::LoadEntryExit) = ADDRESS_BY_VERSION(0x5B8030, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadEntryExit) = GLOBAL_ADDRESS_BY_VERSION(0x5B8030, 0, 0, 0, 0, 0);

void CFileLoader::LoadEntryExit(char const *line) {
    plugin::CallDynGlobal<char const *>(gaddrof(CFileLoader::LoadEntryExit), line);
}

int addrof(CFileLoader::LoadGarage) = ADDRESS_BY_VERSION(0x5B4530, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadGarage) = GLOBAL_ADDRESS_BY_VERSION(0x5B4530, 0, 0, 0, 0, 0);

void CFileLoader::LoadGarage(char const *line) {
    plugin::CallDynGlobal<char const *>(gaddrof(CFileLoader::LoadGarage), line);
}

int addrof(CFileLoader::LoadLevel) = ADDRESS_BY_VERSION(0x5B9030, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadLevel) = GLOBAL_ADDRESS_BY_VERSION(0x5B9030, 0, 0, 0, 0, 0);

void CFileLoader::LoadLevel(char const *filename) {
    plugin::CallDynGlobal<char const *>(gaddrof(CFileLoader::LoadLevel), filename);
}

int addrof_o(CFileLoader::LoadLine, char *(*)(FILESTREAM)) = ADDRESS_BY_VERSION(0x536F80, 0, 0, 0, 0, 0);
int gaddrof_o(CFileLoader::LoadLine, char *(*)(FILESTREAM)) = GLOBAL_ADDRESS_BY_VERSION(0x536F80, 0, 0, 0, 0, 0);

char *CFileLoader::LoadLine(FILESTREAM file) {
    return plugin::CallAndReturnDynGlobal<char *, FILESTREAM>(gaddrof_o(CFileLoader::LoadLine, char *(*)(FILESTREAM)), file);
}

int addrof_o(CFileLoader::LoadLine, char *(*)(char **, int &)) = ADDRESS_BY_VERSION(0x536FE0, 0, 0, 0, 0, 0);
int gaddrof_o(CFileLoader::LoadLine, char *(*)(char **, int &)) = GLOBAL_ADDRESS_BY_VERSION(0x536FE0, 0, 0, 0, 0, 0);

char *CFileLoader::LoadLine(char **outLine, int &outSize) {
    return plugin::CallAndReturnDynGlobal<char *, char **, int &>(gaddrof_o(CFileLoader::LoadLine, char *(*)(char **, int &)), outLine, outSize);
}

int addrof(CFileLoader::LoadObject) = ADDRESS_BY_VERSION(0x5B3C60, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadObject) = GLOBAL_ADDRESS_BY_VERSION(0x5B3C60, 0, 0, 0, 0, 0);

int CFileLoader::LoadObject(char const *line) {
    return plugin::CallAndReturnDynGlobal<int, char const *>(gaddrof(CFileLoader::LoadObject), line);
}

int addrof_o(CFileLoader::LoadObjectInstance, CEntity *(*)(CFileObjectInstance *, char const *)) = ADDRESS_BY_VERSION(0x538090, 0, 0, 0, 0, 0);
int gaddrof_o(CFileLoader::LoadObjectInstance, CEntity *(*)(CFileObjectInstance *, char const *)) = GLOBAL_ADDRESS_BY_VERSION(0x538090, 0, 0, 0, 0, 0);

CEntity *CFileLoader::LoadObjectInstance(CFileObjectInstance *objInstance, char const *modelname) {
    return plugin::CallAndReturnDynGlobal<CEntity *, CFileObjectInstance *, char const *>(gaddrof_o(CFileLoader::LoadObjectInstance, CEntity *(*)(CFileObjectInstance *, char const *)), objInstance, modelname);
}

int addrof_o(CFileLoader::LoadObjectInstance, CEntity *(*)(char const *)) = ADDRESS_BY_VERSION(0x538690, 0, 0, 0, 0, 0);
int gaddrof_o(CFileLoader::LoadObjectInstance, CEntity *(*)(char const *)) = GLOBAL_ADDRESS_BY_VERSION(0x538690, 0, 0, 0, 0, 0);

CEntity *CFileLoader::LoadObjectInstance(char const *line) {
    return plugin::CallAndReturnDynGlobal<CEntity *, char const *>(gaddrof_o(CFileLoader::LoadObjectInstance, CEntity *(*)(char const *)), line);
}

int addrof(CFileLoader::LoadObjectTypes) = ADDRESS_BY_VERSION(0x5B8400, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadObjectTypes) = GLOBAL_ADDRESS_BY_VERSION(0x5B8400, 0, 0, 0, 0, 0);

void CFileLoader::LoadObjectTypes(char const *filename) {
    plugin::CallDynGlobal<char const *>(gaddrof(CFileLoader::LoadObjectTypes), filename);
}

int addrof(CFileLoader::LoadOcclusionVolume) = ADDRESS_BY_VERSION(0x5B4C80, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadOcclusionVolume) = GLOBAL_ADDRESS_BY_VERSION(0x5B4C80, 0, 0, 0, 0, 0);

void CFileLoader::LoadOcclusionVolume(char const *line, char const *filename) {
    plugin::CallDynGlobal<char const *, char const *>(gaddrof(CFileLoader::LoadOcclusionVolume), line, filename);
}

int addrof(CFileLoader::LoadPathHeader) = ADDRESS_BY_VERSION(0x5B41C0, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadPathHeader) = GLOBAL_ADDRESS_BY_VERSION(0x5B41C0, 0, 0, 0, 0, 0);

int CFileLoader::LoadPathHeader(char const *line, int &outPathType) {
    return plugin::CallAndReturnDynGlobal<int, char const *, int &>(gaddrof(CFileLoader::LoadPathHeader), line, outPathType);
}

int addrof(CFileLoader::LoadPedObject) = ADDRESS_BY_VERSION(0x5B7420, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadPedObject) = GLOBAL_ADDRESS_BY_VERSION(0x5B7420, 0, 0, 0, 0, 0);

int CFileLoader::LoadPedObject(char const *line) {
    return plugin::CallAndReturnDynGlobal<int, char const *>(gaddrof(CFileLoader::LoadPedObject), line);
}

int addrof(CFileLoader::LoadPedPathNode) = ADDRESS_BY_VERSION(0x5B41F0, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadPedPathNode) = GLOBAL_ADDRESS_BY_VERSION(0x5B41F0, 0, 0, 0, 0, 0);

void CFileLoader::LoadPedPathNode(char const *line, int objModelIndex, int pathEntryIndex) {
    plugin::CallDynGlobal<char const *, int, int>(gaddrof(CFileLoader::LoadPedPathNode), line, objModelIndex, pathEntryIndex);
}

int addrof(CFileLoader::LoadPickup) = ADDRESS_BY_VERSION(0x5B47B0, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadPickup) = GLOBAL_ADDRESS_BY_VERSION(0x5B47B0, 0, 0, 0, 0, 0);

void CFileLoader::LoadPickup(char const *line) {
    plugin::CallDynGlobal<char const *>(gaddrof(CFileLoader::LoadPickup), line);
}

int addrof(CFileLoader::LoadScene) = ADDRESS_BY_VERSION(0x5B8700, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadScene) = GLOBAL_ADDRESS_BY_VERSION(0x5B8700, 0, 0, 0, 0, 0);

void CFileLoader::LoadScene(char const *filename) {
    plugin::CallDynGlobal<char const *>(gaddrof(CFileLoader::LoadScene), filename);
}

int addrof(CFileLoader::LoadStuntJump) = ADDRESS_BY_VERSION(0x5B45D0, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadStuntJump) = GLOBAL_ADDRESS_BY_VERSION(0x5B45D0, 0, 0, 0, 0, 0);

void CFileLoader::LoadStuntJump(char const *line) {
    plugin::CallDynGlobal<char const *>(gaddrof(CFileLoader::LoadStuntJump), line);
}

int addrof(CFileLoader::LoadTXDParent) = ADDRESS_BY_VERSION(0x5B75E0, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadTXDParent) = GLOBAL_ADDRESS_BY_VERSION(0x5B75E0, 0, 0, 0, 0, 0);

void CFileLoader::LoadTXDParent(char const *line) {
    plugin::CallDynGlobal<char const *>(gaddrof(CFileLoader::LoadTXDParent), line);
}

int addrof(CFileLoader::LoadTexDictionary) = ADDRESS_BY_VERSION(0x5B3860, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadTexDictionary) = GLOBAL_ADDRESS_BY_VERSION(0x5B3860, 0, 0, 0, 0, 0);

RwTexDictionary *CFileLoader::LoadTexDictionary(char const *filename) {
    return plugin::CallAndReturnDynGlobal<RwTexDictionary *, char const *>(gaddrof(CFileLoader::LoadTexDictionary), filename);
}

int addrof(CFileLoader::LoadTimeCyclesModifier) = ADDRESS_BY_VERSION(0x5B81D0, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadTimeCyclesModifier) = GLOBAL_ADDRESS_BY_VERSION(0x5B81D0, 0, 0, 0, 0, 0);

void CFileLoader::LoadTimeCyclesModifier(char const *line) {
    plugin::CallDynGlobal<char const *>(gaddrof(CFileLoader::LoadTimeCyclesModifier), line);
}

int addrof(CFileLoader::LoadTimeObject) = ADDRESS_BY_VERSION(0x5B3DE0, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadTimeObject) = GLOBAL_ADDRESS_BY_VERSION(0x5B3DE0, 0, 0, 0, 0, 0);

int CFileLoader::LoadTimeObject(char const *line) {
    return plugin::CallAndReturnDynGlobal<int, char const *>(gaddrof(CFileLoader::LoadTimeObject), line);
}

int addrof(CFileLoader::LoadVehicleObject) = ADDRESS_BY_VERSION(0x5B6F30, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadVehicleObject) = GLOBAL_ADDRESS_BY_VERSION(0x5B6F30, 0, 0, 0, 0, 0);

int CFileLoader::LoadVehicleObject(char const *line) {
    return plugin::CallAndReturnDynGlobal<int, char const *>(gaddrof(CFileLoader::LoadVehicleObject), line);
}

int addrof(CFileLoader::LoadWeaponObject) = ADDRESS_BY_VERSION(0x5B3FB0, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadWeaponObject) = GLOBAL_ADDRESS_BY_VERSION(0x5B3FB0, 0, 0, 0, 0, 0);

int CFileLoader::LoadWeaponObject(char const *line) {
    return plugin::CallAndReturnDynGlobal<int, char const *>(gaddrof(CFileLoader::LoadWeaponObject), line);
}

int addrof(CFileLoader::LoadZone) = ADDRESS_BY_VERSION(0x5B4AB0, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::LoadZone) = GLOBAL_ADDRESS_BY_VERSION(0x5B4AB0, 0, 0, 0, 0, 0);

void CFileLoader::LoadZone(char const *line) {
    plugin::CallDynGlobal<char const *>(gaddrof(CFileLoader::LoadZone), line);
}

int addrof(CFileLoader::ReloadObjectTypes) = ADDRESS_BY_VERSION(0x5B3AC0, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::ReloadObjectTypes) = GLOBAL_ADDRESS_BY_VERSION(0x5B3AC0, 0, 0, 0, 0, 0);

void CFileLoader::ReloadObjectTypes(char const *arg1) {
    plugin::CallDynGlobal<char const *>(gaddrof(CFileLoader::ReloadObjectTypes), arg1);
}

int addrof(CFileLoader::ReloadPaths) = ADDRESS_BY_VERSION(0x5B6E10, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::ReloadPaths) = GLOBAL_ADDRESS_BY_VERSION(0x5B6E10, 0, 0, 0, 0, 0);

void CFileLoader::ReloadPaths(char const *filename) {
    plugin::CallDynGlobal<char const *>(gaddrof(CFileLoader::ReloadPaths), filename);
}

int addrof(CFileLoader::SaveTexDictionary) = ADDRESS_BY_VERSION(0x5B38C0, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::SaveTexDictionary) = GLOBAL_ADDRESS_BY_VERSION(0x5B38C0, 0, 0, 0, 0, 0);

void CFileLoader::SaveTexDictionary(RwTexDictionary *dictionary, char const *filename) {
    plugin::CallDynGlobal<RwTexDictionary *, char const *>(gaddrof(CFileLoader::SaveTexDictionary), dictionary, filename);
}

int addrof(CFileLoader::SetRelatedModelInfoCB) = ADDRESS_BY_VERSION(0x537150, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::SetRelatedModelInfoCB) = GLOBAL_ADDRESS_BY_VERSION(0x537150, 0, 0, 0, 0, 0);

RpAtomic *CFileLoader::SetRelatedModelInfoCB(RpAtomic *atomic, void *data) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *, void *>(gaddrof(CFileLoader::SetRelatedModelInfoCB), atomic, data);
}

int addrof(CFileLoader::StartLoadClumpFile) = ADDRESS_BY_VERSION(0x5373F0, 0, 0, 0, 0, 0);
int gaddrof(CFileLoader::StartLoadClumpFile) = GLOBAL_ADDRESS_BY_VERSION(0x5373F0, 0, 0, 0, 0, 0);

bool CFileLoader::StartLoadClumpFile(RwStream *stream, unsigned int modelIndex) {
    return plugin::CallAndReturnDynGlobal<bool, RwStream *, unsigned int>(gaddrof(CFileLoader::StartLoadClumpFile), stream, modelIndex);
}

int addrof(GetNameAndDamage) = ADDRESS_BY_VERSION(0x5370A0, 0, 0, 0, 0, 0);
int gaddrof(GetNameAndDamage) = GLOBAL_ADDRESS_BY_VERSION(0x5370A0, 0, 0, 0, 0, 0);

void GetNameAndDamage(char const *nodeName, char *outName, bool &outDamage) {
    plugin::CallDynGlobal<char const *, char *, bool &>(gaddrof(GetNameAndDamage), nodeName, outName, outDamage);
}

int addrof(CloneAtomicToClumpCB) = ADDRESS_BY_VERSION(0x537290, 0, 0, 0, 0, 0);
int gaddrof(CloneAtomicToClumpCB) = GLOBAL_ADDRESS_BY_VERSION(0x537290, 0, 0, 0, 0, 0);

RpAtomic *CloneAtomicToClumpCB(RpAtomic *atomic, void *data) {
    return plugin::CallAndReturnDynGlobal<RpAtomic *, RpAtomic *, void *>(gaddrof(CloneAtomicToClumpCB), atomic, data);
}

int addrof(GetFilename) = ADDRESS_BY_VERSION(0x5B3660, 0, 0, 0, 0, 0);
int gaddrof(GetFilename) = GLOBAL_ADDRESS_BY_VERSION(0x5B3660, 0, 0, 0, 0, 0);

char const *GetFilename(char const *filepath) {
    return plugin::CallAndReturnDynGlobal<char const *, char const *>(gaddrof(GetFilename), filepath);
}

int addrof(LoadingScreenLoadingFile) = ADDRESS_BY_VERSION(0x5B3680, 0, 0, 0, 0, 0);
int gaddrof(LoadingScreenLoadingFile) = GLOBAL_ADDRESS_BY_VERSION(0x5B3680, 0, 0, 0, 0, 0);

void LoadingScreenLoadingFile(char const *filename) {
    plugin::CallDynGlobal<char const *>(gaddrof(LoadingScreenLoadingFile), filename);
}

int addrof(AddTextureCB) = ADDRESS_BY_VERSION(0x5B38F0, 0, 0, 0, 0, 0);
int gaddrof(AddTextureCB) = GLOBAL_ADDRESS_BY_VERSION(0x5B38F0, 0, 0, 0, 0, 0);

RwTexture *AddTextureCB(RwTexture *texture, void *data) {
    return plugin::CallAndReturnDynGlobal<RwTexture *, RwTexture *, void *>(gaddrof(AddTextureCB), texture, data);
}
