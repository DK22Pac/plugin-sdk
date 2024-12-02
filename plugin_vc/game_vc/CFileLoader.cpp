/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CFileLoader.h"

RpClump* CFileLoader::LoadAtomicFile2Return(const char* file) {
    return plugin::CallAndReturn<RpClump*, 0x48D7C0, const char*>(file);
}

RpAtomic* CFileLoader::FindRelatedModelInfoCB(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x48D810, RpAtomic*, void*>(atomic, data);
}

RpAtomic* CFileLoader::SetRelatedModelInfoCB(RpAtomic* atomic, void* data) {
    return plugin::CallAndReturn<RpAtomic*, 0x48D690, RpAtomic*, void*>(atomic, data);
}

void CFileLoader::LoadLevel(const char* filename) {
    return plugin::Call<0x48D950, const char*>(filename);
}

void CFileLoader::LoadCollisionFile(const char* filename, unsigned char colId) {
    return plugin::Call<0x48AAA0, const char*, unsigned char>(filename, colId);
}

bool CFileLoader::LoadCollisionFile(unsigned char* buf, unsigned int size, unsigned char colId) {
    return plugin::CallAndReturn<bool, 0x48A910, unsigned char*, unsigned int, unsigned char>(buf, size, colId);
}

bool CFileLoader::LoadCollisionFileFirstTime(unsigned char* buf, unsigned int size, unsigned char colId) {
    return plugin::CallAndReturn<bool, 0x48A7E0, unsigned char*, unsigned int, unsigned char>(buf, size, colId);
}

bool CFileLoader::LoadAtomicFile(RwStream* stream, unsigned int id) {
    return plugin::CallAndReturn<bool, 0x48D630, RwStream*, unsigned int>(stream, id);
}

void CFileLoader::LoadClumpFile(const char* filename) {
    return plugin::Call<0x48D710, const char*>(filename);
}

bool CFileLoader::LoadClumpFile(RwStream* stream, unsigned int id) {
    return plugin::CallAndReturn<bool, 0x48D5E0, RwStream*, unsigned int>(stream, id);
}

bool CFileLoader::StartLoadClumpFile(RwStream* stream, unsigned int id) {
    return plugin::CallAndReturn<bool, 0x48D590, RwStream*, unsigned int>(stream, id);
}

bool CFileLoader::FinishLoadClumpFile(RwStream* stream, unsigned int id) {
    return plugin::CallAndReturn<bool, 0x48D540, RwStream*, unsigned int>(stream, id);
}

void CFileLoader::LoadObjectTypes(const char* filename) {
    return plugin::Call<0x48C810, const char*>(filename);
}

void CFileLoader::LoadScene(const char* filename) {
    return plugin::Call<0x48B050, const char*>(filename);
}

int CFileLoader::LoadObject(const char* line) {
    return plugin::CallAndReturn<int, 0x48C530, const char*>(line);
}

int CFileLoader::LoadTimeObject(const char* line) {
    return plugin::CallAndReturn<int, 0x48C330, const char*>(line);
}

void CFileLoader::LoadVehicleObject(const char* line) {
    return plugin::Call<0x48BEA0, const char*>(line);
}

void CFileLoader::LoadPedObject(const char* line) {
    return plugin::Call<0x48BD80, const char*>(line);
}

void CFileLoader::Load2dEffect(const char* line) {
    return plugin::Call<0x48BA80, const char*>(line);
}

void CFileLoader::LoadObjectInstance(const char* line) {
    return plugin::Call<0x48ABB0, const char*>(line);
}

void CFileLoader::LoadCollisionModel(unsigned char* buf, CColModel& model, char* modelname) {
    return plugin::Call<0x48A3A0, unsigned char*, CColModel&, char*>(buf, model, modelname);
}
