/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPacManPickups::Init)
static int address;
static int global_address;
static const int id = 0x432760;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x432760, 0x432760, 0x432760>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48C2AD,100,0,0x48BED0,1, 0x48C5AD,100,0,0x48C4B0,1, 0x48C39D,110,0,0x48BFC0,1, 0x48C6AD,110,0,0x48C5B0,1, 0x48C32D,120,0,0x48BF50,1, 0x48C63D,120,0,0x48C540,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPacManPickups::Update)
static int address;
static int global_address;
static const int id = 0x432800;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x432800, 0x432800, 0x432800>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C989,100,0,0x48C850,1, 0x48CA89,110,0,0x48C950,1, 0x48CA19,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPacManPickups::GeneratePMPickUps)
static int address;
static int global_address;
static const int id = 0x432AE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x432AE0, 0x432AE0, 0x432AE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4333E7,100,0,0x4333D0,1, 0x4333E7,110,0,0x4333D0,1, 0x4333E7,120,0,0x4333D0,1>;
using def_t = void(CVector, float, short, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector,float,short,unsigned char>, 0,1,2,3>;
META_END

META_BEGIN(CPacManPickups::GeneratePMPickUpsForRace)
static int address;
static int global_address;
static const int id = 0x432D50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x432D50, 0x432D50, 0x432D50>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x433345,100,0,0x433340,1, 0x433345,110,0,0x433340,1, 0x433345,120,0,0x433340,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPacManPickups::GenerateOnePMPickUp)
static int address;
static int global_address;
static const int id = 0x432F20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x432F20, 0x432F20, 0x432F20>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44658D,100,0,0x4458A0,1, 0x44658D,110,0,0x4458A0,1, 0x44658D,120,0,0x4458A0,1>;
using def_t = void(CVector);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector>, 0>;
META_END

META_BEGIN(CPacManPickups::Render)
static int address;
static int global_address;
static const int id = 0x432F60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x432F60, 0x432F60, 0x432F60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48E0C2,100,0,0x48E090,1, 0x48E182,110,0,0x48E150,1, 0x48E112,120,0,0x48E0E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPacManPickups::ClearPMPickUps)
static int address;
static int global_address;
static const int id = 0x433150;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x433150, 0x433150, 0x433150>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x432974,100,0,0x432800,1, 0x4333C0,100,0,0x4333C0,1, 0x432974,110,0,0x432800,1, 0x4333C0,110,0,0x4333C0,1, 0x432974,120,0,0x432800,1, 0x4333C0,120,0,0x4333C0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPacManPickups::StartPacManRace)
static int address;
static int global_address;
static const int id = 0x433340;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x433340, 0x433340, 0x433340>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x445C7F,100,0,0x4458A0,1, 0x445C7F,110,0,0x4458A0,1, 0x445C7F,120,0,0x4458A0,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CPacManPickups::StartPacManRecord)
static int address;
static int global_address;
static const int id = 0x433360;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x433360, 0x433360, 0x433360>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x445C94,100,0,0x4458A0,1, 0x445C94,110,0,0x4458A0,1, 0x445C94,120,0,0x4458A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPacManPickups::QueryPowerPillsEatenInRace)
static int address;
static int global_address;
static const int id = 0x4333A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4333A0, 0x4333A0, 0x4333A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x445CA8,100,0,0x4458A0,1, 0x445CA8,110,0,0x4458A0,1, 0x445CA8,120,0,0x4458A0,1>;
using def_t = int();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPacManPickups::ResetPowerPillsEatenInRace)
static int address;
static int global_address;
static const int id = 0x4333B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4333B0, 0x4333B0, 0x4333B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4464E3,100,0,0x4458A0,1, 0x4464E3,110,0,0x4458A0,1, 0x4464E3,120,0,0x4458A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPacManPickups::CleanUpPacManStuff)
static int address;
static int global_address;
static const int id = 0x4333C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4333C0, 0x4333C0, 0x4333C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x445CCE,100,0,0x4458A0,1, 0x445CCE,110,0,0x4458A0,1, 0x445CCE,120,0,0x4458A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPacManPickups::StartPacManScramble)
static int address;
static int global_address;
static const int id = 0x4333D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4333D0, 0x4333D0, 0x4333D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x445D8F,100,0,0x4458A0,1, 0x445D8F,110,0,0x4458A0,1, 0x445D8F,120,0,0x4458A0,1>;
using def_t = void(CVector, float, short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector,float,short>, 0,1,2>;
META_END

META_BEGIN(CPacManPickups::QueryPowerPillsCarriedByPlayer)
static int address;
static int global_address;
static const int id = 0x4333F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4333F0, 0x4333F0, 0x4333F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x445DA6,100,0,0x4458A0,1, 0x445DA6,110,0,0x4458A0,1, 0x445DA6,120,0,0x4458A0,1>;
using def_t = unsigned int();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPacManPickups::ResetPowerPillsCarriedByPlayer)
static int address;
static int global_address;
static const int id = 0x433410;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x433410, 0x433410, 0x433410>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x445DCC,100,0,0x4458A0,1, 0x445DCC,110,0,0x4458A0,1, 0x445DCC,120,0,0x4458A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
