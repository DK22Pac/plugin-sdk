/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRecordDataForGame.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE int &CRecordDataForGame::FId = *reinterpret_cast<int *>(GLOBAL_ADDRESS_BY_VERSION(0x885BA4, 0x885B54, 0x895C94));
PLUGIN_VARIABLE unsigned char *&CRecordDataForGame::pDataBufferPointer = *reinterpret_cast<unsigned char **>(GLOBAL_ADDRESS_BY_VERSION(0x8F1AB0, 0x8F1B64, 0x901CA4));
PLUGIN_VARIABLE unsigned char *&CRecordDataForGame::pDataBuffer = *reinterpret_cast<unsigned char **>(GLOBAL_ADDRESS_BY_VERSION(0x8F1B70, 0x8F1C24, 0x901D64));
PLUGIN_VARIABLE unsigned short &CRecordDataForGame::RecordingState = *reinterpret_cast<unsigned short *>(GLOBAL_ADDRESS_BY_VERSION(0x95CC24, 0x95CDDC, 0x96CF1C));
PLUGIN_VARIABLE tGameBuffer &BufferDataToBeSaved = *reinterpret_cast<tGameBuffer *>(GLOBAL_ADDRESS_BY_VERSION(0x72CED0, 0x72CED0, 0x73D010));

int addrof(CRecordDataForGame::CalcGameChecksum) = ADDRESS_BY_VERSION(0x4346C0, 0x4346C0, 0x4346C0);
int gaddrof(CRecordDataForGame::CalcGameChecksum) = GLOBAL_ADDRESS_BY_VERSION(0x4346C0, 0x4346C0, 0x4346C0);

unsigned short CRecordDataForGame::CalcGameChecksum() {
    return plugin::CallAndReturnDynGlobal<unsigned short>(gaddrof(CRecordDataForGame::CalcGameChecksum));
}

int addrof(CRecordDataForGame::Init) = ADDRESS_BY_VERSION(0x4340F0, 0x4340F0, 0x4340F0);
int gaddrof(CRecordDataForGame::Init) = GLOBAL_ADDRESS_BY_VERSION(0x4340F0, 0x4340F0, 0x4340F0);

void CRecordDataForGame::Init() {
    plugin::CallDynGlobal(gaddrof(CRecordDataForGame::Init));
}

int addrof(CRecordDataForGame::PackCurrentPadValues) = ADDRESS_BY_VERSION(0x4343B0, 0x4343B0, 0x4343B0);
int gaddrof(CRecordDataForGame::PackCurrentPadValues) = GLOBAL_ADDRESS_BY_VERSION(0x4343B0, 0x4343B0, 0x4343B0);

unsigned char *CRecordDataForGame::PackCurrentPadValues(unsigned char *buf, CControllerState *os, CControllerState *ns) {
    return plugin::CallAndReturnDynGlobal<unsigned char *, unsigned char *, CControllerState *, CControllerState *>(gaddrof(CRecordDataForGame::PackCurrentPadValues), buf, os, ns);
}

int addrof(CRecordDataForGame::SaveOrRetrieveDataForThisFrame) = ADDRESS_BY_VERSION(0x4341F0, 0x4341F0, 0x4341F0);
int gaddrof(CRecordDataForGame::SaveOrRetrieveDataForThisFrame) = GLOBAL_ADDRESS_BY_VERSION(0x4341F0, 0x4341F0, 0x4341F0);

void CRecordDataForGame::SaveOrRetrieveDataForThisFrame() {
    plugin::CallDynGlobal(gaddrof(CRecordDataForGame::SaveOrRetrieveDataForThisFrame));
}

int addrof(CRecordDataForGame::UnPackCurrentPadValues) = ADDRESS_BY_VERSION(0x4345C0, 0x4345C0, 0x4345C0);
int gaddrof(CRecordDataForGame::UnPackCurrentPadValues) = GLOBAL_ADDRESS_BY_VERSION(0x4345C0, 0x4345C0, 0x4345C0);

unsigned char *CRecordDataForGame::UnPackCurrentPadValues(unsigned char *buf, unsigned char total, CControllerState *state) {
    return plugin::CallAndReturnDynGlobal<unsigned char *, unsigned char *, unsigned char, CControllerState *>(gaddrof(CRecordDataForGame::UnPackCurrentPadValues), buf, total, state);
}
