/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

DEL_DTOR_META_BEGIN(CPed)
static int address;
static int global_address;
static const int id = 0x43D4F0;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x43D4F0, 0x43D4F0, 0x43D4F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F8C2C,100,2,0x5F8C2C,1, 0x5F8A14,110,2,0x5F8A14,1, 0x605A0C,120,2,0x605A0C,1>;
using def_t = void(CPed *, char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPed *,char>, 0,1>;
META_END

META_BEGIN(CPed::SetupLighting)
static int address;
static int global_address;
static const int id = 0x4A7D30;
static const bool is_virtual = true;
static const int vtable_index = 14;
using mv_addresses_t = MvAddresses<0x4A7D30, 0x4A7E20, 0x4A7DB0>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x5F81D4,100,2,0x5F819C,1, 0x5F82DC,100,2,0x5F82A4,1, 0x5F83AC,100,2,0x5F8374,1, 0x5F8C64,100,2,0x5F8C2C,1, 0x5FA538,100,2,0x5FA500,1, 0x5F7F84,110,2,0x5F7F84,1, 0x5F808C,110,2,0x5F808C,1, 0x5F815C,110,2,0x5F815C,1, 0x5F8A14,110,2,0x5F8A14,1, 0x5FA2E8,110,2,0x5FA2E8,1, 0x604F7C,120,2,0x604F7C,1, 0x605084,120,2,0x605084,1, 0x605154,120,2,0x605154,1, 0x605A0C,120,2,0x605A0C,1, 0x6072E0,120,2,0x6072E0,1>;
using def_t = bool(CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPed *>, 0>;
META_END

META_BEGIN(CPed::RemoveLighting)
static int address;
static int global_address;
static const int id = 0x4A7DC0;
static const bool is_virtual = true;
static const int vtable_index = 15;
using mv_addresses_t = MvAddresses<0x4A7DC0, 0x4A7EB0, 0x4A7E40>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x5F81D8,100,2,0x5F819C,1, 0x5F82E0,100,2,0x5F82A4,1, 0x5F83B0,100,2,0x5F8374,1, 0x5F8C68,100,2,0x5F8C2C,1, 0x5FA53C,100,2,0x5FA500,1, 0x5F7F84,110,2,0x5F7F84,1, 0x5F808C,110,2,0x5F808C,1, 0x5F815C,110,2,0x5F815C,1, 0x5F8A14,110,2,0x5F8A14,1, 0x5FA2E8,110,2,0x5FA2E8,1, 0x604F7C,120,2,0x604F7C,1, 0x605084,120,2,0x605084,1, 0x605154,120,2,0x605154,1, 0x605A0C,120,2,0x605A0C,1, 0x6072E0,120,2,0x6072E0,1>;
using def_t = void(CPed *, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPed *,bool>, 0,1>;
META_END

CTOR_META_BEGIN_OVERLOADED(CPed, void(unsigned int))
static int address;
static int global_address;
static const int id = 0x4C41C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C41C0, 0x4C4260, 0x4C41F0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4BFF3D,100,0,0x4BFF30,1, 0x4C11BE,100,0,0x4C11B0,1, 0x4C2E4D,100,0,0x4C2E40,1, 0x4EF7EA,100,0,0x4EF7E0,1, 0x4C002D,110,0,0x4C0020,1, 0x4C12AE,110,0,0x4C12A0,1, 0x4C2EED,110,0,0x4C2EE0,1, 0x4EF89A,110,0,0x4EF890,1, 0x4BFFBD,120,0,0x4BFFB0,1, 0x4C123E,120,0,0x4C1230,1, 0x4C2E7D,120,0,0x4C2E70,1, 0x4EF82A,120,0,0x4EF820,1>;
using def_t = CPed *(CPed *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPed *,unsigned int>, 0,1>;
META_END

DTOR_META_BEGIN(CPed)
static int address;
static int global_address;
static const int id = 0x4C50D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C50D0, 0x4C5170, 0x4C5100>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x43D513,100,0,0x43D4F0,1, 0x4BFFC9,100,0,0x4BFFC0,1, 0x4C13F0,100,0,0x4C13E0,1, 0x4C2EF9,100,0,0x4C2EF0,1, 0x4EFB48,100,0,0x4EFB30,1, 0x43D504,100,2,0,1, 0x43D513,110,0,0x43D4F0,1, 0x4C00B9,110,0,0x4C00B0,1, 0x4C14E0,110,0,0x4C14D0,1, 0x4C2F99,110,0,0x4C2F90,1, 0x4EFBF8,110,0,0x4EFBE0,1, 0x43D504,110,2,0,1, 0x43D513,120,0,0x43D4F0,1, 0x4C0049,120,0,0x4C0040,1, 0x4C1470,120,0,0x4C1460,1, 0x4C2F29,120,0,0x4C2F20,1, 0x4EFB88,120,0,0x4EFB70,1, 0x43D504,120,2,0,1>;
using def_t = void(CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPed *>, 0>;
META_END

OP_NEW_META_BEGIN(CPed)
static int address;
static int global_address;
static const int id = 0x4C5220;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C5220, 0x4C52C0, 0x4C5250>;
// total references count: 10en (21), 11en (21), steam (21)
using refs_t = RefList<0x437919,100,0,0x4376A0,1, 0x437938,100,0,0x4376A0,2, 0x43BAB3,100,0,0x43AEA0,1, 0x43BAE7,100,0,0x43AEA0,2, 0x43BB06,100,0,0x43AEA0,3, 0x43E614,100,0,0x43D530,1, 0x43E63F,100,0,0x43D530,2, 0x43E665,100,0,0x43D530,3, 0x4419C3,100,0,0x440CB0,1, 0x4419EF,100,0,0x440CB0,2, 0x441A15,100,0,0x440CB0,3, 0x44C0C5,100,0,0x448240,1, 0x4EFB6C,100,0,0x4EFB60,1, 0x4F52AD,100,0,0x4F5280,1, 0x4F539A,100,0,0x4F5280,2, 0x4F5425,100,0,0x4F5280,3, 0x4F54B1,100,0,0x4F5280,4, 0x4F553D,100,0,0x4F5280,5, 0x4F5647,100,0,0x4F5280,6, 0x585C3C,100,0,0x585BB0,1, 0x5872E7,100,0,0x587200,1, 0x437919,110,0,0x4376A0,1, 0x437938,110,0,0x4376A0,2, 0x43BAB3,110,0,0x43AEA0,1, 0x43BAE7,110,0,0x43AEA0,2, 0x43BB06,110,0,0x43AEA0,3, 0x43E614,110,0,0x43D530,1, 0x43E63F,110,0,0x43D530,2, 0x43E665,110,0,0x43D530,3, 0x4419C3,110,0,0x440CB0,1, 0x4419EF,110,0,0x440CB0,2, 0x441A15,110,0,0x440CB0,3, 0x44C0C5,110,0,0x448240,1, 0x4EFC1C,110,0,0x4EFC10,1, 0x4F535D,110,0,0x4F5330,1, 0x4F544A,110,0,0x4F5330,2, 0x4F54D5,110,0,0x4F5330,3, 0x4F5561,110,0,0x4F5330,4, 0x4F55ED,110,0,0x4F5330,5, 0x4F56F7,110,0,0x4F5330,6, 0x585F7C,110,0,0x585EF0,1, 0x587627,110,0,0x587540,1, 0x437919,120,0,0x4376A0,1, 0x437938,120,0,0x4376A0,2, 0x43BAB3,120,0,0x43AEA0,1, 0x43BAE7,120,0,0x43AEA0,2, 0x43BB06,120,0,0x43AEA0,3, 0x43E614,120,0,0x43D530,1, 0x43E63F,120,0,0x43D530,2, 0x43E665,120,0,0x43D530,3, 0x4419C3,120,0,0x440CB0,1, 0x4419EF,120,0,0x440CB0,2, 0x441A15,120,0,0x440CB0,3, 0x44C0C5,120,0,0x448240,1, 0x4EFBAC,120,0,0x4EFBA0,1, 0x4F52ED,120,0,0x4F52C0,1, 0x4F53DA,120,0,0x4F52C0,2, 0x4F5465,120,0,0x4F52C0,3, 0x4F54F1,120,0,0x4F52C0,4, 0x4F557D,120,0,0x4F52C0,5, 0x4F5687,120,0,0x4F52C0,6, 0x585E6C,120,0,0x585DE0,1, 0x587517,120,0,0x587430,1>;
using def_t = void *(unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

OP_NEW_META_BEGIN_OVERLOADED(CPed, void *(unsigned int, int))
static int address;
static int global_address;
static const int id = 0x4C5230;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C5230, 0x4C52D0, 0x4C5260>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4A2C4F,100,0,0x4A2B50,1, 0x5955C8,100,0,0x595240,1, 0x4A2D3F,110,0,0x4A2C40,1, 0x595878,110,0,0x5954F0,1, 0x4A2CCF,120,0,0x4A2BD0,1, 0x595768,120,0,0x5953E0,1>;
using def_t = void *(unsigned int, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int,int>, 0,1>;
META_END

OP_DELETE_META_BEGIN(CPed)
static int address;
static int global_address;
static const int id = 0x4C5250;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C5250, 0x4C52F0, 0x4C5280>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x43D520,100,0,0x43D4F0,1, 0x456950,100,0,0x456920,1, 0x4C11A0,100,0,0x4C1170,1, 0x4C2E30,100,0,0x4C2E00,1, 0x4C3F70,100,0,0x4C3F40,1, 0x43D520,110,0,0x43D4F0,1, 0x456950,110,0,0x456920,1, 0x4C1290,110,0,0x4C1260,1, 0x4C2ED0,110,0,0x4C2EA0,1, 0x4C4010,110,0,0x4C3FE0,1, 0x43D520,120,0,0x43D4F0,1, 0x456950,120,0,0x456920,1, 0x4C1220,120,0,0x4C11F0,1, 0x4C2E60,120,0,0x4C2E30,1, 0x4C3FA0,120,0,0x4C3F70,1>;
using def_t = void(void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *>, 0>;
META_END

META_BEGIN(CPed::SetModelIndex)
static int address;
static int global_address;
static const int id = 0x4C52A0;
static const bool is_virtual = true;
static const int vtable_index = 3;
using mv_addresses_t = MvAddresses<0x4C52A0, 0x4C5340, 0x4C52D0>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x5F81A8,100,2,0x5F819C,1, 0x5F82B0,100,2,0x5F82A4,1, 0x5F8380,100,2,0x5F8374,1, 0x5F8C38,100,2,0x5F8C2C,1, 0x5FA50C,100,2,0x5FA500,1, 0x5F7F84,110,2,0x5F7F84,1, 0x5F808C,110,2,0x5F808C,1, 0x5F815C,110,2,0x5F815C,1, 0x5F8A14,110,2,0x5F8A14,1, 0x5FA2E8,110,2,0x5FA2E8,1, 0x604F7C,120,2,0x604F7C,1, 0x605084,120,2,0x605084,1, 0x605154,120,2,0x605154,1, 0x605A0C,120,2,0x605A0C,1, 0x6072E0,120,2,0x6072E0,1>;
using def_t = void(CPed *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPed *,unsigned int>, 0,1>;
META_END

META_BEGIN(CPed::SetMoveAnim)
static int address;
static int global_address;
static const int id = 0x4C5A40;
static const bool is_virtual = true;
static const int vtable_index = 18;
using mv_addresses_t = MvAddresses<0x4C5A40, 0x4C5AE0, 0x4C5A70>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x5F81E4,100,2,0x5F819C,1, 0x5F82EC,100,2,0x5F82A4,1, 0x5F83BC,100,2,0x5F8374,1, 0x5F8C74,100,2,0x5F8C2C,1, 0x5F7F84,110,2,0x5F7F84,1, 0x5F808C,110,2,0x5F808C,1, 0x5F815C,110,2,0x5F815C,1, 0x5F8A14,110,2,0x5F8A14,1, 0x604F7C,120,2,0x604F7C,1, 0x605084,120,2,0x605084,1, 0x605154,120,2,0x605154,1, 0x605A0C,120,2,0x605A0C,1>;
using def_t = void(CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPed *>, 0>;
META_END

}
