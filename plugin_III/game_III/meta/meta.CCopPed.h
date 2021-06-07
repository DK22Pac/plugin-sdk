/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN_OVERLOADED(CCopPed, void(eCopType))
static int address;
static int global_address;
static const int id = 0x4C11B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C11B0, 0x4C12A0, 0x4C1230>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x437926,100,0,0x4376A0,1, 0x437946,100,0,0x4376A0,2, 0x43BAC6,100,0,0x43AEA0,1, 0x43E627,100,0,0x43D530,1, 0x4419D6,100,0,0x440CB0,1, 0x4F53A7,100,0,0x4F5280,1, 0x437926,110,0,0x4376A0,1, 0x437946,110,0,0x4376A0,2, 0x43BAC6,110,0,0x43AEA0,1, 0x43E627,110,0,0x43D530,1, 0x4419D6,110,0,0x440CB0,1, 0x4F5457,110,0,0x4F5330,1, 0x437926,120,0,0x4376A0,1, 0x437946,120,0,0x4376A0,2, 0x43BAC6,120,0,0x43AEA0,1, 0x43E627,120,0,0x43D530,1, 0x4419D6,120,0,0x440CB0,1, 0x4F53E7,120,0,0x4F52C0,1>;
using def_t = CCopPed *(CCopPed *, eCopType);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCopPed *,eCopType>, 0,1>;
META_END

