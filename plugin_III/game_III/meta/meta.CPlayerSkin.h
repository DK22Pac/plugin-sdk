/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPlayerSkin::Initialise)
static int address;
static int global_address;
static const int id = 0x59B9B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x59B9B0, 0x59BC70, 0x598D60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48BC9F,100,0,0x48BBA0,1, 0x48BD8F,110,0,0x48BC90,1, 0x48BD1F,120,0,0x48BC20,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPlayerSkin::Shutdown)
static int address;
static int global_address;
static const int id = 0x59B9E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x59B9E0, 0x59BCA0, 0x598D90>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48BCE3,100,0,0x48BCB0,1, 0x48BDD3,110,0,0x48BDA0,1, 0x48BD63,120,0,0x48BD30,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPlayerSkin::GetSkinTexture)
static int address;
static int global_address;
static const int id = 0x59B9F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x59B9F0, 0x59BCB0, 0x598DA0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4A1725,100,0,0x4A1700,1, 0x4A173F,100,0,0x4A1700,2, 0x4A1815,110,0,0x4A17F0,1, 0x4A182F,110,0,0x4A17F0,2, 0x4A17A5,120,0,0x4A1780,1, 0x4A17BF,120,0,0x4A1780,2>;
using def_t = RwTexture *(char const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(CPlayerSkin::BeginFrontendSkinEdit)
static int address;
static int global_address;
static const int id = 0x59BC70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x59BC70, 0x59BF30, 0x599020>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4876F7,100,0,0x4856F0,1, 0x4877F4,110,0,0x4857C0,1, 0x4877F4,120,0,0x4857C0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPlayerSkin::EndFrontendSkinEdit)
static int address;
static int global_address;
static const int id = 0x59BCB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x59BCB0, 0x59BF70, 0x599060>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x487D85,100,0,0x4856F0,1, 0x487E85,110,0,0x4857C0,1, 0x487E85,120,0,0x4857C0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPlayerSkin::RenderFrontendSkinEdit)
static int address;
static int global_address;
static const int id = 0x59BCE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x59BCE0, 0x59BFA0, 0x599090>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4806CC,100,0,0x47F2B0,1, 0x48079C,110,0,0x47F380,1, 0x48079C,120,0,0x47F380,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(FindPlayerDff)
static int address;
static int global_address;
static const int id = 0x59BB20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x59BB20, 0x59BDE0, 0x598ED0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x59BBC7,100,0,0x59BBA0,1, 0x59BE87,110,0,0x59BE60,1, 0x598F77,120,0,0x598F50,1>;
using def_t = void(unsigned int &, unsigned int &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int &,unsigned int &>, 0,1>;
META_END

META_BEGIN(LoadPlayerDff)
static int address;
static int global_address;
static const int id = 0x59BBA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x59BBA0, 0x59BE60, 0x598F50>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x59BC70,100,0,0x59BC70,1, 0x59BF30,110,0,0x59BF30,1, 0x599020,120,0,0x599020,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
