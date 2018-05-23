/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

enum PLUGIN_API eSaveLoadBlocks {
    BLOCK_SIMPLE_VARIABLES = 0,
    BLOCK_SCRIPTS = 0x1,
    BLOCK_POOLS = 0x2,
    BLOCK_GARAGES = 0x3,
    BLOCK_GAMELOGIC = 0x4,
    BLOCK_PATHS = 0x5,
    BLOCK_PICKUPS = 0x6,
    BLOCK_PHONEINFO = 0x7,
    BLOCK_RESTART = 0x8,
    BLOCK_RADAR = 0x9,
    BLOCK_ZONES = 0xA,
    BLOCK_GANGS = 0xB,
    BLOCK_CAR_GENERATORS = 0xC,
    BLOCK_PED_GENERATORS = 0xD,
    BLOCK_AUDIO_SCRIPT_OBJECT = 0xE,
    BLOCK_PLAYERINFO = 0xF,
    BLOCK_STATS = 0x10,
    BLOCK_SET_PIECES = 0x11,
    BLOCK_STREAMING = 0x12,
    BLOCK_PED_TYPES = 0x13,
    BLOCK_TAGS = 0x14,
    BLOCK_IPLS = 0x15,
    BLOCK_SHOPPING = 0x16,
    BLOCK_GANGWARS = 0x17,
    BLOCK_STUNTJUMPS = 0x18,
    BLOCK_USER3DMARKERS = 0x1B
};

enum PLUGIN_API eSaveLoadError {
    LOADING_SYNC_ERROR = 0,
    LOADING_ERROR = 0x1,
    SAVING_ERROR = 0x2
};

struct PLUGIN_API tSlotSaveDate {
    char m_sSavedGameDateAndTime[70];
};

struct PLUGIN_API tSlotFileName {
    char m_sSavedGameName[260];
};

VALIDATE_SIZE(tSlotSaveDate, 0x46);
VALIDATE_SIZE(tSlotFileName, 0x104);

class PLUGIN_API CGenericGameStorage {
public:
    SUPPORTED_10US static char *ms_LoadFileNameWithPath; // static char ms_LoadFileNameWithPath[104]
    SUPPORTED_10US static char *ms_LoadFileName; // static char ms_LoadFileName[104]
    SUPPORTED_10US static char *ms_SaveFileNameJustSaved; // static char ms_SaveFileNameJustSaved[260]
    SUPPORTED_10US static int &ms_CheckSum;
    SUPPORTED_10US static tSlotSaveDate *ms_SlotSaveDate; // static tSlotSaveDate ms_SlotSaveDate[8]
    SUPPORTED_10US static tSlotFileName *ms_SlotFileName; // static tSlotFileName ms_SlotFileName[8]
    SUPPORTED_10US static char *ms_ValidSaveName; // static char ms_ValidSaveName[256]
    SUPPORTED_10US static int *ms_Slots; // static int ms_Slots[9]
    SUPPORTED_10US static void *&ms_WorkBuffer;
    SUPPORTED_10US static int &ms_WorkBufferPos;
    SUPPORTED_10US static FILE *&ms_FileHandle;
    SUPPORTED_10US static int &ms_FilePos;
    SUPPORTED_10US static int &ms_FileSize;
    SUPPORTED_10US static bool &ms_bFailed;
    SUPPORTED_10US static bool &ms_bLoading;

    SUPPORTED_10US static bool CheckDataNotCorrupt(int saveID, char *saveGameFilename);
    SUPPORTED_10US static bool CheckSlotDataValid(int saveID, bool unused);
    SUPPORTED_10US static void DoGameSpecificStuffAfterSucessLoad();
    SUPPORTED_10US static void DoGameSpecificStuffBeforeSave();
    SUPPORTED_10US static bool GenericLoad(bool *arg1);
    SUPPORTED_10US static bool GenericSave(int unused);
    SUPPORTED_10US static int GetCurrentVersionNumber();
    SUPPORTED_10US static char *GetNameOfSavedGame(int saveID);
    //! unused
    SUPPORTED_10US static char *GetNameOfSavedGame_Alt(int saveID);
    //! unused
    //! does nothing (return 0)
    SUPPORTED_10US static int GetSavedRadioStationPosition();
    //! unused
    //! does nothing (NOP)
    SUPPORTED_10US static void InitNewSettingsAfterLoad();
    //! does nothing (NOP)
    SUPPORTED_10US static void InitRadioStationPositionList();
    SUPPORTED_10US static bool LoadWorkBuffer();
    SUPPORTED_10US static void MakeValidSaveName(int saveNum);
    SUPPORTED_10US static bool OpenFileForReading(char *saveGameFilename, unsigned int *saveID);
    SUPPORTED_10US static bool OpenFileForWriting();
    SUPPORTED_10US static void ReportError(eSaveLoadBlocks block, eSaveLoadError errorType);
    //! does nothing (return 0)
    SUPPORTED_10US static char RestoreForStartLoad();
    SUPPORTED_10US static bool SaveWorkBuffer(bool a1);
    SUPPORTED_10US static bool _LoadDataFromWorkBuffer(void *pData, int size);
    SUPPORTED_10US static bool _SaveDataToWorkBuffer(void *pData, int Size);
};



#include "meta/meta.CGenericGameStorage.h"
