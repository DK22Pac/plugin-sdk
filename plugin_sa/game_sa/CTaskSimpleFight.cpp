/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CTaskSimpleFight.h"

CTaskSimpleFight::CTaskSimpleFight(CEntity* pEntity, int arg2, unsigned int time ) : CTaskSimple(plugin::dummy) {
   ((void(__thiscall *)(CTaskSimpleFight*, CEntity*, int , unsigned int))0x61C470)(this, pEntity, arg2, time);
}