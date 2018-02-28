/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFileLoader.h"

char *CFileLoader::ms_line = (char *)0x6ED4E0;

// Converted from cdecl char* CFileLoader::LoadLine(int fileHandle) 0x4761D0
char* CFileLoader::LoadLine(int fileHandle) {
    return plugin::CallAndReturn<char*, 0x4761D0, int>(fileHandle);
}

// Converted from cdecl char* GetFilename(char const* filepath) 0x476230
char* GetFilename(char const* filepath) {
    return plugin::CallAndReturn<char*, 0x476230, char const*>(filepath);
}

// Converted from cdecl void LoadingScreenLoadingFile(char const* filepath) 0x476250
void LoadingScreenLoadingFile(char const* filepath) {
    plugin::Call<0x476250, char const*>(filepath);
}

// Converted from cdecl void CFileLoader::LoadLevel(char const* datFilePath) 0x476290
void CFileLoader::LoadLevel(char const* datFilePath) {
    plugin::Call<0x476290, char const*>(datFilePath);
}

// Converted from cdecl void CFileLoader::LoadCollisionFromDatFile(uint gameLevel) 0x476520
void CFileLoader::LoadCollisionFromDatFile(unsigned int gameLevel) {
    plugin::Call<0x476520, unsigned int>(gameLevel);
}

// Converted from cdecl void CFileLoader::LoadTexDictionary(char const* filepath) 0x4765B0
RwTexDictionary * CFileLoader::LoadTexDictionary(char const* filepath) {
    return plugin::CallAndReturn<RwTexDictionary *, 0x4765B0, char const*>(filepath);
}

// Converted from cdecl RwTexture* MoveTexturesCB(RwTexture *texture,void *data) 0x476610
RwTexture* MoveTexturesCB(RwTexture* texture, void* data) {
    return plugin::CallAndReturn<RwTexture*, 0x476610, RwTexture*, void*>(texture, data);
}

// Converted from cdecl void CFileLoader::AddTexDictionaries(RwTexDictionary *dst,RwTexDictionary *src) 0x476630
void CFileLoader::AddTexDictionaries(RwTexDictionary* dst, RwTexDictionary* src) {
    plugin::Call<0x476630, RwTexDictionary*, RwTexDictionary*>(dst, src);
}

// Converted from cdecl void GetNameAndLOD(char *nodeName, char *outName, uint *outLodIndex) 0x476650
void GetNameAndLOD(char* nodeName, char* outName, unsigned int *outLodIndex) {
    plugin::Call<0x476650, char*, char*, unsigned int *>(nodeName, outName, outLodIndex);
}

// Converted from cdecl RpAtomic* CFileLoader::FindRelatedModelInfoCB(RpAtomic *atomic,void *data) 0x4766C0
RpAtomic* CFileLoader::FindRelatedModelInfoCB(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x4766C0, RpAtomic*, void*>(atomic, data);
}

// Converted from cdecl void CFileLoader::LoadAtomicFile(char const* filepath) 0x476750
void CFileLoader::LoadAtomicFile(char const* filepath) {
    plugin::Call<0x476750, char const*>(filepath);
}

// Converted from cdecl RpClump* CFileLoader::LoadAtomicFile2Return(char const* filepath) 0x4767C0
RpClump* CFileLoader::LoadAtomicFile2Return(char const* filepath) {
    return plugin::CallAndReturn<RpClump*, 0x4767C0, char const*>(filepath);
}

// Converted from cdecl void CFileLoader::LoadClumpFile(char const* filepath) 0x476810
void CFileLoader::LoadClumpFile(char const* filepath) {
    plugin::Call<0x476810, char const*>(filepath);
}

// Converted from cdecl RpAtomic* CFileLoader::SetRelatedModelInfoCB(RpAtomic *atomic,void *data) 0x4768C0
RpAtomic* CFileLoader::SetRelatedModelInfoCB(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x4768C0, RpAtomic*, void*>(atomic, data);
}

// Converted from cdecl bool CFileLoader::LoadAtomicFile(RwStream *stream,uint modelIndex) 0x476930
bool CFileLoader::LoadAtomicFile(RwStream* stream, unsigned int modelIndex) {
    return plugin::CallAndReturn<bool, 0x476930, RwStream*, unsigned int>(stream, modelIndex);
}

// Converted from cdecl bool CFileLoader::LoadClumpFile(RwStream *stream,uint modelIndex) 0x476990
bool CFileLoader::LoadClumpFile(RwStream* stream, unsigned int modelIndex) {
    return plugin::CallAndReturn<bool, 0x476990, RwStream*, unsigned int>(stream, modelIndex);
}

// Converted from cdecl bool CFileLoader::StartLoadClumpFile(RwStream *stream,uint modelIndex) 0x476A20
bool CFileLoader::StartLoadClumpFile(RwStream* stream, unsigned int modelIndex) {
    return plugin::CallAndReturn<bool, 0x476A20, RwStream*, unsigned int>(stream, modelIndex);
}

// Converted from cdecl bool CFileLoader::FinishLoadClumpFile(RwStream *stream,uint modelIndex) 0x476A70
bool CFileLoader::FinishLoadClumpFile(RwStream* stream, unsigned int modelIndex) {
    return plugin::CallAndReturn<bool, 0x476A70, RwStream*, unsigned int>(stream, modelIndex);
}

