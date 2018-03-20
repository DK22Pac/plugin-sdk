/*
Plugin-SDK (Grand Theft Auto San Andreas) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleStealthKill.h"

CTaskSimpleStealthKill::CTaskSimpleStealthKill(bool bKeepTargetAlive, CPed *pTarget, int nAssocGroupId) : CTaskSimple(plugin::dummy)
{
    plugin::CallMethod<0x6225F0, CTaskSimpleStealthKill*, bool, CPed*, int>(this, bKeepTargetAlive, pTarget, nAssocGroupId);
}