#include "CCivilianPed.h"

CCivilianPed::CCivilianPed(ePedType type, int model) : CPed(plugin::dummy_func)
{
    ((void (__thiscall *)(CCivilianPed *, ePedType, int))0x5DDB70)(this, type, model);
}

CCivilianPed::~CCivilianPed()
{
    // 0x5DDBE0
}