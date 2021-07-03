/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "eLevelName.h"
class CDate;

//! 1750
SUPPORTED_10EN_11EN_STEAM extern unsigned int &TimeToStayFadedBeforeFadeOut;
//! unsigned int SIZE_OF_ONE_GAME_IN_BYTES = 201729;
SUPPORTED_10EN_11EN_STEAM extern unsigned int &SIZE_OF_ONE_GAME_IN_BYTES;
SUPPORTED_10EN_11EN_STEAM extern wchar_t(&SlotFileName)[8][260]; // wchar_t SlotFileName[8][260]
SUPPORTED_10EN_11EN_STEAM extern int(&Slots)[9]; // int Slots[9]
SUPPORTED_10EN_11EN_STEAM extern wchar_t(&SlotSaveDate)[8][70]; // wchar_t SlotSaveDate[8][70]
SUPPORTED_10EN_11EN_STEAM extern CDate &CompileDateAndTime;
SUPPORTED_10EN_11EN_STEAM extern char(&DefaultPCSaveFileName)[260]; // char DefaultPCSaveFileName[260]
SUPPORTED_10EN_11EN_STEAM extern eLevelName &m_LevelToLoad;
SUPPORTED_10EN_11EN_STEAM extern int &CheckSum;
SUPPORTED_10EN_11EN_STEAM extern char(&ValidSaveName)[260]; // char ValidSaveName[260]
SUPPORTED_10EN_11EN_STEAM extern char(&SaveFileNameJustSaved)[260]; // char SaveFileNameJustSaved[260]
SUPPORTED_10EN_11EN_STEAM extern unsigned int &TimeStartedCountingForFade;
SUPPORTED_10EN_11EN_STEAM extern bool &StillToFadeOut;
SUPPORTED_10EN_11EN_STEAM extern bool &b_FoundRecentSavedGameWantToLoad;
SUPPORTED_10EN_11EN_STEAM extern bool &JustLoadedDontFadeInYet;

SUPPORTED_10EN_11EN_STEAM bool GenericSave(int file);
SUPPORTED_10EN_11EN_STEAM bool GenericLoad();
SUPPORTED_10EN_11EN_STEAM bool ReadInSizeofSaveFileBuffer(int &file, unsigned int &size);
SUPPORTED_10EN_11EN_STEAM bool ReadDataFromFile(int file, unsigned char *buf, unsigned int size);
SUPPORTED_10EN_11EN_STEAM bool CloseFile(int file);
SUPPORTED_10EN_11EN_STEAM void DoGameSpecificStuffAfterSucessLoad();
SUPPORTED_10EN_11EN_STEAM bool CheckSlotDataValid(int slot);
SUPPORTED_10EN_11EN_STEAM void MakeSpaceForSizeInBufferPointer(unsigned char *&preSize, unsigned char *&buf, unsigned char *&postSize);
SUPPORTED_10EN_11EN_STEAM void CopySizeAndPreparePointer(unsigned char *&buf, unsigned char *&postBuf, unsigned char *&postBuf2, unsigned int &unused, unsigned int &size);
SUPPORTED_10EN_11EN_STEAM void DoGameSpecificStuffBeforeSave();
SUPPORTED_10EN_11EN_STEAM void MakeValidSaveName(int slot);
SUPPORTED_10EN_11EN_STEAM wchar_t *GetSavedGameDateAndTime(int slot);
SUPPORTED_10EN_11EN_STEAM wchar_t *GetNameOfSavedGame(int slot);
SUPPORTED_10EN_11EN_STEAM bool CheckDataNotCorrupt(int slot, char *name);
SUPPORTED_10EN_11EN_STEAM bool RestoreForStartLoad();
SUPPORTED_10EN_11EN_STEAM int align4bytes(int size);

#include "meta/meta.GenericGameStorage.h"
