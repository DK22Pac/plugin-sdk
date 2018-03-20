/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleFight.h"

CTaskSimpleFight::CTaskSimpleFight(CEntity *pTargetEntity, int nCommand, unsigned int nIdlePeriod)
    : CTaskSimple(plugin::dummy)
{
    plugin::CallMethod<0x61C470, CTaskSimpleFight*, CEntity*, int, unsigned int>(this, pTargetEntity, nCommand, nIdlePeriod);
}