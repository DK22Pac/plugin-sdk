/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CColBox::Set)
static int address;
static int global_address;
static const int id = 0x40B2A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40B2A0, 0x40B2A0, 0x40B2A0>;
// total references count: 10en (19), 11en (0), steam (0)
using refs_t = RefList<0x4121DA,100,0,0x412160,1, 0x41225D,100,0,0x412160,2, 0x4122E0,100,0,0x412160,3, 0x41237B,100,0,0x412160,4, 0x412422,100,0,0x412160,5, 0x4124C9,100,0,0x412160,6, 0x412620,100,0,0x412160,7, 0x412783,100,0,0x412160,8, 0x41291C,100,0,0x412160,9, 0x412A7F,100,0,0x412160,10, 0x412C18,100,0,0x412160,11, 0x412DB1,100,0,0x412160,12, 0x412F4A,100,0,0x412160,13, 0x4130E3,100,0,0x412160,14, 0x41322C,100,0,0x412160,15, 0x413375,100,0,0x412160,16, 0x4134BE,100,0,0x412160,17, 0x478DA4,100,0,0x478C20,1, 0x51076E,100,0,0x5104D0,1>;
using def_t = void(CColBox *, CVector &, CVector &, unsigned char, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CColBox *,CVector &,CVector &,unsigned char,unsigned char>, 0,1,2,3,4>;
META_END

META_BEGIN(CColBox::operator=)
static int address;
static int global_address;
static const int id = 0x40B2E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x40B2E0, 0x40B2E0, 0x40B2E0>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x411746,100,0,0x411710,1, 0x411932,100,0,0x411710,2, 0x53BFB4,100,0,0x53BF70,1>;
using def_t = void(CColBox *, CColBox &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CColBox *,CColBox &>, 0,1>;
META_END

}
