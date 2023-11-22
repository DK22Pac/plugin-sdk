/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "cHandlingDataMgr.h"

int32_t cHandlingDataMgr::GetHandlingId(const char* name) {
    return plugin::CallAndReturnDyn<int32_t>(gpattern("53 56 33 F6 57 39 35 ? ? ? ? 7E 28"), name);
}

tHandlingData* cHandlingDataMgr::GetHandlingData(const char* name) {
    return plugin::CallAndReturnDyn<tHandlingData*>(gpattern("FF 74 24 04 E8 ? ? ? ? 83 C4 04 83 F8 FF 7E 0C"), name);
}
