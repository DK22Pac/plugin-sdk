/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

DEL_DTOR_META_BEGIN(CPlayerPed)
static int address;
static int global_address;
static const int id = 0x456920;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x456920, 0x456920, 0x456920>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FA500,100,2,0x5FA500,1, 0x5FA2E8,110,2,0x5FA2E8,1, 0x6072E0,120,2,0x6072E0,1>;
using def_t = void(CPlayerPed *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *,int>, 0,1>;
META_END

CTOR_META_BEGIN(CPlayerPed)
static int address;
static int global_address;
static const int id = 0x4EF7E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EF7E0, 0x4EF890, 0x4EF820>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4A2C5C,100,0,0x4A2B50,1, 0x4EFB78,100,0,0x4EFB60,1, 0x4A2D4C,110,0,0x4A2C40,1, 0x4EFC28,110,0,0x4EFC10,1, 0x4A2CDC,120,0,0x4A2BD0,1, 0x4EFBB8,120,0,0x4EFBA0,1>;
using def_t = CPlayerPed *(CPlayerPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *>, 0>;
META_END

DTOR_META_BEGIN(CPlayerPed)
static int address;
static int global_address;
static const int id = 0x4EFB30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EFB30, 0x4EFBE0, 0x4EFB70>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x456943,100,0,0x456920,1, 0x456934,100,2,0,1, 0x456943,110,0,0x456920,1, 0x456934,110,2,0,1, 0x456943,120,0,0x456920,1, 0x456934,120,2,0,1>;
using def_t = void(CPlayerPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *>, 0>;
META_END

META_BEGIN(CPlayerPed::SetupPlayerPed)
static int address;
static int global_address;
static const int id = 0x4EFB60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EFB60, 0x4EFC10, 0x4EFBA0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x43A79D,100,0,0x439650,1, 0x43A79D,110,0,0x439650,1, 0x43A79D,120,0,0x439650,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPlayerPed::DeactivatePlayerPed)
static int address;
static int global_address;
static const int id = 0x4EFC00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EFC00, 0x4EFCB0, 0x4EFC40>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x43A7B9,100,0,0x439650,1, 0x43A7B9,110,0,0x439650,1, 0x43A7B9,120,0,0x439650,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPlayerPed::ReactivatePlayerPed)
static int address;
static int global_address;
static const int id = 0x4EFC20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EFC20, 0x4EFCD0, 0x4EFC60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x43A86D,100,0,0x439650,1, 0x43A86D,110,0,0x439650,1, 0x43A86D,120,0,0x439650,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPlayerPed::SetInitialState)
static int address;
static int global_address;
static const int id = 0x4EFC40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EFC40, 0x4EFCF0, 0x4EFC80>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x421B0F,100,0,0x421A60,1, 0x4EF833,100,0,0x4EF7E0,1, 0x421B0F,110,0,0x421A60,1, 0x4EF8E3,110,0,0x4EF890,1, 0x421B0F,120,0,0x421A60,1, 0x4EF873,120,0,0x4EF820,1>;
using def_t = void(CPlayerPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *>, 0>;
META_END

META_BEGIN(CPlayerPed::ProcessControl)
static int address;
static int global_address;
static const int id = 0x4EFD90;
static const bool is_virtual = true;
static const int vtable_index = 8;
using mv_addresses_t = MvAddresses<0x4EFD90, 0x4EFE40, 0x4EFDD0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FA520,100,2,0x5FA500,1, 0x5FA2E8,110,2,0x5FA2E8,1, 0x6072E0,120,2,0x6072E0,1>;
using def_t = void(CPlayerPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *>, 0>;
META_END

META_BEGIN(CPlayerPed::ReApplyMoveAnims)
static int address;
static int global_address;
static const int id = 0x4F07C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F07C0, 0x4F0870, 0x4F0800>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x4F2703,100,0,0x4F2640,1, 0x4F2735,100,0,0x4F2640,2, 0x4F2762,100,0,0x4F2640,3, 0x4F27ED,100,0,0x4F2640,4, 0x4F2877,100,0,0x4F2640,5, 0x59423E,100,0,0x594050,1, 0x4F27B3,110,0,0x4F26F0,1, 0x4F27E5,110,0,0x4F26F0,2, 0x4F2812,110,0,0x4F26F0,3, 0x4F289D,110,0,0x4F26F0,4, 0x4F2927,110,0,0x4F26F0,5, 0x5944EE,110,0,0x594300,1, 0x4F2743,120,0,0x4F2680,1, 0x4F2775,120,0,0x4F2680,2, 0x4F27A2,120,0,0x4F2680,3, 0x4F282D,120,0,0x4F2680,4, 0x4F28B7,120,0,0x4F2680,5, 0x5943DE,120,0,0x5941F0,1>;
using def_t = void(CPlayerPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *>, 0>;
META_END

META_BEGIN(CPlayerPed::SetRealMoveAnim)
static int address;
static int global_address;
static const int id = 0x4F0880;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F0880, 0x4F0930, 0x4F08C0>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x4EFD68,100,0,0x4EFC40,1, 0x4F01E6,100,0,0x4EFD90,1, 0x4F03A2,100,0,0x4EFD90,2, 0x4F1731,100,0,0x4F13C0,1, 0x4F1BFF,100,0,0x4F1970,1, 0x4EFE18,110,0,0x4EFCF0,1, 0x4F0296,110,0,0x4EFE40,1, 0x4F0452,110,0,0x4EFE40,2, 0x4F17E1,110,0,0x4F1470,1, 0x4F1CAF,110,0,0x4F1A20,1, 0x4EFDA8,120,0,0x4EFC80,1, 0x4F0226,120,0,0x4EFDD0,1, 0x4F03E2,120,0,0x4EFDD0,2, 0x4F1771,120,0,0x4F1400,1, 0x4F1C3F,120,0,0x4F19B0,1>;
using def_t = void(CPlayerPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *>, 0>;
META_END

META_BEGIN(CPlayerPed::UseSprintEnergy)
static int address;
static int global_address;
static const int id = 0x4F12A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F12A0, 0x4F1350, 0x4F12E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F10CF,100,0,0x4F0880,1, 0x4F117F,110,0,0x4F0930,1, 0x4F110F,120,0,0x4F08C0,1>;
using def_t = void(CPlayerPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *>, 0>;
META_END

META_BEGIN(CPlayerPed::RestoreSprintEnergy)
static int address;
static int global_address;
static const int id = 0x4F1340;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F1340, 0x4F13F0, 0x4F1380>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4EFEA4,100,0,0x4EFD90,1, 0x4EFF54,110,0,0x4EFE40,1, 0x4EFEE4,120,0,0x4EFDD0,1>;
using def_t = void(CPlayerPed *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *,float>, 0,1>;
META_END

META_BEGIN(CPlayerPed::DoWeaponSmoothSpray)
static int address;
static int global_address;
static const int id = 0x4F1380;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F1380, 0x4F1430, 0x4F13C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F13CC,100,0,0x4F13C0,1, 0x4F147C,110,0,0x4F1470,1, 0x4F140C,120,0,0x4F1400,1>;
using def_t = bool(CPlayerPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *>, 0>;
META_END

META_BEGIN(CPlayerPed::PlayerControlZelda)
static int address;
static int global_address;
static const int id = 0x4F13C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F13C0, 0x4F1470, 0x4F1400>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4F040E,100,0,0x4EFD90,1, 0x4F0439,100,0,0x4EFD90,2, 0x4F04BE,110,0,0x4EFE40,1, 0x4F04E9,110,0,0x4EFE40,2, 0x4F044E,120,0,0x4EFDD0,1, 0x4F0479,120,0,0x4EFDD0,2>;
using def_t = void(CPlayerPed *, CPad *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *,CPad *>, 0,1>;
META_END

META_BEGIN(CPlayerPed::PlayerControlFighter)
static int address;
static int global_address;
static const int id = 0x4F1810;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F1810, 0x4F18C0, 0x4F1850>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F0400,100,0,0x4EFD90,1, 0x4F04B0,110,0,0x4EFE40,1, 0x4F0440,120,0,0x4EFDD0,1>;
using def_t = void(CPlayerPed *, CPad *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *,CPad *>, 0,1>;
META_END

META_BEGIN(CPlayerPed::PlayerControl1stPersonRunAround)
static int address;
static int global_address;
static const int id = 0x4F1970;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F1970, 0x4F1A20, 0x4F19B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F03E5,100,0,0x4EFD90,1, 0x4F0495,110,0,0x4EFE40,1, 0x4F0425,120,0,0x4EFDD0,1>;
using def_t = void(CPlayerPed *, CPad *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *,CPad *>, 0,1>;
META_END

META_BEGIN(CPlayerPed::PlayerControlSniper)
static int address;
static int global_address;
static const int id = 0x4F1CF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F1CF0, 0x4F1DA0, 0x4F1D30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F016C,100,0,0x4EFD90,1, 0x4F021C,110,0,0x4EFE40,1, 0x4F01AC,120,0,0x4EFDD0,1>;
using def_t = void(CPlayerPed *, CPad *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *,CPad *>, 0,1>;
META_END

META_BEGIN(CPlayerPed::PlayerControlM16)
static int address;
static int global_address;
static const int id = 0x4F1DF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F1DF0, 0x4F1EA0, 0x4F1E30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F0157,100,0,0x4EFD90,1, 0x4F0207,110,0,0x4EFE40,1, 0x4F0197,120,0,0x4EFDD0,1>;
using def_t = void(CPlayerPed *, CPad *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *,CPad *>, 0,1>;
META_END

META_BEGIN(CPlayerPed::ProcessPlayerWeapon)
static int address;
static int global_address;
static const int id = 0x4F1EF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F1EF0, 0x4F1FA0, 0x4F1F30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F0425,100,0,0x4EFD90,1, 0x4F04D5,110,0,0x4EFE40,1, 0x4F0465,120,0,0x4EFDD0,1>;
using def_t = void(CPlayerPed *, CPad *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *,CPad *>, 0,1>;
META_END

META_BEGIN(CPlayerPed::ProcessWeaponSwitch)
static int address;
static int global_address;
static const int id = 0x4F2310;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F2310, 0x4F23C0, 0x4F2350>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4F0464,100,0,0x4EFD90,1, 0x4F1CFC,100,0,0x4F1CF0,1, 0x4F1DFC,100,0,0x4F1DF0,1, 0x4F0514,110,0,0x4EFE40,1, 0x4F1DAC,110,0,0x4F1DA0,1, 0x4F1EAC,110,0,0x4F1EA0,1, 0x4F04A4,120,0,0x4EFDD0,1, 0x4F1D3C,120,0,0x4F1D30,1, 0x4F1E3C,120,0,0x4F1E30,1>;
using def_t = void(CPlayerPed *, CPad *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *,CPad *>, 0,1>;
META_END

META_BEGIN(CPlayerPed::MakeChangesForNewWeapon)
static int address;
static int global_address;
static const int id = 0x4F2560;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F2560, 0x4F2610, 0x4F25A0>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x420771,100,0,0x420660,1, 0x4208F2,100,0,0x420660,2, 0x420F51,100,0,0x420E70,1, 0x421233,100,0,0x4210E0,1, 0x4F254C,100,0,0x4F2310,1, 0x420771,110,0,0x420660,1, 0x4208F2,110,0,0x420660,2, 0x420F51,110,0,0x420E70,1, 0x421233,110,0,0x4210E0,1, 0x4F25FC,110,0,0x4F23C0,1, 0x420771,120,0,0x420660,1, 0x4208F2,120,0,0x420660,2, 0x420F51,120,0,0x420E70,1, 0x421233,120,0,0x4210E0,1, 0x4F258C,120,0,0x4F2350,1>;
using def_t = void(CPlayerPed *, char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *,char>, 0,1>;
META_END

META_BEGIN(CPlayerPed::ProcessAnimGroups)
static int address;
static int global_address;
static const int id = 0x4F2640;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F2640, 0x4F26F0, 0x4F2680>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F048D,100,0,0x4EFD90,1, 0x4F053D,110,0,0x4EFE40,1, 0x4F04CD,120,0,0x4EFDD0,1>;
using def_t = void(CPlayerPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *>, 0>;
META_END

META_BEGIN(CPlayerPed::ClearWeaponTarget)
static int address;
static int global_address;
static const int id = 0x4F28A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F28A0, 0x4F2950, 0x4F28E0>;
// total references count: 10en (11), 11en (11), steam (11)
using refs_t = RefList<0x4212ED,100,0,0x4210E0,1, 0x421B08,100,0,0x421A60,1, 0x4EFEB6,100,0,0x4EFD90,1, 0x4EFEC9,100,0,0x4EFD90,2, 0x4F03B0,100,0,0x4EFD90,3, 0x4F1782,100,0,0x4F13C0,1, 0x4F1C50,100,0,0x4F1970,1, 0x4F21E9,100,0,0x4F1EF0,1, 0x4F2222,100,0,0x4F1EF0,2, 0x4F22A0,100,0,0x4F1EF0,3, 0x4F2601,100,0,0x4F2560,1, 0x4212ED,110,0,0x4210E0,1, 0x421B08,110,0,0x421A60,1, 0x4EFF66,110,0,0x4EFE40,1, 0x4EFF79,110,0,0x4EFE40,2, 0x4F0460,110,0,0x4EFE40,3, 0x4F1832,110,0,0x4F1470,1, 0x4F1D00,110,0,0x4F1A20,1, 0x4F2299,110,0,0x4F1FA0,1, 0x4F22D2,110,0,0x4F1FA0,2, 0x4F2350,110,0,0x4F1FA0,3, 0x4F26B1,110,0,0x4F2610,1, 0x4212ED,120,0,0x4210E0,1, 0x421B08,120,0,0x421A60,1, 0x4EFEF6,120,0,0x4EFDD0,1, 0x4EFF09,120,0,0x4EFDD0,2, 0x4F03F0,120,0,0x4EFDD0,3, 0x4F17C2,120,0,0x4F1400,1, 0x4F1C90,120,0,0x4F19B0,1, 0x4F2229,120,0,0x4F1F30,1, 0x4F2262,120,0,0x4F1F30,2, 0x4F22E0,120,0,0x4F1F30,3, 0x4F2641,120,0,0x4F25A0,1>;
using def_t = void(CPlayerPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *>, 0>;
META_END

META_BEGIN(CPlayerPed::FindWeaponLockOnTarget)
static int address;
static int global_address;
static const int id = 0x4F28D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F28D0, 0x4F2980, 0x4F2910>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F21B7,100,0,0x4F1EF0,1, 0x4F2267,110,0,0x4F1FA0,1, 0x4F21F7,120,0,0x4F1F30,1>;
using def_t = bool(CPlayerPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *>, 0>;
META_END

META_BEGIN(CPlayerPed::EvaluateTarget)
static int address;
static int global_address;
static const int id = 0x4F2B60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F2B60, 0x4F2C10, 0x4F2BA0>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x4F2A34,100,0,0x4F28D0,1, 0x4F2A76,100,0,0x4F28D0,2, 0x4F2AA8,100,0,0x4F28D0,3, 0x4F2ADA,100,0,0x4F28D0,4, 0x4F2B0C,100,0,0x4F28D0,5, 0x4F2AE4,110,0,0x4F2980,1, 0x4F2B26,110,0,0x4F2980,2, 0x4F2B58,110,0,0x4F2980,3, 0x4F2B8A,110,0,0x4F2980,4, 0x4F2BBC,110,0,0x4F2980,5, 0x4F2A74,120,0,0x4F2910,1, 0x4F2AB6,120,0,0x4F2910,2, 0x4F2AE8,120,0,0x4F2910,3, 0x4F2B1A,120,0,0x4F2910,4, 0x4F2B4C,120,0,0x4F2910,5>;
using def_t = void(CPlayerPed *, CEntity *, CEntity **, float *, float, float, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *,CEntity *,CEntity **,float *,float,float,bool>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(CPlayerPed::IsThisPedAttackingPlayer)
static int address;
static int global_address;
static const int id = 0x4F2D00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F2D00, 0x4F2DB0, 0x4F2D40>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F2A19,100,0,0x4F28D0,1, 0x4F2AC9,110,0,0x4F2980,1, 0x4F2A59,120,0,0x4F2910,1>;
using def_t = bool(CPlayerPed *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *,CPed *>, 0,1>;
META_END

META_BEGIN(CPlayerPed::FindNextWeaponLockOnTarget)
static int address;
static int global_address;
static const int id = 0x4F2D50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F2D50, 0x4F2E00, 0x4F2D90>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4F224F,100,0,0x4F1EF0,1, 0x4F226A,100,0,0x4F1EF0,2, 0x4F22FF,110,0,0x4F1FA0,1, 0x4F231A,110,0,0x4F1FA0,2, 0x4F228F,120,0,0x4F1F30,1, 0x4F22AA,120,0,0x4F1F30,2>;
using def_t = bool(CPlayerPed *, CEntity *, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *,CEntity *,bool>, 0,1,2>;
META_END

META_BEGIN(CPlayerPed::EvaluateNeighbouringTarget)
static int address;
static int global_address;
static const int id = 0x4F2FA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F2FA0, 0x4F3050, 0x4F2FE0>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x4F2E6B,100,0,0x4F2D50,1, 0x4F2EB1,100,0,0x4F2D50,2, 0x4F2EE6,100,0,0x4F2D50,3, 0x4F2F1B,100,0,0x4F2D50,4, 0x4F2F50,100,0,0x4F2D50,5, 0x4F2F1B,110,0,0x4F2E00,1, 0x4F2F61,110,0,0x4F2E00,2, 0x4F2F96,110,0,0x4F2E00,3, 0x4F2FCB,110,0,0x4F2E00,4, 0x4F3000,110,0,0x4F2E00,5, 0x4F2EAB,120,0,0x4F2D90,1, 0x4F2EF1,120,0,0x4F2D90,2, 0x4F2F26,120,0,0x4F2D90,3, 0x4F2F5B,120,0,0x4F2D90,4, 0x4F2F90,120,0,0x4F2D90,5>;
using def_t = void(CPlayerPed *, CEntity *, CEntity **, float *, float, float, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *,CEntity *,CEntity **,float *,float,float,bool>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(CPlayerPed::SetWantedLevel)
static int address;
static int global_address;
static const int id = 0x4F3190;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F3190, 0x4F3240, 0x4F31D0>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x42083C,100,0,0x420660,1, 0x433B12,100,0,0x4339F0,1, 0x43E084,100,0,0x43D530,1, 0x43E139,100,0,0x43D530,2, 0x4914DF,100,0,0x491490,1, 0x491512,100,0,0x4914F0,1, 0x42083C,110,0,0x420660,1, 0x433B12,110,0,0x4339F0,1, 0x43E084,110,0,0x43D530,1, 0x43E139,110,0,0x43D530,2, 0x49159F,110,0,0x491550,1, 0x4915D2,110,0,0x4915B0,1, 0x42083C,120,0,0x420660,1, 0x433B12,120,0,0x4339F0,1, 0x43E084,120,0,0x43D530,1, 0x43E139,120,0,0x43D530,2, 0x49152F,120,0,0x4914E0,1, 0x491562,120,0,0x491540,1>;
using def_t = void(CPlayerPed *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *,int>, 0,1>;
META_END

META_BEGIN(CPlayerPed::SetWantedLevelNoDrop)
static int address;
static int global_address;
static const int id = 0x4F31B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F31B0, 0x4F3260, 0x4F31F0>;
// total references count: 10en (12), 11en (12), steam (12)
using refs_t = RefList<0x43E0BB,100,0,0x43D530,1, 0x47614B,100,0,0x476070,1, 0x47617F,100,0,0x476070,2, 0x476192,100,0,0x476070,3, 0x4C2552,100,0,0x4C1B50,1, 0x4C274C,100,0,0x4C26A0,1, 0x4C27B2,100,0,0x4C26A0,2, 0x4DE6D2,100,0,0x4DE500,1, 0x4DF092,100,0,0x4DEC80,1, 0x52F5AB,100,0,0x52F390,1, 0x53C597,100,0,0x53C4F0,1, 0x551C78,100,0,0x551950,1, 0x43E0BB,110,0,0x43D530,1, 0x47614B,110,0,0x476070,1, 0x47617F,110,0,0x476070,2, 0x476192,110,0,0x476070,3, 0x4C25F2,110,0,0x4C1BF0,1, 0x4C27EC,110,0,0x4C2740,1, 0x4C2852,110,0,0x4C2740,2, 0x4DE782,110,0,0x4DE5B0,1, 0x4DF142,110,0,0x4DED30,1, 0x52F7EB,110,0,0x52F5D0,1, 0x53C7D7,110,0,0x53C730,1, 0x551DB8,110,0,0x551A90,1, 0x43E0BB,120,0,0x43D530,1, 0x47614B,120,0,0x476070,1, 0x47617F,120,0,0x476070,2, 0x476192,120,0,0x476070,3, 0x4C2582,120,0,0x4C1B80,1, 0x4C277C,120,0,0x4C26D0,1, 0x4C27E2,120,0,0x4C26D0,2, 0x4DE712,120,0,0x4DE540,1, 0x4DF0D2,120,0,0x4DECC0,1, 0x52F77B,120,0,0x52F560,1, 0x53C787,120,0,0x53C6E0,1, 0x551D68,120,0,0x551A40,1>;
using def_t = void(CPlayerPed *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *,int>, 0,1>;
META_END

META_BEGIN(CPlayerPed::RunningLand)
static int address;
static int global_address;
static const int id = 0x4F31D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F31D0, 0x4F3280, 0x4F3210>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F0078,100,0,0x4EFD90,1, 0x4F0128,110,0,0x4EFE40,1, 0x4F00B8,120,0,0x4EFDD0,1>;
using def_t = void(CPlayerPed *, CPad *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *,CPad *>, 0,1>;
META_END

META_BEGIN(CPlayerPed::MakeObjectTargettable)
static int address;
static int global_address;
static const int id = 0x4F32B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F32B0, 0x4F3360, 0x4F32F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44B0CB,100,0,0x448240,1, 0x44B0CB,110,0,0x448240,1, 0x44B0CB,120,0,0x448240,1>;
using def_t = void(CPlayerPed *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *,int>, 0,1>;
META_END

META_BEGIN(CPlayerPed::DoesTargetHaveToBeBroken)
static int address;
static int global_address;
static const int id = 0x4F3350;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F3350, 0x4F3400, 0x4F3390>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4F2217,100,0,0x4F1EF0,1, 0x4F2BE3,100,0,0x4F2B60,1, 0x4F301F,100,0,0x4F2FA0,1, 0x4F22C7,110,0,0x4F1FA0,1, 0x4F2C93,110,0,0x4F2C10,1, 0x4F30CF,110,0,0x4F3050,1, 0x4F2257,120,0,0x4F1F30,1, 0x4F2C23,120,0,0x4F2BA0,1, 0x4F305F,120,0,0x4F2FE0,1>;
using def_t = bool(CPlayerPed *, CVector, CWeapon *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *,CVector,CWeapon *>, 0,1,2>;
META_END

META_BEGIN(CPlayerPed::KeepAreaAroundPlayerClear)
static int address;
static int global_address;
static const int id = 0x4F3460;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F3460, 0x4F3510, 0x4F34A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x53BB81,100,0,0x53B660,1, 0x53BDC1,110,0,0x53B8A0,1, 0x53BD71,120,0,0x53B850,1>;
using def_t = void(CPlayerPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *>, 0>;
META_END

META_BEGIN(CPlayerPed::GetPlayerInfoForThisPlayerPed)
static int address;
static int global_address;
static const int id = 0x4F36C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F36C0, 0x4F3770, 0x4F3700>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x421AF0,100,0,0x421A60,1, 0x421AF0,110,0,0x421A60,1, 0x421AF0,120,0,0x421A60,1>;
using def_t = CPlayerInfo *(CPlayerPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *>, 0>;
META_END

META_BEGIN(CPlayerPed::DoStuffToGoOnFire)
static int address;
static int global_address;
static const int id = 0x4F36E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F36E0, 0x4F3790, 0x4F3720>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x479A84,100,0,0x4798D0,1, 0x479A84,110,0,0x4798D0,1, 0x479A84,120,0,0x4798D0,1>;
using def_t = void(CPlayerPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *>, 0>;
META_END

META_BEGIN(CPlayerPed::AnnoyPlayerPed)
static int address;
static int global_address;
static const int id = 0x4F3700;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F3700, 0x4F37B0, 0x4F3740>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x419803,100,0,0x419300,1, 0x4C66C0,100,0,0x4C65B0,1, 0x4C95C5,100,0,0x4C8910,1, 0x4C96F0,100,0,0x4C8910,2, 0x4EA480,100,0,0x4EA420,1, 0x419803,110,0,0x419300,1, 0x4C6760,110,0,0x4C6650,1, 0x4C9665,110,0,0x4C89B0,1, 0x4C9790,110,0,0x4C89B0,2, 0x4EA530,110,0,0x4EA4D0,1, 0x419803,120,0,0x419300,1, 0x4C66F0,120,0,0x4C65E0,1, 0x4C95F5,120,0,0x4C8940,1, 0x4C9720,120,0,0x4C8940,2, 0x4EA4C0,120,0,0x4EA460,1>;
using def_t = void(CPlayerPed *, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *,bool>, 0,1>;
META_END

META_BEGIN(CPlayerPed::ClearAdrenaline)
static int address;
static int global_address;
static const int id = 0x4F3730;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F3730, 0x4F37E0, 0x4F3770>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x42144B,100,0,0x421400,1, 0x421466,100,0,0x421400,2, 0x421AA1,100,0,0x421A60,1, 0x4A1496,100,0,0x4A1400,1, 0x4CF319,100,0,0x4CF220,1, 0x4E33A1,100,0,0x4E32D0,1, 0x42144B,110,0,0x421400,1, 0x421466,110,0,0x421400,2, 0x421AA1,110,0,0x421A60,1, 0x4A1586,110,0,0x4A14F0,1, 0x4CF3B9,110,0,0x4CF2C0,1, 0x4E3451,110,0,0x4E3380,1, 0x42144B,120,0,0x421400,1, 0x421466,120,0,0x421400,2, 0x421AA1,120,0,0x421A60,1, 0x4A1516,120,0,0x4A1480,1, 0x4CF349,120,0,0x4CF250,1, 0x4E33E1,120,0,0x4E3310,1>;
using def_t = void(CPlayerPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *>, 0>;
META_END

META_BEGIN(CPlayerPed::SetMoveAnim)
static int address;
static int global_address;
static const int id = 0x4F3760;
static const bool is_virtual = true;
static const int vtable_index = 18;
using mv_addresses_t = MvAddresses<0x4F3760, 0x4F3810, 0x4F37A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5FA548,100,2,0x5FA500,1, 0x5FA2E8,110,2,0x5FA2E8,1, 0x6072E0,120,2,0x6072E0,1>;
using def_t = void(CPlayerPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPlayerPed *>, 0>;
META_END

}
