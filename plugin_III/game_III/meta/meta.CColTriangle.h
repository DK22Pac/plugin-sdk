/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CColTriangle::Set)
static int address;
static int global_address;
static const int id = 0x411E70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x411E70, 0x411E70, 0x411E70>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x478F3E,100,0,0x478C20,1>;
using def_t = void(CColTriangle *, CompressedVector const *, int, int, int, unsigned char, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CColTriangle *,CompressedVector const *,int,int,int,unsigned char,unsigned char>, 0,1,2,3,4,5,6>;
META_END

}
