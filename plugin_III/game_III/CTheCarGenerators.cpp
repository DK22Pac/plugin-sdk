/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTheCarGenerators.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CCarGenerator(&CTheCarGenerators::CarGeneratorArray)[160] = *reinterpret_cast<CCarGenerator(*)[160]>(GLOBAL_ADDRESS_BY_VERSION(0x87CB18, 0x87CAC8, 0x88CC08));
PLUGIN_VARIABLE unsigned int &CTheCarGenerators::NumOfCarGenerators = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2C1C, 0x8E2CD0, 0x8F2E10));
PLUGIN_VARIABLE unsigned int &CTheCarGenerators::CurrentActiveCount = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2C5C, 0x8F2D10, 0x902E50));
PLUGIN_VARIABLE unsigned char &CTheCarGenerators::ProcessCounter = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0x95CDAF, 0x95CF67, 0x96D0A7));
PLUGIN_VARIABLE unsigned char &CTheCarGenerators::GenerateEvenIfPlayerIsCloseCounter = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0x95CDC6, 0x95CF7E, 0x96D0BE));

int addrof(CTheCarGenerators::CreateCarGenerator) = ADDRESS_BY_VERSION(0x542FC0, 0x543200, 0x5431B0);
int gaddrof(CTheCarGenerators::CreateCarGenerator) = GLOBAL_ADDRESS_BY_VERSION(0x542FC0, 0x543200, 0x5431B0);

int CTheCarGenerators::CreateCarGenerator(float x, float y, float z, float angle, int modelId, short colorPrim, short colorSec, unsigned char forceSpawn, unsigned char alarm, unsigned char doorLock, unsigned short minDelay, unsigned short maxDelay) {
    return plugin::CallAndReturnDynGlobal<int, float, float, float, float, int, short, short, unsigned char, unsigned char, unsigned char, unsigned short, unsigned short>(gaddrof(CTheCarGenerators::CreateCarGenerator), x, y, z, angle, modelId, colorPrim, colorSec, forceSpawn, alarm, doorLock, minDelay, maxDelay);
}

int addrof(CTheCarGenerators::Init) = ADDRESS_BY_VERSION(0x543020, 0x543260, 0x543210);
int gaddrof(CTheCarGenerators::Init) = GLOBAL_ADDRESS_BY_VERSION(0x543020, 0x543260, 0x543210);

void CTheCarGenerators::Init() {
    plugin::CallDynGlobal(gaddrof(CTheCarGenerators::Init));
}

int addrof(CTheCarGenerators::LoadAllCarGenerators) = ADDRESS_BY_VERSION(0x5431E0, 0x543420, 0x5433D0);
int gaddrof(CTheCarGenerators::LoadAllCarGenerators) = GLOBAL_ADDRESS_BY_VERSION(0x5431E0, 0x543420, 0x5433D0);

void CTheCarGenerators::LoadAllCarGenerators(unsigned char *buffer, unsigned int size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int>(gaddrof(CTheCarGenerators::LoadAllCarGenerators), buffer, size);
}

int addrof(CTheCarGenerators::Process) = ADDRESS_BY_VERSION(0x542F40, 0x543180, 0x543130);
int gaddrof(CTheCarGenerators::Process) = GLOBAL_ADDRESS_BY_VERSION(0x542F40, 0x543180, 0x543130);

void CTheCarGenerators::Process() {
    plugin::CallDynGlobal(gaddrof(CTheCarGenerators::Process));
}

int addrof(CTheCarGenerators::SaveAllCarGenerators) = ADDRESS_BY_VERSION(0x543050, 0x543290, 0x543240);
int gaddrof(CTheCarGenerators::SaveAllCarGenerators) = GLOBAL_ADDRESS_BY_VERSION(0x543050, 0x543290, 0x543240);

void CTheCarGenerators::SaveAllCarGenerators(unsigned char *buffer, unsigned int *size) {
    plugin::CallDynGlobal<unsigned char *, unsigned int *>(gaddrof(CTheCarGenerators::SaveAllCarGenerators), buffer, size);
}
