/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CHud::ResetWastedText)
static int address;
static int global_address;
static const int id = 0x556570;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x556570, 0x556590, 0x556460>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x42BB4D,100,0,0x42B900,1, 0x42BB4D,110,0,0x42B900,1, 0x42BB1D,120,0,0x42B8D0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN_OVERLOADED(CHud::SetPagerMessage, void (*)(wchar_t const *))
static int address;
static int global_address;
static const int id = 0x5565A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5565A0, 0x5565C0, 0x556490>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x584C26,100,0,0x584B90,1, 0x584C46,110,0,0x584BB0,1, 0x584A56,120,0,0x5849C0,1>;
using def_t = void(wchar_t const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<wchar_t const *>, 0>;
META_END

META_BEGIN_OVERLOADED(CHud::SetBigMessage, void (*)(wchar_t const *, unsigned short))
static int address;
static int global_address;
static const int id = 0x5565B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5565B0, 0x5565D0, 0x5564A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5845C4,100,0,0x584550,1, 0x5845E4,110,0,0x584570,1, 0x5843F4,120,0,0x584380,1>;
using def_t = void(wchar_t const *, unsigned short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<wchar_t const *,unsigned short>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CHud::SetMessage, void (*)(wchar_t const *))
static int address;
static int global_address;
static const int id = 0x5566A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5566A0, 0x5566C0, 0x556590>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x40EDE0,100,0,0x40ED80,1, 0x584634,100,0,0x584550,1, 0x40EDE0,110,0,0x40ED80,1, 0x584654,110,0,0x584570,1, 0x40EDE0,120,0,0x40ED80,1, 0x584464,120,0,0x584380,1>;
using def_t = void(wchar_t const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<wchar_t const *>, 0>;
META_END

META_BEGIN(CHud::DrawAfterFade)
static int address;
static int global_address;
static const int id = 0x5566E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5566E0, 0x556700, 0x5565D0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4A5D3D,100,0,0x4A5C60,1, 0x4A6138,100,0,0x4A5D80,1, 0x4A5D5D,110,0,0x4A5C80,1, 0x4A6158,110,0,0x4A5DA0,1, 0x4A5C0D,120,0,0x4A5B30,1, 0x4A6008,120,0,0x4A5C50,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CHud::Draw)
static int address;
static int global_address;
static const int id = 0x557320;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x557320, 0x557340, 0x557210>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A64D0,100,0,0x4A6190,1, 0x4A64F0,110,0,0x4A61B0,1, 0x4A63A0,120,0,0x4A6060,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CHud::DrawFadeState)
static int address;
static int global_address;
static const int id = 0x55BD20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55BD20, 0x55BD40, 0x55BC10>;
// total references count: 10en (8), 11en (8), steam (8)
using refs_t = RefList<0x558148,100,0,0x557320,1, 0x558174,100,0,0x557320,2, 0x558357,100,0,0x557320,3, 0x558384,100,0,0x557320,4, 0x558954,100,0,0x557320,5, 0x558979,100,0,0x557320,6, 0x558F78,100,0,0x557320,7, 0x558F94,100,0,0x557320,8, 0x558168,110,0,0x557340,1, 0x558194,110,0,0x557340,2, 0x558377,110,0,0x557340,3, 0x5583A4,110,0,0x557340,4, 0x558974,110,0,0x557340,5, 0x558999,110,0,0x557340,6, 0x558F98,110,0,0x557340,7, 0x558FB4,110,0,0x557340,8, 0x558038,120,0,0x557210,1, 0x558064,120,0,0x557210,2, 0x558247,120,0,0x557210,3, 0x558274,120,0,0x557210,4, 0x558844,120,0,0x557210,5, 0x558869,120,0,0x557210,6, 0x558E68,120,0,0x557210,7, 0x558E84,120,0,0x557210,8>;
using def_t = void(DRAW_FADE_STATE, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<DRAW_FADE_STATE,int>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CHud::SetVehicleName, void (*)(wchar_t const *))
static int address;
static int global_address;
static const int id = 0x55BFA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55BFA0, 0x55BFC0, 0x55BE90>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4D1487,100,0,0x4D1400,1, 0x4D14A7,110,0,0x4D1420,1, 0x4D1347,120,0,0x4D12C0,1>;
using def_t = void(wchar_t const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<wchar_t const *>, 0>;
META_END

META_BEGIN(CHud::IsHelpMessageBeingDisplayed)
static int address;
static int global_address;
static const int id = 0x55BFB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55BFB0, 0x55BFD0, 0x55BEA0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4414FC,100,0,0x440030,1, 0x4414FC,110,0,0x440030,1, 0x44146C,120,0,0x43FFA0,1>;
using def_t = bool();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN_OVERLOADED(CHud::SetHelpMessage, void (*)(wchar_t const *, bool, bool))
static int address;
static int global_address;
static const int id = 0x55BFC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55BFC0, 0x55BFE0, 0x55BEB0>;
// total references count: 10en (47), 11en (47), steam (47)
using refs_t = RefList<0x431D16,100,0,0x430A60,1, 0x433880,100,0,0x430A60,2, 0x440B2C,100,0,0x440030,1, 0x44150E,100,0,0x440030,2, 0x441564,100,0,0x440030,3, 0x4415D5,100,0,0x440030,4, 0x45165D,100,0,0x451550,1, 0x45B1AC,100,0,0x458EC0,1, 0x45B1C9,100,0,0x458EC0,2, 0x4ABDE2,100,0,0x4ABD20,1, 0x4ABE44,100,0,0x4ABD20,2, 0x4ABF34,100,0,0x4ABD20,3, 0x4ABFB0,100,0,0x4ABD20,4, 0x4AC000,100,0,0x4ABD20,5, 0x4AC045,100,0,0x4ABD20,6, 0x4AC090,100,0,0x4ABD20,7, 0x4AC0D5,100,0,0x4ABD20,8, 0x4AC120,100,0,0x4ABD20,9, 0x4AC191,100,0,0x4ABD20,10, 0x4AC1E0,100,0,0x4ABD20,11, 0x4AC294,100,0,0x4ABD20,12, 0x4AC374,100,0,0x4ABD20,13, 0x4AC4A2,100,0,0x4ABD20,14, 0x4AC501,100,0,0x4ABD20,15, 0x4AC570,100,0,0x4ABD20,16, 0x4AC5D6,100,0,0x4ABD20,17, 0x4AC635,100,0,0x4ABD20,18, 0x4AC694,100,0,0x4ABD20,19, 0x4AC6F3,100,0,0x4ABD20,20, 0x4AC744,100,0,0x4ABD20,21, 0x4AC7E3,100,0,0x4ABD20,22, 0x4AC840,100,0,0x4ABD20,23, 0x4AC884,100,0,0x4ABD20,24, 0x4AC8C8,100,0,0x4ABD20,25, 0x4AC913,100,0,0x4ABD20,26, 0x4ACBD0,100,0,0x4ABD20,27, 0x4ACCEF,100,0,0x4ABD20,28, 0x4ACD36,100,0,0x4ABD20,29, 0x4ACE80,100,0,0x4ABD20,30, 0x4AE78D,100,0,0x4AE510,1, 0x4AE7F5,100,0,0x4AE7B0,1, 0x4AE90E,100,0,0x4AE8F0,1, 0x4AE95C,100,0,0x4AE8F0,2, 0x4AEAE4,100,0,0x4AEAD0,1, 0x4AEC84,100,0,0x4AEC70,1, 0x4AEE14,100,0,0x4AEE00,1, 0x632524,100,0,0x630650,1, 0x431D16,110,0,0x430A60,1, 0x433880,110,0,0x430A60,2, 0x440B2C,110,0,0x440030,1, 0x44150E,110,0,0x440030,2, 0x441564,110,0,0x440030,3, 0x4415D5,110,0,0x440030,4, 0x45165D,110,0,0x451550,1, 0x45B1AC,110,0,0x458EC0,1, 0x45B1C9,110,0,0x458EC0,2, 0x4ABE02,110,0,0x4ABD40,1, 0x4ABE64,110,0,0x4ABD40,2, 0x4ABF54,110,0,0x4ABD40,3, 0x4ABFD0,110,0,0x4ABD40,4, 0x4AC020,110,0,0x4ABD40,5, 0x4AC065,110,0,0x4ABD40,6, 0x4AC0B0,110,0,0x4ABD40,7, 0x4AC0F5,110,0,0x4ABD40,8, 0x4AC140,110,0,0x4ABD40,9, 0x4AC1B1,110,0,0x4ABD40,10, 0x4AC200,110,0,0x4ABD40,11, 0x4AC2B4,110,0,0x4ABD40,12, 0x4AC394,110,0,0x4ABD40,13, 0x4AC4C2,110,0,0x4ABD40,14, 0x4AC521,110,0,0x4ABD40,15, 0x4AC590,110,0,0x4ABD40,16, 0x4AC5F6,110,0,0x4ABD40,17, 0x4AC655,110,0,0x4ABD40,18, 0x4AC6B4,110,0,0x4ABD40,19, 0x4AC713,110,0,0x4ABD40,20, 0x4AC764,110,0,0x4ABD40,21, 0x4AC803,110,0,0x4ABD40,22, 0x4AC860,110,0,0x4ABD40,23, 0x4AC8A4,110,0,0x4ABD40,24, 0x4AC8E8,110,0,0x4ABD40,25, 0x4AC933,110,0,0x4ABD40,26, 0x4ACBF0,110,0,0x4ABD40,27, 0x4ACD0F,110,0,0x4ABD40,28, 0x4ACD56,110,0,0x4ABD40,29, 0x4ACEA0,110,0,0x4ABD40,30, 0x4AE7AD,110,0,0x4AE530,1, 0x4AE815,110,0,0x4AE7D0,1, 0x4AE92E,110,0,0x4AE910,1, 0x4AE97C,110,0,0x4AE910,2, 0x4AEB04,110,0,0x4AEAF0,1, 0x4AECA4,110,0,0x4AEC90,1, 0x4AEE34,110,0,0x4AEE20,1, 0x632574,110,0,0x6306A0,1, 0x431CE6,120,0,0x430A30,1, 0x433850,120,0,0x430A30,2, 0x440A9C,120,0,0x43FFA0,1, 0x44147E,120,0,0x43FFA0,2, 0x4414D4,120,0,0x43FFA0,3, 0x441545,120,0,0x43FFA0,4, 0x45156D,120,0,0x451460,1, 0x45B08C,120,0,0x458DA0,1, 0x45B0A9,120,0,0x458DA0,2, 0x4ABCB2,120,0,0x4ABBF0,1, 0x4ABD14,120,0,0x4ABBF0,2, 0x4ABE04,120,0,0x4ABBF0,3, 0x4ABE80,120,0,0x4ABBF0,4, 0x4ABED0,120,0,0x4ABBF0,5, 0x4ABF15,120,0,0x4ABBF0,6, 0x4ABF60,120,0,0x4ABBF0,7, 0x4ABFA5,120,0,0x4ABBF0,8, 0x4ABFF0,120,0,0x4ABBF0,9, 0x4AC061,120,0,0x4ABBF0,10, 0x4AC0B0,120,0,0x4ABBF0,11, 0x4AC164,120,0,0x4ABBF0,12, 0x4AC244,120,0,0x4ABBF0,13, 0x4AC372,120,0,0x4ABBF0,14, 0x4AC3D1,120,0,0x4ABBF0,15, 0x4AC440,120,0,0x4ABBF0,16, 0x4AC4A6,120,0,0x4ABBF0,17, 0x4AC505,120,0,0x4ABBF0,18, 0x4AC564,120,0,0x4ABBF0,19, 0x4AC5C3,120,0,0x4ABBF0,20, 0x4AC614,120,0,0x4ABBF0,21, 0x4AC6B3,120,0,0x4ABBF0,22, 0x4AC710,120,0,0x4ABBF0,23, 0x4AC754,120,0,0x4ABBF0,24, 0x4AC798,120,0,0x4ABBF0,25, 0x4AC7E3,120,0,0x4ABBF0,26, 0x4ACAA0,120,0,0x4ABBF0,27, 0x4ACBBF,120,0,0x4ABBF0,28, 0x4ACC06,120,0,0x4ABBF0,29, 0x4ACD50,120,0,0x4ABBF0,30, 0x4AE65D,120,0,0x4AE3E0,1, 0x4AE6C5,120,0,0x4AE680,1, 0x4AE7DE,120,0,0x4AE7C0,1, 0x4AE82C,120,0,0x4AE7C0,2, 0x4AE9B4,120,0,0x4AE9A0,1, 0x4AEB54,120,0,0x4AEB40,1, 0x4AECE4,120,0,0x4AECD0,1, 0x6321E4,120,0,0x630310,1>;
using def_t = void(wchar_t const *, bool, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<wchar_t const *,bool,bool>, 0,1,2>;
META_END

META_BEGIN_OVERLOADED(CHud::SetZoneName, void (*)(wchar_t const *))
static int address;
static int global_address;
static const int id = 0x55C1F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55C1F0, 0x55C210, 0x55C0E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4D15C4,100,0,0x4D14F0,1, 0x4D15E4,110,0,0x4D1510,1, 0x4D1484,120,0,0x4D13B0,1>;
using def_t = void(wchar_t const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<wchar_t const *>, 0>;
META_END

META_BEGIN(CHud::GetRidOfAllHudMessages)
static int address;
static int global_address;
static const int id = 0x55C200;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55C200, 0x55C220, 0x55C0F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x582CD9,100,0,0x582C70,1, 0x582CF9,110,0,0x582C90,1, 0x582B09,120,0,0x582AA0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CHud::ReInitialise)
static int address;
static int global_address;
static const int id = 0x55C440;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55C440, 0x55C460, 0x55C330>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4A4891,100,0,0x4A4850,1, 0x4A4AE9,100,0,0x4A49E0,1, 0x4A48B1,110,0,0x4A4870,1, 0x4A4B09,110,0,0x4A4A00,1, 0x4A4751,120,0,0x4A4710,1, 0x4A49A9,120,0,0x4A48A0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CHud::Shutdown)
static int address;
static int global_address;
static const int id = 0x55C7F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55C7F0, 0x55C810, 0x55C6E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A5117,100,0,0x4A5110,1, 0x4A5137,110,0,0x4A5130,1, 0x4A4FE7,120,0,0x4A4FE0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CHud::Initialise)
static int address;
static int global_address;
static const int id = 0x55C8A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x55C8A0, 0x55C8C0, 0x55C790>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A52A2,100,0,0x4A51A0,1, 0x4A52C2,110,0,0x4A51C0,1, 0x4A5172,120,0,0x4A5070,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
