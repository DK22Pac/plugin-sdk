/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CDraw::SetFOV)
static int address;
static int global_address;
static const int id = 0x4FE7B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FE7B0, 0x4FE890, 0x4FE820>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x46E92E,100,0,0x46D3F0,1, 0x46EACE,100,0,0x46D3F0,2, 0x48C0DA,100,0,0x48BED0,1, 0x48C50B,100,0,0x48C4B0,1, 0x59BCA9,100,0,0x59BC70,1, 0x59BCCC,100,0,0x59BCB0,1, 0x46E90E,110,0,0x46D3D0,1, 0x46EAAE,110,0,0x46D3D0,2, 0x48C1CA,110,0,0x48BFC0,1, 0x48C60B,110,0,0x48C5B0,1, 0x59BF69,110,0,0x59BF30,1, 0x59BF8C,110,0,0x59BF70,1, 0x46E90E,120,0,0x46D3D0,1, 0x46EAAE,120,0,0x46D3D0,2, 0x48C15A,120,0,0x48BF50,1, 0x48C59B,120,0,0x48C540,1, 0x599059,120,0,0x599020,1, 0x59907C,120,0,0x599060,1>;
using def_t = void(float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float>, 0>;
META_END

}
