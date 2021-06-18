/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CMousePointerStateHelper::GetMouseSetUp)
static int address;
static int global_address;
static const int id = 0x491BD0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x491BD0, 0x491C90, 0x491C20>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x487671,100,0,0x4856F0,1, 0x582827,100,0,0x582710,1, 0x48776E,110,0,0x4857C0,1, 0x582B67,110,0,0x582A50,1, 0x48776E,120,0,0x4857C0,1, 0x582A57,120,0,0x582940,1>;
using def_t = CMouseControllerState *(CMousePointerStateHelper *, CMouseControllerState *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CMousePointerStateHelper *,CMouseControllerState *>, 0,1>;
META_END

}
