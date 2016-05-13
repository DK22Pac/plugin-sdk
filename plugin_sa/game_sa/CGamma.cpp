#include "CGamma.h"

CGamma &gamma = *(CGamma *)0xC92134;

void CGamma::SetGamma(float arg1, char arg2)
{
	((void (__thiscall *)(CGamma *, float, char))0x747200)(this, arg1, arg2);
}