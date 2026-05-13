/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
class CEntity;

struct PLUGIN_API CReference {
    CReference *m_pNext;
    CEntity **m_ppEntity;
};
VALIDATE_OFFSET(CReference, m_pNext, 0x0);
VALIDATE_OFFSET(CReference, m_ppEntity, 0x4);
VALIDATE_SIZE(CReference, 0x8);
