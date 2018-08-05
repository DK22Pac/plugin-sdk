/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGridRef.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE char(&GridRefList)[10][10][32] = *reinterpret_cast<char(*)[10][10][32]>(GLOBAL_ADDRESS_BY_VERSION(0xC72FB0, 0, 0, 0, 0, 0));

int addrof(CGridRef::GetAreaName) = ADDRESS_BY_VERSION(0x71D650, 0, 0, 0, 0, 0);
int gaddrof(CGridRef::GetAreaName) = GLOBAL_ADDRESS_BY_VERSION(0x71D650, 0, 0, 0, 0, 0);

char *CGridRef::GetAreaName(unsigned char sectorX, unsigned char sectorY) {
    return plugin::CallAndReturnDynGlobal<char *, unsigned char, unsigned char>(gaddrof(CGridRef::GetAreaName), sectorX, sectorY);
}

int addrof(CGridRef::GetArtistBugstarID) = ADDRESS_BY_VERSION(0x71D670, 0, 0, 0, 0, 0);
int gaddrof(CGridRef::GetArtistBugstarID) = GLOBAL_ADDRESS_BY_VERSION(0x71D670, 0, 0, 0, 0, 0);

unsigned int CGridRef::GetArtistBugstarID(unsigned char sectorX, unsigned char sectorY) {
    return plugin::CallAndReturnDynGlobal<unsigned int, unsigned char, unsigned char>(gaddrof(CGridRef::GetArtistBugstarID), sectorX, sectorY);
}

int addrof_o(CGridRef::GetGridRefPositions, void (*)(CVector, unsigned char *, unsigned char *)) = ADDRESS_BY_VERSION(0x71D5A0, 0, 0, 0, 0, 0);
int gaddrof_o(CGridRef::GetGridRefPositions, void (*)(CVector, unsigned char *, unsigned char *)) = GLOBAL_ADDRESS_BY_VERSION(0x71D5A0, 0, 0, 0, 0, 0);

void CGridRef::GetGridRefPositions(CVector posn, unsigned char *outSectorX, unsigned char *outSectorY) {
    plugin::CallDynGlobal<CVector, unsigned char *, unsigned char *>(gaddrof_o(CGridRef::GetGridRefPositions, void (*)(CVector, unsigned char *, unsigned char *)), posn, outSectorX, outSectorY);
}

int addrof_o(CGridRef::GetGridRefPositions, void (*)(unsigned char *, unsigned char *)) = ADDRESS_BY_VERSION(0x71D5E0, 0, 0, 0, 0, 0);
int gaddrof_o(CGridRef::GetGridRefPositions, void (*)(unsigned char *, unsigned char *)) = GLOBAL_ADDRESS_BY_VERSION(0x71D5E0, 0, 0, 0, 0, 0);

void CGridRef::GetGridRefPositions(unsigned char *outSectorX, unsigned char *outSectorY) {
    plugin::CallDynGlobal<unsigned char *, unsigned char *>(gaddrof_o(CGridRef::GetGridRefPositions, void (*)(unsigned char *, unsigned char *)), outSectorX, outSectorY);
}

int addrof(CGridRef::Init) = ADDRESS_BY_VERSION(0x71D4E0, 0, 0, 0, 0, 0);
int gaddrof(CGridRef::Init) = GLOBAL_ADDRESS_BY_VERSION(0x71D4E0, 0, 0, 0, 0, 0);

void CGridRef::Init() {
    plugin::CallDynGlobal(gaddrof(CGridRef::Init));
}
