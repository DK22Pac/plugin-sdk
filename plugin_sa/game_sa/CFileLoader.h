/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "CBoundingBox.h"
#include "CColModel.h"
#include "CFileCarGenerator.h"
#include "CEntity.h"
#include "CFileObjectInstance.h"
#include "CFileMgr.h"

class PLUGIN_API CFileLoader {
public:
    SUPPORTED_10US static char(&ms_line)[512]; // static char ms_line[512]

    //! copy textures from dictionary to baseDictionary
    SUPPORTED_10US static void AddTexDictionaries(RwTexDictionary *dictionary, RwTexDictionary *baseDictionary);
    SUPPORTED_10US static RpAtomic *FindRelatedModelInfoCB(RpAtomic *atomic, void *data);
    SUPPORTED_10US static bool FinishLoadClumpFile(RwStream *stream, unsigned int modelIndex);
    SUPPORTED_10US static void LoadAnimatedClumpObject(char const *line);
    SUPPORTED_10US static void LoadAtomicFile(RwStream *stream, unsigned int modelIndex);
    SUPPORTED_10US static void LoadAtomicFile(char const *filename);
    SUPPORTED_10US static RpClump *LoadAtomicFile2Return(char const *filename);
    SUPPORTED_10US static void LoadAudioZone(char const *line);
    SUPPORTED_10US static void LoadBoundingBox(unsigned char *data, CBoundingBox &outBoundBox);
    SUPPORTED_10US static void LoadCarGenerator(CFileCarGenerator *carGen, int iplId);
    SUPPORTED_10US static void LoadCarGenerator(char const *line, int iplId);
    SUPPORTED_10US static void LoadCarPathNode(char const *line, int objModelIndex, int pathEntryIndex, bool a4);
    SUPPORTED_10US static bool LoadClumpFile(RwStream *stream, unsigned int modelIndex);
    SUPPORTED_10US static void LoadClumpFile(char const *filename);
    SUPPORTED_10US static int LoadClumpObject(char const *line);
    SUPPORTED_10US static bool LoadCollisionFile(unsigned char *data, unsigned int dataSize, unsigned char colId);
    SUPPORTED_10US static void LoadCollisionFile(char const *filename, unsigned char colId);
    SUPPORTED_10US static bool LoadCollisionFileFirstTime(unsigned char *data, unsigned int dataSize, unsigned char colId);
    SUPPORTED_10US static void LoadCollisionModel(unsigned char *data, CColModel &outColModel);
    SUPPORTED_10US static void LoadCollisionModelVer2(unsigned char *data, unsigned int dataSize, CColModel &outColModel, char const *modelName);
    SUPPORTED_10US static void LoadCollisionModelVer3(unsigned char *data, unsigned int dataSize, CColModel &outColModel, char const *modelName);
    SUPPORTED_10US static void LoadCollisionModelVer4(void *data, unsigned int dataSize, CColModel &outColModel, char const *modelName);
    SUPPORTED_10US static void LoadCullZone(char const *line);
    SUPPORTED_10US static void LoadEntryExit(char const *line);
    SUPPORTED_10US static void LoadGarage(char const *line);
    SUPPORTED_10US static void LoadLevel(char const *filename);
    SUPPORTED_10US static char *LoadLine(FILESTREAM file);
    SUPPORTED_10US static char *LoadLine(char **outLine, int &outSize);
    SUPPORTED_10US static int LoadObject(char const *line);
    SUPPORTED_10US static CEntity *LoadObjectInstance(CFileObjectInstance *objInstance, char const *modelname);
    SUPPORTED_10US static CEntity *LoadObjectInstance(char const *line);
    SUPPORTED_10US static void LoadObjectTypes(char const *filename);
    SUPPORTED_10US static void LoadOcclusionVolume(char const *line, char const *filename);
    SUPPORTED_10US static int LoadPathHeader(char const *line, int &outPathType);
    SUPPORTED_10US static int LoadPedObject(char const *line);
    SUPPORTED_10US static void LoadPedPathNode(char const *line, int objModelIndex, int pathEntryIndex);
    SUPPORTED_10US static void LoadPickup(char const *line);
    SUPPORTED_10US static void LoadScene(char const *filename);
    SUPPORTED_10US static void LoadStuntJump(char const *line);
    SUPPORTED_10US static void LoadTXDParent(char const *line);
    //! load txd from file
    SUPPORTED_10US static RwTexDictionary *LoadTexDictionary(char const *filename);
    SUPPORTED_10US static void LoadTimeCyclesModifier(char const *line);
    SUPPORTED_10US static int LoadTimeObject(char const *line);
    SUPPORTED_10US static int LoadVehicleObject(char const *line);
    SUPPORTED_10US static int LoadWeaponObject(char const *line);
    SUPPORTED_10US static void LoadZone(char const *line);
    //! dummy function
    SUPPORTED_10US static void ReloadObjectTypes(char const *arg1);
    SUPPORTED_10US static void ReloadPaths(char const *filename);
    //! save txd to file
    SUPPORTED_10US static void SaveTexDictionary(RwTexDictionary *dictionary, char const *filename);
    SUPPORTED_10US static RpAtomic *SetRelatedModelInfoCB(RpAtomic *atomic, void *data);
    SUPPORTED_10US static bool StartLoadClumpFile(RwStream *stream, unsigned int modelIndex);
};

//! global variable to be used in a callback
SUPPORTED_10US extern unsigned int &gAtomicModelId;

SUPPORTED_10US void GetNameAndDamage(char const *nodeName, char *outName, bool &outDamage);
//! Makes a copy of atomic and adds it to clump
//! @param atomic callback atomic
//! @param data clump object (RpClump *)
//! @return callback atomic
SUPPORTED_10US RpAtomic *CloneAtomicToClumpCB(RpAtomic *atomic, void *data);
//! Gets file name from a path
SUPPORTED_10US char const *GetFilename(char const *filepath);
SUPPORTED_10US void LoadingScreenLoadingFile(char const *filename);
//! Adds texture to the dictionary
//! @param texture callback texture
//! @param data texture dictionary (RwTexDictionary *)
//! @return callback texture
SUPPORTED_10US RwTexture *AddTextureCB(RwTexture *texture, void *data);

#include "meta/meta.CFileLoader.h"
