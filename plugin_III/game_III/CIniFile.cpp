/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CIniFile.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE float &CIniFile::PedNumberMultiplier = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6182F4, 0x6179BC, 0x6247C4));
PLUGIN_VARIABLE float &CIniFile::CarNumberMultiplier = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x6182F8, 0x6179C0, 0x6247C8));

int addrof(CIniFile::LoadIniFile) = ADDRESS_BY_VERSION(0x59BE20, 0x59C0E0, 0x5991D0);
int gaddrof(CIniFile::LoadIniFile) = GLOBAL_ADDRESS_BY_VERSION(0x59BE20, 0x59C0E0, 0x5991D0);

void CIniFile::LoadIniFile() {
    plugin::CallDynGlobal(gaddrof(CIniFile::LoadIniFile));
}
