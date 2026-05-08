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
VALIDATE_OFFSET(CSector, m_buildingList, 0x0);
VALIDATE_OFFSET(CSector, m_buildingOverlapList, 0x4);
VALIDATE_OFFSET(CSector, m_objectList, 0x8);
VALIDATE_OFFSET(CSector, m_objectOverlapList, 0xC);
VALIDATE_OFFSET(CSector, m_vehicleList, 0x10);
VALIDATE_OFFSET(CSector, m_vehicleOverlapList, 0x14);
VALIDATE_OFFSET(CSector, m_pedList, 0x18);
VALIDATE_OFFSET(CSector, m_pedOverlapList, 0x1C);
VALIDATE_OFFSET(CSector, m_dummyList, 0x20);
VALIDATE_OFFSET(CSector, m_dummyOverlapList, 0x24);
VALIDATE_SIZE(CSector, 0x28);