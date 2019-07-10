/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CColSphere::Set)
static int address;
static int global_address;
static const int id = 0x411E40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x411E40, 0x411E40, 0x411E40>;
// total references count: 10en (25), 11en (0), steam (0)
using refs_t = RefList<0x412192,100,0,0x412160,1, 0x412215,100,0,0x412160,2, 0x412298,100,0,0x412160,3, 0x412321,100,0,0x412160,4, 0x4123C2,100,0,0x412160,5, 0x412469,100,0,0x412160,6, 0x4125C0,100,0,0x412160,7, 0x412723,100,0,0x412160,8, 0x4128BC,100,0,0x412160,9, 0x412A1F,100,0,0x412160,10, 0x412BB8,100,0,0x412160,11, 0x412D51,100,0,0x412160,12, 0x412EEA,100,0,0x412160,13, 0x413083,100,0,0x412160,14, 0x4131CC,100,0,0x412160,15, 0x413315,100,0,0x412160,16, 0x41345E,100,0,0x412160,17, 0x478CD5,100,0,0x478C20,1, 0x510724,100,0,0x5104D0,1, 0x53BFE9,100,0,0x53BF70,1, 0x53C010,100,0,0x53BF70,2, 0x53C037,100,0,0x53BF70,3, 0x53C05E,100,0,0x53BF70,4, 0x53C092,100,0,0x53BF70,5, 0x53C0B9,100,0,0x53BF70,6>;
using def_t = void(CColSphere *, float, CVector &, unsigned char, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CColSphere *,float,CVector &,unsigned char,unsigned char>, 0,1,2,3,4>;
META_END

}
