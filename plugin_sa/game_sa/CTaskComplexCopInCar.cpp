/*
Plugin-SDK (Grand Theft Auto San Andreas) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/

#include "CTaskComplexCopInCar.h"

CTaskComplexCopInCar::CTaskComplexCopInCar(CVehicle* pVeh,CPed* pCop1,CPed* pCop2,bool arg3)
    : CTaskComplex(plugin::dummy) , m_timer1(plugin::dummy) , m_timer2(plugin::dummy)
{
	((void(__thiscall *)(CTaskComplexCopInCar *, CVehicle*, CPed*, CPed*, bool))0x68C7F0)(this, pVeh, pCop1, pCop2, arg3);
}
