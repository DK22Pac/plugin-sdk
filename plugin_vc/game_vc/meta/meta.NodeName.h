/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(GetFrameNodeName)
static int address;
static int global_address;
static const int id = 0x580600;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x580600, 0x580620, 0x580430>;
// total references count: 10en (18), 11en (18), steam (18)
using refs_t = RefList<0x407C0E,100,0,0x407C00,1, 0x48D6A7,100,0,0x48D690,1, 0x48D763,100,0,0x48D710,1, 0x48D82D,100,0,0x48D810,1, 0x5411FB,100,0,0x5411E0,1, 0x57A01A,100,0,0x57A010,1, 0x57A07F,100,0,0x57A070,1, 0x57A198,100,0,0x57A070,2, 0x57A1B8,100,0,0x57A070,3, 0x57A1EE,100,0,0x57A1E0,1, 0x57A2BB,100,0,0x57A1E0,2, 0x57A2DB,100,0,0x57A1E0,3, 0x57A30E,100,0,0x57A300,1, 0x57A44F,100,0,0x57A300,2, 0x57A476,100,0,0x57A300,3, 0x57A4AE,100,0,0x57A4A0,1, 0x57A5AF,100,0,0x57A4A0,2, 0x57A5D6,100,0,0x57A4A0,3, 0x407C0E,110,0,0x407C00,1, 0x48D6B7,110,0,0x48D6A0,1, 0x48D773,110,0,0x48D720,1, 0x48D83D,110,0,0x48D820,1, 0x54121B,110,0,0x541200,1, 0x57A03A,110,0,0x57A030,1, 0x57A09F,110,0,0x57A090,1, 0x57A1B8,110,0,0x57A090,2, 0x57A1D8,110,0,0x57A090,3, 0x57A20E,110,0,0x57A200,1, 0x57A2DB,110,0,0x57A200,2, 0x57A2FB,110,0,0x57A200,3, 0x57A32E,110,0,0x57A320,1, 0x57A46F,110,0,0x57A320,2, 0x57A496,110,0,0x57A320,3, 0x57A4CE,110,0,0x57A4C0,1, 0x57A5CF,110,0,0x57A4C0,2, 0x57A5F6,110,0,0x57A4C0,3, 0x407C0E,120,0,0x407C00,1, 0x48D597,120,0,0x48D580,1, 0x48D653,120,0,0x48D600,1, 0x48D71D,120,0,0x48D700,1, 0x5410EB,120,0,0x5410D0,1, 0x579F0A,120,0,0x579F00,1, 0x579F6F,120,0,0x579F60,1, 0x57A088,120,0,0x579F60,2, 0x57A0A8,120,0,0x579F60,3, 0x57A0DE,120,0,0x57A0D0,1, 0x57A1AB,120,0,0x57A0D0,2, 0x57A1CB,120,0,0x57A0D0,3, 0x57A1FE,120,0,0x57A1F0,1, 0x57A33F,120,0,0x57A1F0,2, 0x57A366,120,0,0x57A1F0,3, 0x57A39E,120,0,0x57A390,1, 0x57A49F,120,0,0x57A390,2, 0x57A4C6,120,0,0x57A390,3>;
using def_t = char *(RwFrame *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwFrame *>, 0>;
META_END

META_BEGIN(NodeNamePluginAttach)
static int address;
static int global_address;
static const int id = 0x580620;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x580620, 0x580640, 0x580450>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A6FE0,100,0,0x4A6FA0,1, 0x4A7000,110,0,0x4A6FC0,1, 0x4A6EB0,120,0,0x4A6E70,1>;
using def_t = RwBool();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(NodeNameStreamGetSize)
static int address;
static int global_address;
static const int id = 0x580670;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x580670, 0x580690, 0x5804A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x580644,100,2,0,1, 0x580664,110,2,0,1, 0x580474,120,2,0,1>;
using def_t = RwInt32(void const *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void const *,RwInt32,RwInt32>, 0,1,2>;
META_END

META_BEGIN(NodeNameStreamRead)
static int address;
static int global_address;
static const int id = 0x5806A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5806A0, 0x5806C0, 0x5804D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x58064E,100,2,0,1, 0x58066E,110,2,0,1, 0x58047E,120,2,0,1>;
using def_t = RwStream *(RwStream *, RwInt32, void *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwStream *,RwInt32,void *,RwInt32,RwInt32>, 0,1,2,3,4>;
META_END

META_BEGIN(NodeNameStreamWrite)
static int address;
static int global_address;
static const int id = 0x5806D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5806D0, 0x5806F0, 0x580500>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x580649,100,2,0,1, 0x580669,110,2,0,1, 0x580479,120,2,0,1>;
using def_t = RwStream *(RwStream *, RwInt32, void const *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwStream *,RwInt32,void const *,RwInt32,RwInt32>, 0,1,2,3,4>;
META_END

META_BEGIN(NodeNameCopy)
static int address;
static int global_address;
static const int id = 0x580700;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x580700, 0x580720, 0x580530>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x580621,100,2,0,1, 0x580641,110,2,0,1, 0x580451,120,2,0,1>;
using def_t = void *(void *, void const *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *,void const *,RwInt32,RwInt32>, 0,1,2,3>;
META_END

META_BEGIN(NodeNameDestructor)
static int address;
static int global_address;
static const int id = 0x580730;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x580730, 0x580750, 0x580560>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x580626,100,2,0,1, 0x580646,110,2,0,1, 0x580456,120,2,0,1>;
using def_t = void *(void *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *,RwInt32,RwInt32>, 0,1,2>;
META_END

META_BEGIN(NodeNameConstructor)
static int address;
static int global_address;
static const int id = 0x580740;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x580740, 0x580760, 0x580570>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x58062B,100,2,0,1, 0x58064B,110,2,0,1, 0x58045B,120,2,0,1>;
using def_t = void *(void *, RwInt32, RwInt32);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<void *,RwInt32,RwInt32>, 0,1,2>;
META_END

}
