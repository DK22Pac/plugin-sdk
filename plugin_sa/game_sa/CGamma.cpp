/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CGamma.h"

CGamma &gamma = *(CGamma *)0xC92134;

void CGamma::SetGamma(float arg1, char arg2)
{
	((void (__thiscall *)(CGamma *, float, char))0x747200)(this, arg1, arg2);
}