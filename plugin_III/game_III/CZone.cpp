/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CZone.h"

PLUGIN_SOURCE_FILE

int addrof(CZone::GetTranslatedName) = ADDRESS_BY_VERSION(0x4B5DD0, 0x4B5EC0, 0x4B5E50);
int gaddrof(CZone::GetTranslatedName) = GLOBAL_ADDRESS_BY_VERSION(0x4B5DD0, 0x4B5EC0, 0x4B5E50);

wchar_t *CZone::GetTranslatedName() {
    return plugin::CallMethodAndReturnDynGlobal<wchar_t *, CZone *>(gaddrof(CZone::GetTranslatedName), this);
}
