/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CRange2D::GetRandomPointInRange)
static int address;
static int global_address;
static const int id = 0x4A7270;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4A7270, 0x4A7360, 0x4A72F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4D270A,100,0,0x4D26C0,1, 0x4D27AA,110,0,0x4D2760,1, 0x4D273A,120,0,0x4D26F0,1>;
using def_t = CVector2D *(CRange2D *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CRange2D *>, 0>;
META_END

}
