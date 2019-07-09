/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CLines::RenderLineWithClipping)
static int address;
static int global_address;
static const int id = 0x50A3B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50A3B0, 0x50A490, 0x50A420>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x4535A8,100,0,0x453550,1>;
using def_t = void(float, float, float, float, float, float, unsigned int, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float,float,float,float,float,unsigned int,unsigned int>, 0,1,2,3,4,5,6,7>;
META_END

}
