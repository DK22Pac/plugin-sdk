/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CCollisionEventScanner.h"

void CCollisionEventScanner::ScanForCollisionEvents(CPed* victim, CEventGroup* eventGroup)
{
    plugin::CallMethod<0x604500, CCollisionEventScanner*, CPed*, CEventGroup*>(this, victim, eventGroup);
}
