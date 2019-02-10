/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskComplexKillPedOnFoot.h"

CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(CPed *target, int time, int specFlags, int delay, int chance, char a7) : CTaskComplex(plugin::dummy),
                                                         m_taskTimer(plugin::dummy)
{
	((void (__thiscall *)(CTaskComplexKillPedOnFoot *, CPed *, int, int, int, int, char))0x620E30)
        (this, target, time, specFlags, delay, chance, a7);
}
