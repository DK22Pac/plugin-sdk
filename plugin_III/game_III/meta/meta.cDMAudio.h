/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(cDMAudio::Initialise)
static int address;
static int global_address;
static const int id = 0x57C760;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C760, 0x57CAB0, 0x57C9B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48BD68,100,0,0x48BD50,1, 0x48BE58,110,0,0x48BE40,1, 0x48BDE8,120,0,0x48BDD0,1>;
using def_t = void(cDMAudio *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *>, 0>;
META_END

META_BEGIN(cDMAudio::Terminate)
static int address;
static int global_address;
static const int id = 0x57C780;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C780, 0x57CAD0, 0x57C9D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x583028,100,0,0x582710,1, 0x583368,110,0,0x582A50,1, 0x583258,120,0,0x582940,1>;
using def_t = void(cDMAudio *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *>, 0>;
META_END

META_BEGIN(cDMAudio::Service)
static int address;
static int global_address;
static const int id = 0x57C7A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C7A0, 0x57CAF0, 0x57C9F0>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x40B801,100,0,0x40B5B0,1, 0x4852A5,100,0,0x485100,1, 0x4856DD,100,0,0x485100,2, 0x487AE5,100,0,0x4856F0,1, 0x48AB85,100,0,0x48AB40,1, 0x48E4A5,100,0,0x48E480,1, 0x589D80,100,0,0x589D00,1, 0x40B801,110,0,0x40B5B0,1, 0x485375,110,0,0x4851D0,1, 0x4857AD,110,0,0x4851D0,2, 0x487BE5,110,0,0x4857C0,1, 0x48AC95,110,0,0x48AC50,1, 0x48E565,110,0,0x48E540,1, 0x58A0C0,110,0,0x58A040,1, 0x40B801,120,0,0x40B5B0,1, 0x485375,120,0,0x4851D0,1, 0x4857AD,120,0,0x4851D0,2, 0x487BE5,120,0,0x4857C0,1, 0x48AC95,120,0,0x48AC50,1, 0x48E4F5,120,0,0x48E4D0,1, 0x589FB0,120,0,0x589F30,1>;
using def_t = void(cDMAudio *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *>, 0>;
META_END

META_BEGIN(cDMAudio::CreateEntity)
static int address;
static int global_address;
static const int id = 0x57C7C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C7C0, 0x57CB10, 0x57CA10>;
// total references count: 10en (10), 11en (10), steam (10)
using refs_t = RefList<0x421D99,100,0,0x421C60,1, 0x4BC34A,100,0,0x4BC330,1, 0x4C4CB0,100,0,0x4C41C0,1, 0x522BEF,100,0,0x522BA0,1, 0x543506,100,0,0x543440,1, 0x545719,100,0,0x5454D0,1, 0x550F3C,100,0,0x550A60,1, 0x5590D5,100,0,0x559030,1, 0x596B8E,100,0,0x5966E0,1, 0x596DA9,100,0,0x5966E0,2, 0x421D99,110,0,0x421C60,1, 0x4BC43A,110,0,0x4BC420,1, 0x4C4D50,110,0,0x4C4260,1, 0x522E2F,110,0,0x522DE0,1, 0x543746,110,0,0x543680,1, 0x545929,110,0,0x5456E0,1, 0x55107C,110,0,0x550BA0,1, 0x559205,110,0,0x559160,1, 0x596E3E,110,0,0x596990,1, 0x597059,110,0,0x596990,2, 0x421D99,120,0,0x421C60,1, 0x4BC3CA,120,0,0x4BC3B0,1, 0x4C4CE0,120,0,0x4C41F0,1, 0x522DBF,120,0,0x522D70,1, 0x5436F6,120,0,0x543630,1, 0x5458D9,120,0,0x545690,1, 0x55102C,120,0,0x550B50,1, 0x5591B5,120,0,0x559110,1, 0x596D2E,120,0,0x596880,1, 0x596F49,120,0,0x596880,2>;
using def_t = int(cDMAudio *, eAudioType, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,eAudioType,void *>, 0,1,2>;
META_END

META_BEGIN(cDMAudio::DestroyEntity)
static int address;
static int global_address;
static const int id = 0x57C7F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C7F0, 0x57CB40, 0x57CA40>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x421E2E,100,0,0x421E10,1, 0x4BC3AE,100,0,0x4BC390,1, 0x4C51F7,100,0,0x4C50D0,1, 0x551061,100,0,0x551040,1, 0x55911F,100,0,0x559100,1, 0x421E2E,110,0,0x421E10,1, 0x4BC49E,110,0,0x4BC480,1, 0x4C5297,110,0,0x4C5170,1, 0x5511A1,110,0,0x551180,1, 0x55924F,110,0,0x559230,1, 0x421E2E,120,0,0x421E10,1, 0x4BC42E,120,0,0x4BC410,1, 0x4C5227,120,0,0x4C5100,1, 0x551151,120,0,0x551130,1, 0x5591FF,120,0,0x5591E0,1>;
using def_t = void(cDMAudio *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,int>, 0,1>;
META_END

META_BEGIN(cDMAudio::SetEntityStatus)
static int address;
static int global_address;
static const int id = 0x57C810;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C810, 0x57CB60, 0x57CA60>;
// total references count: 10en (12), 11en (12), steam (12)
using refs_t = RefList<0x421DAF,100,0,0x421C60,1, 0x4AE953,100,0,0x4AE930,1, 0x4AE9F3,100,0,0x4AE9D0,1, 0x4BC36E,100,0,0x4BC330,1, 0x4C4CCB,100,0,0x4C41C0,1, 0x522C05,100,0,0x522BA0,1, 0x54352C,100,0,0x543440,1, 0x545736,100,0,0x5454D0,1, 0x550F5B,100,0,0x550A60,1, 0x5590EB,100,0,0x559030,1, 0x596BA1,100,0,0x5966E0,1, 0x596DBC,100,0,0x5966E0,2, 0x421DAF,110,0,0x421C60,1, 0x4AEA43,110,0,0x4AEA20,1, 0x4AEAE3,110,0,0x4AEAC0,1, 0x4BC45E,110,0,0x4BC420,1, 0x4C4D6B,110,0,0x4C4260,1, 0x522E45,110,0,0x522DE0,1, 0x54376C,110,0,0x543680,1, 0x545946,110,0,0x5456E0,1, 0x55109B,110,0,0x550BA0,1, 0x55921B,110,0,0x559160,1, 0x596E51,110,0,0x596990,1, 0x59706C,110,0,0x596990,2, 0x421DAF,120,0,0x421C60,1, 0x4AE9D3,120,0,0x4AE9B0,1, 0x4AEA73,120,0,0x4AEA50,1, 0x4BC3EE,120,0,0x4BC3B0,1, 0x4C4CFB,120,0,0x4C41F0,1, 0x522DD5,120,0,0x522D70,1, 0x54371C,120,0,0x543630,1, 0x5458F6,120,0,0x545690,1, 0x55104B,120,0,0x550B50,1, 0x5591CB,120,0,0x559110,1, 0x596D41,120,0,0x596880,1, 0x596F5C,120,0,0x596880,2>;
using def_t = void(cDMAudio *, int, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,int,unsigned char>, 0,1,2>;
META_END

META_BEGIN(cDMAudio::PlayOneShot)
static int address;
static int global_address;
static const int id = 0x57C840;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C840, 0x57CB90, 0x57CA90>;
// total references count: 10en (89), 11en (89), steam (89)
using refs_t = RefList<0x422646,100,0,0x4222D0,1, 0x422BC6,100,0,0x4222D0,2, 0x422D96,100,0,0x4222D0,3, 0x422FB6,100,0,0x4222D0,4, 0x423205,100,0,0x4222D0,5, 0x423356,100,0,0x4222D0,6, 0x4235F9,100,0,0x4222D0,7, 0x423826,100,0,0x4222D0,8, 0x423B29,100,0,0x4222D0,9, 0x423D66,100,0,0x4222D0,10, 0x423E39,100,0,0x4222D0,11, 0x423EF6,100,0,0x4222D0,12, 0x4241A6,100,0,0x4222D0,13, 0x4242A9,100,0,0x4222D0,14, 0x4244E6,100,0,0x4222D0,15, 0x424636,100,0,0x4222D0,16, 0x424716,100,0,0x4222D0,17, 0x4247D9,100,0,0x4222D0,18, 0x424886,100,0,0x4222D0,19, 0x424A19,100,0,0x4222D0,20, 0x424CAC,100,0,0x4222D0,21, 0x424E65,100,0,0x4222D0,22, 0x424F66,100,0,0x4222D0,23, 0x4C0206,100,0,0x4BFFE0,1, 0x4C8559,100,0,0x4C7FF0,1, 0x4C8F38,100,0,0x4C8910,1, 0x4CC80C,100,0,0x4CC6C0,1, 0x4CC9F6,100,0,0x4CC6C0,2, 0x4CF616,100,0,0x4CF220,1, 0x4D0EA7,100,0,0x4D0E40,1, 0x4D0EE8,100,0,0x4D0E40,2, 0x4D7F3E,100,0,0x4D7D20,1, 0x4E596D,100,0,0x4E5870,1, 0x4E6F81,100,0,0x4E6BA0,1, 0x4E7364,100,0,0x4E6BA0,2, 0x4E8EA8,100,0,0x4E8E20,1, 0x4EBDC1,100,0,0x4EB9A0,1, 0x4EBF5F,100,0,0x4EB9A0,2, 0x4ECCA8,100,0,0x4EC430,1, 0x522E72,100,0,0x522C10,1, 0x52D657,100,0,0x52D4E0,1, 0x52D789,100,0,0x52D4E0,2, 0x52D8D6,100,0,0x52D4E0,3, 0x52DA4B,100,0,0x52D4E0,4, 0x52DAA3,100,0,0x52D4E0,5, 0x52DC6A,100,0,0x52D4E0,6, 0x52DDE6,100,0,0x52D4E0,7, 0x52E44E,100,0,0x52D4E0,8, 0x52E4A2,100,0,0x52D4E0,9, 0x52E4D6,100,0,0x52D4E0,10, 0x52E839,100,0,0x52E750,1, 0x52E89F,100,0,0x52E750,2, 0x52FD0D,100,0,0x52F390,1, 0x52FF6F,100,0,0x52F390,2, 0x530D6E,100,0,0x5308D0,1, 0x53142C,100,0,0x5308D0,2, 0x53175C,100,0,0x531470,1, 0x532106,100,0,0x531470,2, 0x53211C,100,0,0x531470,3, 0x5333E8,100,0,0x531470,4, 0x533431,100,0,0x531470,5, 0x534872,100,0,0x531470,6, 0x53B51A,100,0,0x53B270,1, 0x53D246,100,0,0x53CFD0,1, 0x53D6DE,100,0,0x53D530,1, 0x540FB5,100,0,0x53EF10,1, 0x543E76,100,0,0x543AC0,1, 0x549240,100,0,0x547CC0,1, 0x549582,100,0,0x547CC0,2, 0x54CF52,100,0,0x54C1D0,1, 0x54FDEE,100,0,0x54F800,1, 0x54FE84,100,0,0x54F800,2, 0x551D33,100,0,0x551C90,1, 0x558B74,100,0,0x558550,1, 0x558B93,100,0,0x558550,2, 0x55C7C6,100,0,0x55C380,1, 0x55C808,100,0,0x55C380,2, 0x55C996,100,0,0x55C940,1, 0x560541,100,0,0x55F950,1, 0x560560,100,0,0x55F950,2, 0x561781,100,0,0x560620,1, 0x5617A0,100,0,0x560620,2, 0x562D91,100,0,0x5624D0,1, 0x562DAC,100,0,0x5624D0,2, 0x563A6A,100,0,0x563A10,1, 0x563AD2,100,0,0x563A10,2, 0x563EA0,100,0,0x563B00,1, 0x563EBF,100,0,0x563B00,2, 0x564619,100,0,0x564300,1, 0x422646,110,0,0x4222D0,1, 0x422BC6,110,0,0x4222D0,2, 0x422D96,110,0,0x4222D0,3, 0x422FB6,110,0,0x4222D0,4, 0x423205,110,0,0x4222D0,5, 0x423356,110,0,0x4222D0,6, 0x4235F9,110,0,0x4222D0,7, 0x423826,110,0,0x4222D0,8, 0x423B29,110,0,0x4222D0,9, 0x423D66,110,0,0x4222D0,10, 0x423E39,110,0,0x4222D0,11, 0x423EF6,110,0,0x4222D0,12, 0x4241A6,110,0,0x4222D0,13, 0x4242A9,110,0,0x4222D0,14, 0x4244E6,110,0,0x4222D0,15, 0x424636,110,0,0x4222D0,16, 0x424716,110,0,0x4222D0,17, 0x4247D9,110,0,0x4222D0,18, 0x424886,110,0,0x4222D0,19, 0x424A19,110,0,0x4222D0,20, 0x424CAC,110,0,0x4222D0,21, 0x424E65,110,0,0x4222D0,22, 0x424F66,110,0,0x4222D0,23, 0x4C02F6,110,0,0x4C00D0,1, 0x4C85F9,110,0,0x4C8090,1, 0x4C8FD8,110,0,0x4C89B0,1, 0x4CC8AC,110,0,0x4CC760,1, 0x4CCA96,110,0,0x4CC760,2, 0x4CF6B6,110,0,0x4CF2C0,1, 0x4D0F47,110,0,0x4D0EE0,1, 0x4D0F88,110,0,0x4D0EE0,2, 0x4D7FDE,110,0,0x4D7DC0,1, 0x4E5A1D,110,0,0x4E5920,1, 0x4E7031,110,0,0x4E6C50,1, 0x4E7414,110,0,0x4E6C50,2, 0x4E8F58,110,0,0x4E8ED0,1, 0x4EBE71,110,0,0x4EBA50,1, 0x4EC00F,110,0,0x4EBA50,2, 0x4ECD58,110,0,0x4EC4E0,1, 0x5230B2,110,0,0x522E50,1, 0x52D897,110,0,0x52D720,1, 0x52D9C9,110,0,0x52D720,2, 0x52DB16,110,0,0x52D720,3, 0x52DC8B,110,0,0x52D720,4, 0x52DCE3,110,0,0x52D720,5, 0x52DEAA,110,0,0x52D720,6, 0x52E026,110,0,0x52D720,7, 0x52E68E,110,0,0x52D720,8, 0x52E6E2,110,0,0x52D720,9, 0x52E716,110,0,0x52D720,10, 0x52EA79,110,0,0x52E990,1, 0x52EADF,110,0,0x52E990,2, 0x52FF4D,110,0,0x52F5D0,1, 0x5301AF,110,0,0x52F5D0,2, 0x530FAE,110,0,0x530B10,1, 0x53166C,110,0,0x530B10,2, 0x53199C,110,0,0x5316B0,1, 0x532346,110,0,0x5316B0,2, 0x53235C,110,0,0x5316B0,3, 0x533628,110,0,0x5316B0,4, 0x533671,110,0,0x5316B0,5, 0x534AB2,110,0,0x5316B0,6, 0x53B75A,110,0,0x53B4B0,1, 0x53D486,110,0,0x53D210,1, 0x53D91E,110,0,0x53D770,1, 0x5411F5,110,0,0x53F150,1, 0x5440B6,110,0,0x543D00,1, 0x549440,110,0,0x547EC0,1, 0x549782,110,0,0x547EC0,2, 0x54D0D2,110,0,0x54C350,1, 0x54FF2E,110,0,0x54F940,1, 0x54FFC4,110,0,0x54F940,2, 0x551E73,110,0,0x551DD0,1, 0x558CA4,110,0,0x558680,1, 0x558CC3,110,0,0x558680,2, 0x55C8F6,110,0,0x55C4B0,1, 0x55C938,110,0,0x55C4B0,2, 0x55CAC6,110,0,0x55CA70,1, 0x560671,110,0,0x55FA80,1, 0x560690,110,0,0x55FA80,2, 0x5618B1,110,0,0x560750,1, 0x5618D0,110,0,0x560750,2, 0x562EC1,110,0,0x562600,1, 0x562EDC,110,0,0x562600,2, 0x563B9A,110,0,0x563B40,1, 0x563C02,110,0,0x563B40,2, 0x563FD0,110,0,0x563C30,1, 0x563FEF,110,0,0x563C30,2, 0x564749,110,0,0x564430,1, 0x422646,120,0,0x4222D0,1, 0x422BC6,120,0,0x4222D0,2, 0x422D96,120,0,0x4222D0,3, 0x422FB6,120,0,0x4222D0,4, 0x423205,120,0,0x4222D0,5, 0x423356,120,0,0x4222D0,6, 0x4235F9,120,0,0x4222D0,7, 0x423826,120,0,0x4222D0,8, 0x423B29,120,0,0x4222D0,9, 0x423D66,120,0,0x4222D0,10, 0x423E39,120,0,0x4222D0,11, 0x423EF6,120,0,0x4222D0,12, 0x4241A6,120,0,0x4222D0,13, 0x4242A9,120,0,0x4222D0,14, 0x4244E6,120,0,0x4222D0,15, 0x424636,120,0,0x4222D0,16, 0x424716,120,0,0x4222D0,17, 0x4247D9,120,0,0x4222D0,18, 0x424886,120,0,0x4222D0,19, 0x424A19,120,0,0x4222D0,20, 0x424CAC,120,0,0x4222D0,21, 0x424E65,120,0,0x4222D0,22, 0x424F66,120,0,0x4222D0,23, 0x4C0286,120,0,0x4C0060,1, 0x4C8589,120,0,0x4C8020,1, 0x4C8F68,120,0,0x4C8940,1, 0x4CC83C,120,0,0x4CC6F0,1, 0x4CCA26,120,0,0x4CC6F0,2, 0x4CF646,120,0,0x4CF250,1, 0x4D0ED7,120,0,0x4D0E70,1, 0x4D0F18,120,0,0x4D0E70,2, 0x4D7F6E,120,0,0x4D7D50,1, 0x4E59AD,120,0,0x4E58B0,1, 0x4E6FC1,120,0,0x4E6BE0,1, 0x4E73A4,120,0,0x4E6BE0,2, 0x4E8EE8,120,0,0x4E8E60,1, 0x4EBE01,120,0,0x4EB9E0,1, 0x4EBF9F,120,0,0x4EB9E0,2, 0x4ECCE8,120,0,0x4EC470,1, 0x523042,120,0,0x522DE0,1, 0x52D827,120,0,0x52D6B0,1, 0x52D959,120,0,0x52D6B0,2, 0x52DAA6,120,0,0x52D6B0,3, 0x52DC1B,120,0,0x52D6B0,4, 0x52DC73,120,0,0x52D6B0,5, 0x52DE3A,120,0,0x52D6B0,6, 0x52DFB6,120,0,0x52D6B0,7, 0x52E61E,120,0,0x52D6B0,8, 0x52E672,120,0,0x52D6B0,9, 0x52E6A6,120,0,0x52D6B0,10, 0x52EA09,120,0,0x52E920,1, 0x52EA6F,120,0,0x52E920,2, 0x52FEDD,120,0,0x52F560,1, 0x53013F,120,0,0x52F560,2, 0x530F3E,120,0,0x530AA0,1, 0x5315FC,120,0,0x530AA0,2, 0x53192C,120,0,0x531640,1, 0x5322D6,120,0,0x531640,2, 0x5322EC,120,0,0x531640,3, 0x5335B8,120,0,0x531640,4, 0x533601,120,0,0x531640,5, 0x534A42,120,0,0x531640,6, 0x53B70A,120,0,0x53B460,1, 0x53D436,120,0,0x53D1C0,1, 0x53D8CE,120,0,0x53D720,1, 0x5411A5,120,0,0x53F100,1, 0x544066,120,0,0x543CB0,1, 0x5493F0,120,0,0x547E70,1, 0x549732,120,0,0x547E70,2, 0x54D082,120,0,0x54C300,1, 0x54FEDE,120,0,0x54F8F0,1, 0x54FF74,120,0,0x54F8F0,2, 0x551E23,120,0,0x551D80,1, 0x558C54,120,0,0x558630,1, 0x558C73,120,0,0x558630,2, 0x55C8A6,120,0,0x55C460,1, 0x55C8E8,120,0,0x55C460,2, 0x55CA76,120,0,0x55CA20,1, 0x560621,120,0,0x55FA30,1, 0x560640,120,0,0x55FA30,2, 0x561861,120,0,0x560700,1, 0x561880,120,0,0x560700,2, 0x562E71,120,0,0x5625B0,1, 0x562E8C,120,0,0x5625B0,2, 0x563B4A,120,0,0x563AF0,1, 0x563BB2,120,0,0x563AF0,2, 0x563F80,120,0,0x563BE0,1, 0x563F9F,120,0,0x563BE0,2, 0x5646F9,120,0,0x5643E0,1>;
using def_t = void(cDMAudio *, int, unsigned short, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,int,unsigned short,float>, 0,1,2,3>;
META_END

META_BEGIN(cDMAudio::DestroyAllGameCreatedEntities)
static int address;
static int global_address;
static const int id = 0x57C870;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C870, 0x57CBC0, 0x57CAC0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48C437,100,0,0x48C3A0,1, 0x48C6C1,100,0,0x48C6B0,1, 0x48C527,110,0,0x48C490,1, 0x48C7C1,110,0,0x48C7B0,1, 0x48C4B7,120,0,0x48C420,1, 0x48C751,120,0,0x48C740,1>;
using def_t = void(cDMAudio *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *>, 0>;
META_END

META_BEGIN(cDMAudio::SetEffectsMasterVolume)
static int address;
static int global_address;
static const int id = 0x57C890;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C890, 0x57CBE0, 0x57CAE0>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x486BF1,100,0,0x4856F0,1, 0x486C32,100,0,0x4856F0,2, 0x4875D0,100,0,0x4856F0,3, 0x48B3AC,100,0,0x48B210,1, 0x48BE7A,100,0,0x48BD50,1, 0x5918B5,100,0,0x590A00,1, 0x486CC1,110,0,0x4857C0,1, 0x486D02,110,0,0x4857C0,2, 0x4876A0,110,0,0x4857C0,3, 0x48B49C,110,0,0x48B300,1, 0x48BF6A,110,0,0x48BE40,1, 0x591B75,110,0,0x590CC0,1, 0x486CC1,120,0,0x4857C0,1, 0x486D02,120,0,0x4857C0,2, 0x4876A0,120,0,0x4857C0,3, 0x48B42C,120,0,0x48B290,1, 0x48BEFA,120,0,0x48BDD0,1, 0x591A65,120,0,0x590BB0,1>;
using def_t = void(cDMAudio *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,unsigned char>, 0,1>;
META_END

META_BEGIN(cDMAudio::SetMusicMasterVolume)
static int address;
static int global_address;
static const int id = 0x57C8C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C8C0, 0x57CC10, 0x57CB10>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x486B6F,100,0,0x4856F0,1, 0x486BB0,100,0,0x4856F0,2, 0x4875C0,100,0,0x4856F0,3, 0x48B35C,100,0,0x48B210,1, 0x48BE6A,100,0,0x48BD50,1, 0x5918A5,100,0,0x590A00,1, 0x486C3F,110,0,0x4857C0,1, 0x486C80,110,0,0x4857C0,2, 0x487690,110,0,0x4857C0,3, 0x48B44C,110,0,0x48B300,1, 0x48BF5A,110,0,0x48BE40,1, 0x591B65,110,0,0x590CC0,1, 0x486C3F,120,0,0x4857C0,1, 0x486C80,120,0,0x4857C0,2, 0x487690,120,0,0x4857C0,3, 0x48B3DC,120,0,0x48B290,1, 0x48BEEA,120,0,0x48BDD0,1, 0x591A55,120,0,0x590BB0,1>;
using def_t = void(cDMAudio *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,unsigned char>, 0,1>;
META_END

META_BEGIN(cDMAudio::SetEffectsFadeVol)
static int address;
static int global_address;
static const int id = 0x57C8F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C8F0, 0x57CC40, 0x57CB40>;
// total references count: 10en (16), 11en (16), steam (16)
using refs_t = RefList<0x40B7E6,100,0,0x40B5B0,1, 0x40B8EF,100,0,0x40B5B0,2, 0x46F291,100,0,0x46F1E0,1, 0x46F2D9,100,0,0x46F1E0,2, 0x46F373,100,0,0x46F1E0,3, 0x46F3BF,100,0,0x46F1E0,4, 0x4852D0,100,0,0x485100,1, 0x48ABAC,100,0,0x48AB40,1, 0x48BE86,100,0,0x48BD50,1, 0x589D65,100,0,0x589D00,1, 0x589DE0,100,0,0x589D00,2, 0x594709,100,0,0x5946B0,1, 0x59477E,100,0,0x5946B0,2, 0x5947D3,100,0,0x5946B0,3, 0x595BB3,100,0,0x595B20,1, 0x5960AA,100,0,0x596030,1, 0x40B7E6,110,0,0x40B5B0,1, 0x40B8EF,110,0,0x40B5B0,2, 0x46F271,110,0,0x46F1C0,1, 0x46F2B9,110,0,0x46F1C0,2, 0x46F353,110,0,0x46F1C0,3, 0x46F39F,110,0,0x46F1C0,4, 0x4853A0,110,0,0x4851D0,1, 0x48ACBC,110,0,0x48AC50,1, 0x48BF76,110,0,0x48BE40,1, 0x58A0A5,110,0,0x58A040,1, 0x58A120,110,0,0x58A040,2, 0x5949B9,110,0,0x594960,1, 0x594A2E,110,0,0x594960,2, 0x594A83,110,0,0x594960,3, 0x595E63,110,0,0x595DD0,1, 0x59635A,110,0,0x5962E0,1, 0x40B7E6,120,0,0x40B5B0,1, 0x40B8EF,120,0,0x40B5B0,2, 0x46F271,120,0,0x46F1C0,1, 0x46F2B9,120,0,0x46F1C0,2, 0x46F353,120,0,0x46F1C0,3, 0x46F39F,120,0,0x46F1C0,4, 0x4853A0,120,0,0x4851D0,1, 0x48ACBC,120,0,0x48AC50,1, 0x48BF06,120,0,0x48BDD0,1, 0x589F95,120,0,0x589F30,1, 0x58A010,120,0,0x589F30,2, 0x5948A9,120,0,0x594850,1, 0x59491E,120,0,0x594850,2, 0x594973,120,0,0x594850,3, 0x595D53,120,0,0x595CC0,1, 0x59624A,120,0,0x5961D0,1>;
using def_t = void(cDMAudio *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,unsigned char>, 0,1>;
META_END

META_BEGIN(cDMAudio::SetMusicFadeVol)
static int address;
static int global_address;
static const int id = 0x57C920;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C920, 0x57CC70, 0x57CB70>;
// total references count: 10en (9), 11en (9), steam (9)
using refs_t = RefList<0x46F3CA,100,0,0x46F1E0,1, 0x4852DC,100,0,0x485100,1, 0x48ABB8,100,0,0x48AB40,1, 0x48BE92,100,0,0x48BD50,1, 0x594715,100,0,0x5946B0,1, 0x59478A,100,0,0x5946B0,2, 0x5947DF,100,0,0x5946B0,3, 0x595BBF,100,0,0x595B20,1, 0x5960B6,100,0,0x596030,1, 0x46F3AA,110,0,0x46F1C0,1, 0x4853AC,110,0,0x4851D0,1, 0x48ACC8,110,0,0x48AC50,1, 0x48BF82,110,0,0x48BE40,1, 0x5949C5,110,0,0x594960,1, 0x594A3A,110,0,0x594960,2, 0x594A8F,110,0,0x594960,3, 0x595E6F,110,0,0x595DD0,1, 0x596366,110,0,0x5962E0,1, 0x46F3AA,120,0,0x46F1C0,1, 0x4853AC,120,0,0x4851D0,1, 0x48ACC8,120,0,0x48AC50,1, 0x48BF12,120,0,0x48BDD0,1, 0x5948B5,120,0,0x594850,1, 0x59492A,120,0,0x594850,2, 0x59497F,120,0,0x594850,3, 0x595D5F,120,0,0x595CC0,1, 0x596256,120,0,0x5961D0,1>;
using def_t = void(cDMAudio *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,unsigned char>, 0,1>;
META_END

META_BEGIN(cDMAudio::GetNum3DProvidersAvailable)
static int address;
static int global_address;
static const int id = 0x57C950;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C950, 0x57CCA0, 0x57CBA0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x488227,100,0,0x4856F0,1, 0x488236,100,0,0x4856F0,2, 0x48BD9B,100,0,0x48BD50,1, 0x48BDC4,100,0,0x48BD50,2, 0x488327,110,0,0x4857C0,1, 0x488336,110,0,0x4857C0,2, 0x48BE8B,110,0,0x48BE40,1, 0x48BEB4,110,0,0x48BE40,2, 0x488327,120,0,0x4857C0,1, 0x488336,120,0,0x4857C0,2, 0x48BE1B,120,0,0x48BDD0,1, 0x48BE44,120,0,0x48BDD0,2>;
using def_t = unsigned char(cDMAudio *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *>, 0>;
META_END

META_BEGIN(cDMAudio::Get3DProviderName)
static int address;
static int global_address;
static const int id = 0x57C970;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C970, 0x57CCC0, 0x57CBC0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x47BB96,100,0,0x47AE00,1, 0x48BDDE,100,0,0x48BD50,1, 0x47BC66,110,0,0x47ADF0,1, 0x48BECE,110,0,0x48BE40,1, 0x47BC66,120,0,0x47ADF0,1, 0x48BE5E,120,0,0x48BDD0,1>;
using def_t = char *(cDMAudio *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,unsigned char>, 0,1>;
META_END

META_BEGIN(cDMAudio::GetCurrent3DProviderIndex)
static int address;
static int global_address;
static const int id = 0x57C990;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C990, 0x57CCE0, 0x57CBE0>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x47C7DC,100,0,0x47AE00,1, 0x47C895,100,0,0x47AE00,2, 0x47C940,100,0,0x47AE00,3, 0x47C99E,100,0,0x47AE00,4, 0x487D65,100,0,0x4856F0,1, 0x47C8AC,110,0,0x47ADF0,1, 0x47C965,110,0,0x47ADF0,2, 0x47CA10,110,0,0x47ADF0,3, 0x47CA6E,110,0,0x47ADF0,4, 0x487E65,110,0,0x4857C0,1, 0x47C8AC,120,0,0x47ADF0,1, 0x47C965,120,0,0x47ADF0,2, 0x47CA10,120,0,0x47ADF0,3, 0x47CA6E,120,0,0x47ADF0,4, 0x487E65,120,0,0x4857C0,1>;
using def_t = char(cDMAudio *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *>, 0>;
META_END

META_BEGIN(cDMAudio::SetCurrent3DProvider)
static int address;
static int global_address;
static const int id = 0x57C9B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C9B0, 0x57CD00, 0x57CC00>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4877EE,100,0,0x4856F0,1, 0x48BE38,100,0,0x48BD50,1, 0x4878EB,110,0,0x4857C0,1, 0x48BF28,110,0,0x48BE40,1, 0x4878EB,120,0,0x4857C0,1, 0x48BEB8,120,0,0x48BDD0,1>;
using def_t = char(cDMAudio *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,unsigned char>, 0,1>;
META_END

META_BEGIN(cDMAudio::SetSpeakerConfig)
static int address;
static int global_address;
static const int id = 0x57C9D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C9D0, 0x57CD20, 0x57CC20>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x487C43,100,0,0x4856F0,1, 0x4882A1,100,0,0x4856F0,2, 0x48BE4A,100,0,0x48BD50,1, 0x487D43,110,0,0x4857C0,1, 0x4883A1,110,0,0x4857C0,2, 0x48BF3A,110,0,0x48BE40,1, 0x487D43,120,0,0x4857C0,1, 0x4883A1,120,0,0x4857C0,2, 0x48BECA,120,0,0x48BDD0,1>;
using def_t = void(cDMAudio *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,int>, 0,1>;
META_END

META_BEGIN(cDMAudio::IsMP3RadioChannelAvailable)
static int address;
static int global_address;
static const int id = 0x57C9F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57C9F0, 0x57CD40, 0x57CC40>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x47A282,100,0,0x47A230,1, 0x47E4D4,100,0,0x47AE00,1, 0x47EFB6,100,0,0x47AE00,2, 0x487BB7,100,0,0x4856F0,1, 0x48812F,100,0,0x4856F0,2, 0x4D7C03,100,0,0x4D7BC0,1, 0x4D7C9A,100,0,0x4D7BC0,2, 0x47A282,110,0,0x47A230,1, 0x47E5A4,110,0,0x47ADF0,1, 0x47F086,110,0,0x47ADF0,2, 0x487CB7,110,0,0x4857C0,1, 0x48822F,110,0,0x4857C0,2, 0x4D7CA3,110,0,0x4D7C60,1, 0x4D7D3A,110,0,0x4D7C60,2, 0x47A282,120,0,0x47A230,1, 0x47E5A4,120,0,0x47ADF0,1, 0x47F086,120,0,0x47ADF0,2, 0x487CB7,120,0,0x4857C0,1, 0x48822F,120,0,0x4857C0,2, 0x4D7C33,120,0,0x4D7BF0,1, 0x4D7CCA,120,0,0x4D7BF0,2>;
using def_t = bool(cDMAudio *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *>, 0>;
META_END

META_BEGIN(cDMAudio::ReleaseDigitalHandle)
static int address;
static int global_address;
static const int id = 0x57CA10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CA10, 0x57CD60, 0x57CC60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48E937,100,0,0x48E800,1, 0x48E9F7,110,0,0x48E8C0,1, 0x48E987,120,0,0x48E850,1>;
using def_t = void(cDMAudio *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *>, 0>;
META_END

META_BEGIN(cDMAudio::ReacquireDigitalHandle)
static int address;
static int global_address;
static const int id = 0x57CA30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CA30, 0x57CD80, 0x57CC80>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48E929,100,0,0x48E800,1, 0x48E9E9,110,0,0x48E8C0,1, 0x48E979,120,0,0x48E850,1>;
using def_t = void(cDMAudio *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *>, 0>;
META_END

META_BEGIN(cDMAudio::SetDynamicAcousticModelingStatus)
static int address;
static int global_address;
static const int id = 0x57CA50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CA50, 0x57CDA0, 0x57CCA0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48AF0B,100,0,0x48AE60,1, 0x48BE5A,100,0,0x48BD50,1, 0x48AFFB,110,0,0x48AF50,1, 0x48BF4A,110,0,0x48BE40,1, 0x48AF8B,120,0,0x48AEE0,1, 0x48BEDA,120,0,0x48BDD0,1>;
using def_t = void(cDMAudio *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,unsigned char>, 0,1>;
META_END

META_BEGIN(cDMAudio::CheckForAnAudioFileOnCD)
static int address;
static int global_address;
static const int id = 0x57CA70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CA70, 0x57CDC0, 0x57CCC0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x581C4B,100,0,0x581790,1, 0x581F8B,110,0,0x581AD0,1, 0x581E7D,120,0,0x5819D0,1>;
using def_t = bool(cDMAudio *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *>, 0>;
META_END

META_BEGIN(cDMAudio::GetCDAudioDriveLetter)
static int address;
static int global_address;
static const int id = 0x57CA90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CA90, 0x57CDE0, 0x57CCE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x581C0D,100,0,0x581790,1, 0x581F4D,110,0,0x581AD0,1, 0x581E49,120,0,0x5819D0,1>;
using def_t = char(cDMAudio *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *>, 0>;
META_END

META_BEGIN(cDMAudio::IsAudioInitialised)
static int address;
static int global_address;
static const int id = 0x57CAB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CAB0, 0x57CE00, 0x57CD00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x581BF6,100,0,0x581790,1, 0x581F36,110,0,0x581AD0,1, 0x581E32,120,0,0x5819D0,1>;
using def_t = bool(cDMAudio *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *>, 0>;
META_END

META_BEGIN(cDMAudio::ReportCrime)
static int address;
static int global_address;
static const int id = 0x57CAD0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CAD0, 0x57CE20, 0x57CD20>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4AE3EE,100,0,0x4AE110,1, 0x4AE4DE,110,0,0x4AE200,1, 0x4AE46E,120,0,0x4AE190,1>;
using def_t = void(cDMAudio *, eCrimeType, CVector const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,eCrimeType,CVector const &>, 0,1,2>;
META_END

META_BEGIN(cDMAudio::CreateLoopingScriptObject)
static int address;
static int global_address;
static const int id = 0x57CB00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CB00, 0x57CE50, 0x57CD50>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x440BBE,100,0,0x43ED30,1, 0x57C5CF,100,0,0x57C560,1, 0x440BBE,110,0,0x43ED30,1, 0x57C91F,110,0,0x57C8B0,1, 0x440BBE,120,0,0x43ED30,1, 0x57C81F,120,0,0x57C7B0,1>;
using def_t = int(cDMAudio *, cAudioScriptObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,cAudioScriptObject *>, 0,1>;
META_END

META_BEGIN(cDMAudio::DestroyLoopingScriptObject)
static int address;
static int global_address;
static const int id = 0x57CB40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CB40, 0x57CE90, 0x57CD90>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x440C1F,100,0,0x43ED30,1, 0x440C1F,110,0,0x43ED30,1, 0x440C1F,120,0,0x43ED30,1>;
using def_t = void(cDMAudio *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,int>, 0,1>;
META_END

META_BEGIN(cDMAudio::CreateOneShotScriptObject)
static int address;
static int global_address;
static const int id = 0x57CB60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CB60, 0x57CEB0, 0x57CDB0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x440B5D,100,0,0x43ED30,1, 0x558C14,100,0,0x558550,1, 0x57C62E,100,0,0x57C5F0,1, 0x440B5D,110,0,0x43ED30,1, 0x558D44,110,0,0x558680,1, 0x57C97E,110,0,0x57C940,1, 0x440B5D,120,0,0x43ED30,1, 0x558CF4,120,0,0x558630,1, 0x57C87E,120,0,0x57C840,1>;
using def_t = void(cDMAudio *, cAudioScriptObject *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,cAudioScriptObject *>, 0,1>;
META_END

META_BEGIN(cDMAudio::PlaySuspectLastSeen)
static int address;
static int global_address;
static const int id = 0x57CBB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CBB0, 0x57CF00, 0x57CE00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44E18D,100,0,0x44CB80,1, 0x44E18D,110,0,0x44CB80,1, 0x44E18D,120,0,0x44CB80,1>;
using def_t = void(cDMAudio *, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,float,float,float>, 0,1,2,3>;
META_END

META_BEGIN(cDMAudio::ReportCollision)
static int address;
static int global_address;
static const int id = 0x57CBE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CBE0, 0x57CF30, 0x57CE30>;
// total references count: 10en (10), 11en (10), steam (10)
using refs_t = RefList<0x49C06B,100,0,0x49B620,1, 0x49C2FB,100,0,0x49B620,2, 0x49CA3A,100,0,0x49B620,3, 0x49CDDA,100,0,0x49B620,4, 0x49D263,100,0,0x49B620,5, 0x49D673,100,0,0x49B620,6, 0x49EBA5,100,0,0x49E790,1, 0x49EEDD,100,0,0x49E790,2, 0x49F2E5,100,0,0x49E790,3, 0x49F65D,100,0,0x49E790,4, 0x49C15B,110,0,0x49B710,1, 0x49C3EB,110,0,0x49B710,2, 0x49CB2A,110,0,0x49B710,3, 0x49CECA,110,0,0x49B710,4, 0x49D353,110,0,0x49B710,5, 0x49D763,110,0,0x49B710,6, 0x49EC95,110,0,0x49E880,1, 0x49EFCD,110,0,0x49E880,2, 0x49F3D5,110,0,0x49E880,3, 0x49F74D,110,0,0x49E880,4, 0x49C0EB,120,0,0x49B6A0,1, 0x49C37B,120,0,0x49B6A0,2, 0x49CABA,120,0,0x49B6A0,3, 0x49CE5A,120,0,0x49B6A0,4, 0x49D2E3,120,0,0x49B6A0,5, 0x49D6F3,120,0,0x49B6A0,6, 0x49EC25,120,0,0x49E810,1, 0x49EF5D,120,0,0x49E810,2, 0x49F365,120,0,0x49E810,3, 0x49F6DD,120,0,0x49E810,4>;
using def_t = void(cDMAudio *, CEntity *, CEntity *, unsigned char, unsigned char, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,CEntity *,CEntity *,unsigned char,unsigned char,float,float>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(cDMAudio::PlayFrontEndSound)
static int address;
static int global_address;
static const int id = 0x57CC20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CC20, 0x57CF70, 0x57CE70>;
// total references count: 10en (103), 11en (103), steam (103)
using refs_t = RefList<0x420788,100,0,0x420660,1, 0x4207C1,100,0,0x420660,2, 0x4207F3,100,0,0x420660,3, 0x420909,100,0,0x420660,4, 0x42100A,100,0,0x420F60,1, 0x4210BB,100,0,0x421070,1, 0x421304,100,0,0x4210E0,1, 0x422518,100,0,0x4222D0,1, 0x4226D0,100,0,0x4222D0,2, 0x422CB3,100,0,0x4222D0,3, 0x422CE3,100,0,0x4222D0,4, 0x422DE4,100,0,0x4222D0,5, 0x4236F3,100,0,0x4222D0,6, 0x429208,100,0,0x429160,1, 0x430F91,100,0,0x430860,1, 0x43109F,100,0,0x430860,2, 0x4310C8,100,0,0x430860,3, 0x43122C,100,0,0x430860,4, 0x43137D,100,0,0x430860,5, 0x4332F9,100,0,0x4331B0,1, 0x433A56,100,0,0x4339F0,1, 0x433A7C,100,0,0x4339F0,2, 0x433A97,100,0,0x4339F0,3, 0x433ABC,100,0,0x4339F0,4, 0x433AD7,100,0,0x4339F0,5, 0x433B20,100,0,0x4339F0,6, 0x433B42,100,0,0x4339F0,7, 0x440A6B,100,0,0x43ED30,1, 0x440A83,100,0,0x43ED30,2, 0x440AA1,100,0,0x43ED30,3, 0x440AC1,100,0,0x43ED30,4, 0x440AE1,100,0,0x43ED30,5, 0x440AF9,100,0,0x43ED30,6, 0x440B11,100,0,0x43ED30,7, 0x47A25F,100,0,0x47A230,1, 0x47C445,100,0,0x47AE00,1, 0x47FC95,100,0,0x47F2B0,1, 0x47FCCE,100,0,0x47F2B0,2, 0x4809CE,100,0,0x47F2B0,3, 0x480ACB,100,0,0x47F2B0,4, 0x481A9B,100,0,0x481210,1, 0x481B1D,100,0,0x481210,2, 0x481B80,100,0,0x481210,3, 0x485575,100,0,0x485100,1, 0x4855FC,100,0,0x485100,2, 0x4859CB,100,0,0x4856F0,1, 0x485B0A,100,0,0x4856F0,2, 0x485C1F,100,0,0x4856F0,3, 0x485CDE,100,0,0x4856F0,4, 0x485DCE,100,0,0x4856F0,5, 0x485EA3,100,0,0x4856F0,6, 0x485F09,100,0,0x4856F0,7, 0x48600D,100,0,0x4856F0,8, 0x48606B,100,0,0x4856F0,9, 0x486101,100,0,0x4856F0,10, 0x48666C,100,0,0x4856F0,11, 0x4866F6,100,0,0x4856F0,12, 0x4868D4,100,0,0x4856F0,13, 0x4868F1,100,0,0x4856F0,14, 0x48690E,100,0,0x4856F0,15, 0x48692B,100,0,0x4856F0,16, 0x486948,100,0,0x4856F0,17, 0x486965,100,0,0x4856F0,18, 0x48697F,100,0,0x4856F0,19, 0x486999,100,0,0x4856F0,20, 0x4869B3,100,0,0x4856F0,21, 0x4869CD,100,0,0x4856F0,22, 0x486EBC,100,0,0x4856F0,23, 0x487067,100,0,0x4856F0,24, 0x487086,100,0,0x4856F0,25, 0x487103,100,0,0x4856F0,26, 0x4871AD,100,0,0x4856F0,27, 0x487807,100,0,0x4856F0,28, 0x48781C,100,0,0x4856F0,29, 0x487C74,100,0,0x4856F0,30, 0x488125,100,0,0x4856F0,31, 0x4881FD,100,0,0x4856F0,32, 0x488257,100,0,0x4856F0,33, 0x4882B9,100,0,0x4856F0,34, 0x4882E3,100,0,0x4856F0,35, 0x48838C,100,0,0x4856F0,36, 0x48A664,100,0,0x489710,1, 0x48AEB5,100,0,0x48AE60,1, 0x48AEDE,100,0,0x48AE60,2, 0x48AF1C,100,0,0x48AE60,3, 0x48AF4A,100,0,0x48AE60,4, 0x48AF78,100,0,0x48AE60,5, 0x48AFA6,100,0,0x48AE60,6, 0x48AFD4,100,0,0x48AE60,7, 0x48B027,100,0,0x48AE60,8, 0x48B055,100,0,0x48AE60,9, 0x48B0AF,100,0,0x48AE60,10, 0x48B0F7,100,0,0x48AE60,11, 0x48B11E,100,0,0x48AE60,12, 0x48B145,100,0,0x48AE60,13, 0x48B16C,100,0,0x48AE60,14, 0x48B193,100,0,0x48AE60,15, 0x48B1B7,100,0,0x48AE60,16, 0x48B1DB,100,0,0x48AE60,17, 0x48B1F5,100,0,0x48AE60,18, 0x4F00D3,100,0,0x4EFD90,1, 0x50813C,100,0,0x5052A0,1, 0x50911A,100,0,0x509030,1, 0x420788,110,0,0x420660,1, 0x4207C1,110,0,0x420660,2, 0x4207F3,110,0,0x420660,3, 0x420909,110,0,0x420660,4, 0x42100A,110,0,0x420F60,1, 0x4210BB,110,0,0x421070,1, 0x421304,110,0,0x4210E0,1, 0x422518,110,0,0x4222D0,1, 0x4226D0,110,0,0x4222D0,2, 0x422CB3,110,0,0x4222D0,3, 0x422CE3,110,0,0x4222D0,4, 0x422DE4,110,0,0x4222D0,5, 0x4236F3,110,0,0x4222D0,6, 0x429208,110,0,0x429160,1, 0x430F91,110,0,0x430860,1, 0x43109F,110,0,0x430860,2, 0x4310C8,110,0,0x430860,3, 0x43122C,110,0,0x430860,4, 0x43137D,110,0,0x430860,5, 0x4332F9,110,0,0x4331B0,1, 0x433A56,110,0,0x4339F0,1, 0x433A7C,110,0,0x4339F0,2, 0x433A97,110,0,0x4339F0,3, 0x433ABC,110,0,0x4339F0,4, 0x433AD7,110,0,0x4339F0,5, 0x433B20,110,0,0x4339F0,6, 0x433B42,110,0,0x4339F0,7, 0x440A6B,110,0,0x43ED30,1, 0x440A83,110,0,0x43ED30,2, 0x440AA1,110,0,0x43ED30,3, 0x440AC1,110,0,0x43ED30,4, 0x440AE1,110,0,0x43ED30,5, 0x440AF9,110,0,0x43ED30,6, 0x440B11,110,0,0x43ED30,7, 0x47A25F,110,0,0x47A230,1, 0x47C515,110,0,0x47ADF0,1, 0x47FD65,110,0,0x47F380,1, 0x47FD9E,110,0,0x47F380,2, 0x480A9E,110,0,0x47F380,3, 0x480B9B,110,0,0x47F380,4, 0x481B6B,110,0,0x4812E0,1, 0x481BED,110,0,0x4812E0,2, 0x481C50,110,0,0x4812E0,3, 0x485645,110,0,0x4851D0,1, 0x4856CC,110,0,0x4851D0,2, 0x485A9B,110,0,0x4857C0,1, 0x485BDA,110,0,0x4857C0,2, 0x485CEF,110,0,0x4857C0,3, 0x485DAE,110,0,0x4857C0,4, 0x485E9E,110,0,0x4857C0,5, 0x485F73,110,0,0x4857C0,6, 0x485FD9,110,0,0x4857C0,7, 0x4860DD,110,0,0x4857C0,8, 0x48613B,110,0,0x4857C0,9, 0x4861D1,110,0,0x4857C0,10, 0x48673C,110,0,0x4857C0,11, 0x4867C6,110,0,0x4857C0,12, 0x4869A4,110,0,0x4857C0,13, 0x4869C1,110,0,0x4857C0,14, 0x4869DE,110,0,0x4857C0,15, 0x4869FB,110,0,0x4857C0,16, 0x486A18,110,0,0x4857C0,17, 0x486A35,110,0,0x4857C0,18, 0x486A4F,110,0,0x4857C0,19, 0x486A69,110,0,0x4857C0,20, 0x486A83,110,0,0x4857C0,21, 0x486A9D,110,0,0x4857C0,22, 0x486F8C,110,0,0x4857C0,23, 0x487137,110,0,0x4857C0,24, 0x487156,110,0,0x4857C0,25, 0x4871D3,110,0,0x4857C0,26, 0x48727D,110,0,0x4857C0,27, 0x487904,110,0,0x4857C0,28, 0x48791C,110,0,0x4857C0,29, 0x487D74,110,0,0x4857C0,30, 0x488225,110,0,0x4857C0,31, 0x4882FD,110,0,0x4857C0,32, 0x488357,110,0,0x4857C0,33, 0x4883B9,110,0,0x4857C0,34, 0x4883E3,110,0,0x4857C0,35, 0x48848C,110,0,0x4857C0,36, 0x48A774,110,0,0x489820,1, 0x48AFA5,110,0,0x48AF50,1, 0x48AFCE,110,0,0x48AF50,2, 0x48B00C,110,0,0x48AF50,3, 0x48B03A,110,0,0x48AF50,4, 0x48B068,110,0,0x48AF50,5, 0x48B096,110,0,0x48AF50,6, 0x48B0C4,110,0,0x48AF50,7, 0x48B117,110,0,0x48AF50,8, 0x48B145,110,0,0x48AF50,9, 0x48B19F,110,0,0x48AF50,10, 0x48B1E7,110,0,0x48AF50,11, 0x48B20E,110,0,0x48AF50,12, 0x48B235,110,0,0x48AF50,13, 0x48B25C,110,0,0x48AF50,14, 0x48B283,110,0,0x48AF50,15, 0x48B2A7,110,0,0x48AF50,16, 0x48B2CB,110,0,0x48AF50,17, 0x48B2E5,110,0,0x48AF50,18, 0x4F0183,110,0,0x4EFE40,1, 0x50821C,110,0,0x505380,1, 0x5091FA,110,0,0x509110,1, 0x420788,120,0,0x420660,1, 0x4207C1,120,0,0x420660,2, 0x4207F3,120,0,0x420660,3, 0x420909,120,0,0x420660,4, 0x42100A,120,0,0x420F60,1, 0x4210BB,120,0,0x421070,1, 0x421304,120,0,0x4210E0,1, 0x422518,120,0,0x4222D0,1, 0x4226D0,120,0,0x4222D0,2, 0x422CB3,120,0,0x4222D0,3, 0x422CE3,120,0,0x4222D0,4, 0x422DE4,120,0,0x4222D0,5, 0x4236F3,120,0,0x4222D0,6, 0x429208,120,0,0x429160,1, 0x430F91,120,0,0x430860,1, 0x43109F,120,0,0x430860,2, 0x4310C8,120,0,0x430860,3, 0x43122C,120,0,0x430860,4, 0x43137D,120,0,0x430860,5, 0x4332F9,120,0,0x4331B0,1, 0x433A56,120,0,0x4339F0,1, 0x433A7C,120,0,0x4339F0,2, 0x433A97,120,0,0x4339F0,3, 0x433ABC,120,0,0x4339F0,4, 0x433AD7,120,0,0x4339F0,5, 0x433B20,120,0,0x4339F0,6, 0x433B42,120,0,0x4339F0,7, 0x440A6B,120,0,0x43ED30,1, 0x440A83,120,0,0x43ED30,2, 0x440AA1,120,0,0x43ED30,3, 0x440AC1,120,0,0x43ED30,4, 0x440AE1,120,0,0x43ED30,5, 0x440AF9,120,0,0x43ED30,6, 0x440B11,120,0,0x43ED30,7, 0x47A25F,120,0,0x47A230,1, 0x47C515,120,0,0x47ADF0,1, 0x47FD65,120,0,0x47F380,1, 0x47FD9E,120,0,0x47F380,2, 0x480A9E,120,0,0x47F380,3, 0x480B9B,120,0,0x47F380,4, 0x481B6B,120,0,0x4812E0,1, 0x481BED,120,0,0x4812E0,2, 0x481C50,120,0,0x4812E0,3, 0x485645,120,0,0x4851D0,1, 0x4856CC,120,0,0x4851D0,2, 0x485A9B,120,0,0x4857C0,1, 0x485BDA,120,0,0x4857C0,2, 0x485CEF,120,0,0x4857C0,3, 0x485DAE,120,0,0x4857C0,4, 0x485E9E,120,0,0x4857C0,5, 0x485F73,120,0,0x4857C0,6, 0x485FD9,120,0,0x4857C0,7, 0x4860DD,120,0,0x4857C0,8, 0x48613B,120,0,0x4857C0,9, 0x4861D1,120,0,0x4857C0,10, 0x48673C,120,0,0x4857C0,11, 0x4867C6,120,0,0x4857C0,12, 0x4869A4,120,0,0x4857C0,13, 0x4869C1,120,0,0x4857C0,14, 0x4869DE,120,0,0x4857C0,15, 0x4869FB,120,0,0x4857C0,16, 0x486A18,120,0,0x4857C0,17, 0x486A35,120,0,0x4857C0,18, 0x486A4F,120,0,0x4857C0,19, 0x486A69,120,0,0x4857C0,20, 0x486A83,120,0,0x4857C0,21, 0x486A9D,120,0,0x4857C0,22, 0x486F8C,120,0,0x4857C0,23, 0x487137,120,0,0x4857C0,24, 0x487156,120,0,0x4857C0,25, 0x4871D3,120,0,0x4857C0,26, 0x48727D,120,0,0x4857C0,27, 0x487904,120,0,0x4857C0,28, 0x48791C,120,0,0x4857C0,29, 0x487D74,120,0,0x4857C0,30, 0x488225,120,0,0x4857C0,31, 0x4882FD,120,0,0x4857C0,32, 0x488357,120,0,0x4857C0,33, 0x4883B9,120,0,0x4857C0,34, 0x4883E3,120,0,0x4857C0,35, 0x48848C,120,0,0x4857C0,36, 0x48A774,120,0,0x489820,1, 0x48AF35,120,0,0x48AEE0,1, 0x48AF5E,120,0,0x48AEE0,2, 0x48AF9C,120,0,0x48AEE0,3, 0x48AFCA,120,0,0x48AEE0,4, 0x48AFF8,120,0,0x48AEE0,5, 0x48B026,120,0,0x48AEE0,6, 0x48B054,120,0,0x48AEE0,7, 0x48B0A7,120,0,0x48AEE0,8, 0x48B0D5,120,0,0x48AEE0,9, 0x48B12F,120,0,0x48AEE0,10, 0x48B177,120,0,0x48AEE0,11, 0x48B19E,120,0,0x48AEE0,12, 0x48B1C5,120,0,0x48AEE0,13, 0x48B1EC,120,0,0x48AEE0,14, 0x48B213,120,0,0x48AEE0,15, 0x48B237,120,0,0x48AEE0,16, 0x48B25B,120,0,0x48AEE0,17, 0x48B275,120,0,0x48AEE0,18, 0x4F0113,120,0,0x4EFDD0,1, 0x5081AC,120,0,0x505310,1, 0x50918A,120,0,0x5090A0,1>;
using def_t = void(cDMAudio *, unsigned short, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,unsigned short,unsigned int>, 0,1,2>;
META_END

META_BEGIN(cDMAudio::PlayRadioAnnouncement)
static int address;
static int global_address;
static const int id = 0x57CC60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CC60, 0x57CFB0, 0x57CEB0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x44981D,100,0,0x448240,1, 0x44984E,100,0,0x448240,2, 0x44981D,110,0,0x448240,1, 0x44984E,110,0,0x448240,2, 0x44981D,120,0,0x448240,1, 0x44984E,120,0,0x448240,2>;
using def_t = void(cDMAudio *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,unsigned char>, 0,1>;
META_END

META_BEGIN(cDMAudio::PlayFrontEndTrack)
static int address;
static int global_address;
static const int id = 0x57CC80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CC80, 0x57CFD0, 0x57CED0>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x44D836,100,0,0x44CB80,1, 0x4869FF,100,0,0x4856F0,1, 0x4875F4,100,0,0x4856F0,2, 0x4877B0,100,0,0x4856F0,3, 0x487C08,100,0,0x4856F0,4, 0x4881A6,100,0,0x4856F0,5, 0x44D836,110,0,0x44CB80,1, 0x486ACF,110,0,0x4857C0,1, 0x4876C4,110,0,0x4857C0,2, 0x4878AD,110,0,0x4857C0,3, 0x487D08,110,0,0x4857C0,4, 0x4882A6,110,0,0x4857C0,5, 0x44D836,120,0,0x44CB80,1, 0x486ACF,120,0,0x4857C0,1, 0x4876C4,120,0,0x4857C0,2, 0x4878AD,120,0,0x4857C0,3, 0x487D08,120,0,0x4857C0,4, 0x4882A6,120,0,0x4857C0,5>;
using def_t = void(cDMAudio *, unsigned char, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,unsigned char,unsigned char>, 0,1,2>;
META_END

META_BEGIN(cDMAudio::StopFrontEndTrack)
static int address;
static int global_address;
static const int id = 0x57CCB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CCB0, 0x57D000, 0x57CF00>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x48711A,100,0,0x4856F0,1, 0x487CD2,100,0,0x4856F0,2, 0x4888DF,100,0,0x488790,1, 0x4871EA,110,0,0x4857C0,1, 0x487DD2,110,0,0x4857C0,2, 0x4889DF,110,0,0x488890,1, 0x4871EA,120,0,0x4857C0,1, 0x487DD2,120,0,0x4857C0,2, 0x4889DF,120,0,0x488890,1>;
using def_t = void(cDMAudio *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *>, 0>;
META_END

META_BEGIN(cDMAudio::ResetTimers)
static int address;
static int global_address;
static const int id = 0x57CCD0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CCD0, 0x57D020, 0x57CF20>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4852EC,100,0,0x485100,1, 0x48ABC8,100,0,0x48AB40,1, 0x48C7E0,100,0,0x48C740,1, 0x4ACF3E,100,0,0x4ACE60,1, 0x4853BC,110,0,0x4851D0,1, 0x48ACD8,110,0,0x48AC50,1, 0x48C8E0,110,0,0x48C840,1, 0x4AD02E,110,0,0x4ACF50,1, 0x4853BC,120,0,0x4851D0,1, 0x48ACD8,120,0,0x48AC50,1, 0x48C870,120,0,0x48C7D0,1, 0x4ACFBE,120,0,0x4ACEE0,1>;
using def_t = void(cDMAudio *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,unsigned int>, 0,1>;
META_END

META_BEGIN(cDMAudio::ChangeMusicMode)
static int address;
static int global_address;
static const int id = 0x57CCF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CCF0, 0x57D040, 0x57CF40>;
// total references count: 10en (14), 11en (14), steam (14)
using refs_t = RefList<0x40480F,100,0,0x404650,1, 0x404ABF,100,0,0x4048E0,1, 0x44D821,100,0,0x44CB80,1, 0x47A24E,100,0,0x47A230,1, 0x488765,100,0,0x488750,1, 0x48C843,100,0,0x48C740,1, 0x582F85,100,0,0x582710,1, 0x582FA9,100,0,0x582710,2, 0x5898E4,100,0,0x588490,1, 0x5899D0,100,0,0x588490,2, 0x589FAC,100,0,0x589D00,1, 0x59609E,100,0,0x596030,1, 0x5970AA,100,0,0x5966E0,1, 0x5970C6,100,0,0x5966E0,2, 0x40480F,110,0,0x404650,1, 0x404ABF,110,0,0x4048E0,1, 0x44D821,110,0,0x44CB80,1, 0x47A24E,110,0,0x47A230,1, 0x488865,110,0,0x488850,1, 0x48C943,110,0,0x48C840,1, 0x5832C5,110,0,0x582A50,1, 0x5832E9,110,0,0x582A50,2, 0x589C24,110,0,0x5887D0,1, 0x589D10,110,0,0x5887D0,2, 0x58A2EC,110,0,0x58A040,1, 0x59634E,110,0,0x5962E0,1, 0x59735A,110,0,0x596990,1, 0x597376,110,0,0x596990,2, 0x40480F,120,0,0x404650,1, 0x404ABF,120,0,0x4048E0,1, 0x44D821,120,0,0x44CB80,1, 0x47A24E,120,0,0x47A230,1, 0x488865,120,0,0x488850,1, 0x48C8D3,120,0,0x48C7D0,1, 0x5831B5,120,0,0x582940,1, 0x5831D9,120,0,0x582940,2, 0x589B14,120,0,0x5886C0,1, 0x589C00,120,0,0x5886C0,2, 0x58A1DC,120,0,0x589F30,1, 0x59623E,120,0,0x5961D0,1, 0x59724A,120,0,0x596880,1, 0x597266,120,0,0x596880,2>;
using def_t = void(cDMAudio *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,unsigned char>, 0,1>;
META_END

META_BEGIN(cDMAudio::PreloadCutSceneMusic)
static int address;
static int global_address;
static const int id = 0x57CD10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CD10, 0x57D060, 0x57CF60>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x404835,100,0,0x404650,1, 0x589FC3,100,0,0x589D00,1, 0x404835,110,0,0x404650,1, 0x58A303,110,0,0x58A040,1, 0x404835,120,0,0x404650,1, 0x58A1F3,120,0,0x589F30,1>;
using def_t = void(cDMAudio *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,unsigned char>, 0,1>;
META_END

META_BEGIN(cDMAudio::PlayPreloadedCutSceneMusic)
static int address;
static int global_address;
static const int id = 0x57CD30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CD30, 0x57D080, 0x57CF80>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x404F6D,100,0,0x404EE0,1, 0x5899AF,100,0,0x588490,1, 0x404F6D,110,0,0x404EE0,1, 0x589CEF,110,0,0x5887D0,1, 0x404F6D,120,0,0x404EE0,1, 0x589BDF,120,0,0x5886C0,1>;
using def_t = void(cDMAudio *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *>, 0>;
META_END

META_BEGIN(cDMAudio::StopCutSceneMusic)
static int address;
static int global_address;
static const int id = 0x57CD50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CD50, 0x57D0A0, 0x57CFA0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x404A4D,100,0,0x4048E0,1, 0x5899C4,100,0,0x588490,1, 0x404A4D,110,0,0x4048E0,1, 0x589D04,110,0,0x5887D0,1, 0x404A4D,120,0,0x4048E0,1, 0x589BF4,120,0,0x5886C0,1>;
using def_t = void(cDMAudio *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *>, 0>;
META_END

META_BEGIN(cDMAudio::PreloadMissionAudio)
static int address;
static int global_address;
static const int id = 0x57CD70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CD70, 0x57D0C0, 0x57CFC0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44F268,100,0,0x44CB80,1, 0x44F268,110,0,0x44CB80,1, 0x44F268,120,0,0x44CB80,1>;
using def_t = void(cDMAudio *, char *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,char *>, 0,1>;
META_END

META_BEGIN(cDMAudio::GetMissionAudioLoadingStatus)
static int address;
static int global_address;
static const int id = 0x57CD90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CD90, 0x57D0E0, 0x57CFE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44F281,100,0,0x44CB80,1, 0x44F281,110,0,0x44CB80,1, 0x44F281,120,0,0x44CB80,1>;
using def_t = unsigned char(cDMAudio *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *>, 0>;
META_END

META_BEGIN(cDMAudio::SetMissionAudioLocation)
static int address;
static int global_address;
static const int id = 0x57CDB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CDB0, 0x57D100, 0x57D000>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44F4EC,100,0,0x44CB80,1, 0x44F4EC,110,0,0x44CB80,1, 0x44F4EC,120,0,0x44CB80,1>;
using def_t = void(cDMAudio *, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,float,float,float>, 0,1,2,3>;
META_END

META_BEGIN(cDMAudio::PlayLoadedMissionAudio)
static int address;
static int global_address;
static const int id = 0x57CDE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CDE0, 0x57D130, 0x57D030>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44F2B0,100,0,0x44CB80,1, 0x44F2B0,110,0,0x44CB80,1, 0x44F2B0,120,0,0x44CB80,1>;
using def_t = void(cDMAudio *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *>, 0>;
META_END

META_BEGIN(cDMAudio::IsMissionAudioSampleFinished)
static int address;
static int global_address;
static const int id = 0x57CE00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CE00, 0x57D150, 0x57D050>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44F2C9,100,0,0x44CB80,1, 0x44F2C9,110,0,0x44CB80,1, 0x44F2C9,120,0,0x44CB80,1>;
using def_t = bool(cDMAudio *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *>, 0>;
META_END

META_BEGIN(cDMAudio::ClearMissionAudio)
static int address;
static int global_address;
static const int id = 0x57CE20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CE20, 0x57D170, 0x57D070>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x437C5B,100,0,0x437C10,1, 0x588B98,100,0,0x588490,1, 0x437C5B,110,0,0x437C10,1, 0x588ED8,110,0,0x5887D0,1, 0x437C5B,120,0,0x437C10,1, 0x588DC8,120,0,0x5886C0,1>;
using def_t = void(cDMAudio *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *>, 0>;
META_END

META_BEGIN(cDMAudio::GetRadioInCar)
static int address;
static int global_address;
static const int id = 0x57CE40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CE40, 0x57D190, 0x57D090>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x47A273,100,0,0x47A230,1, 0x59608D,100,0,0x596030,1, 0x47A273,110,0,0x47A230,1, 0x59633D,110,0,0x5962E0,1, 0x47A273,120,0,0x47A230,1, 0x59622D,120,0,0x5961D0,1>;
using def_t = unsigned char(cDMAudio *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *>, 0>;
META_END

META_BEGIN(cDMAudio::SetRadioInCar)
static int address;
static int global_address;
static const int id = 0x57CE60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CE60, 0x57D1B0, 0x57D0B0>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x4869ED,100,0,0x4856F0,1, 0x4875E2,100,0,0x4856F0,2, 0x487BF6,100,0,0x4856F0,3, 0x488194,100,0,0x4856F0,4, 0x5970BA,100,0,0x5966E0,1, 0x486ABD,110,0,0x4857C0,1, 0x4876B2,110,0,0x4857C0,2, 0x487CF6,110,0,0x4857C0,3, 0x488294,110,0,0x4857C0,4, 0x59736A,110,0,0x596990,1, 0x486ABD,120,0,0x4857C0,1, 0x4876B2,120,0,0x4857C0,2, 0x487CF6,120,0,0x4857C0,3, 0x488294,120,0,0x4857C0,4, 0x59725A,120,0,0x596880,1>;
using def_t = void(cDMAudio *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,unsigned int>, 0,1>;
META_END

META_BEGIN(cDMAudio::SetRadioChannel)
static int address;
static int global_address;
static const int id = 0x57CE80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CE80, 0x57D1D0, 0x57D0D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x589073,100,0,0x588490,1, 0x5893B3,110,0,0x5887D0,1, 0x5892A3,120,0,0x5886C0,1>;
using def_t = void(cDMAudio *, unsigned char, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *,unsigned char,int>, 0,1,2>;
META_END

DTOR_META_BEGIN(cDMAudio)
static int address;
static int global_address;
static const int id = 0x57CED0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x57CED0, 0x57D220, 0x57D120>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x57CEB6,100,2,0,1, 0x57D206,110,2,0,1, 0x57D106,120,2,0,1>;
using def_t = void(cDMAudio *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<cDMAudio *>, 0>;
META_END

template<>
struct stack_object<cDMAudio> : stack_object_no_default<cDMAudio> {
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<cDMAudio *>(dtor_gaddr(cDMAudio), reinterpret_cast<cDMAudio *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<cDMAudio>(cDMAudio *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<cDMAudio *>(dtor_gaddr(cDMAudio), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<cDMAudio>(cDMAudio *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<cDMAudio *>(dtor_gaddr(cDMAudio), &objArray[i]);
    operator delete(objData);
}

}
