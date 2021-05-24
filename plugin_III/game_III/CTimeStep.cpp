/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTimeStep.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE float &CTimeStep::ms_fTimeStep = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x5F76C8, 0x5F74B0, 0x6044A8));
PLUGIN_VARIABLE float &CTimeStep::ms_fFramesPerUpdate = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x5F76CC, 0x5F74B4, 0x6044AC));
PLUGIN_VARIABLE float &CTimeStep::ms_fTimeScale = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x5F76D0, 0x5F74B8, 0x6044B0));
