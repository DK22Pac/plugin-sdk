/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CGameLogic::InitAtStartOfGame)
static int address;
static int global_address;
static const int id = 0x4213F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4213F0, 0x4213F0, 0x4213F0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48BF8C,100,0,0x48BED0,1, 0x48C4B2,100,0,0x48C4B0,1, 0x48C07C,110,0,0x48BFC0,1, 0x48C5B2,110,0,0x48C5B0,1, 0x48C00C,120,0,0x48BF50,1, 0x48C542,120,0,0x48C540,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGameLogic::Update)
static int address;
static int global_address;
static const int id = 0x421400;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x421400, 0x421400, 0x421400>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C9C8,100,0,0x48C850,1, 0x48CAC8,110,0,0x48C950,1, 0x48CA58,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGameLogic::SortOutStreamingAndMemory)
static int address;
static int global_address;
static const int id = 0x421A20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x421A20, 0x421A20, 0x421A20>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4215DF,100,0,0x421400,1, 0x421803,100,0,0x421400,2, 0x42199D,100,0,0x421400,3, 0x4215DF,110,0,0x421400,1, 0x421803,110,0,0x421400,2, 0x42199D,110,0,0x421400,3, 0x4215DF,120,0,0x421400,1, 0x421803,120,0,0x421400,2, 0x42199D,120,0,0x421400,3>;
using def_t = void(CVector const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector const &>, 0>;
META_END

META_BEGIN(CGameLogic::RestorePlayerStuffDuringResurrection)
static int address;
static int global_address;
static const int id = 0x421A60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x421A60, 0x421A60, 0x421A60>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4215D1,100,0,0x421400,1, 0x4217EE,100,0,0x421400,2, 0x42198F,100,0,0x421400,3, 0x4215D1,110,0,0x421400,1, 0x4217EE,110,0,0x421400,2, 0x42198F,110,0,0x421400,3, 0x4215D1,120,0,0x421400,1, 0x4217EE,120,0,0x421400,2, 0x42198F,120,0,0x421400,3>;
using def_t = void(CPlayerPed *, CVector, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPlayerPed *,CVector,float>, 0,1,2>;
META_END

META_BEGIN(CGameLogic::PassTime)
static int address;
static int global_address;
static const int id = 0x421C00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x421C00, 0x421C00, 0x421C00>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4215B8,100,0,0x421400,1, 0x4217D5,100,0,0x421400,2, 0x591AE5,100,0,0x591AE0,1, 0x4215B8,110,0,0x421400,1, 0x4217D5,110,0,0x421400,2, 0x591D95,110,0,0x591D90,1, 0x4215B8,120,0,0x421400,1, 0x4217D5,120,0,0x421400,2, 0x591C85,120,0,0x591C80,1>;
using def_t = void(unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int>, 0>;
META_END

}
