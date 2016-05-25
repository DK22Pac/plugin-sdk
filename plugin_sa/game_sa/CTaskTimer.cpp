#include "CTaskTimer.h"

bool CTaskTimer::IsOutOfTime() {
    return ((bool(__thiscall *)(CTaskTimer *))0x420E30)(this);
}