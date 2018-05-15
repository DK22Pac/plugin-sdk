/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CCarGenerator.h"

PLUGIN_SOURCE_FILE

int addrof(CCarGenerator::CheckForBlockage) = ADDRESS_BY_VERSION(0x6F32E0, 0, 0, 0, 0, 0);
int gaddrof(CCarGenerator::CheckForBlockage) = GLOBAL_ADDRESS_BY_VERSION(0x6F32E0, 0, 0, 0, 0, 0);

bool CCarGenerator::CheckForBlockage(int modelId) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCarGenerator *, int>(gaddrof(CCarGenerator::CheckForBlockage), this, modelId);
}

int addrof(CCarGenerator::CheckIfWithinRangeOfAnyPlayers) = ADDRESS_BY_VERSION(0x6F2F40, 0, 0, 0, 0, 0);
int gaddrof(CCarGenerator::CheckIfWithinRangeOfAnyPlayers) = GLOBAL_ADDRESS_BY_VERSION(0x6F2F40, 0, 0, 0, 0, 0);

bool CCarGenerator::CheckIfWithinRangeOfAnyPlayers() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCarGenerator *>(gaddrof(CCarGenerator::CheckIfWithinRangeOfAnyPlayers), this);
}

int addrof(CCarGenerator::DoInternalProcessing) = ADDRESS_BY_VERSION(0x6F34D0, 0, 0, 0, 0, 0);
int gaddrof(CCarGenerator::DoInternalProcessing) = GLOBAL_ADDRESS_BY_VERSION(0x6F34D0, 0, 0, 0, 0, 0);

void CCarGenerator::DoInternalProcessing() {
    plugin::CallMethodDynGlobal<CCarGenerator *>(gaddrof(CCarGenerator::DoInternalProcessing), this);
}

int addrof(CCarGenerator::Process) = ADDRESS_BY_VERSION(0x6F3E90, 0, 0, 0, 0, 0);
int gaddrof(CCarGenerator::Process) = GLOBAL_ADDRESS_BY_VERSION(0x6F3E90, 0, 0, 0, 0, 0);

void CCarGenerator::Process() {
    plugin::CallMethodDynGlobal<CCarGenerator *>(gaddrof(CCarGenerator::Process), this);
}

int addrof(CCarGenerator::Setup) = ADDRESS_BY_VERSION(0x6F2E50, 0, 0, 0, 0, 0);
int gaddrof(CCarGenerator::Setup) = GLOBAL_ADDRESS_BY_VERSION(0x6F2E50, 0, 0, 0, 0, 0);

void CCarGenerator::Setup(float x, float y, float z, float angle, int modelId, short color1, short color2, unsigned char bforceSpawn, unsigned char alarm_chances, unsigned char doorLock_chances, unsigned short minDelay, unsigned short maxDelay, unsigned char iplId, unsigned char bOwnedbyplayer) {
    plugin::CallMethodDynGlobal<CCarGenerator *, float, float, float, float, int, short, short, unsigned char, unsigned char, unsigned char, unsigned short, unsigned short, unsigned char, unsigned char>(gaddrof(CCarGenerator::Setup), this, x, y, z, angle, modelId, color1, color2, bforceSpawn, alarm_chances, doorLock_chances, minDelay, maxDelay, iplId, bOwnedbyplayer);
}

int addrof(CCarGenerator::SwitchOff) = ADDRESS_BY_VERSION(0x6F2E30, 0, 0, 0, 0, 0);
int gaddrof(CCarGenerator::SwitchOff) = GLOBAL_ADDRESS_BY_VERSION(0x6F2E30, 0, 0, 0, 0, 0);

void CCarGenerator::SwitchOff() {
    plugin::CallMethodDynGlobal<CCarGenerator *>(gaddrof(CCarGenerator::SwitchOff), this);
}

int addrof(CCarGenerator::SwitchOn) = ADDRESS_BY_VERSION(0x6F32C0, 0, 0, 0, 0, 0);
int gaddrof(CCarGenerator::SwitchOn) = GLOBAL_ADDRESS_BY_VERSION(0x6F32C0, 0, 0, 0, 0, 0);

void CCarGenerator::SwitchOn() {
    plugin::CallMethodDynGlobal<CCarGenerator *>(gaddrof(CCarGenerator::SwitchOn), this);
}

int addrof(CCarGenerator::CalcNextGen) = ADDRESS_BY_VERSION(0x6F2E40, 0, 0, 0, 0, 0);
int gaddrof(CCarGenerator::CalcNextGen) = GLOBAL_ADDRESS_BY_VERSION(0x6F2E40, 0, 0, 0, 0, 0);

unsigned int CCarGenerator::CalcNextGen() {
    return plugin::CallAndReturnDynGlobal<unsigned int>(gaddrof(CCarGenerator::CalcNextGen));
}

int addrof(CCarGenerator::Get) = ADDRESS_BY_VERSION(0x479D60, 0, 0, 0, 0, 0);
int gaddrof(CCarGenerator::Get) = GLOBAL_ADDRESS_BY_VERSION(0x479D60, 0, 0, 0, 0, 0);

CCarGenerator *CCarGenerator::Get(unsigned short index) {
    return plugin::CallAndReturnDynGlobal<CCarGenerator *, unsigned short>(gaddrof(CCarGenerator::Get), index);
}
