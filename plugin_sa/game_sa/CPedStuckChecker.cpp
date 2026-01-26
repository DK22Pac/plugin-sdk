/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedStuckChecker.h"

bool CPedStuckChecker::TestPedStuck(CPed* ped, CEventGroup* eventGroup)
{
    return plugin::CallMethodAndReturn<bool, 0x602C00, CPedStuckChecker*, CPed*, CEventGroup*>(this, ped, eventGroup);
}
