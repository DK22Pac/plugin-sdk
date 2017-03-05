/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CControllerConfigManager.h"

CControllerConfigManager &ControlsManager = *(CControllerConfigManager *)0xB70198;

void CControllerConfigManager::SaveSettings(int file)
{
    plugin::CallMethod <0x52D200, CControllerConfigManager*, int> ( this, file );
}

bool CControllerConfigManager::LoadSettings(int file)
{
    return plugin::CallMethodAndReturn <bool, 0x530530, CControllerConfigManager*, int> ( this, file );
}