/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CLines.h"

PLUGIN_SOURCE_FILE

int addrof(CLines::RenderLineWithClipping) = ADDRESS_BY_VERSION(0x50A3B0, 0x50A490, 0x50A420);
int gaddrof(CLines::RenderLineWithClipping) = GLOBAL_ADDRESS_BY_VERSION(0x50A3B0, 0x50A490, 0x50A420);

void CLines::RenderLineWithClipping(float x1, float y1, float z1, float x2, float y2, float z2, unsigned int color1, unsigned int color2) {
    plugin::CallDynGlobal<float, float, float, float, float, float, unsigned int, unsigned int>(gaddrof(CLines::RenderLineWithClipping), x1, y1, z1, x2, y2, z2, color1, color2);
}
