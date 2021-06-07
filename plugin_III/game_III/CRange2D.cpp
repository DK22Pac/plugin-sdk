/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRange2D.h"

PLUGIN_SOURCE_FILE

int addrof(CRange2D::GetRandomPointInRange) = ADDRESS_BY_VERSION(0x4A7270, 0x4A7360, 0x4A72F0);
int gaddrof(CRange2D::GetRandomPointInRange) = GLOBAL_ADDRESS_BY_VERSION(0x4A7270, 0x4A7360, 0x4A72F0);

CVector2D *CRange2D::GetRandomPointInRange() {
    return plugin::CallMethodAndReturnDynGlobal<CVector2D *, CRange2D *>(gaddrof(CRange2D::GetRandomPointInRange), this);
}
