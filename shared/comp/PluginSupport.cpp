/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginSupport.h"

bool PluginSupport::Install() {
    if (!installed) {
        installed = true;
        return true;
    }
    return false;
}

bool PluginSupport::Installed() {
    return installed;
}
