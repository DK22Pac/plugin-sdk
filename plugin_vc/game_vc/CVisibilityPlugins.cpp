/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CVisibilityPlugins.h"

void CVisibilityPlugins::SetAtomicRenderCallback(RpAtomic* atomic, RpAtomicCallBackRender cb) {
    plugin::Call<0x581940>(atomic, cb);
}
