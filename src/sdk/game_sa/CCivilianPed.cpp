#include "CCivilianPed.h"

NOINLINE CCivilianPed::CCivilianPed(ePedType type, int model) : CPed(plugin::dummy_func)
{
    ((void (__thiscall *)(CCivilianPed *, ePedType, int))0x5DDB70)(this, type, model);
}

NOINLINE CCivilianPed::~CCivilianPed()
{
    // 0x5DDBE0
}