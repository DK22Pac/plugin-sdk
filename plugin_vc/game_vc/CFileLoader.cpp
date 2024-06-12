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

void CFileLoader::LoadLevel(const char* filename) {
    return plugin::Call<0x48D950, const char*>(filename);
}

void CFileLoader::LoadCollisionFile(const char* filename, unsigned char colId) {
    return plugin::Call<0x48AAA0, const char*, unsigned char>(filename, colId);
}

void CFileLoader::LoadClumpFile(const char* filename) {
    return plugin::Call<0x48D710, const char*>(filename);
}

void CFileLoader::LoadObjectTypes(const char* filename) {
    return plugin::Call<0x48C810, const char*>(filename);
}

void CFileLoader::LoadScene(const char* filename) {
    return plugin::Call<0x48B050, const char*>(filename);
}
