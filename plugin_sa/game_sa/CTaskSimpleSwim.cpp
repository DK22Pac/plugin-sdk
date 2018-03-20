/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleSwim.h"


CTaskSimpleSwim::CTaskSimpleSwim(CVector const* pPosn, CPed* pPed) : CTaskSimple(plugin::dummy)
{
    plugin::CallMethod<0x688930, CTaskSimpleSwim*, CVector const*, CPed*>(this,pPosn, pPed);
}