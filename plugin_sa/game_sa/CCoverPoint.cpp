/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCoverPoint.h"

PLUGIN_SOURCE_FILE

int addrof(CCoverPoint::CanAccomodateAnotherPed) = ADDRESS_BY_VERSION(0x698E70, 0, 0, 0, 0, 0);
int gaddrof(CCoverPoint::CanAccomodateAnotherPed) = GLOBAL_ADDRESS_BY_VERSION(0x698E70, 0, 0, 0, 0, 0);

bool CCoverPoint::CanAccomodateAnotherPed() {
    return plugin::CallMethodAndReturnDynGlobal<bool, CCoverPoint *>(gaddrof(CCoverPoint::CanAccomodateAnotherPed), this);
}

int addrof(CCoverPoint::ReleaseCoverPointForPed) = ADDRESS_BY_VERSION(0x698EF0, 0, 0, 0, 0, 0);
int gaddrof(CCoverPoint::ReleaseCoverPointForPed) = GLOBAL_ADDRESS_BY_VERSION(0x698EF0, 0, 0, 0, 0, 0);

void CCoverPoint::ReleaseCoverPointForPed(CPed *ped) {
    plugin::CallMethodDynGlobal<CCoverPoint *, CPed *>(gaddrof(CCoverPoint::ReleaseCoverPointForPed), this, ped);
}

int addrof(CCoverPoint::ReserveCoverPointForPed) = ADDRESS_BY_VERSION(0x698EB0, 0, 0, 0, 0, 0);
int gaddrof(CCoverPoint::ReserveCoverPointForPed) = GLOBAL_ADDRESS_BY_VERSION(0x698EB0, 0, 0, 0, 0, 0);

void CCoverPoint::ReserveCoverPointForPed(CPed *ped) {
    plugin::CallMethodDynGlobal<CCoverPoint *, CPed *>(gaddrof(CCoverPoint::ReserveCoverPointForPed), this, ped);
}
