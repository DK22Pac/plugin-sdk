/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "GenericGameStorage.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE unsigned int &TimeToStayFadedBeforeFadeOut = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x611564, 0x610E2C, 0x61DE24));
PLUGIN_VARIABLE unsigned int &SIZE_OF_ONE_GAME_IN_BYTES = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x611570, 0x610E38, 0x61DE30));
PLUGIN_VARIABLE wchar_t(&SlotFileName)[8][260] = *reinterpret_cast<wchar_t(*)[8][260]>(GLOBAL_ADDRESS_BY_VERSION(0x6F07C8, 0x6F07C8, 0x700908));
PLUGIN_VARIABLE int(&Slots)[9] = *reinterpret_cast<int(*)[9]>(GLOBAL_ADDRESS_BY_VERSION(0x72803C, 0x72803C, 0x73817C));
PLUGIN_VARIABLE wchar_t(&SlotSaveDate)[8][70] = *reinterpret_cast<wchar_t(*)[8][70]>(GLOBAL_ADDRESS_BY_VERSION(0x72B858, 0x72B858, 0x73B998));
PLUGIN_VARIABLE CDate &CompileDateAndTime = *reinterpret_cast<CDate *>(GLOBAL_ADDRESS_BY_VERSION(0x72BCB8, 0x72BCB8, 0x73BDF8));
PLUGIN_VARIABLE char(&DefaultPCSaveFileName)[260] = *reinterpret_cast<char(*)[260]>(GLOBAL_ADDRESS_BY_VERSION(0x8E28C0, 0x8E2870, 0x8F29B0));
PLUGIN_VARIABLE eLevelName &m_LevelToLoad = *reinterpret_cast<eLevelName *>(GLOBAL_ADDRESS_BY_VERSION(0x8E29CC, 0x8E297C, 0x8F2ABC));
PLUGIN_VARIABLE int &CheckSum = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2BE0, 0x8E2C94, 0x8F2DD4));
PLUGIN_VARIABLE char(&ValidSaveName)[260] = *reinterpret_cast<char(*)[260]>(GLOBAL_ADDRESS_BY_VERSION(0x8E2CBC, 0x8E2D70, 0x8F2EB0));
PLUGIN_VARIABLE char(&SaveFileNameJustSaved)[260] = *reinterpret_cast<char(*)[260]>(GLOBAL_ADDRESS_BY_VERSION(0x8F2570, 0x8F2624, 0x902764));
PLUGIN_VARIABLE unsigned int &TimeStartedCountingForFade = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x9430EC, 0x9432A4, 0x9533E4));
PLUGIN_VARIABLE bool &StillToFadeOut = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD99, 0x95CF52, 0x96D092));
PLUGIN_VARIABLE bool &b_FoundRecentSavedGameWantToLoad = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CDA8, 0x95CF61, 0x96D0A1));
PLUGIN_VARIABLE bool &JustLoadedDontFadeInYet = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0x95CDB4, 0x95CF6C, 0x96D0AC));

int addrof(GenericSave) = ADDRESS_BY_VERSION(0x58F8D0, 0x58FBC0, 0x58FAB0);
int gaddrof(GenericSave) = GLOBAL_ADDRESS_BY_VERSION(0x58F8D0, 0x58FBC0, 0x58FAB0);

bool GenericSave(int file) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(GenericSave), file);
}

int addrof(GenericLoad) = ADDRESS_BY_VERSION(0x590A00, 0x590CC0, 0x590BB0);
int gaddrof(GenericLoad) = GLOBAL_ADDRESS_BY_VERSION(0x590A00, 0x590CC0, 0x590BB0);

bool GenericLoad() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(GenericLoad));
}

int addrof(ReadInSizeofSaveFileBuffer) = ADDRESS_BY_VERSION(0x591910, 0x591BC0, 0x591AB0);
int gaddrof(ReadInSizeofSaveFileBuffer) = GLOBAL_ADDRESS_BY_VERSION(0x591910, 0x591BC0, 0x591AB0);

bool ReadInSizeofSaveFileBuffer(int &file, unsigned int &size) {
    return plugin::CallAndReturnDynGlobal<bool, int &, unsigned int &>(gaddrof(ReadInSizeofSaveFileBuffer), file, size);
}

int addrof(ReadDataFromFile) = ADDRESS_BY_VERSION(0x591990, 0x591C40, 0x591B30);
int gaddrof(ReadDataFromFile) = GLOBAL_ADDRESS_BY_VERSION(0x591990, 0x591C40, 0x591B30);

bool ReadDataFromFile(int file, unsigned char *buf, unsigned int size) {
    return plugin::CallAndReturnDynGlobal<bool, int, unsigned char *, unsigned int>(gaddrof(ReadDataFromFile), file, buf, size);
}

int addrof(CloseFile) = ADDRESS_BY_VERSION(0x591A00, 0x591CB0, 0x591BA0);
int gaddrof(CloseFile) = GLOBAL_ADDRESS_BY_VERSION(0x591A00, 0x591CB0, 0x591BA0);

bool CloseFile(int file) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CloseFile), file);
}

int addrof(DoGameSpecificStuffAfterSucessLoad) = ADDRESS_BY_VERSION(0x591A20, 0x591CD0, 0x591BC0);
int gaddrof(DoGameSpecificStuffAfterSucessLoad) = GLOBAL_ADDRESS_BY_VERSION(0x591A20, 0x591CD0, 0x591BC0);

