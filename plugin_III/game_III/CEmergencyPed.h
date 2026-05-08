/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPed.h"

enum PLUGIN_API eEmergencyPedState : unsigned int {
    EMERGENCY_PED_READY = 0,
    EMERGENCY_PED_DETERMINE_NEXT_STATE = 1, //!< you can set that anytime you want
    EMERGENCY_PED_START_CPR = 2,
    EMERGENCY_PED_FLAG_4 = 4,
    EMERGENCY_PED_FLAG_8 = 8,
    EMERGENCY_PED_FACE_TO_PATIENT = 16, //!< for CPR
    EMERGENCY_PED_PERFORM_CPR = 32,
    EMERGENCY_PED_STOP_CPR = 64,
    EMERGENCY_PED_STAND_STILL = 128, //!< waiting colleagues for medics, "extinguishing" fire for firemen
    EMERGENCY_PED_STOP = 256
};

class PLUGIN_API CEmergencyPed : public CPed {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CEmergencyPed)

public:
    CPed *m_pRevivedPed;
    unsigned int m_nEmergencyPedState; //!< see eEmergencyPedState
    CAccident *m_pAttendedAccident;
    CFire *m_pAttendedFire;
    bool m_bStartedToCPR;
    int field_550;

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


    SUPPORTED_10EN_11EN_STEAM void FiremanAI();
    SUPPORTED_10EN_11EN_STEAM bool InRange(CPed *victim);
    SUPPORTED_10EN_11EN_STEAM void MedicAI();
};
VALIDATE_OFFSET(CEmergencyPed, m_pRevivedPed, 0x53C);
VALIDATE_OFFSET(CEmergencyPed, m_nEmergencyPedState, 0x540);
VALIDATE_OFFSET(CEmergencyPed, m_pAttendedAccident, 0x544);
VALIDATE_OFFSET(CEmergencyPed, m_pAttendedFire, 0x548);
VALIDATE_OFFSET(CEmergencyPed, m_bStartedToCPR, 0x54C);
VALIDATE_OFFSET(CEmergencyPed, field_550, 0x550);
VALIDATE_SIZE(CEmergencyPed, 0x554);

VTABLE_DESC(CEmergencyPed, 0x5F8374, 19);
VALIDATE_SIZE(CEmergencyPed, 0x554);

#include "meta/meta.CEmergencyPed.h"
