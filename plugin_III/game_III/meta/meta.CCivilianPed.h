/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN_OVERLOADED(CCivilianPed, void(ePedType, unsigned int))
static int address;
static int global_address;
static const int id = 0x4BFF30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BFF30, 0x4C0020, 0x4BFFB0>;
// total references count: 10en (10), 11en (10), steam (10)
using refs_t = RefList<0x43BB20,100,0,0x43AEA0,1, 0x43E67F,100,0,0x43D530,1, 0x441A2F,100,0,0x440CB0,1, 0x44C0D3,100,0,0x448240,1, 0x4F52BB,100,0,0x4F5280,1, 0x4F554B,100,0,0x4F5280,2, 0x4F5655,100,0,0x4F5280,3, 0x585C51,100,0,0x585BB0,1, 0x5872FC,100,0,0x587200,1, 0x5955DF,100,0,0x595240,1, 0x43BB20,110,0,0x43AEA0,1, 0x43E67F,110,0,0x43D530,1, 0x441A2F,110,0,0x440CB0,1, 0x44C0D3,110,0,0x448240,1, 0x4F536B,110,0,0x4F5330,1, 0x4F55FB,110,0,0x4F5330,2, 0x4F5705,110,0,0x4F5330,3, 0x585F91,110,0,0x585EF0,1, 0x58763C,110,0,0x587540,1, 0x59588F,110,0,0x5954F0,1, 0x43BB20,120,0,0x43AEA0,1, 0x43E67F,120,0,0x43D530,1, 0x441A2F,120,0,0x440CB0,1, 0x44C0D3,120,0,0x448240,1, 0x4F52FB,120,0,0x4F52C0,1, 0x4F558B,120,0,0x4F52C0,2, 0x4F5695,120,0,0x4F52C0,3, 0x585E81,120,0,0x585DE0,1, 0x58752C,120,0,0x587430,1, 0x59577F,120,0,0x5953E0,1>;
using def_t = CCivilianPed *(CCivilianPed *, ePedType, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCivilianPed *,ePedType,unsigned int>, 0,1,2>;
META_END

DTOR_META_BEGIN(CCivilianPed)
static int address;
static int global_address;
static const int id = 0x4BFFC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BFFC0, 0x4C00B0, 0x4C0040>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4C1193,100,0,0x4C1170,1, 0x4C1184,100,2,0,1, 0x4C1283,110,0,0x4C1260,1, 0x4C1274,110,2,0,1, 0x4C1213,120,0,0x4C11F0,1, 0x4C1204,120,2,0,1>;
using def_t = void(CCivilianPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCivilianPed *>, 0>;
META_END

META_BEGIN(CCivilianPed::ProcessControl)
static int address;
static int global_address;
static const int id = 0x4BFFE0;
static const bool is_virtual = true;
static const int vtable_index = 8;
using mv_addresses_t = MvAddresses<0x4BFFE0, 0x4C00D0, 0x4C0060>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F81BC,100,2,0x5F819C,1, 0x5F7F84,110,2,0x5F7F84,1, 0x604F7C,120,2,0x604F7C,1>;
using def_t = void(CCivilianPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCivilianPed *>, 0>;
META_END

META_BEGIN(CCivilianPed::CivilianAI)
static int address;
static int global_address;
static const int id = 0x4C07A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C07A0, 0x4C0890, 0x4C0820>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4C06D2,100,0,0x4BFFE0,1, 0x4C07C2,110,0,0x4C00D0,1, 0x4C0752,120,0,0x4C0060,1>;
using def_t = void(CCivilianPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCivilianPed *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CCivilianPed)
static int address;
static int global_address;
static const int id = 0x4C1170;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x4C1170, 0x4C1260, 0x4C11F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F819C,100,2,0x5F819C,1, 0x5F7F84,110,2,0x5F7F84,1, 0x604F7C,120,2,0x604F7C,1>;
using def_t = void(CCivilianPed *, char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCivilianPed *,char>, 0,1>;
META_END

}
