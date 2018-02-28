/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CSphere.h"

void CSphere::Set(float radius, CVector  const& center)
{
	((void (__thiscall *)(CSphere *, float, CVector  const&))0x40FCF0)(this, radius, center);
}