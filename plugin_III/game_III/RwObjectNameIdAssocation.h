/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API RwObjectNameIdAssocation {
public:
    char *m_pName;
    unsigned int m_nHierarchyId;
    unsigned int m_nFlags;
};
VALIDATE_OFFSET(RwObjectNameIdAssocation, m_pName, 0x0);
VALIDATE_OFFSET(RwObjectNameIdAssocation, m_nHierarchyId, 0x4);
VALIDATE_OFFSET(RwObjectNameIdAssocation, m_nFlags, 0x8);
VALIDATE_SIZE(RwObjectNameIdAssocation, 0xC);
