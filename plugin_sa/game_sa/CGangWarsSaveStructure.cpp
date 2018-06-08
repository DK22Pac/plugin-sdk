/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGangWarsSaveStructure.h"

PLUGIN_SOURCE_FILE

int addrof(CGangWarsSaveStructure::Construct) = ADDRESS_BY_VERSION(0x5D2620, 0, 0, 0, 0, 0);
int gaddrof(CGangWarsSaveStructure::Construct) = GLOBAL_ADDRESS_BY_VERSION(0x5D2620, 0, 0, 0, 0, 0);

void CGangWarsSaveStructure::Construct() {
    plugin::CallMethodDynGlobal<CGangWarsSaveStructure *>(gaddrof(CGangWarsSaveStructure::Construct), this);
}

int addrof(CGangWarsSaveStructure::Extract) = ADDRESS_BY_VERSION(0x5D2740, 0, 0, 0, 0, 0);
int gaddrof(CGangWarsSaveStructure::Extract) = GLOBAL_ADDRESS_BY_VERSION(0x5D2740, 0, 0, 0, 0, 0);

void CGangWarsSaveStructure::Extract() {
    plugin::CallMethodDynGlobal<CGangWarsSaveStructure *>(gaddrof(CGangWarsSaveStructure::Extract), this);
}
