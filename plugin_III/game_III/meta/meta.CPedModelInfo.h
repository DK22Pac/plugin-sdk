/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

DTOR_META_BEGIN(CPedModelInfo)
static int address;
static int global_address;
static const int id = 0x50BF60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50BF60, 0x50C050, 0x50BFE0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x50BD37,100,2,0,1, 0x50BF4B,100,2,0,1, 0x50C2C5,100,2,0,1, 0x50BE27,110,2,0,1, 0x50C03B,110,2,0,1, 0x50C3B5,110,2,0,1, 0x50BDB7,120,2,0,1, 0x50BFCB,120,2,0,1, 0x50C345,120,2,0,1>;
using def_t = void(CPedModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedModelInfo *>, 0>;
META_END

CTOR_META_BEGIN(CPedModelInfo)
static int address;
static int global_address;
static const int id = 0x50BFA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50BFA0, 0x50C090, 0x50C020>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50BD3C,100,2,0,1, 0x50BE2C,110,2,0,1, 0x50BDBC,120,2,0,1>;
using def_t = CPedModelInfo *(CPedModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedModelInfo *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CPedModelInfo)
static int address;
static int global_address;
static const int id = 0x50C2B0;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x50C2B0, 0x50C3A0, 0x50C330>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FDFFC,100,2,0x5FDFFC,1, 0x5FDDE4,110,2,0x5FDDE4,1, 0x60ADDC,120,2,0x60ADDC,1>;
using def_t = void(CPedModelInfo *, char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedModelInfo *,char>, 0,1>;
META_END

META_BEGIN(CPedModelInfo::SetClump)
static int address;
static int global_address;
static const int id = 0x510210;
static const bool is_virtual = true;
static const int vtable_index = 6;
using mv_addresses_t = MvAddresses<0x510210, 0x510400, 0x510390>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FE014,100,2,0x5FDFFC,1, 0x5FDDE4,110,2,0x5FDDE4,1, 0x60ADDC,120,2,0x60ADDC,1>;
using def_t = void(CPedModelInfo *, RpClump *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedModelInfo *,RpClump *>, 0,1>;
META_END

META_BEGIN(CPedModelInfo::DeleteRwObject)
static int address;
static int global_address;
static const int id = 0x510280;
static const bool is_virtual = true;
static const int vtable_index = 2;
using mv_addresses_t = MvAddresses<0x510280, 0x510470, 0x510400>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FE004,100,2,0x5FDFFC,1, 0x5FDDE4,110,2,0x5FDDE4,1, 0x60ADDC,120,2,0x60ADDC,1>;
using def_t = void(CPedModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedModelInfo *>, 0>;
META_END

META_BEGIN(CPedModelInfo::SetLowDetailClump)
static int address;
static int global_address;
static const int id = 0x510390;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x510390, 0x510580, 0x510510>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4769F6,100,0,0x476990,1, 0x4769F6,110,0,0x476990,1, 0x4769F6,120,0,0x476990,1>;
using def_t = void(CPedModelInfo *, RpClump *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedModelInfo *,RpClump *>, 0,1>;
META_END

META_BEGIN(CPedModelInfo::CreateHitColModel)
static int address;
static int global_address;
static const int id = 0x5104D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5104D0, 0x5106C0, 0x510650>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x510233,100,0,0x510210,1, 0x510423,110,0,0x510400,1, 0x5103B3,120,0,0x510390,1>;
using def_t = void(CPedModelInfo *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPedModelInfo *>, 0>;
META_END

}
