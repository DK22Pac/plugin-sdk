/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGenericGameStorage.h"

PLUGIN_SOURCE_FILE

char *CGenericGameStorage::ms_LoadFileNameWithPath = reinterpret_cast<char *>(GLOBAL_ADDRESS_BY_VERSION(0xC15F60, 0, 0, 0, 0, 0));
char *CGenericGameStorage::ms_LoadFileName = reinterpret_cast<char *>(GLOBAL_ADDRESS_BY_VERSION(0xC15FC8, 0, 0, 0, 0, 0));
char *CGenericGameStorage::ms_SaveFileNameJustSaved = reinterpret_cast<char *>(GLOBAL_ADDRESS_BY_VERSION(0xC16030, 0, 0, 0, 0, 0));
int &CGenericGameStorage::ms_CheckSum = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xC16134, 0, 0, 0, 0, 0));
tSlotSaveDate *CGenericGameStorage::ms_SlotSaveDate = reinterpret_cast<tSlotSaveDate *>(GLOBAL_ADDRESS_BY_VERSION(0xC16138, 0, 0, 0, 0, 0));
tSlotFileName *CGenericGameStorage::ms_SlotFileName = reinterpret_cast<tSlotFileName *>(GLOBAL_ADDRESS_BY_VERSION(0xC16368, 0, 0, 0, 0, 0));
char *CGenericGameStorage::ms_ValidSaveName = reinterpret_cast<char *>(GLOBAL_ADDRESS_BY_VERSION(0xC16DB8, 0, 0, 0, 0, 0));
int *CGenericGameStorage::ms_Slots = reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xC16EB8, 0, 0, 0, 0, 0));
void *&CGenericGameStorage::ms_WorkBuffer = *reinterpret_cast<void **>(GLOBAL_ADDRESS_BY_VERSION(0xC16EE8, 0, 0, 0, 0, 0));
int &CGenericGameStorage::ms_WorkBufferPos = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xC16EEC, 0, 0, 0, 0, 0));
FILE *&CGenericGameStorage::ms_FileHandle = *reinterpret_cast<FILE **>(GLOBAL_ADDRESS_BY_VERSION(0xC16EF0, 0, 0, 0, 0, 0));
int &CGenericGameStorage::ms_FilePos = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xC16EF4, 0, 0, 0, 0, 0));
int &CGenericGameStorage::ms_FileSize = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0xC16EF8, 0, 0, 0, 0, 0));
bool &CGenericGameStorage::ms_bFailed = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xC16EFC, 0, 0, 0, 0, 0));
bool &CGenericGameStorage::ms_bLoading = *reinterpret_cast<bool *>(GLOBAL_ADDRESS_BY_VERSION(0xC16EFD, 0, 0, 0, 0, 0));

int addrof(CGenericGameStorage::CheckDataNotCorrupt) = ADDRESS_BY_VERSION(0x5D1170, 0, 0, 0, 0, 0);
int gaddrof(CGenericGameStorage::CheckDataNotCorrupt) = GLOBAL_ADDRESS_BY_VERSION(0x5D1170, 0, 0, 0, 0, 0);

bool CGenericGameStorage::CheckDataNotCorrupt(int saveID, char *saveGameFilename) {
    return plugin::CallAndReturnDynGlobal<bool, int, char *>(gaddrof(CGenericGameStorage::CheckDataNotCorrupt), saveID, saveGameFilename);
}

int addrof(CGenericGameStorage::CheckSlotDataValid) = ADDRESS_BY_VERSION(0x5D1380, 0, 0, 0, 0, 0);
int gaddrof(CGenericGameStorage::CheckSlotDataValid) = GLOBAL_ADDRESS_BY_VERSION(0x5D1380, 0, 0, 0, 0, 0);

bool CGenericGameStorage::CheckSlotDataValid(int saveID, bool unused) {
    return plugin::CallAndReturnDynGlobal<bool, int, bool>(gaddrof(CGenericGameStorage::CheckSlotDataValid), saveID, unused);
}

int addrof(CGenericGameStorage::DoGameSpecificStuffAfterSucessLoad) = ADDRESS_BY_VERSION(0x618E90, 0, 0, 0, 0, 0);
int gaddrof(CGenericGameStorage::DoGameSpecificStuffAfterSucessLoad) = GLOBAL_ADDRESS_BY_VERSION(0x618E90, 0, 0, 0, 0, 0);

void CGenericGameStorage::DoGameSpecificStuffAfterSucessLoad() {
    plugin::CallDynGlobal(gaddrof(CGenericGameStorage::DoGameSpecificStuffAfterSucessLoad));
}

int addrof(CGenericGameStorage::DoGameSpecificStuffBeforeSave) = ADDRESS_BY_VERSION(0x618F50, 0, 0, 0, 0, 0);
int gaddrof(CGenericGameStorage::DoGameSpecificStuffBeforeSave) = GLOBAL_ADDRESS_BY_VERSION(0x618F50, 0, 0, 0, 0, 0);

