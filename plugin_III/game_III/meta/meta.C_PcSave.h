/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(C_PcSave::SetSaveDirectory)
static int address;
static int global_address;
static const int id = 0x591EA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x591EA0, 0x592150, 0x592040>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5811E3,100,0,0x581180,1, 0x581533,110,0,0x5814D0,1, 0x581433,120,0,0x5813D0,1>;
using def_t = void(char const *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<char const *>, 0>;
META_END

META_BEGIN(C_PcSave::SaveSlot)
static int address;
static int global_address;
static const int id = 0x591EC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x591EC0, 0x592170, 0x592060>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x485202,100,0,0x485100,1, 0x4852D2,110,0,0x4851D0,1, 0x4852D2,120,0,0x4851D0,1>;
using def_t = bool(C_PcSave *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<C_PcSave *,int>, 0,1>;
META_END

META_BEGIN(C_PcSave::PcClassSaveRoutine)
static int address;
static int global_address;
static const int id = 0x591F80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x591F80, 0x592230, 0x592120>;
// total references count: 10en (21), 11en (21), steam (21)
using refs_t = RefList<0x58FC22,100,0,0x58F8D0,1, 0x58FCCB,100,0,0x58F8D0,2, 0x58FD71,100,0,0x58F8D0,3, 0x58FE1B,100,0,0x58F8D0,4, 0x58FEC1,100,0,0x58F8D0,5, 0x58FF7A,100,0,0x58F8D0,6, 0x590020,100,0,0x58F8D0,7, 0x5900CB,100,0,0x58F8D0,8, 0x590174,100,0,0x58F8D0,9, 0x59021B,100,0,0x58F8D0,10, 0x5902C1,100,0,0x58F8D0,11, 0x59036B,100,0,0x58F8D0,12, 0x590411,100,0,0x58F8D0,13, 0x5904BB,100,0,0x58F8D0,14, 0x590561,100,0,0x58F8D0,15, 0x59060B,100,0,0x58F8D0,16, 0x5906C2,100,0,0x58F8D0,17, 0x590777,100,0,0x58F8D0,18, 0x59081D,100,0,0x58F8D0,19, 0x5908C3,100,0,0x58F8D0,20, 0x59093C,100,0,0x58F8D0,21, 0x58FF12,110,0,0x58FBC0,1, 0x58FFBB,110,0,0x58FBC0,2, 0x590061,110,0,0x58FBC0,3, 0x59010B,110,0,0x58FBC0,4, 0x5901B1,110,0,0x58FBC0,5, 0x59026A,110,0,0x58FBC0,6, 0x590310,110,0,0x58FBC0,7, 0x5903BB,110,0,0x58FBC0,8, 0x590464,110,0,0x58FBC0,9, 0x59050B,110,0,0x58FBC0,10, 0x5905B1,110,0,0x58FBC0,11, 0x59065B,110,0,0x58FBC0,12, 0x590701,110,0,0x58FBC0,13, 0x5907AB,110,0,0x58FBC0,14, 0x590851,110,0,0x58FBC0,15, 0x5908FB,110,0,0x58FBC0,16, 0x5909B2,110,0,0x58FBC0,17, 0x590A67,110,0,0x58FBC0,18, 0x590B0D,110,0,0x58FBC0,19, 0x590BB3,110,0,0x58FBC0,20, 0x590C2C,110,0,0x58FBC0,21, 0x58FE02,120,0,0x58FAB0,1, 0x58FEAB,120,0,0x58FAB0,2, 0x58FF51,120,0,0x58FAB0,3, 0x58FFFB,120,0,0x58FAB0,4, 0x5900A1,120,0,0x58FAB0,5, 0x59015A,120,0,0x58FAB0,6, 0x590200,120,0,0x58FAB0,7, 0x5902AB,120,0,0x58FAB0,8, 0x590354,120,0,0x58FAB0,9, 0x5903FB,120,0,0x58FAB0,10, 0x5904A1,120,0,0x58FAB0,11, 0x59054B,120,0,0x58FAB0,12, 0x5905F1,120,0,0x58FAB0,13, 0x59069B,120,0,0x58FAB0,14, 0x590741,120,0,0x58FAB0,15, 0x5907EB,120,0,0x58FAB0,16, 0x5908A2,120,0,0x58FAB0,17, 0x590957,120,0,0x58FAB0,18, 0x5909FD,120,0,0x58FAB0,19, 0x590AA3,120,0,0x58FAB0,20, 0x590B1C,120,0,0x58FAB0,21>;
using def_t = bool(C_PcSave *, int, unsigned char *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<C_PcSave *,int,unsigned char *,unsigned int>, 0,1,2,3>;
META_END

META_BEGIN(C_PcSave::PopulateSlotInfo)
static int address;
static int global_address;
static const int id = 0x592090;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x592090, 0x592340, 0x592230>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4851AD,100,0,0x485100,1, 0x48520E,100,0,0x485100,2, 0x4873E1,100,0,0x4856F0,1, 0x4888C3,100,0,0x488790,1, 0x48527D,110,0,0x4851D0,1, 0x4852DE,110,0,0x4851D0,2, 0x4874B1,110,0,0x4857C0,1, 0x4889C3,110,0,0x488890,1, 0x48527D,120,0,0x4851D0,1, 0x4852DE,120,0,0x4851D0,2, 0x4874B1,120,0,0x4857C0,1, 0x4889C3,120,0,0x488890,1>;
using def_t = void(C_PcSave *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<C_PcSave *>, 0>;
META_END

META_BEGIN(C_PcSave::DeleteSlot)
static int address;
static int global_address;
static const int id = 0x5922F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5922F0, 0x5925A0, 0x592490>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48519F,100,0,0x485100,1, 0x48526F,110,0,0x4851D0,1, 0x48526F,120,0,0x4851D0,1>;
using def_t = bool(C_PcSave *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<C_PcSave *,int>, 0,1>;
META_END

}
