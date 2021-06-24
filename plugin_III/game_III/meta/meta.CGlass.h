/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CGlass::Init)
static int address;
static int global_address;
static const int id = 0x501F20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x501F20, 0x502000, 0x501F90>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48C243,100,0,0x48BED0,1, 0x48C566,100,0,0x48C4B0,1, 0x48C333,110,0,0x48BFC0,1, 0x48C666,110,0,0x48C5B0,1, 0x48C2C3,120,0,0x48BF50,1, 0x48C5F6,120,0,0x48C540,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGlass::Update)
static int address;
static int global_address;
static const int id = 0x502050;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x502050, 0x502130, 0x5020C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C91D,100,0,0x48C850,1, 0x48CA1D,110,0,0x48C950,1, 0x48C9AD,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGlass::Render)
static int address;
static int global_address;
static const int id = 0x502350;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x502350, 0x502430, 0x5023C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48E090,100,0,0x48E090,1, 0x48E150,110,0,0x48E150,1, 0x48E0E0,120,0,0x48E0E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGlass::FindFreePane)
static int address;
static int global_address;
static const int id = 0x502490;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x502490, 0x502570, 0x502500>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x502FA2,100,0,0x502AC0,1, 0x503082,110,0,0x502BA0,1, 0x503012,120,0,0x502B30,1>;
using def_t = CFallingGlassPane *();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGlass::GeneratePanesForWindow)
static int address;
static int global_address;
static const int id = 0x502AC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x502AC0, 0x502BA0, 0x502B30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50460F,100,0,0x503F10,1, 0x5046EF,110,0,0x503FF0,1, 0x50467F,120,0,0x503F80,1>;
using def_t = void(unsigned int, CVector, CVector, CVector, CVector, CVector, float, bool, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int,CVector,CVector,CVector,CVector,CVector,float,bool,bool>, 0,1,2,3,4,5,6,7,8>;
META_END

META_BEGIN(CGlass::AskForObjectToBeRenderedInGlass)
static int address;
static int global_address;
static const int id = 0x5033F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5033F0, 0x5034D0, 0x503460>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x475A24,100,0,0x475A20,1, 0x475A24,110,0,0x475A20,1, 0x475A24,120,0,0x475A20,1>;
using def_t = void(CEntity *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *>, 0>;
META_END

META_BEGIN(CGlass::RenderEntityInGlass)
static int address;
static int global_address;
static const int id = 0x503420;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x503420, 0x503500, 0x503490>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50242A,100,0,0x502350,1, 0x50250A,110,0,0x502430,1, 0x50249A,120,0,0x5023C0,1>;
using def_t = void(CEntity *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *>, 0>;
META_END

META_BEGIN(CGlass::CalcAlphaWithNormal)
static int address;
static int global_address;
static const int id = 0x503C90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x503C90, 0x503D70, 0x503D00>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x502540,100,0,0x5024C0,1, 0x5034E9,100,0,0x503420,1, 0x502620,110,0,0x5025A0,1, 0x5035C9,110,0,0x503500,1, 0x5025B0,120,0,0x502530,1, 0x503559,120,0,0x503490,1>;
using def_t = int(CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector *>, 0>;
META_END

META_BEGIN(CGlass::RenderHiLightPolys)
static int address;
static int global_address;
static const int id = 0x503D60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x503D60, 0x503E40, 0x503DD0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x502443,100,0,0x502350,1, 0x5025C8,100,0,0x5024C0,1, 0x502523,110,0,0x502430,1, 0x5026A8,110,0,0x5025A0,1, 0x5024B3,120,0,0x5023C0,1, 0x502638,120,0,0x502530,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGlass::RenderShatteredPolys)
static int address;
static int global_address;
static const int id = 0x503DE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x503DE0, 0x503EC0, 0x503E50>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x502448,100,0,0x502350,1, 0x502896,100,0,0x5024C0,1, 0x5036E2,100,0,0x503420,1, 0x502528,110,0,0x502430,1, 0x502976,110,0,0x5025A0,1, 0x5037C2,110,0,0x503500,1, 0x5024B8,120,0,0x5023C0,1, 0x502906,120,0,0x502530,1, 0x503752,120,0,0x503490,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGlass::RenderReflectionPolys)
static int address;
static int global_address;
static const int id = 0x503E70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x503E70, 0x503F50, 0x503EE0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x50244D,100,0,0x502350,1, 0x50391A,100,0,0x503420,1, 0x50252D,110,0,0x502430,1, 0x5039FA,110,0,0x503500,1, 0x5024BD,120,0,0x5023C0,1, 0x50398A,120,0,0x503490,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CGlass::WindowRespondsToCollision)
static int address;
static int global_address;
static const int id = 0x503F10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x503F10, 0x503FF0, 0x503F80>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x49761C,100,0,0x4973A0,1, 0x497C4A,100,0,0x4973A0,2, 0x504779,100,0,0x504670,1, 0x50483D,100,0,0x504790,1, 0x4976DC,110,0,0x497460,1, 0x497D0A,110,0,0x497460,2, 0x504859,110,0,0x504750,1, 0x50491D,110,0,0x504870,1, 0x49766C,120,0,0x4973F0,1, 0x497C9A,120,0,0x4973F0,2, 0x5047E9,120,0,0x5046E0,1, 0x5048AD,120,0,0x504800,1>;
using def_t = void(CEntity *, float, CVector, CVector, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *,float,CVector,CVector,bool>, 0,1,2,3,4>;
META_END

META_BEGIN(CGlass::WindowRespondsToSoftCollision)
static int address;
static int global_address;
static const int id = 0x504630;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x504630, 0x504710, 0x5046A0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4976E3,100,0,0x4973A0,1, 0x497DAD,100,0,0x4973A0,2, 0x4977A3,110,0,0x497460,1, 0x497E6D,110,0,0x497460,2, 0x497733,120,0,0x4973F0,1, 0x497DFD,120,0,0x4973F0,2>;
using def_t = void(CEntity *, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *,float>, 0,1>;
META_END

META_BEGIN(CGlass::WasGlassHitByBullet)
static int address;
static int global_address;
static const int id = 0x504670;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x504670, 0x504750, 0x5046E0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x558C2A,100,0,0x558550,1, 0x55F9A4,100,0,0x55F950,1, 0x560EEB,100,0,0x560620,1, 0x562D43,100,0,0x5624D0,1, 0x558D5A,110,0,0x558680,1, 0x55FAD4,110,0,0x55FA80,1, 0x56101B,110,0,0x560750,1, 0x562E73,110,0,0x562600,1, 0x558D0A,120,0,0x558630,1, 0x55FA84,120,0,0x55FA30,1, 0x560FCB,120,0,0x560700,1, 0x562E23,120,0,0x5625B0,1>;
using def_t = void(CEntity *, CVector);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *,CVector>, 0,1>;
META_END

META_BEGIN(CGlass::WindowRespondsToExplosion)
static int address;
static int global_address;
static const int id = 0x504790;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x504790, 0x504870, 0x504800>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4B1536,100,0,0x4B1340,1, 0x4B1626,110,0,0x4B1430,1, 0x4B15B6,120,0,0x4B13C0,1>;
using def_t = void(CEntity *, CVector);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CEntity *,CVector>, 0,1>;
META_END

}
