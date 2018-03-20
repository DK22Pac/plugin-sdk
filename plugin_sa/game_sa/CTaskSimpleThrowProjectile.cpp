/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleThrowProjectile.h"


CTaskSimpleThrowProjectile::CTaskSimpleThrowProjectile(CEntity* pTarget, CVector Posn) : CTaskSimple(plugin::dummy)
{
    plugin::CallMethod<0x61F660, CTaskSimpleThrowProjectile*, CEntity*, CVector>(this, pTarget, Posn);
}