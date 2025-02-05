/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CPedIntelligence.h"
#include "CEventHandler.h"
#include "CEventScannerNY.h"

class CPedIntelligenceNY : public CPedIntelligence {
public:
    CEventHandler m_eventHandler;
    CEventScannerNY field_330;
    int field_45C;
};

VALIDATE_SIZE(CPedIntelligenceNY, 0x460);
