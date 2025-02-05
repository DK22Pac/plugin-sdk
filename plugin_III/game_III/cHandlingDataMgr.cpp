/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "cHandlingDataMgr.h"

cHandlingDataMgr& mod_HandlingManager = *(cHandlingDataMgr*)0x728060;

int cHandlingDataMgr::GetHandlingId(const char* name) {
    return plugin::CallStdAndReturn<int, 0x546B70>(name);
}
