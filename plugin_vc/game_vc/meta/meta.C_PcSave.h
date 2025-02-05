/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(C_PcSave::DeleteSlot)
static int address;
static int global_address;
static const int id = 0x61D430;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x61D430, 0x61D410, 0x61D070>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4971BE,100,0,0x497148,1, 0x4971CE,110,0,0x497158,1, 0x4970CE,120,0,0x497058,1>;
using def_t = bool(C_PcSave *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<C_PcSave *,int>, 0,1>;
META_END

META_BEGIN(C_PcSave::PopulateSlotInfo)
static int address;
static int global_address;
static const int id = 0x61D4A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x61D4A0, 0x61D480, 0x61D0E0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4971CC,100,0,0x497148,1, 0x497298,100,0,0x497148,2, 0x4A3DF2,100,0,0x4A3BCD,1, 0x4971DC,110,0,0x497158,1, 0x4972A8,110,0,0x497158,2, 0x4A3E13,110,0,0x4A3BEE,1, 0x4970DC,120,0,0x497058,1, 0x4971A8,120,0,0x497058,2, 0x4A3CB1,120,0,0x4A3A8C,1>;
using def_t = void(C_PcSave *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<C_PcSave *>, 0>;
META_END

META_BEGIN(C_PcSave::PcClassSaveRoutine)
static int address;
static int global_address;
static const int id = 0x61D7A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x61D7A0, 0x61D780, 0x61D3E0>;
// total references count: 10en (24), 11en (24), steam (24)
using refs_t = RefList<0x61C7B7,100,0,0x61C420,1, 0x61C838,100,0,0x61C420,2, 0x61C8B1,100,0,0x61C420,3, 0x61C92E,100,0,0x61C420,4, 0x61C9AE,100,0,0x61C420,5, 0x61CA2E,100,0,0x61C420,6, 0x61CABB,100,0,0x61C420,7, 0x61CB34,100,0,0x61C420,8, 0x61CBAE,100,0,0x61C420,9, 0x61CC31,100,0,0x61C420,10, 0x61CCAE,100,0,0x61C420,11, 0x61CD2E,100,0,0x61C420,12, 0x61CDAE,100,0,0x61C420,13, 0x61CE2E,100,0,0x61C420,14, 0x61CEAE,100,0,0x61C420,15, 0x61CF2E,100,0,0x61C420,16, 0x61CFAE,100,0,0x61C420,17, 0x61D02E,100,0,0x61C420,18, 0x61D0BF,100,0,0x61C420,19, 0x61D148,100,0,0x61C420,20, 0x61D1CB,100,0,0x61C420,21, 0x61D244,100,0,0x61C420,22, 0x61D2BE,100,0,0x61C420,23, 0x61D321,100,0,0x61C420,24, 0x61C797,110,0,0x61C400,1, 0x61C818,110,0,0x61C400,2, 0x61C891,110,0,0x61C400,3, 0x61C90E,110,0,0x61C400,4, 0x61C98E,110,0,0x61C400,5, 0x61CA0E,110,0,0x61C400,6, 0x61CA9B,110,0,0x61C400,7, 0x61CB14,110,0,0x61C400,8, 0x61CB8E,110,0,0x61C400,9, 0x61CC11,110,0,0x61C400,10, 0x61CC8E,110,0,0x61C400,11, 0x61CD0E,110,0,0x61C400,12, 0x61CD8E,110,0,0x61C400,13, 0x61CE0E,110,0,0x61C400,14, 0x61CE8E,110,0,0x61C400,15, 0x61CF0E,110,0,0x61C400,16, 0x61CF8E,110,0,0x61C400,17, 0x61D00E,110,0,0x61C400,18, 0x61D09F,110,0,0x61C400,19, 0x61D128,110,0,0x61C400,20, 0x61D1AB,110,0,0x61C400,21, 0x61D224,110,0,0x61C400,22, 0x61D29E,110,0,0x61C400,23, 0x61D301,110,0,0x61C400,24, 0x61C3FB,120,0,0x61C040,1, 0x61C47C,120,0,0x61C040,2, 0x61C4F5,120,0,0x61C040,3, 0x61C56E,120,0,0x61C040,4, 0x61C5EE,120,0,0x61C040,5, 0x61C66E,120,0,0x61C040,6, 0x61C6FB,120,0,0x61C040,7, 0x61C774,120,0,0x61C040,8, 0x61C7EE,120,0,0x61C040,9, 0x61C871,120,0,0x61C040,10, 0x61C8EE,120,0,0x61C040,11, 0x61C96E,120,0,0x61C040,12, 0x61C9EE,120,0,0x61C040,13, 0x61CA6E,120,0,0x61C040,14, 0x61CAEE,120,0,0x61C040,15, 0x61CB6E,120,0,0x61C040,16, 0x61CBEE,120,0,0x61C040,17, 0x61CC6E,120,0,0x61C040,18, 0x61CCFF,120,0,0x61C040,19, 0x61CD88,120,0,0x61C040,20, 0x61CE0B,120,0,0x61C040,21, 0x61CE84,120,0,0x61C040,22, 0x61CEFE,120,0,0x61C040,23, 0x61CF61,120,0,0x61C040,24>;
using def_t = bool(C_PcSave *, int, unsigned char *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<C_PcSave *,int,unsigned char *,unsigned int>, 0,1,2,3>;
META_END

META_BEGIN(C_PcSave::SaveSlot)
static int address;
static int global_address;
static const int id = 0x61D8B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x61D8B0, 0x61D890, 0x61D4F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x49728C,100,0,0x497148,1, 0x49729C,110,0,0x497158,1, 0x49719C,120,0,0x497058,1>;
using def_t = char(C_PcSave *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<C_PcSave *,int>, 0,1>;
META_END

META_BEGIN(C_PcSave::SetSaveDirectory)
static int address;
static int global_address;
static const int id = 0x61D930;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x61D930, 0x61D910, 0x61D570>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x601B30,100,0,0x6019E0,1, 0x601B60,110,0,0x601A10,1, 0x6017A0,120,0,0x601650,1>;
using def_t = void(char const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

}
