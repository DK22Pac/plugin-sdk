/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CBuilding)
static int address;
static int global_address;
static const int id = 0x4057D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4057D0, 0x4057D0, 0x4057D0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4059F3,100,0,0x4059F0,1, 0x4788DB,100,0,0x4786B0,1, 0x4059F3,110,0,0x4059F0,1, 0x4788DB,110,0,0x4786B0,1, 0x4059F3,120,0,0x4059F0,1, 0x4788DB,120,0,0x4786B0,1>;
using def_t = CBuilding *(CBuilding *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBuilding *>, 0>;
META_END

DTOR_META_BEGIN(CBuilding)
static int address;
static int global_address;
static const int id = 0x405800;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405800, 0x405800, 0x405800>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4058D3,100,0,0x4058B0,1, 0x405A19,100,0,0x405A10,1, 0x4058C4,100,2,0,1, 0x4058D3,110,0,0x4058B0,1, 0x405A19,110,0,0x405A10,1, 0x4058C4,110,2,0,1, 0x4058D3,120,0,0x4058B0,1, 0x405A19,120,0,0x405A10,1, 0x4058C4,120,2,0,1>;
using def_t = void(CBuilding *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBuilding *>, 0>;
META_END

OP_NEW_META_BEGIN(CBuilding)
static int address;
static int global_address;
static const int id = 0x405820;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405820, 0x405820, 0x405820>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4788CF,100,0,0x4786B0,1, 0x4788CF,110,0,0x4786B0,1, 0x4788CF,120,0,0x4786B0,1>;
using def_t = void *(unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

OP_DELETE_META_BEGIN_OVERLOADED(CBuilding, void (CBuilding *))
static int address;
static int global_address;
static const int id = 0x405830;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405830, 0x405830, 0x405830>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4058E0,100,0,0x4058B0,1, 0x4058E0,110,0,0x4058B0,1, 0x4058E0,120,0,0x4058B0,1>;
using def_t = void(CBuilding *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CBuilding *>, 0>;
META_END

META_BEGIN(CBuilding::ReplaceWithNewModel)
static int address;
static int global_address;
static const int id = 0x405850;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x405850, 0x405850, 0x405850>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x44E72A,100,0,0x44CB80,1, 0x44FD27,100,0,0x44FD10,1, 0x453E80,100,0,0x453B30,1, 0x44E72A,110,0,0x44CB80,1, 0x44FD27,110,0,0x44FD10,1, 0x453E80,110,0,0x453B30,1, 0x44E72A,120,0,0x44CB80,1, 0x44FD27,120,0,0x44FD10,1, 0x453E80,120,0,0x453B30,1>;
using def_t = void(CBuilding *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBuilding *,int>, 0,1>;
META_END

DEL_DTOR_META_BEGIN(CBuilding)
static int address;
static int global_address;
static const int id = 0x4058B0;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x4058B0, 0x4058B0, 0x4058B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5EBF44,100,2,0x5EBF44,1, 0x5EBF44,110,2,0x5EBF44,1, 0x5F8F44,120,2,0x5F8F44,1>;
using def_t = void(CBuilding *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBuilding *,int>, 0,1>;
META_END

META_BEGIN(CBuilding::GetIsATreadable)
static int address;
static int global_address;
static const int id = 0x4058F0;
static const bool is_virtual = true;
static const int vtable_index = 17;
using mv_addresses_t = MvAddresses<0x4058F0, 0x4058F0, 0x4058F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5EBF88,100,2,0x5EBF44,1, 0x5EBF44,110,2,0x5EBF44,1, 0x5F8F44,120,2,0x5F8F44,1>;
using def_t = bool(CBuilding *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CBuilding *>, 0>;
META_END

}
