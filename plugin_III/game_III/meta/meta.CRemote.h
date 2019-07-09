/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CRemote::GivePlayerRemoteControlledCar)
static int address;
static int global_address;
static const int id = 0x435C30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x435C30, 0x435C30, 0x435C30>;
// total references count: 10en (2), 11en (0), steam (0)
using refs_t = RefList<0x43E04A,100,0,0x43D530,1, 0x58B2FD,100,0,0x589D00,1>;
using def_t = void(float, float, float, float, unsigned short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float,float,float,unsigned short>, 0,1,2,3,4>;
META_END

META_BEGIN(CRemote::TakeRemoteControlledCarFromPlayer)
static int address;
static int global_address;
static const int id = 0x435DA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x435DA0, 0x435DA0, 0x435DA0>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x4A15D1,100,0,0x4A15C0,1, 0x531945,100,0,0x531470,1, 0x5319C9,100,0,0x531470,2>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