void DoGameSpecificStuffAfterSucessLoad() {
    plugin::CallDynGlobal(gaddrof(DoGameSpecificStuffAfterSucessLoad));
}

int addrof(CheckSlotDataValid) = ADDRESS_BY_VERSION(0x591A40, 0x591CF0, 0x591BE0);
int gaddrof(CheckSlotDataValid) = GLOBAL_ADDRESS_BY_VERSION(0x591A40, 0x591CF0, 0x591BE0);

bool CheckSlotDataValid(int slot) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CheckSlotDataValid), slot);
}

int addrof(MakeSpaceForSizeInBufferPointer) = ADDRESS_BY_VERSION(0x591A80, 0x591D30, 0x591C20);
int gaddrof(MakeSpaceForSizeInBufferPointer) = GLOBAL_ADDRESS_BY_VERSION(0x591A80, 0x591D30, 0x591C20);

void MakeSpaceForSizeInBufferPointer(unsigned char *&preSize, unsigned char *&buf, unsigned char *&postSize) {
    plugin::CallDynGlobal<unsigned char *&, unsigned char *&, unsigned char *&>(gaddrof(MakeSpaceForSizeInBufferPointer), preSize, buf, postSize);
}

int addrof(CopySizeAndPreparePointer) = ADDRESS_BY_VERSION(0x591AA0, 0x591D50, 0x591C40);
int gaddrof(CopySizeAndPreparePointer) = GLOBAL_ADDRESS_BY_VERSION(0x591AA0, 0x591D50, 0x591C40);

void CopySizeAndPreparePointer(unsigned char *&buf, unsigned char *&postBuf, unsigned char *&postBuf2, unsigned int &unused, unsigned int &size) {
    plugin::CallDynGlobal<unsigned char *&, unsigned char *&, unsigned char *&, unsigned int &, unsigned int &>(gaddrof(CopySizeAndPreparePointer), buf, postBuf, postBuf2, unused, size);
}

int addrof(DoGameSpecificStuffBeforeSave) = ADDRESS_BY_VERSION(0x591AE0, 0x591D90, 0x591C80);
int gaddrof(DoGameSpecificStuffBeforeSave) = GLOBAL_ADDRESS_BY_VERSION(0x591AE0, 0x591D90, 0x591C80);

void DoGameSpecificStuffBeforeSave() {
    plugin::CallDynGlobal(gaddrof(DoGameSpecificStuffBeforeSave));
}

int addrof(MakeValidSaveName) = ADDRESS_BY_VERSION(0x591B10, 0x591DC0, 0x591CB0);
int gaddrof(MakeValidSaveName) = GLOBAL_ADDRESS_BY_VERSION(0x591B10, 0x591DC0, 0x591CB0);

void MakeValidSaveName(int slot) {
    plugin::CallDynGlobal<int>(gaddrof(MakeValidSaveName), slot);
}

int addrof(GetSavedGameDateAndTime) = ADDRESS_BY_VERSION(0x591B50, 0x591E00, 0x591CF0);
int gaddrof(GetSavedGameDateAndTime) = GLOBAL_ADDRESS_BY_VERSION(0x591B50, 0x591E00, 0x591CF0);

wchar_t *GetSavedGameDateAndTime(int slot) {
    return plugin::CallAndReturnDynGlobal<wchar_t *, int>(gaddrof(GetSavedGameDateAndTime), slot);
}

int addrof(GetNameOfSavedGame) = ADDRESS_BY_VERSION(0x591B60, 0x591E10, 0x591D00);
int gaddrof(GetNameOfSavedGame) = GLOBAL_ADDRESS_BY_VERSION(0x591B60, 0x591E10, 0x591D00);

wchar_t *GetNameOfSavedGame(int slot) {
    return plugin::CallAndReturnDynGlobal<wchar_t *, int>(gaddrof(GetNameOfSavedGame), slot);
}

int addrof(CheckDataNotCorrupt) = ADDRESS_BY_VERSION(0x591B70, 0x591E20, 0x591D10);
int gaddrof(CheckDataNotCorrupt) = GLOBAL_ADDRESS_BY_VERSION(0x591B70, 0x591E20, 0x591D10);

bool CheckDataNotCorrupt(int slot, char *name) {
    return plugin::CallAndReturnDynGlobal<bool, int, char *>(gaddrof(CheckDataNotCorrupt), slot, name);
}

int addrof(RestoreForStartLoad) = ADDRESS_BY_VERSION(0x591D60, 0x592010, 0x591F00);
int gaddrof(RestoreForStartLoad) = GLOBAL_ADDRESS_BY_VERSION(0x591D60, 0x592010, 0x591F00);

bool RestoreForStartLoad() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(RestoreForStartLoad));
}

int addrof(align4bytes) = ADDRESS_BY_VERSION(0x591E80, 0x592130, 0x592020);
int gaddrof(align4bytes) = GLOBAL_ADDRESS_BY_VERSION(0x591E80, 0x592130, 0x592020);

int align4bytes(int size) {
    return plugin::CallAndReturnDynGlobal<int, int>(gaddrof(align4bytes), size);
}
