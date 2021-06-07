/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

DEL_DTOR_META_BEGIN(CObject)
static int address;
static int global_address;
static const int id = 0x404B00;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x404B00, 0x404B00, 0x404B00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F7DD4,100,2,0x5F7DD4,1, 0x5F7BBC,110,2,0x5F7BBC,1, 0x604BB4,120,2,0x604BB4,1>;
using def_t = void(CObject *, char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CObject *,char>, 0,1>;
META_END

META_BEGIN(CObject::SetupLighting)
static int address;
static int global_address;
static const int id = 0x4A7C90;
static const bool is_virtual = true;
static const int vtable_index = 14;
using mv_addresses_t = MvAddresses<0x4A7C90, 0x4A7D80, 0x4A7D10>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5F7E0C,100,2,0x5F7DD4,1, 0x5F8080,100,2,0x5F8048,1, 0x5F7BBC,110,2,0x5F7BBC,1, 0x5F7E30,110,2,0x5F7E30,1, 0x604BB4,120,2,0x604BB4,1, 0x604E28,120,2,0x604E28,1>;
using def_t = bool(CObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CObject *>, 0>;
META_END

META_BEGIN(CObject::RemoveLighting)
static int address;
static int global_address;
static const int id = 0x4A7CD0;
static const bool is_virtual = true;
static const int vtable_index = 15;
using mv_addresses_t = MvAddresses<0x4A7CD0, 0x4A7DC0, 0x4A7D50>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5F7E10,100,2,0x5F7DD4,1, 0x5F8084,100,2,0x5F8048,1, 0x5F7BBC,110,2,0x5F7BBC,1, 0x5F7E30,110,2,0x5F7E30,1, 0x604BB4,120,2,0x604BB4,1, 0x604E28,120,2,0x604E28,1>;
using def_t = void(CObject *, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CObject *,bool>, 0,1>;
META_END

CTOR_META_BEGIN(CObject)
static int address;
static int global_address;
static const int id = 0x4BABD0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BABD0, 0x4BACC0, 0x4BAC50>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x4BA913,100,0,0x4BA910,1, 0x4BFE38,100,0,0x4BFE30,1, 0x4EB094,100,0,0x4EB060,1, 0x530373,100,0,0x530300,1, 0x541E13,100,0,0x541CB0,1, 0x54AEC3,100,0,0x54AE50,1, 0x4BAA03,110,0,0x4BAA00,1, 0x4BFF28,110,0,0x4BFF20,1, 0x4EB144,110,0,0x4EB110,1, 0x5305B3,110,0,0x530540,1, 0x542053,110,0,0x541EF0,1, 0x54B043,110,0,0x54AFD0,1, 0x4BA993,120,0,0x4BA990,1, 0x4BFEB8,120,0,0x4BFEB0,1, 0x4EB0D4,120,0,0x4EB0A0,1, 0x530543,120,0,0x5304D0,1, 0x542003,120,0,0x541EA0,1, 0x54AFF3,120,0,0x54AF80,1>;
using def_t = CObject *(CObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CObject *>, 0>;
META_END

CTOR_META_BEGIN_OVERLOADED(CObject, void(int, bool))
static int address;
static int global_address;
static const int id = 0x4BACE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BACE0, 0x4BADD0, 0x4BAD60>;
// total references count: 10en (9), 11en (9), steam (9)
using refs_t = RefList<0x432C43,100,0,0x432AE0,1, 0x432DDB,100,0,0x432D50,1, 0x433BD7,100,0,0x433BA0,1, 0x433BF8,100,0,0x433BA0,2, 0x43DD5F,100,0,0x43D530,1, 0x444E10,100,0,0x444B20,1, 0x4A2830,100,0,0x4A2550,1, 0x4A2E35,100,0,0x4A2DB0,1, 0x5435A4,100,0,0x543440,1, 0x432C43,110,0,0x432AE0,1, 0x432DDB,110,0,0x432D50,1, 0x433BD7,110,0,0x433BA0,1, 0x433BF8,110,0,0x433BA0,2, 0x43DD5F,110,0,0x43D530,1, 0x444E10,110,0,0x444B20,1, 0x4A2920,110,0,0x4A2640,1, 0x4A2F25,110,0,0x4A2EA0,1, 0x5437E4,110,0,0x543680,1, 0x432C43,120,0,0x432AE0,1, 0x432DDB,120,0,0x432D50,1, 0x433BD7,120,0,0x433BA0,1, 0x433BF8,120,0,0x433BA0,2, 0x43DD5F,120,0,0x43D530,1, 0x444E10,120,0,0x444B20,1, 0x4A28B0,120,0,0x4A25D0,1, 0x4A2EB5,120,0,0x4A2E30,1, 0x543794,120,0,0x543630,1>;
using def_t = CObject *(CObject *, int, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CObject *,int,bool>, 0,1,2>;
META_END

CTOR_META_BEGIN_OVERLOADED(CObject, void(CDummyObject *))
static int address;
static int global_address;
static const int id = 0x4BAD50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BAD50, 0x4BAE40, 0x4BADD0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F4498,100,0,0x4F4470,1, 0x4F4548,110,0,0x4F4520,1, 0x4F44D8,120,0,0x4F44B0,1>;
using def_t = CObject *(CObject *, CDummyObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CObject *,CDummyObject *>, 0,1>;
META_END

DTOR_META_BEGIN(CObject)
static int address;
static int global_address;
static const int id = 0x4BAE00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BAE00, 0x4BAEF0, 0x4BAE80>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x404B23,100,0,0x404B00,1, 0x4BA969,100,0,0x4BA960,1, 0x4BFED9,100,0,0x4BFED0,1, 0x404B14,100,2,0,1, 0x404B23,110,0,0x404B00,1, 0x4BAA59,110,0,0x4BAA50,1, 0x4BFFC9,110,0,0x4BFFC0,1, 0x404B14,110,2,0,1, 0x404B23,120,0,0x404B00,1, 0x4BA9E9,120,0,0x4BA9E0,1, 0x4BFF59,120,0,0x4BFF50,1, 0x404B14,120,2,0,1>;
using def_t = void(CObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CObject *>, 0>;
META_END

OP_NEW_META_BEGIN(CObject)
static int address;
static int global_address;
static const int id = 0x4BAE70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BAE70, 0x4BAF60, 0x4BAEF0>;
// total references count: 10en (17), 11en (17), steam (17)
using refs_t = RefList<0x404C9A,100,0,0x404BE0,1, 0x404CD7,100,0,0x404CD0,1, 0x432C2B,100,0,0x432AE0,1, 0x432DC3,100,0,0x432D50,1, 0x433BE5,100,0,0x433BA0,1, 0x43DD4E,100,0,0x43D530,1, 0x444DFF,100,0,0x444B20,1, 0x4A2E20,100,0,0x4A2DB0,1, 0x4EB086,100,0,0x4EB060,1, 0x4F4489,100,0,0x4F4470,1, 0x530365,100,0,0x530300,1, 0x541E05,100,0,0x541CB0,1, 0x54358E,100,0,0x543440,1, 0x54AEB5,100,0,0x54AE50,1, 0x55B57B,100,0,0x55B030,1, 0x55B59F,100,0,0x55B030,2, 0x55B5C3,100,0,0x55B030,3, 0x404C9A,110,0,0x404BE0,1, 0x404CD7,110,0,0x404CD0,1, 0x432C2B,110,0,0x432AE0,1, 0x432DC3,110,0,0x432D50,1, 0x433BE5,110,0,0x433BA0,1, 0x43DD4E,110,0,0x43D530,1, 0x444DFF,110,0,0x444B20,1, 0x4A2F10,110,0,0x4A2EA0,1, 0x4EB136,110,0,0x4EB110,1, 0x4F4539,110,0,0x4F4520,1, 0x5305A5,110,0,0x530540,1, 0x542045,110,0,0x541EF0,1, 0x5437CE,110,0,0x543680,1, 0x54B035,110,0,0x54AFD0,1, 0x55B6AB,110,0,0x55B160,1, 0x55B6CF,110,0,0x55B160,2, 0x55B6F3,110,0,0x55B160,3, 0x404C9A,120,0,0x404BE0,1, 0x404CD7,120,0,0x404CD0,1, 0x432C2B,120,0,0x432AE0,1, 0x432DC3,120,0,0x432D50,1, 0x433BE5,120,0,0x433BA0,1, 0x43DD4E,120,0,0x43D530,1, 0x444DFF,120,0,0x444B20,1, 0x4A2EA0,120,0,0x4A2E30,1, 0x4EB0C6,120,0,0x4EB0A0,1, 0x4F44C9,120,0,0x4F44B0,1, 0x530535,120,0,0x5304D0,1, 0x541FF5,120,0,0x541EA0,1, 0x54377E,120,0,0x543630,1, 0x54AFE5,120,0,0x54AF80,1, 0x55B65B,120,0,0x55B110,1, 0x55B67F,120,0,0x55B110,2, 0x55B6A3,120,0,0x55B110,3>;
using def_t = void *(unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

OP_NEW_META_BEGIN_OVERLOADED(CObject, void *(unsigned int, int))
static int address;
static int global_address;
static const int id = 0x4BAE80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BAE80, 0x4BAF70, 0x4BAF00>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x433BC3,100,0,0x433BA0,1, 0x4A2819,100,0,0x4A2550,1, 0x433BC3,110,0,0x433BA0,1, 0x4A2909,110,0,0x4A2640,1, 0x433BC3,120,0,0x433BA0,1, 0x4A2899,120,0,0x4A25D0,1>;
using def_t = void *(unsigned int, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int,int>, 0,1>;
META_END

OP_DELETE_META_BEGIN(CObject)
static int address;
static int global_address;
static const int id = 0x4BAEA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BAEA0, 0x4BAF90, 0x4BAF20>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x404B30,100,0,0x404B00,1, 0x4BA8D6,100,0,0x4BA8A0,1, 0x4BAAE0,100,0,0x4BAAB0,1, 0x4BFF20,100,0,0x4BFEF0,1, 0x404B30,110,0,0x404B00,1, 0x4BA9C6,110,0,0x4BA990,1, 0x4BABD0,110,0,0x4BABA0,1, 0x4C0010,110,0,0x4BFFE0,1, 0x404B30,120,0,0x404B00,1, 0x4BA956,120,0,0x4BA920,1, 0x4BAB60,120,0,0x4BAB30,1, 0x4BFFA0,120,0,0x4BFF70,1>;
using def_t = void(void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *>, 0>;
META_END

META_BEGIN(CObject::Init)
static int address;
static int global_address;
static const int id = 0x4BAEC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BAEC0, 0x4BAFB0, 0x4BAF40>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4BAD35,100,0,0x4BACE0,1, 0x4BADD4,100,0,0x4BAD50,1, 0x4BAE25,110,0,0x4BADD0,1, 0x4BAEC4,110,0,0x4BAE40,1, 0x4BADB5,120,0,0x4BAD60,1, 0x4BAE54,120,0,0x4BADD0,1>;
using def_t = void(CObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CObject *>, 0>;
META_END

META_BEGIN(CObject::CanBeDeleted)
static int address;
static int global_address;
static const int id = 0x4BB010;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BB010, 0x4BB100, 0x4BB090>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4F3C50,100,0,0x4F3B90,1, 0x4F444C,100,0,0x4F4410,1, 0x4F3D00,110,0,0x4F3C40,1, 0x4F44FC,110,0,0x4F44C0,1, 0x4F3C90,120,0,0x4F3BD0,1, 0x4F448C,120,0,0x4F4450,1>;
using def_t = bool(CObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CObject *>, 0>;
META_END

META_BEGIN(CObject::ProcessControl)
static int address;
static int global_address;
static const int id = 0x4BB040;
static const bool is_virtual = true;
static const int vtable_index = 8;
using mv_addresses_t = MvAddresses<0x4BB040, 0x4BB130, 0x4BB0C0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5F7DF4,100,2,0x5F7DD4,1, 0x5F8068,100,2,0x5F8048,1, 0x5F7BBC,110,2,0x5F7BBC,1, 0x5F7E30,110,2,0x5F7E30,1, 0x604BB4,120,2,0x604BB4,1, 0x604E28,120,2,0x604E28,1>;
using def_t = void(CObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CObject *>, 0>;
META_END

META_BEGIN(CObject::Render)
static int address;
static int global_address;
static const int id = 0x4BB1E0;
static const bool is_virtual = true;
static const int vtable_index = 13;
using mv_addresses_t = MvAddresses<0x4BB1E0, 0x4BB2D0, 0x4BB260>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4BA884,100,0,0x4BA800,1, 0x4BAAA0,100,0,0x4BAAA0,1, 0x5F7E08,100,2,0x5F7DD4,1, 0x5F807C,100,2,0x5F8048,1, 0x4BA974,110,0,0x4BA8F0,1, 0x4BAB90,110,0,0x4BAB90,1, 0x5F7BBC,110,2,0x5F7BBC,1, 0x5F7E30,110,2,0x5F7E30,1, 0x4BA904,120,0,0x4BA880,1, 0x4BAB20,120,0,0x4BAB20,1, 0x604BB4,120,2,0x604BB4,1, 0x604E28,120,2,0x604E28,1>;
using def_t = void(CObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CObject *>, 0>;
META_END

META_BEGIN(CObject::ObjectDamage)
static int address;
static int global_address;
static const int id = 0x4BB240;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BB240, 0x4BB330, 0x4BB2C0>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x497AA5,100,0,0x4973A0,1, 0x49D84B,100,0,0x49B620,1, 0x4B1626,100,0,0x4B1340,1, 0x4B1A24,100,0,0x4B1340,2, 0x4BB055,100,0,0x4BB040,1, 0x497B65,110,0,0x497460,1, 0x49D93B,110,0,0x49B710,1, 0x4B1716,110,0,0x4B1430,1, 0x4B1B14,110,0,0x4B1430,2, 0x4BB145,110,0,0x4BB130,1, 0x497AF5,120,0,0x4973F0,1, 0x49D8CB,120,0,0x49B6A0,1, 0x4B16A6,120,0,0x4B13C0,1, 0x4B1AA4,120,0,0x4B13C0,2, 0x4BB0D5,120,0,0x4BB0C0,1>;
using def_t = void(CObject *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CObject *,float>, 0,1>;
META_END

META_BEGIN(CObject::RefModelInfo)
static int address;
static int global_address;
static const int id = 0x4BBD80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BBD80, 0x4BBE70, 0x4BBE00>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4EB1DF,100,0,0x4EB060,1, 0x530473,100,0,0x530300,1, 0x541E3B,100,0,0x541CB0,1, 0x54AEF3,100,0,0x54AE50,1, 0x4EB28F,110,0,0x4EB110,1, 0x5306B3,110,0,0x530540,1, 0x54207B,110,0,0x541EF0,1, 0x54B073,110,0,0x54AFD0,1, 0x4EB21F,120,0,0x4EB0A0,1, 0x530643,120,0,0x5304D0,1, 0x54202B,120,0,0x541EA0,1, 0x54B023,120,0,0x54AF80,1>;
using def_t = void(CObject *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CObject *,int>, 0,1>;
META_END

META_BEGIN(CObject::Teleport)
static int address;
static int global_address;
static const int id = 0x4BBDA0;
static const bool is_virtual = true;
static const int vtable_index = 11;
using mv_addresses_t = MvAddresses<0x4BBDA0, 0x4BBE90, 0x4BBE20>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x5F7C34,100,2,0x5F7C08,1, 0x5F7CAC,100,2,0x5F7C80,1, 0x5F7E00,100,2,0x5F7DD4,1, 0x5F8074,100,2,0x5F8048,1, 0x5F79F0,110,2,0x5F79F0,1, 0x5F7A68,110,2,0x5F7A68,1, 0x5F7BBC,110,2,0x5F7BBC,1, 0x5F7E30,110,2,0x5F7E30,1, 0x6049E8,120,2,0x6049E8,1, 0x604A60,120,2,0x604A60,1, 0x604BB4,120,2,0x604BB4,1, 0x604E28,120,2,0x604E28,1>;
using def_t = void(CObject *, CVector);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CObject *,CVector>, 0,1>;
META_END

META_BEGIN(CObject::DeleteAllTempObjects)
static int address;
static int global_address;
static const int id = 0x4BBDF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BBDF0, 0x4BBEE0, 0x4BBE70>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4A22E0,100,0,0x4A22D0,1, 0x4AE86A,100,0,0x4AE850,1, 0x590FDB,100,0,0x590A00,1, 0x4A23D0,110,0,0x4A23C0,1, 0x4AE95A,110,0,0x4AE940,1, 0x59129B,110,0,0x590CC0,1, 0x4A2360,120,0,0x4A2350,1, 0x4AE8EA,120,0,0x4AE8D0,1, 0x59118B,120,0,0x590BB0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CObject::DeleteAllMissionObjects)
static int address;
static int global_address;
static const int id = 0x4BBE60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BBE60, 0x4BBF50, 0x4BBEE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4AE86F,100,0,0x4AE850,1, 0x4AE95F,110,0,0x4AE940,1, 0x4AE8EF,120,0,0x4AE8D0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CObject::DeleteAllTempObjectsInArea)
static int address;
static int global_address;
static const int id = 0x4BBED0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4BBED0, 0x4BBFC0, 0x4BBF50>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4B5058,100,0,0x4B4E70,1, 0x59614C,100,0,0x596030,1, 0x4B5148,110,0,0x4B4F60,1, 0x5963FC,110,0,0x5962E0,1, 0x4B50D8,120,0,0x4B4EF0,1, 0x5962EC,120,0,0x5961D0,1>;
using def_t = void(CVector, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector,float>, 0,1>;
META_END

}
