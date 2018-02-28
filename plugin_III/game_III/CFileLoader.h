/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "CColModel.h"

class CFileLoader {
public:
    static char *ms_line; // static char ms_line[128]

    static char* LoadLine(int fileHandle);
    static void LoadLevel(char const* datFilePath);
    static void LoadCollisionFromDatFile(unsigned int gameLevel);
    static RwTexDictionary *LoadTexDictionary(char const* filepath);
    static void AddTexDictionaries(RwTexDictionary* dst, RwTexDictionary* src);
    static RpAtomic* FindRelatedModelInfoCB(RpAtomic* atomic, void* data);
    static void LoadAtomicFile(char const* filepath);
    static RpClump* LoadAtomicFile2Return(char const* filepath);
    static void LoadClumpFile(char const* filepath);
    static RpAtomic* SetRelatedModelInfoCB(RpAtomic* atomic, void* data);
    static bool LoadAtomicFile(RwStream* stream, unsigned int modelIndex);
    static bool LoadClumpFile(RwStream* stream, unsigned int modelIndex);
    static bool StartLoadClumpFile(RwStream* stream, unsigned int modelIndex);
    static bool FinishLoadClumpFile(RwStream* stream, unsigned int modelIndex);
    static void LoadObjectTypes(char const* filepath);
    static void ReloadPaths(char const* filepath);
    static void ReloadObjectTypes(char const* filepath);
    static void LoadObject(char const* line);
    static void ReloadObject(char const* line);
    static void LoadTimeObject(char const* line);
    static void LoadMLO(char const* line);
    static void LoadMLOInstance(int modelIndex, char const* line);
    static void LoadClumpObject(char const* line);
    static void LoadVehicleObject(char const* line);
    static void LoadPedObject(char const* line);
    static int LoadPathHeader(char const* line, char* outPathType);
    static void LoadPedPathNode(char const* line, int id, int index);
    static void LoadCarPathNode(char const* line, int id, int index);
    static void Load2dEffect(char const* line);
    static void LoadScene(char const* filepath);
    static void LoadMapZones(char const* filepath);
    static void LoadObjectInstance(char const* line);
    static void LoadPickup(char const* line);
    static void LoadZone(char const* line);
    static void LoadCullZone(char const* line);
    static void LoadCollisionFile(char* filepath);
    static void LoadCollisionModel(unsigned char* buffer, CColModel& outColModel, char* name);
};

char* GetFilename(char const* filepath);
void LoadingScreenLoadingFile(char const* filepath);
RwTexture* MoveTexturesCB(RwTexture* texture, void* data);
void GetNameAndLOD(char* nodeName, char* outName, unsigned int *outLodIndex);