DTOR_META_BEGIN(CCopPed)
static int address;
static int global_address;
static const int id = 0x4C13E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C13E0, 0x4C14D0, 0x4C1460>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4C2E23,100,0,0x4C2E00,1, 0x4C2E14,100,2,0,1, 0x4C2EC3,110,0,0x4C2EA0,1, 0x4C2EB4,110,2,0,1, 0x4C2E53,120,0,0x4C2E30,1, 0x4C2E44,120,2,0,1>;
using def_t = void(CCopPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCopPed *>, 0>;
META_END

META_BEGIN(CCopPed::ProcessControl)
static int address;
static int global_address;
static const int id = 0x4C1400;
static const bool is_virtual = true;
static const int vtable_index = 8;
using mv_addresses_t = MvAddresses<0x4C1400, 0x4C14F0, 0x4C1480>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F82C4,100,2,0x5F82A4,1, 0x5F808C,110,2,0x5F808C,1, 0x605084,120,2,0x605084,1>;
using def_t = void(CCopPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCopPed *>, 0>;
META_END

META_BEGIN(CCopPed::CopAI)
static int address;
static int global_address;
static const int id = 0x4C1B50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C1B50, 0x4C1BF0, 0x4C1B80>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4C1656,100,0,0x4C1400,1, 0x4C1662,100,0,0x4C1400,2, 0x4C166E,100,0,0x4C1400,3, 0x4C1677,100,0,0x4C1400,4, 0x4C1746,110,0,0x4C14F0,1, 0x4C1752,110,0,0x4C14F0,2, 0x4C175E,110,0,0x4C14F0,3, 0x4C1767,110,0,0x4C14F0,4, 0x4C16D6,120,0,0x4C1480,1, 0x4C16E2,120,0,0x4C1480,2, 0x4C16EE,120,0,0x4C1480,3, 0x4C16F7,120,0,0x4C1480,4>;
using def_t = void(CCopPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCopPed *>, 0>;
META_END

META_BEGIN(CCopPed::ScanForCrimes)
static int address;
static int global_address;
static const int id = 0x4C26A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C26A0, 0x4C2740, 0x4C26D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4C1702,100,0,0x4C1400,1, 0x4C17F2,110,0,0x4C14F0,1, 0x4C1782,120,0,0x4C1480,1>;
using def_t = void(CCopPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCopPed *>, 0>;
META_END

META_BEGIN(CCopPed::SetPursuit)
static int address;
static int global_address;
static const int id = 0x4C27D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C27D0, 0x4C2870, 0x4C2800>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4C1E6A,100,0,0x4C1B50,1, 0x4C2230,100,0,0x4C1B50,2, 0x4C23DF,100,0,0x4C1B50,3, 0x4C1F0A,110,0,0x4C1BF0,1, 0x4C22D0,110,0,0x4C1BF0,2, 0x4C247F,110,0,0x4C1BF0,3, 0x4C1E9A,120,0,0x4C1B80,1, 0x4C2260,120,0,0x4C1B80,2, 0x4C240F,120,0,0x4C1B80,3>;
using def_t = void(CCopPed *, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCopPed *,bool>, 0,1>;
META_END

META_BEGIN(CCopPed::ClearPursuit)
static int address;
static int global_address;
static const int id = 0x4C28C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C28C0, 0x4C2960, 0x4C28F0>;
// total references count: 10en (14), 11en (14), steam (14)
using refs_t = RefList<0x4B5B60,100,0,0x4B5A60,1, 0x4C13E9,100,0,0x4C13E0,1, 0x4C1453,100,0,0x4C1400,1, 0x4C1BBC,100,0,0x4C1B50,1, 0x4C1C69,100,0,0x4C1B50,2, 0x4C1CFA,100,0,0x4C1B50,3, 0x4C1E02,100,0,0x4C1B50,4, 0x4C1E3D,100,0,0x4C1B50,5, 0x4C1E5B,100,0,0x4C1B50,6, 0x4C1F3F,100,0,0x4C1B50,7, 0x4C243F,100,0,0x4C1B50,8, 0x4C24D0,100,0,0x4C1B50,9, 0x4C2CAD,100,0,0x4C2C90,1, 0x4C2D1E,100,0,0x4C2C90,2, 0x4B5C50,110,0,0x4B5B50,1, 0x4C14D9,110,0,0x4C14D0,1, 0x4C1543,110,0,0x4C14F0,1, 0x4C1C5C,110,0,0x4C1BF0,1, 0x4C1D09,110,0,0x4C1BF0,2, 0x4C1D9A,110,0,0x4C1BF0,3, 0x4C1EA2,110,0,0x4C1BF0,4, 0x4C1EDD,110,0,0x4C1BF0,5, 0x4C1EFB,110,0,0x4C1BF0,6, 0x4C1FDF,110,0,0x4C1BF0,7, 0x4C24DF,110,0,0x4C1BF0,8, 0x4C2570,110,0,0x4C1BF0,9, 0x4C2D4D,110,0,0x4C2D30,1, 0x4C2DBE,110,0,0x4C2D30,2, 0x4B5BE0,120,0,0x4B5AE0,1, 0x4C1469,120,0,0x4C1460,1, 0x4C14D3,120,0,0x4C1480,1, 0x4C1BEC,120,0,0x4C1B80,1, 0x4C1C99,120,0,0x4C1B80,2, 0x4C1D2A,120,0,0x4C1B80,3, 0x4C1E32,120,0,0x4C1B80,4, 0x4C1E6D,120,0,0x4C1B80,5, 0x4C1E8B,120,0,0x4C1B80,6, 0x4C1F6F,120,0,0x4C1B80,7, 0x4C246F,120,0,0x4C1B80,8, 0x4C2500,120,0,0x4C1B80,9, 0x4C2CDD,120,0,0x4C2CC0,1, 0x4C2D4E,120,0,0x4C2CC0,2>;
using def_t = void(CCopPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCopPed *>, 0>;
META_END

META_BEGIN(CCopPed::SetArrestPlayer)
static int address;
static int global_address;
static const int id = 0x4C2B00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C2B00, 0x4C2BA0, 0x4C2B30>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x4C15BB,100,0,0x4C1400,1, 0x4C1A0C,100,0,0x4C1400,2, 0x4DB512,100,0,0x4D94E0,1, 0x4DE83B,100,0,0x4DE500,1, 0x4DE97A,100,0,0x4DE500,2, 0x4C16AB,110,0,0x4C14F0,1, 0x4C1AB3,110,0,0x4C14F0,2, 0x4DB5B2,110,0,0x4D9580,1, 0x4DE8EB,110,0,0x4DE5B0,1, 0x4DEA2A,110,0,0x4DE5B0,2, 0x4C163B,120,0,0x4C1480,1, 0x4C1A43,120,0,0x4C1480,2, 0x4DB542,120,0,0x4D9510,1, 0x4DE87B,120,0,0x4DE540,1, 0x4DE9BA,120,0,0x4DE540,2>;
using def_t = void(CCopPed *, CPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCopPed *,CPed *>, 0,1>;
META_END

META_BEGIN(CCopPed::ArrestPlayer)
static int address;
static int global_address;
static const int id = 0x4C2C90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4C2C90, 0x4C2D30, 0x4C2CC0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4C1487,100,0,0x4C1400,1, 0x4C1577,110,0,0x4C14F0,1, 0x4C1507,120,0,0x4C1480,1>;
using def_t = void(CCopPed *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCopPed *>, 0>;
META_END

DEL_DTOR_META_BEGIN(CCopPed)
static int address;
static int global_address;
static const int id = 0x4C2E00;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x4C2E00, 0x4C2EA0, 0x4C2E30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F82A4,100,2,0x5F82A4,1, 0x5F808C,110,2,0x5F808C,1, 0x605084,120,2,0x605084,1>;
using def_t = void(CCopPed *, char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCopPed *,char>, 0,1>;
META_END

}
