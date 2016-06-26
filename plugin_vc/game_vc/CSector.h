/***********************************************************************************/
/*******         This file is a part of GTA Vice City C++ SDK               ********/
/*******                                                                    ********/
/***********************************************************************************/
#pragma once

#include "plbase/PluginBase_VC.h"
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