// Converted from cdecl void CFileLoader::LoadObjectTypes(char const* filepath) 0x476AC0
void CFileLoader::LoadObjectTypes(char const* filepath) {
    plugin::Call<0x476AC0, char const*>(filepath);
}

// Converted from cdecl void CFileLoader::ReloadPaths(char const* filepath) 0x476DB0
void CFileLoader::ReloadPaths(char const* filepath) {
    plugin::Call<0x476DB0, char const*>(filepath);
}

// Converted from cdecl void CFileLoader::ReloadObjectTypes(char const* filepath) 0x476F30
void CFileLoader::ReloadObjectTypes(char const* filepath) {
    plugin::Call<0x476F30, char const*>(filepath);
}

// Converted from cdecl void CFileLoader::LoadObject(char const* line) 0x477040
void CFileLoader::LoadObject(char const* line) {
    plugin::Call<0x477040, char const*>(line);
}

// Converted from cdecl void CFileLoader::ReloadObject(char const* line) 0x4772B0
void CFileLoader::ReloadObject(char const* line) {
    plugin::Call<0x4772B0, char const*>(line);
}

// Converted from cdecl void CFileLoader::LoadTimeObject(char const* line) 0x4774B0
void CFileLoader::LoadTimeObject(char const* line) {
    plugin::Call<0x4774B0, char const*>(line);
}

// Converted from cdecl void CFileLoader::LoadMLO(char const* line) 0x477750
void CFileLoader::LoadMLO(char const* line) {
    plugin::Call<0x477750, char const*>(line);
}

// Converted from cdecl void CFileLoader::LoadMLOInstance(int modelIndex,char const* line) 0x4777C0
void CFileLoader::LoadMLOInstance(int modelIndex, char const* line) {
    plugin::Call<0x4777C0, int, char const*>(modelIndex, line);
}

// Converted from cdecl void CFileLoader::LoadClumpObject(char const* line) 0x477920
void CFileLoader::LoadClumpObject(char const* line) {
    plugin::Call<0x477920, char const*>(line);
}

// Converted from cdecl void CFileLoader::LoadVehicleObject(char const* line) 0x477990
void CFileLoader::LoadVehicleObject(char const* line) {
    plugin::Call<0x477990, char const*>(line);
}

// Converted from cdecl void CFileLoader::LoadPedObject(char const* line) 0x477DE0
void CFileLoader::LoadPedObject(char const* line) {
    plugin::Call<0x477DE0, char const*>(line);
}

// Converted from cdecl int CFileLoader::LoadPathHeader(char const* line,char *outPathType) 0x477ED0
int CFileLoader::LoadPathHeader(char const* line, char* outPathType) {
    return plugin::CallAndReturn<int, 0x477ED0, char const*, char*>(line, outPathType);
}

// Converted from cdecl void CFileLoader::LoadPedPathNode(char const* line,int id,int index) 0x477F00
void CFileLoader::LoadPedPathNode(char const* line, int id, int index) {
    plugin::Call<0x477F00, char const*, int, int>(line, id, index);
}

// Converted from cdecl void CFileLoader::LoadCarPathNode(char const* line,int id,int index) 0x477FF0
void CFileLoader::LoadCarPathNode(char const* line, int id, int index) {
    plugin::Call<0x477FF0, char const*, int, int>(line, id, index);
}

// Converted from cdecl void CFileLoader::Load2dEffect(char const* line) 0x4780E0
void CFileLoader::Load2dEffect(char const* line) {
    plugin::Call<0x4780E0, char const*>(line);
}

// Converted from cdecl void CFileLoader::LoadScene(char const* filepath) 0x478370
void CFileLoader::LoadScene(char const* filepath) {
    plugin::Call<0x478370, char const*>(filepath);
}

// Converted from cdecl void CFileLoader::LoadMapZones(char const* filepath) 0x478550
void CFileLoader::LoadMapZones(char const* filepath) {
    plugin::Call<0x478550, char const*>(filepath);
}

// Converted from cdecl void CFileLoader::LoadObjectInstance(char const* line) 0x4786B0
void CFileLoader::LoadObjectInstance(char const* line) {
    plugin::Call<0x4786B0, char const*>(line);
}

// Converted from cdecl void CFileLoader::LoadPickup(char const* line) 0x4789C0
void CFileLoader::LoadPickup(char const* line) {
    plugin::Call<0x4789C0, char const*>(line);
}

// Converted from cdecl void CFileLoader::LoadZone(char const* line) 0x478A00
void CFileLoader::LoadZone(char const* line) {
    plugin::Call<0x478A00, char const*>(line);
}

// Converted from cdecl void CFileLoader::LoadCullZone(char const* line) 0x478A90
void CFileLoader::LoadCullZone(char const* line) {
    plugin::Call<0x478A90, char const*>(line);
}

// Converted from cdecl void CFileLoader::LoadCollisionFile(char *filepath) 0x478B20
void CFileLoader::LoadCollisionFile(char* filepath) {
    plugin::Call<0x478B20, char*>(filepath);
}

// Converted from cdecl void CFileLoader::LoadCollisionModel(uchar *buffer,CColModel &outColModel,char *name) 0x478C20
void CFileLoader::LoadCollisionModel(unsigned char* buffer, CColModel& outColModel, char* name) {
    plugin::Call<0x478C20, unsigned char*, CColModel&, char*>(buffer, outColModel, name);
}