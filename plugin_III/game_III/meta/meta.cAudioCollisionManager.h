/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(cAudioCollisionManager::AddCollisionToRequestedQueue)
static int address;
static int global_address;
static const int id = 0x5685E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5685E0, 0x568930, 0x568830>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5685AF,100,0,0x568410,1, 0x5688FF,110,0,0x568760,1, 0x5687FF,120,0,0x568660,1>;
using def_t = void(cAudioCollisionManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cAudioCollisionManager *>, 0>;
META_END

}
