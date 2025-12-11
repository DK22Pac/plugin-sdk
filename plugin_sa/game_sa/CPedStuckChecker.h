/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "CVector.h"

class CPed;
class CEventGroup;

enum PLUGIN_API ePedStuckState : unsigned short {
    PED_STUCK_STATE_NONE = 0,
    PED_STUCK_STATE_STUCK,
    PED_STUCK_STATE_WAS_STUCK
};

class PLUGIN_API CPedStuckChecker {
public:
    CVector        m_lastNonStuckPoint;
    unsigned short m_radius;
    ePedStuckState m_state;

public:
    CPedStuckChecker() { // inlined 0x607292
        m_radius = 0;
        m_state = PED_STUCK_STATE_NONE;
    }

    bool TestPedStuck(CPed* ped, CEventGroup* eventGroup);

    auto GetState() const { return m_state; }
};
VALIDATE_SIZE(CPedStuckChecker, 0x10);
