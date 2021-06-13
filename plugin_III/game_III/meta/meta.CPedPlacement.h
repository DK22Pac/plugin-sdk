/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPedPlacement::IsPositionClearForPed)
static int address;
static int global_address;
static const int id = 0x4EE2C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EE2C0, 0x4EE370, 0x4EE300>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F5036,100,0,0x4F4A00,1, 0x4F50E6,110,0,0x4F4AB0,1, 0x4F5076,120,0,0x4F4A40,1>;
using def_t = bool(CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector *>, 0>;
META_END

META_BEGIN(CPedPlacement::IsPositionClearOfCars)
static int address;
static int global_address;
static const int id = 0x4EE310;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EE310, 0x4EE3C0, 0x4EE350>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4D100B,100,0,0x4D0F20,1, 0x4D10AB,110,0,0x4D0FC0,1, 0x4D103B,120,0,0x4D0F50,1>;
using def_t = CEntity *(CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector *>, 0>;
META_END

META_BEGIN(CPedPlacement::FindZCoorForPed)
static int address;
static int global_address;
static const int id = 0x4EE340;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EE340, 0x4EE3F0, 0x4EE380>;
// total references count: 10en (9), 11en (9), steam (9)
using refs_t = RefList<0x43795E,100,0,0x4376A0,1, 0x4CEC72,100,0,0x4CE8F0,1, 0x4DFC5A,100,0,0x4DF940,1, 0x4E2548,100,0,0x4E2480,1, 0x4E29F6,100,0,0x4E2920,1, 0x4E37D0,100,0,0x4E36E0,1, 0x4E4FE5,100,0,0x4E4F30,1, 0x4E5411,100,0,0x4E52A0,1, 0x4E56E1,100,0,0x4E5570,1, 0x43795E,110,0,0x4376A0,1, 0x4CED12,110,0,0x4CE990,1, 0x4DFD0A,110,0,0x4DF9F0,1, 0x4E25F8,110,0,0x4E2530,1, 0x4E2AA6,110,0,0x4E29D0,1, 0x4E3880,110,0,0x4E3790,1, 0x4E5095,110,0,0x4E4FE0,1, 0x4E54C1,110,0,0x4E5350,1, 0x4E5791,110,0,0x4E5620,1, 0x43795E,120,0,0x4376A0,1, 0x4CECA2,120,0,0x4CE920,1, 0x4DFC9A,120,0,0x4DF980,1, 0x4E2588,120,0,0x4E24C0,1, 0x4E2A36,120,0,0x4E2960,1, 0x4E3810,120,0,0x4E3720,1, 0x4E5025,120,0,0x4E4F70,1, 0x4E5451,120,0,0x4E52E0,1, 0x4E5721,120,0,0x4E55B0,1>;
using def_t = void(CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector *>, 0>;
META_END

}