void CGenericGameStorage::DoGameSpecificStuffBeforeSave() {
    plugin::CallDynGlobal(gaddrof(CGenericGameStorage::DoGameSpecificStuffBeforeSave));
}

int addrof(CGenericGameStorage::GenericLoad) = ADDRESS_BY_VERSION(0x5D17B0, 0, 0, 0, 0, 0);
int gaddrof(CGenericGameStorage::GenericLoad) = GLOBAL_ADDRESS_BY_VERSION(0x5D17B0, 0, 0, 0, 0, 0);

bool CGenericGameStorage::GenericLoad(bool *arg1) {
    return plugin::CallAndReturnDynGlobal<bool, bool *>(gaddrof(CGenericGameStorage::GenericLoad), arg1);
}

int addrof(CGenericGameStorage::GenericSave) = ADDRESS_BY_VERSION(0x5D13E0, 0, 0, 0, 0, 0);
int gaddrof(CGenericGameStorage::GenericSave) = GLOBAL_ADDRESS_BY_VERSION(0x5D13E0, 0, 0, 0, 0, 0);

bool CGenericGameStorage::GenericSave(int unused) {
    return plugin::CallAndReturnDynGlobal<bool, int>(gaddrof(CGenericGameStorage::GenericSave), unused);
}

int addrof(CGenericGameStorage::GetCurrentVersionNumber) = ADDRESS_BY_VERSION(0x5D0F50, 0, 0, 0, 0, 0);
int gaddrof(CGenericGameStorage::GetCurrentVersionNumber) = GLOBAL_ADDRESS_BY_VERSION(0x5D0F50, 0, 0, 0, 0, 0);

int CGenericGameStorage::GetCurrentVersionNumber() {
    return plugin::CallAndReturnDynGlobal<int>(gaddrof(CGenericGameStorage::GetCurrentVersionNumber));
}

int addrof(CGenericGameStorage::GetNameOfSavedGame) = ADDRESS_BY_VERSION(0x5D0F40, 0, 0, 0, 0, 0);
int gaddrof(CGenericGameStorage::GetNameOfSavedGame) = GLOBAL_ADDRESS_BY_VERSION(0x5D0F40, 0, 0, 0, 0, 0);

char *CGenericGameStorage::GetNameOfSavedGame(int saveID) {
    return plugin::CallAndReturnDynGlobal<char *, int>(gaddrof(CGenericGameStorage::GetNameOfSavedGame), saveID);
}

int addrof(CGenericGameStorage::GetNameOfSavedGame_Alt) = ADDRESS_BY_VERSION(0x619030, 0, 0, 0, 0, 0);
int gaddrof(CGenericGameStorage::GetNameOfSavedGame_Alt) = GLOBAL_ADDRESS_BY_VERSION(0x619030, 0, 0, 0, 0, 0);

char *CGenericGameStorage::GetNameOfSavedGame_Alt(int saveID) {
    return plugin::CallAndReturnDynGlobal<char *, int>(gaddrof(CGenericGameStorage::GetNameOfSavedGame_Alt), saveID);
}

int addrof(CGenericGameStorage::GetSavedRadioStationPosition) = ADDRESS_BY_VERSION(0x618E80, 0, 0, 0, 0, 0);
int gaddrof(CGenericGameStorage::GetSavedRadioStationPosition) = GLOBAL_ADDRESS_BY_VERSION(0x618E80, 0, 0, 0, 0, 0);

int CGenericGameStorage::GetSavedRadioStationPosition() {
    return plugin::CallAndReturnDynGlobal<int>(gaddrof(CGenericGameStorage::GetSavedRadioStationPosition));
}

int addrof(CGenericGameStorage::InitNewSettingsAfterLoad) = ADDRESS_BY_VERSION(0x618FF0, 0, 0, 0, 0, 0);
int gaddrof(CGenericGameStorage::InitNewSettingsAfterLoad) = GLOBAL_ADDRESS_BY_VERSION(0x618FF0, 0, 0, 0, 0, 0);

void CGenericGameStorage::InitNewSettingsAfterLoad() {
    plugin::CallDynGlobal(gaddrof(CGenericGameStorage::InitNewSettingsAfterLoad));
}

int addrof(CGenericGameStorage::InitRadioStationPositionList) = ADDRESS_BY_VERSION(0x618E70, 0, 0, 0, 0, 0);
int gaddrof(CGenericGameStorage::InitRadioStationPositionList) = GLOBAL_ADDRESS_BY_VERSION(0x618E70, 0, 0, 0, 0, 0);

void CGenericGameStorage::InitRadioStationPositionList() {
    plugin::CallDynGlobal(gaddrof(CGenericGameStorage::InitRadioStationPositionList));
}

int addrof(CGenericGameStorage::LoadWorkBuffer) = ADDRESS_BY_VERSION(0x5D10B0, 0, 0, 0, 0, 0);
int gaddrof(CGenericGameStorage::LoadWorkBuffer) = GLOBAL_ADDRESS_BY_VERSION(0x5D10B0, 0, 0, 0, 0, 0);

