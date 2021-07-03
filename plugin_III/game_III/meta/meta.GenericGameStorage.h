/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(GenericSave)
static int address;
static int global_address;
static const int id = 0x58F8D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x58F8D0, 0x58FBC0, 0x58FAB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x591F16,100,0,0x591EC0,1, 0x5921C6,110,0,0x592170,1, 0x5920B6,120,0,0x592060,1>;
using def_t = bool(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(GenericLoad)
static int address;
static int global_address;
static const int id = 0x590A00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x590A00, 0x590CC0, 0x590BB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C7CC,100,0,0x48C740,1, 0x48C8CC,110,0,0x48C840,1, 0x48C85C,120,0,0x48C7D0,1>;
using def_t = bool();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(ReadInSizeofSaveFileBuffer)
static int address;
static int global_address;
static const int id = 0x591910;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x591910, 0x591BC0, 0x591AB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x590AF6,100,0,0x590A00,1, 0x590DB6,110,0,0x590CC0,1, 0x590CA6,120,0,0x590BB0,1>;
using def_t = bool(int &, unsigned int &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int &,unsigned int &>, 0,1>;
META_END

META_BEGIN(ReadDataFromFile)
static int address;
static int global_address;
static const int id = 0x591990;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x591990, 0x591C40, 0x591B30>;
// total references count: 10en (43), 11en (43), steam (43)
using refs_t = RefList<0x590B1E,100,0,0x590A00,1, 0x590DE1,100,0,0x590A00,2, 0x590E0A,100,0,0x590A00,3, 0x590E70,100,0,0x590A00,4, 0x590E99,100,0,0x590A00,5, 0x590EFF,100,0,0x590A00,6, 0x590F28,100,0,0x590A00,7, 0x590F8E,100,0,0x590A00,8, 0x590FB7,100,0,0x590A00,9, 0x591027,100,0,0x590A00,10, 0x591050,100,0,0x590A00,11, 0x5910C4,100,0,0x590A00,12, 0x5910ED,100,0,0x590A00,13, 0x591148,100,0,0x590A00,14, 0x591171,100,0,0x590A00,15, 0x5911D7,100,0,0x590A00,16, 0x591200,100,0,0x590A00,17, 0x591269,100,0,0x590A00,18, 0x591292,100,0,0x590A00,19, 0x5912F8,100,0,0x590A00,20, 0x591321,100,0,0x590A00,21, 0x591387,100,0,0x590A00,22, 0x5913B0,100,0,0x590A00,23, 0x591416,100,0,0x590A00,24, 0x59143F,100,0,0x590A00,25, 0x5914A5,100,0,0x590A00,26, 0x5914CE,100,0,0x590A00,27, 0x591539,100,0,0x590A00,28, 0x591562,100,0,0x590A00,29, 0x5915C8,100,0,0x590A00,30, 0x5915F1,100,0,0x590A00,31, 0x591657,100,0,0x590A00,32, 0x591680,100,0,0x590A00,33, 0x5916F7,100,0,0x590A00,34, 0x591720,100,0,0x590A00,35, 0x591786,100,0,0x590A00,36, 0x5917AF,100,0,0x590A00,37, 0x591815,100,0,0x590A00,38, 0x59183E,100,0,0x590A00,39, 0x591BFC,100,0,0x591B70,1, 0x591C4E,100,0,0x591B70,2, 0x591CF1,100,0,0x591B70,3, 0x591DA0,100,0,0x591D60,1, 0x590DDE,110,0,0x590CC0,1, 0x5910A1,110,0,0x590CC0,2, 0x5910CA,110,0,0x590CC0,3, 0x591130,110,0,0x590CC0,4, 0x591159,110,0,0x590CC0,5, 0x5911BF,110,0,0x590CC0,6, 0x5911E8,110,0,0x590CC0,7, 0x59124E,110,0,0x590CC0,8, 0x591277,110,0,0x590CC0,9, 0x5912E7,110,0,0x590CC0,10, 0x591310,110,0,0x590CC0,11, 0x591384,110,0,0x590CC0,12, 0x5913AD,110,0,0x590CC0,13, 0x591408,110,0,0x590CC0,14, 0x591431,110,0,0x590CC0,15, 0x591497,110,0,0x590CC0,16, 0x5914C0,110,0,0x590CC0,17, 0x591529,110,0,0x590CC0,18, 0x591552,110,0,0x590CC0,19, 0x5915B8,110,0,0x590CC0,20, 0x5915E1,110,0,0x590CC0,21, 0x591647,110,0,0x590CC0,22, 0x591670,110,0,0x590CC0,23, 0x5916D6,110,0,0x590CC0,24, 0x5916FF,110,0,0x590CC0,25, 0x591765,110,0,0x590CC0,26, 0x59178E,110,0,0x590CC0,27, 0x5917F9,110,0,0x590CC0,28, 0x591822,110,0,0x590CC0,29, 0x591888,110,0,0x590CC0,30, 0x5918B1,110,0,0x590CC0,31, 0x591917,110,0,0x590CC0,32, 0x591940,110,0,0x590CC0,33, 0x5919B7,110,0,0x590CC0,34, 0x5919E0,110,0,0x590CC0,35, 0x591A46,110,0,0x590CC0,36, 0x591A6F,110,0,0x590CC0,37, 0x591AD5,110,0,0x590CC0,38, 0x591AFE,110,0,0x590CC0,39, 0x591EAC,110,0,0x591E20,1, 0x591EFE,110,0,0x591E20,2, 0x591FA1,110,0,0x591E20,3, 0x592050,110,0,0x592010,1, 0x590CCE,120,0,0x590BB0,1, 0x590F91,120,0,0x590BB0,2, 0x590FBA,120,0,0x590BB0,3, 0x591020,120,0,0x590BB0,4, 0x591049,120,0,0x590BB0,5, 0x5910AF,120,0,0x590BB0,6, 0x5910D8,120,0,0x590BB0,7, 0x59113E,120,0,0x590BB0,8, 0x591167,120,0,0x590BB0,9, 0x5911D7,120,0,0x590BB0,10, 0x591200,120,0,0x590BB0,11, 0x591274,120,0,0x590BB0,12, 0x59129D,120,0,0x590BB0,13, 0x5912F8,120,0,0x590BB0,14, 0x591321,120,0,0x590BB0,15, 0x591387,120,0,0x590BB0,16, 0x5913B0,120,0,0x590BB0,17, 0x591419,120,0,0x590BB0,18, 0x591442,120,0,0x590BB0,19, 0x5914A8,120,0,0x590BB0,20, 0x5914D1,120,0,0x590BB0,21, 0x591537,120,0,0x590BB0,22, 0x591560,120,0,0x590BB0,23, 0x5915C6,120,0,0x590BB0,24, 0x5915EF,120,0,0x590BB0,25, 0x591655,120,0,0x590BB0,26, 0x59167E,120,0,0x590BB0,27, 0x5916E9,120,0,0x590BB0,28, 0x591712,120,0,0x590BB0,29, 0x591778,120,0,0x590BB0,30, 0x5917A1,120,0,0x590BB0,31, 0x591807,120,0,0x590BB0,32, 0x591830,120,0,0x590BB0,33, 0x5918A7,120,0,0x590BB0,34, 0x5918D0,120,0,0x590BB0,35, 0x591936,120,0,0x590BB0,36, 0x59195F,120,0,0x590BB0,37, 0x5919C5,120,0,0x590BB0,38, 0x5919EE,120,0,0x590BB0,39, 0x591D9C,120,0,0x591D10,1, 0x591DEE,120,0,0x591D10,2, 0x591E91,120,0,0x591D10,3, 0x591F40,120,0,0x591F00,1>;
using def_t = bool(int, unsigned char *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,unsigned char *,unsigned int>, 0,1,2>;
META_END

META_BEGIN(CloseFile)
static int address;
static int global_address;
static const int id = 0x591A00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x591A00, 0x591CB0, 0x591BA0>;
// total references count: 10en (10), 11en (10), steam (10)
using refs_t = RefList<0x590997,100,0,0x58F8D0,1, 0x5918BE,100,0,0x590A00,1, 0x59196A,100,0,0x591910,1, 0x5919DB,100,0,0x591990,1, 0x591C0E,100,0,0x591B70,1, 0x591C60,100,0,0x591B70,2, 0x591D03,100,0,0x591B70,3, 0x591D16,100,0,0x591B70,4, 0x591DBE,100,0,0x591D60,1, 0x591E53,100,0,0x591D60,2, 0x590C87,110,0,0x58FBC0,1, 0x591B7E,110,0,0x590CC0,1, 0x591C1A,110,0,0x591BC0,1, 0x591C8B,110,0,0x591C40,1, 0x591EBE,110,0,0x591E20,1, 0x591F10,110,0,0x591E20,2, 0x591FB3,110,0,0x591E20,3, 0x591FC6,110,0,0x591E20,4, 0x59206E,110,0,0x592010,1, 0x592103,110,0,0x592010,2, 0x590B77,120,0,0x58FAB0,1, 0x591A6E,120,0,0x590BB0,1, 0x591B0A,120,0,0x591AB0,1, 0x591B7B,120,0,0x591B30,1, 0x591DAE,120,0,0x591D10,1, 0x591E00,120,0,0x591D10,2, 0x591EA3,120,0,0x591D10,3, 0x591EB6,120,0,0x591D10,4, 0x591F5E,120,0,0x591F00,1, 0x591FF3,120,0,0x591F00,2>;
using def_t = bool(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(DoGameSpecificStuffAfterSucessLoad)
static int address;
static int global_address;
static const int id = 0x591A20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x591A20, 0x591CD0, 0x591BC0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5918E5,100,0,0x590A00,1, 0x591BA5,110,0,0x590CC0,1, 0x591A95,120,0,0x590BB0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CheckSlotDataValid)
static int address;
static int global_address;
static const int id = 0x591A40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x591A40, 0x591CF0, 0x591BE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48525F,100,0,0x485100,1, 0x48532F,110,0,0x4851D0,1, 0x48532F,120,0,0x4851D0,1>;
using def_t = bool(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(MakeSpaceForSizeInBufferPointer)
static int address;
static int global_address;
static const int id = 0x591A80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x591A80, 0x591D30, 0x591C20>;
// total references count: 10en (19), 11en (19), steam (19)
using refs_t = RefList<0x58FC70,100,0,0x58F8D0,1, 0x58FD16,100,0,0x58F8D0,2, 0x58FDC0,100,0,0x58F8D0,3, 0x58FE66,100,0,0x58F8D0,4, 0x58FF10,100,0,0x58F8D0,5, 0x58FFC5,100,0,0x58F8D0,6, 0x590070,100,0,0x58F8D0,7, 0x590116,100,0,0x58F8D0,8, 0x5901C0,100,0,0x58F8D0,9, 0x590266,100,0,0x58F8D0,10, 0x590310,100,0,0x58F8D0,11, 0x5903B6,100,0,0x58F8D0,12, 0x590460,100,0,0x58F8D0,13, 0x590506,100,0,0x58F8D0,14, 0x5905B0,100,0,0x58F8D0,15, 0x590656,100,0,0x58F8D0,16, 0x590710,100,0,0x58F8D0,17, 0x5907C2,100,0,0x58F8D0,18, 0x590868,100,0,0x58F8D0,19, 0x58FF60,110,0,0x58FBC0,1, 0x590006,110,0,0x58FBC0,2, 0x5900B0,110,0,0x58FBC0,3, 0x590156,110,0,0x58FBC0,4, 0x590200,110,0,0x58FBC0,5, 0x5902B5,110,0,0x58FBC0,6, 0x590360,110,0,0x58FBC0,7, 0x590406,110,0,0x58FBC0,8, 0x5904B0,110,0,0x58FBC0,9, 0x590556,110,0,0x58FBC0,10, 0x590600,110,0,0x58FBC0,11, 0x5906A6,110,0,0x58FBC0,12, 0x590750,110,0,0x58FBC0,13, 0x5907F6,110,0,0x58FBC0,14, 0x5908A0,110,0,0x58FBC0,15, 0x590946,110,0,0x58FBC0,16, 0x590A00,110,0,0x58FBC0,17, 0x590AB2,110,0,0x58FBC0,18, 0x590B58,110,0,0x58FBC0,19, 0x58FE50,120,0,0x58FAB0,1, 0x58FEF6,120,0,0x58FAB0,2, 0x58FFA0,120,0,0x58FAB0,3, 0x590046,120,0,0x58FAB0,4, 0x5900F0,120,0,0x58FAB0,5, 0x5901A5,120,0,0x58FAB0,6, 0x590250,120,0,0x58FAB0,7, 0x5902F6,120,0,0x58FAB0,8, 0x5903A0,120,0,0x58FAB0,9, 0x590446,120,0,0x58FAB0,10, 0x5904F0,120,0,0x58FAB0,11, 0x590596,120,0,0x58FAB0,12, 0x590640,120,0,0x58FAB0,13, 0x5906E6,120,0,0x58FAB0,14, 0x590790,120,0,0x58FAB0,15, 0x590836,120,0,0x58FAB0,16, 0x5908F0,120,0,0x58FAB0,17, 0x5909A2,120,0,0x58FAB0,18, 0x590A48,120,0,0x58FAB0,19>;
using def_t = void(unsigned char *&, unsigned char *&, unsigned char *&);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *&,unsigned char *&,unsigned char *&>, 0,1,2>;
META_END

META_BEGIN(CopySizeAndPreparePointer)
static int address;
static int global_address;
static const int id = 0x591AA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x591AA0, 0x591D50, 0x591C40>;
// total references count: 10en (20), 11en (20), steam (20)
using refs_t = RefList<0x58FBFF,100,0,0x58F8D0,1, 0x58FCA8,100,0,0x58F8D0,2, 0x58FD4E,100,0,0x58F8D0,3, 0x58FDF8,100,0,0x58F8D0,4, 0x58FE9E,100,0,0x58F8D0,5, 0x58FF57,100,0,0x58F8D0,6, 0x58FFFD,100,0,0x58F8D0,7, 0x5900A8,100,0,0x58F8D0,8, 0x590151,100,0,0x58F8D0,9, 0x5901F8,100,0,0x58F8D0,10, 0x59029E,100,0,0x58F8D0,11, 0x590348,100,0,0x58F8D0,12, 0x5903EE,100,0,0x58F8D0,13, 0x590498,100,0,0x58F8D0,14, 0x59053E,100,0,0x58F8D0,15, 0x5905E8,100,0,0x58F8D0,16, 0x59069F,100,0,0x58F8D0,17, 0x590754,100,0,0x58F8D0,18, 0x5907FA,100,0,0x58F8D0,19, 0x5908A0,100,0,0x58F8D0,20, 0x58FEEF,110,0,0x58FBC0,1, 0x58FF98,110,0,0x58FBC0,2, 0x59003E,110,0,0x58FBC0,3, 0x5900E8,110,0,0x58FBC0,4, 0x59018E,110,0,0x58FBC0,5, 0x590247,110,0,0x58FBC0,6, 0x5902ED,110,0,0x58FBC0,7, 0x590398,110,0,0x58FBC0,8, 0x590441,110,0,0x58FBC0,9, 0x5904E8,110,0,0x58FBC0,10, 0x59058E,110,0,0x58FBC0,11, 0x590638,110,0,0x58FBC0,12, 0x5906DE,110,0,0x58FBC0,13, 0x590788,110,0,0x58FBC0,14, 0x59082E,110,0,0x58FBC0,15, 0x5908D8,110,0,0x58FBC0,16, 0x59098F,110,0,0x58FBC0,17, 0x590A44,110,0,0x58FBC0,18, 0x590AEA,110,0,0x58FBC0,19, 0x590B90,110,0,0x58FBC0,20, 0x58FDDF,120,0,0x58FAB0,1, 0x58FE88,120,0,0x58FAB0,2, 0x58FF2E,120,0,0x58FAB0,3, 0x58FFD8,120,0,0x58FAB0,4, 0x59007E,120,0,0x58FAB0,5, 0x590137,120,0,0x58FAB0,6, 0x5901DD,120,0,0x58FAB0,7, 0x590288,120,0,0x58FAB0,8, 0x590331,120,0,0x58FAB0,9, 0x5903D8,120,0,0x58FAB0,10, 0x59047E,120,0,0x58FAB0,11, 0x590528,120,0,0x58FAB0,12, 0x5905CE,120,0,0x58FAB0,13, 0x590678,120,0,0x58FAB0,14, 0x59071E,120,0,0x58FAB0,15, 0x5907C8,120,0,0x58FAB0,16, 0x59087F,120,0,0x58FAB0,17, 0x590934,120,0,0x58FAB0,18, 0x5909DA,120,0,0x58FAB0,19, 0x590A80,120,0,0x58FAB0,20>;
using def_t = void(unsigned char *&, unsigned char *&, unsigned char *&, unsigned int &, unsigned int &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *&,unsigned char *&,unsigned char *&,unsigned int &,unsigned int &>, 0,1,2,3,4>;
META_END

META_BEGIN(DoGameSpecificStuffBeforeSave)
static int address;
static int global_address;
static const int id = 0x591AE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x591AE0, 0x591D90, 0x591C80>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x591F10,100,0,0x591EC0,1, 0x5921C0,110,0,0x592170,1, 0x5920B0,120,0,0x592060,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(MakeValidSaveName)
static int address;
static int global_address;
static const int id = 0x591B10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x591B10, 0x591DC0, 0x591CB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x591ECD,100,0,0x591EC0,1, 0x59217D,110,0,0x592170,1, 0x59206D,120,0,0x592060,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(GetSavedGameDateAndTime)
static int address;
static int global_address;
static const int id = 0x591B50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x591B50, 0x591E00, 0x591CF0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x47B5D5,100,0,0x47AE00,1, 0x47B6A5,110,0,0x47ADF0,1, 0x47B6A5,120,0,0x47ADF0,1>;
using def_t = wchar_t *(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(GetNameOfSavedGame)
static int address;
static int global_address;
static const int id = 0x591B60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x591B60, 0x591E10, 0x591D00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x47B5BB,100,0,0x47AE00,1, 0x47B68B,110,0,0x47ADF0,1, 0x47B68B,120,0,0x47ADF0,1>;
using def_t = wchar_t *(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CheckDataNotCorrupt)
static int address;
static int global_address;
static const int id = 0x591B70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x591B70, 0x591E20, 0x591D10>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x591A54,100,0,0x591A40,1, 0x592195,100,0,0x592090,1, 0x591D04,110,0,0x591CF0,1, 0x592445,110,0,0x592340,1, 0x591BF4,120,0,0x591BE0,1, 0x592335,120,0,0x592230,1>;
using def_t = bool(int, char *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,char *>, 0,1>;
META_END

META_BEGIN(RestoreForStartLoad)
static int address;
static int global_address;
static const int id = 0x591D60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x591D60, 0x592010, 0x591F00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C7AE,100,0,0x48C740,1, 0x48C8AE,110,0,0x48C840,1, 0x48C83E,120,0,0x48C7D0,1>;
using def_t = bool();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(align4bytes)
static int address;
static int global_address;
static const int id = 0x591E80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x591E80, 0x592130, 0x592020>;
// total references count: 10en (47), 11en (47), steam (47)
using refs_t = RefList<0x590910,100,0,0x58F8D0,1, 0x590B0E,100,0,0x590A00,1, 0x590DCB,100,0,0x590A00,2, 0x590DFA,100,0,0x590A00,3, 0x590E5A,100,0,0x590A00,4, 0x590E89,100,0,0x590A00,5, 0x590EE9,100,0,0x590A00,6, 0x590F18,100,0,0x590A00,7, 0x590F78,100,0,0x590A00,8, 0x590FA7,100,0,0x590A00,9, 0x591011,100,0,0x590A00,10, 0x591040,100,0,0x590A00,11, 0x5910A3,100,0,0x590A00,12, 0x5910DD,100,0,0x590A00,13, 0x591132,100,0,0x590A00,14, 0x591161,100,0,0x590A00,15, 0x5911C1,100,0,0x590A00,16, 0x5911F0,100,0,0x590A00,17, 0x591253,100,0,0x590A00,18, 0x591282,100,0,0x590A00,19, 0x5912E2,100,0,0x590A00,20, 0x591311,100,0,0x590A00,21, 0x591371,100,0,0x590A00,22, 0x5913A0,100,0,0x590A00,23, 0x591400,100,0,0x590A00,24, 0x59142F,100,0,0x590A00,25, 0x59148F,100,0,0x590A00,26, 0x5914BE,100,0,0x590A00,27, 0x59151E,100,0,0x590A00,28, 0x591552,100,0,0x590A00,29, 0x5915B2,100,0,0x590A00,30, 0x5915E1,100,0,0x590A00,31, 0x591641,100,0,0x590A00,32, 0x591670,100,0,0x590A00,33, 0x5916E1,100,0,0x590A00,34, 0x591710,100,0,0x590A00,35, 0x591770,100,0,0x590A00,36, 0x59179F,100,0,0x590A00,37, 0x5917FF,100,0,0x590A00,38, 0x59182E,100,0,0x590A00,39, 0x59188E,100,0,0x590A00,40, 0x591AB8,100,0,0x591AA0,1, 0x591C25,100,0,0x591B70,1, 0x591C3E,100,0,0x591B70,2, 0x591CB0,100,0,0x591B70,3, 0x591FDD,100,0,0x591F80,1, 0x592040,100,0,0x591F80,2, 0x590C00,110,0,0x58FBC0,1, 0x590DCE,110,0,0x590CC0,1, 0x59108B,110,0,0x590CC0,2, 0x5910BA,110,0,0x590CC0,3, 0x59111A,110,0,0x590CC0,4, 0x591149,110,0,0x590CC0,5, 0x5911A9,110,0,0x590CC0,6, 0x5911D8,110,0,0x590CC0,7, 0x591238,110,0,0x590CC0,8, 0x591267,110,0,0x590CC0,9, 0x5912D1,110,0,0x590CC0,10, 0x591300,110,0,0x590CC0,11, 0x591363,110,0,0x590CC0,12, 0x59139D,110,0,0x590CC0,13, 0x5913F2,110,0,0x590CC0,14, 0x591421,110,0,0x590CC0,15, 0x591481,110,0,0x590CC0,16, 0x5914B0,110,0,0x590CC0,17, 0x591513,110,0,0x590CC0,18, 0x591542,110,0,0x590CC0,19, 0x5915A2,110,0,0x590CC0,20, 0x5915D1,110,0,0x590CC0,21, 0x591631,110,0,0x590CC0,22, 0x591660,110,0,0x590CC0,23, 0x5916C0,110,0,0x590CC0,24, 0x5916EF,110,0,0x590CC0,25, 0x59174F,110,0,0x590CC0,26, 0x59177E,110,0,0x590CC0,27, 0x5917DE,110,0,0x590CC0,28, 0x591812,110,0,0x590CC0,29, 0x591872,110,0,0x590CC0,30, 0x5918A1,110,0,0x590CC0,31, 0x591901,110,0,0x590CC0,32, 0x591930,110,0,0x590CC0,33, 0x5919A1,110,0,0x590CC0,34, 0x5919D0,110,0,0x590CC0,35, 0x591A30,110,0,0x590CC0,36, 0x591A5F,110,0,0x590CC0,37, 0x591ABF,110,0,0x590CC0,38, 0x591AEE,110,0,0x590CC0,39, 0x591B4E,110,0,0x590CC0,40, 0x591D68,110,0,0x591D50,1, 0x591ED5,110,0,0x591E20,1, 0x591EEE,110,0,0x591E20,2, 0x591F60,110,0,0x591E20,3, 0x59228D,110,0,0x592230,1, 0x5922F0,110,0,0x592230,2, 0x590AF0,120,0,0x58FAB0,1, 0x590CBE,120,0,0x590BB0,1, 0x590F7B,120,0,0x590BB0,2, 0x590FAA,120,0,0x590BB0,3, 0x59100A,120,0,0x590BB0,4, 0x591039,120,0,0x590BB0,5, 0x591099,120,0,0x590BB0,6, 0x5910C8,120,0,0x590BB0,7, 0x591128,120,0,0x590BB0,8, 0x591157,120,0,0x590BB0,9, 0x5911C1,120,0,0x590BB0,10, 0x5911F0,120,0,0x590BB0,11, 0x591253,120,0,0x590BB0,12, 0x59128D,120,0,0x590BB0,13, 0x5912E2,120,0,0x590BB0,14, 0x591311,120,0,0x590BB0,15, 0x591371,120,0,0x590BB0,16, 0x5913A0,120,0,0x590BB0,17, 0x591403,120,0,0x590BB0,18, 0x591432,120,0,0x590BB0,19, 0x591492,120,0,0x590BB0,20, 0x5914C1,120,0,0x590BB0,21, 0x591521,120,0,0x590BB0,22, 0x591550,120,0,0x590BB0,23, 0x5915B0,120,0,0x590BB0,24, 0x5915DF,120,0,0x590BB0,25, 0x59163F,120,0,0x590BB0,26, 0x59166E,120,0,0x590BB0,27, 0x5916CE,120,0,0x590BB0,28, 0x591702,120,0,0x590BB0,29, 0x591762,120,0,0x590BB0,30, 0x591791,120,0,0x590BB0,31, 0x5917F1,120,0,0x590BB0,32, 0x591820,120,0,0x590BB0,33, 0x591891,120,0,0x590BB0,34, 0x5918C0,120,0,0x590BB0,35, 0x591920,120,0,0x590BB0,36, 0x59194F,120,0,0x590BB0,37, 0x5919AF,120,0,0x590BB0,38, 0x5919DE,120,0,0x590BB0,39, 0x591A3E,120,0,0x590BB0,40, 0x591C58,120,0,0x591C40,1, 0x591DC5,120,0,0x591D10,1, 0x591DDE,120,0,0x591D10,2, 0x591E50,120,0,0x591D10,3, 0x59217D,120,0,0x592120,1, 0x5921E0,120,0,0x592120,2>;
using def_t = int(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

}
