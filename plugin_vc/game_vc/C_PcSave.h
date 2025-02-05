/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

enum PLUGIN_API eSaveSlot : unsigned char {
    SLOT_OK = 0,
    SLOT_EMPTY = 1,
    SLOT_CORRUPTED = 2
};

enum PLUGIN_API eSaveStatus : unsigned int {
    SAVESTATUS_SUCCESSFUL = 0,
    SAVESTATUS_ERR_SAVE_CREATE = 1,
    SAVESTATUS_ERR_SAVE_WRITE = 2,
    SAVESTATUS_ERR_SAVE_CLOSE = 3,
    SAVESTATUS_ERR_LOAD_OPEN = 4,
    SAVESTATUS_ERR_LOAD_READ = 5,
    SAVESTATUS_ERR_LOAD_CLOSE = 6,
    SAVESTATUS_ERR_DATA_INVALID = 7,
    SAVESTATUS_DELETEFAILED8 = 8,
    SAVESTATUS_DELETEFAILED9 = 9,
    SAVESTATUS_DELETEFAILED10 = 10
};

class PLUGIN_API C_PcSave {
public:
    eSaveStatus nErrorCode;

    SUPPORTED_10EN_11EN_STEAM bool DeleteSlot(int slot);
    SUPPORTED_10EN_11EN_STEAM bool PcClassSaveRoutine(int file, unsigned char *data, unsigned int size);
    SUPPORTED_10EN_11EN_STEAM void PopulateSlotInfo();
    SUPPORTED_10EN_11EN_STEAM char SaveSlot(int slot);

    SUPPORTED_10EN_11EN_STEAM static void SetSaveDirectory(char const *path);
};

SUPPORTED_10EN_11EN_STEAM extern C_PcSave &PcSaveHelper;

VALIDATE_SIZE(C_PcSave, 0x4);

#include "meta/meta.C_PcSave.h"
