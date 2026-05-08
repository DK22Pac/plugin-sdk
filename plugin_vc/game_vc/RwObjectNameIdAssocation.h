/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"


struct PLUGIN_API RwObjectNameIdAssocation
{
    char *m_pName;
    unsigned int m_dwHierarchyId;
    unsigned int m_dwFlags;
};
VALIDATE_OFFSET(RwObjectNameIdAssocation, m_pName, 0x0);
VALIDATE_OFFSET(RwObjectNameIdAssocation, m_dwHierarchyId, 0x4);
VALIDATE_OFFSET(RwObjectNameIdAssocation, m_dwFlags, 0x8);
VALIDATE_SIZE(RwObjectNameIdAssocation, 0xC);