/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCarGenerator.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CCarGenerator) = ADDRESS_BY_VERSION(0x543350, 0x543590, 0x543540);
int ctor_gaddr(CCarGenerator) = GLOBAL_ADDRESS_BY_VERSION(0x543350, 0x543590, 0x543540);

int addrof(CCarGenerator::CalcNextGen) = ADDRESS_BY_VERSION(0x5426C0, 0x542900, 0x5428B0);
int gaddrof(CCarGenerator::CalcNextGen) = GLOBAL_ADDRESS_BY_VERSION(0x5426C0, 0x542900, 0x5428B0);

unsigned int CCarGenerator::CalcNextGen() {
    return plugin::CallMethodAndReturnDynGlobal<unsigned int, CCarGenerator *>(gaddrof(CCarGenerator::CalcNextGen), this);
}

int addrof(CCarGenerator::CheckForBlockage) = ADDRESS_BY_VERSION(0x542DF0, 0x543030, 0x542FE0);
int gaddrof(CCarGenerator::CheckForBlockage) = GLOBAL_ADDRESS_BY_VERSION(0x542DF0, 0x543030, 0x542FE0);

bool CCarGenerator::CheckForBlockage() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCarGenerator *>(gaddrof(CCarGenerator::CheckForBlockage), this);
}

int addrof(CCarGenerator::CheckIfWithinRangeOfAnyPlayers) = ADDRESS_BY_VERSION(0x542E50, 0x543090, 0x543040);
int gaddrof(CCarGenerator::CheckIfWithinRangeOfAnyPlayers) = GLOBAL_ADDRESS_BY_VERSION(0x542E50, 0x543090, 0x543040);

bool CCarGenerator::CheckIfWithinRangeOfAnyPlayers() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCarGenerator *>(gaddrof(CCarGenerator::CheckIfWithinRangeOfAnyPlayers), this);
}

int addrof(CCarGenerator::DoInternalProcessing) = ADDRESS_BY_VERSION(0x5426E0, 0x542920, 0x5428D0);
int gaddrof(CCarGenerator::DoInternalProcessing) = GLOBAL_ADDRESS_BY_VERSION(0x5426E0, 0x542920, 0x5428D0);

void CCarGenerator::DoInternalProcessing() {
    plugin::CallMethodDynGlobal<CCarGenerator *>(gaddrof(CCarGenerator::DoInternalProcessing), this);
}

int addrof(CCarGenerator::Process) = ADDRESS_BY_VERSION(0x542BB0, 0x542DF0, 0x542DA0);
int gaddrof(CCarGenerator::Process) = GLOBAL_ADDRESS_BY_VERSION(0x542BB0, 0x542DF0, 0x542DA0);

void CCarGenerator::Process() {
    plugin::CallMethodDynGlobal<CCarGenerator *>(gaddrof(CCarGenerator::Process), this);
}

int addrof(CCarGenerator::Setup) = ADDRESS_BY_VERSION(0x542C40, 0x542E80, 0x542E30);
int gaddrof(CCarGenerator::Setup) = GLOBAL_ADDRESS_BY_VERSION(0x542C40, 0x542E80, 0x542E30);

void CCarGenerator::Setup(float x, float y, float z, float angle, int modelId, short primaryColor, short secondaryColor, unsigned char forceSpawn, unsigned char alarm, unsigned char doorLock, unsigned short minDelay, unsigned short maxDelay) {
    plugin::CallMethodDynGlobal<CCarGenerator *, float, float, float, float, int, short, short, unsigned char, unsigned char, unsigned char, unsigned short, unsigned short>(gaddrof(CCarGenerator::Setup), this, x, y, z, angle, modelId, primaryColor, secondaryColor, forceSpawn, alarm, doorLock, minDelay, maxDelay);
}

int addrof(CCarGenerator::SwitchOff) = ADDRESS_BY_VERSION(0x542690, 0x5428D0, 0x542880);
int gaddrof(CCarGenerator::SwitchOff) = GLOBAL_ADDRESS_BY_VERSION(0x542690, 0x5428D0, 0x542880);

void CCarGenerator::SwitchOff() {
    plugin::CallMethodDynGlobal<CCarGenerator *>(gaddrof(CCarGenerator::SwitchOff), this);
}

int addrof(CCarGenerator::SwitchOn) = ADDRESS_BY_VERSION(0x5426A0, 0x5428E0, 0x542890);
int gaddrof(CCarGenerator::SwitchOn) = GLOBAL_ADDRESS_BY_VERSION(0x5426A0, 0x5428E0, 0x542890);

void CCarGenerator::SwitchOn() {
    plugin::CallMethodDynGlobal<CCarGenerator *>(gaddrof(CCarGenerator::SwitchOn), this);
}
