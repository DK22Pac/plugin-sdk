/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class CPed;
class CEventGroup;

class PLUGIN_API CCollisionEventScanner {
public:
    bool m_bAlreadyHitByCar;

    void ScanForCollisionEvents(CPed* victim, CEventGroup* eventGroup);
};
VALIDATE_SIZE(CCollisionEventScanner, 0x1);
