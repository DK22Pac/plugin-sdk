/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTheCarGenerators.h"

PLUGIN_SOURCE_FILE

unsigned char &CTheCarGenerators::GenerateEvenIfPlayerIsCloseCounter = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0xC279D0, 0, 0, 0, 0, 0));
unsigned char &CTheCarGenerators::ProcessCounter = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0xC279D1, 0, 0, 0, 0, 0));
unsigned int &CTheCarGenerators::NumOfCarGenerators = *reinterpret_cast<unsigned int *>(GLOBAL_ADDRESS_BY_VERSION(0xC279D4, 0, 0, 0, 0, 0));
CSpecialPlateHandler &CTheCarGenerators::m_SpecialPlateHandler = *reinterpret_cast<CSpecialPlateHandler *>(GLOBAL_ADDRESS_BY_VERSION(0xC279D8, 0, 0, 0, 0, 0));
CCarGenerator *CTheCarGenerators::CarGeneratorArray = reinterpret_cast<CCarGenerator *>(GLOBAL_ADDRESS_BY_VERSION(0xC27AD0, 0, 0, 0, 0, 0));

int addrof(CTheCarGenerators::CreateCarGenerator) = ADDRESS_BY_VERSION(0x6F31A0, 0, 0, 0, 0, 0);
int gaddrof(CTheCarGenerators::CreateCarGenerator) = GLOBAL_ADDRESS_BY_VERSION(0x6F31A0, 0, 0, 0, 0, 0);

signed int CTheCarGenerators::CreateCarGenerator(float x, float y, float z, float angle, int modelId, short color1, short color2, unsigned char forceSpawn, unsigned char alarm_chances, unsigned char doorLock_chances, unsigned short minDelay, unsigned short maxDelay, unsigned char iplId, unsigned char bOwnedbyplayer) {
    return plugin::CallAndReturnDynGlobal<signed int, float, float, float, float, int, short, short, unsigned char, unsigned char, unsigned char, unsigned short, unsigned short, unsigned char, unsigned char>(gaddrof(CTheCarGenerators::CreateCarGenerator), x, y, z, angle, modelId, color1, color2, forceSpawn, alarm_chances, doorLock_chances, minDelay, maxDelay, iplId, bOwnedbyplayer);
}

int addrof(CTheCarGenerators::Init) = ADDRESS_BY_VERSION(0x6F3270, 0, 0, 0, 0, 0);
int gaddrof(CTheCarGenerators::Init) = GLOBAL_ADDRESS_BY_VERSION(0x6F3270, 0, 0, 0, 0, 0);

void CTheCarGenerators::Init() {
    plugin::CallDynGlobal(gaddrof(CTheCarGenerators::Init));
}

int addrof(CTheCarGenerators::Load) = ADDRESS_BY_VERSION(0x5D39B0, 0, 0, 0, 0, 0);
int gaddrof(CTheCarGenerators::Load) = GLOBAL_ADDRESS_BY_VERSION(0x5D39B0, 0, 0, 0, 0, 0);

void CTheCarGenerators::Load() {
    plugin::CallDynGlobal(gaddrof(CTheCarGenerators::Load));
}

int addrof(CTheCarGenerators::Process) = ADDRESS_BY_VERSION(0x6F3F40, 0, 0, 0, 0, 0);
int gaddrof(CTheCarGenerators::Process) = GLOBAL_ADDRESS_BY_VERSION(0x6F3F40, 0, 0, 0, 0, 0);

void CTheCarGenerators::Process() {
    plugin::CallDynGlobal(gaddrof(CTheCarGenerators::Process));
}

int addrof(CTheCarGenerators::RemoveCarGenerators) = ADDRESS_BY_VERSION(0x6F3240, 0, 0, 0, 0, 0);
int gaddrof(CTheCarGenerators::RemoveCarGenerators) = GLOBAL_ADDRESS_BY_VERSION(0x6F3240, 0, 0, 0, 0, 0);

void CTheCarGenerators::RemoveCarGenerators(unsigned char IplID) {
    plugin::CallDynGlobal<unsigned char>(gaddrof(CTheCarGenerators::RemoveCarGenerators), IplID);
}

int addrof(CTheCarGenerators::Save) = ADDRESS_BY_VERSION(0x5D38C0, 0, 0, 0, 0, 0);
int gaddrof(CTheCarGenerators::Save) = GLOBAL_ADDRESS_BY_VERSION(0x5D38C0, 0, 0, 0, 0, 0);

void CTheCarGenerators::Save() {
    plugin::CallDynGlobal(gaddrof(CTheCarGenerators::Save));
}
