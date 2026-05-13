/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskComplex.h"
#include "CPed.h"

class CTaskComplexProstituteSolicit : public CTaskComplex {
protected:
    CTaskComplexProstituteSolicit(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    CPed *m_pClient; // player only
    CVector m_vecVehiclePosn;
    int m_nLastSavedTime;
    int m_nNextTimeToCheckForSecludedPlace; // when we will scan nearby peds again
    int m_nLastPaymentTime; // when CJ will pay $2 again
    short m_nVehicleMovementTimer; // wait some time and push vehicle again
    short m_nCurrentTimer;
    struct {
        unsigned short bSearchingForSecludedPlace : 1;
        unsigned short bSexProcessStarted : 1;
        unsigned short bTaskCanBeFinished : 1;
        unsigned short bPedsCanPotentiallySeeThis : 1;
        unsigned short bPedsCanSeeThis : 1;
        unsigned short bCopsCanSeeThis : 1;
        unsigned short bUnused07 : 1;
        unsigned short bUnused08 : 1;
        unsigned short bMoveCameraDown : 1;
        unsigned short bShouldProstituteBeQuiet : 1;
        unsigned short bPlayerHasAcceptedSexProposition : 1;
        unsigned short bVehicleShifted : 1;
        unsigned short bSecludedPlaceMessageShown : 1;
    } m_nFlags;
private:
    unsigned short _pad2E;
public:
    CTaskComplexProstituteSolicit(CPed* pClient);
    CTask* CreateSubTask(int taskId, CPed* pProstitute);
    static void GetRidOfPlayerProstitute();
    static bool IsTaskValid(CPed* pProstitute, CPed* pClient);
};
VALIDATE_OFFSET(CTaskComplexProstituteSolicit, m_pClient, 0xC);
VALIDATE_OFFSET(CTaskComplexProstituteSolicit, m_vecVehiclePosn, 0x10);
VALIDATE_OFFSET(CTaskComplexProstituteSolicit, m_nLastSavedTime, 0x1C);
VALIDATE_OFFSET(CTaskComplexProstituteSolicit, m_nNextTimeToCheckForSecludedPlace, 0x20);
VALIDATE_OFFSET(CTaskComplexProstituteSolicit, m_nLastPaymentTime, 0x24);
VALIDATE_OFFSET(CTaskComplexProstituteSolicit, m_nVehicleMovementTimer, 0x28);
VALIDATE_OFFSET(CTaskComplexProstituteSolicit, m_nCurrentTimer, 0x2A);
VALIDATE_OFFSET(CTaskComplexProstituteSolicit, m_nFlags, 0x2C);
VALIDATE_SIZE(CTaskComplexProstituteSolicit, 0x30);
