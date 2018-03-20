/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleChoking.h"

CTaskSimpleChoking::CTaskSimpleChoking(CPed* pAttacker, bool bIsTeargas)
    : CTaskSimple(plugin::dummy)
{
    plugin::CallMethod<0x6202C0, CTaskSimpleChoking*, CPed*, bool>(this, pAttacker, bIsTeargas);
}

void CTaskSimpleChoking::UpdateChoke(CPed* pVictim, CPed* pAttacker, bool bIsTeargas)
{
    plugin::CallMethod<0x620660, CTaskSimpleChoking*, CPed* , CPed* , bool>(this, pVictim, pAttacker, bIsTeargas);
}
