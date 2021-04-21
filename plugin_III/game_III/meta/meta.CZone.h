/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CZone::GetTranslatedName)
static int address;
static int global_address;
static const int id = 0x4B5DD0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4B5DD0, 0x4B5EC0, 0x4B5E50>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4AD5B8,100,0,0x4AD5B0,1, 0x4AD5C7,100,0,0x4AD5B0,2, 0x4AD6A8,110,0,0x4AD6A0,1, 0x4AD6B7,110,0,0x4AD6A0,2, 0x4AD638,120,0,0x4AD630,1, 0x4AD647,120,0,0x4AD630,2>;
using def_t = wchar_t *(CZone *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CZone *>, 0>;
META_END

}
