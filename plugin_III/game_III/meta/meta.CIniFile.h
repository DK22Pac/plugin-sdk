/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CIniFile::LoadIniFile)
static int address;
static int global_address;
static const int id = 0x59BE20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x59BE20, 0x59C0E0, 0x5991D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48BEED,100,0,0x48BED0,1, 0x48BFDD,110,0,0x48BFC0,1, 0x48BF6D,120,0,0x48BF50,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
