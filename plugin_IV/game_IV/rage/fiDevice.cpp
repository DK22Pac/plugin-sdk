/*
    Plugin-SDK (Grand Theft Auto IV) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "fiDevice.h"

rage::fiDevice* rage::fiDevice::GetDevice(char* filename, char readOnly) {
    return plugin::CallMethodAndReturnDyn<rage::fiDevice*>(gpattern("51 57 8B 7C 24 0C 6A 07"), this, filename, readOnly);
}
