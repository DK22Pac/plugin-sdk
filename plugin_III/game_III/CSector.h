/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPtrList.h"

class CSector {
public:
    CPtrList m_buildingList;
    CPtrList m_buildingOverlapList;
    CPtrList m_objectList;
    CPtrList m_objectOverlapList;
    CPtrList m_vehicleList;
    CPtrList m_vehicleOverlapList;
    CPtrList m_pedList;
    CPtrList m_pedOverlapList;
    CPtrList m_dummyList;
    CPtrList m_dummyOverlapList;
};

VALIDATE_SIZE(CSector, 0x28);