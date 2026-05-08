/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"
#include "eCopType.h"

class PLUGIN_API CCopPed : public CPed {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CCopPed)

public:
    short m_nRoadblockNode;
    float m_fDistanceToTarget;
    bool m_bIsInPursuit;
    bool m_bIsDisabledCop;
    char field_546;
    bool m_bBeatingSuspect;
    bool m_bStopAndShootDisabledZone;
    bool m_bZoneDisabled;
    float m_fAbseilPos;
    eCopType m_nCopType;
    char field_554;

    // virtual function #0 (destructor)


    // virtual function #1 (not overriden)


    // virtual function #2 (not overriden)


    // virtual function #3 (not overriden)


    // virtual function #4 (not overriden)


    // virtual function #5 (not overriden)


    // virtual function #6 (not overriden)


    // virtual function #7 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void ProcessControl();

    // virtual function #9 (not overriden)


    // virtual function #10 (not overriden)


    // virtual function #11 (not overriden)


    // virtual function #12 (not overriden)


    // virtual function #13 (not overriden)


    // virtual function #14 (not overriden)


    // virtual function #15 (not overriden)


    // virtual function #16 (not overriden)


    // virtual function #17 (not overriden)


    // virtual function #18 (not overriden)


    SUPPORTED_10EN_11EN_STEAM void ArrestPlayer();
    SUPPORTED_10EN_11EN_STEAM void ClearPursuit();
    SUPPORTED_10EN_11EN_STEAM void CopAI();
    SUPPORTED_10EN_11EN_STEAM void ScanForCrimes();
    //! Parameter should always be CPlayerPed, but it seems they considered making civilians arrestable at some point
    SUPPORTED_10EN_11EN_STEAM void SetArrestPlayer(CPed *player);
    SUPPORTED_10EN_11EN_STEAM void SetPursuit(bool ignoreCopLimit);
};
VALIDATE_OFFSET(CCopPed, m_nRoadblockNode, 0x53C);
VALIDATE_OFFSET(CCopPed, m_fDistanceToTarget, 0x540);
VALIDATE_OFFSET(CCopPed, m_bIsInPursuit, 0x544);
VALIDATE_OFFSET(CCopPed, m_bIsDisabledCop, 0x545);
VALIDATE_OFFSET(CCopPed, field_546, 0x546);
VALIDATE_OFFSET(CCopPed, m_bBeatingSuspect, 0x547);
VALIDATE_OFFSET(CCopPed, m_bStopAndShootDisabledZone, 0x548);
VALIDATE_OFFSET(CCopPed, m_bZoneDisabled, 0x549);
VALIDATE_OFFSET(CCopPed, m_fAbseilPos, 0x54C);
VALIDATE_OFFSET(CCopPed, m_nCopType, 0x550);
VALIDATE_OFFSET(CCopPed, field_554, 0x554);
VALIDATE_SIZE(CCopPed, 0x558);

VTABLE_DESC(CCopPed, 0x5F82A4, 19);
VALIDATE_SIZE(CCopPed, 0x558);

#include "meta/meta.CCopPed.h"