bool CGenericGameStorage::LoadWorkBuffer() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGenericGameStorage::LoadWorkBuffer));
}

int addrof(CGenericGameStorage::MakeValidSaveName) = ADDRESS_BY_VERSION(0x5D0E90, 0, 0, 0, 0, 0);
int gaddrof(CGenericGameStorage::MakeValidSaveName) = GLOBAL_ADDRESS_BY_VERSION(0x5D0E90, 0, 0, 0, 0, 0);

void CGenericGameStorage::MakeValidSaveName(int saveNum) {
    plugin::CallDynGlobal<int>(gaddrof(CGenericGameStorage::MakeValidSaveName), saveNum);
}

int addrof(CGenericGameStorage::OpenFileForReading) = ADDRESS_BY_VERSION(0x5D0D20, 0, 0, 0, 0, 0);
int gaddrof(CGenericGameStorage::OpenFileForReading) = GLOBAL_ADDRESS_BY_VERSION(0x5D0D20, 0, 0, 0, 0, 0);

bool CGenericGameStorage::OpenFileForReading(char *saveGameFilename, unsigned int *saveID) {
    return plugin::CallAndReturnDynGlobal<bool, char *, unsigned int *>(gaddrof(CGenericGameStorage::OpenFileForReading), saveGameFilename, saveID);
}

int addrof(CGenericGameStorage::OpenFileForWriting) = ADDRESS_BY_VERSION(0x5D0DD0, 0, 0, 0, 0, 0);
int gaddrof(CGenericGameStorage::OpenFileForWriting) = GLOBAL_ADDRESS_BY_VERSION(0x5D0DD0, 0, 0, 0, 0, 0);

bool CGenericGameStorage::OpenFileForWriting() {
    return plugin::CallAndReturnDynGlobal<bool>(gaddrof(CGenericGameStorage::OpenFileForWriting));
}

int addrof(CGenericGameStorage::ReportError) = ADDRESS_BY_VERSION(0x5D08C0, 0, 0, 0, 0, 0);
int gaddrof(CGenericGameStorage::ReportError) = GLOBAL_ADDRESS_BY_VERSION(0x5D08C0, 0, 0, 0, 0, 0);

void CGenericGameStorage::ReportError(eSaveLoadBlocks block, eSaveLoadError errorType) {
    plugin::CallDynGlobal<eSaveLoadBlocks, eSaveLoadError>(gaddrof(CGenericGameStorage::ReportError),block,errorType);
}

int addrof(CGenericGameStorage::RestoreForStartLoad) = ADDRESS_BY_VERSION(0x619000, 0, 0, 0, 0, 0);
int gaddrof(CGenericGameStorage::RestoreForStartLoad) = GLOBAL_ADDRESS_BY_VERSION(0x619000, 0, 0, 0, 0, 0);

char CGenericGameStorage::RestoreForStartLoad() {
    return plugin::CallAndReturnDynGlobal<char>(gaddrof(CGenericGameStorage::RestoreForStartLoad));
}

int addrof(CGenericGameStorage::SaveWorkBuffer) = ADDRESS_BY_VERSION(0x5D0F80, 0, 0, 0, 0, 0);
int gaddrof(CGenericGameStorage::SaveWorkBuffer) = GLOBAL_ADDRESS_BY_VERSION(0x5D0F80, 0, 0, 0, 0, 0);

bool CGenericGameStorage::SaveWorkBuffer(bool a1) {
    return plugin::CallAndReturnDynGlobal<bool, bool>(gaddrof(CGenericGameStorage::SaveWorkBuffer), a1);
}

int addrof(CGenericGameStorage::_LoadDataFromWorkBuffer) = ADDRESS_BY_VERSION(0x5D1300, 0, 0, 0, 0, 0);
int gaddrof(CGenericGameStorage::_LoadDataFromWorkBuffer) = GLOBAL_ADDRESS_BY_VERSION(0x5D1300, 0, 0, 0, 0, 0);

bool CGenericGameStorage::_LoadDataFromWorkBuffer(void *pData, int size) {
    return plugin::CallAndReturnDynGlobal<bool, void *, int>(gaddrof(CGenericGameStorage::_LoadDataFromWorkBuffer), pData, size);
}

int addrof(CGenericGameStorage::_SaveDataToWorkBuffer) = ADDRESS_BY_VERSION(0x5D1270, 0, 0, 0, 0, 0);
int gaddrof(CGenericGameStorage::_SaveDataToWorkBuffer) = GLOBAL_ADDRESS_BY_VERSION(0x5D1270, 0, 0, 0, 0, 0);

bool CGenericGameStorage::_SaveDataToWorkBuffer(void *pData, int Size) {
    return plugin::CallAndReturnDynGlobal<bool, void *, int>(gaddrof(CGenericGameStorage::_SaveDataToWorkBuffer), pData, Size);
}
