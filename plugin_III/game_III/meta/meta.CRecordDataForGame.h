/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CRecordDataForGame::Init)
static int address;
static int global_address;
static const int id = 0x4340F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4340F0, 0x4340F0, 0x4340F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48BFF1,100,0,0x48BED0,1, 0x48C0E1,110,0,0x48BFC0,1, 0x48C071,120,0,0x48BF50,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRecordDataForGame::SaveOrRetrieveDataForThisFrame)
static int address;
static int global_address;
static const int id = 0x4341F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4341F0, 0x4341F0, 0x4341F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C8DC,100,0,0x48C850,1, 0x48C9DC,110,0,0x48C950,1, 0x48C96C,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CRecordDataForGame::PackCurrentPadValues)
static int address;
static int global_address;
static const int id = 0x4343B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4343B0, 0x4343B0, 0x4343B0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x43425F,100,0,0x4341F0,1, 0x434292,100,0,0x4341F0,2, 0x43425F,110,0,0x4341F0,1, 0x434292,110,0,0x4341F0,2, 0x43425F,120,0,0x4341F0,1, 0x434292,120,0,0x4341F0,2>;
using def_t = unsigned char *(unsigned char *, CControllerState *, CControllerState *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,CControllerState *,CControllerState *>, 0,1,2>;
META_END

META_BEGIN(CRecordDataForGame::UnPackCurrentPadValues)
static int address;
static int global_address;
static const int id = 0x4345C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4345C0, 0x4345C0, 0x4345C0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x434339,100,0,0x4341F0,1, 0x434358,100,0,0x4341F0,2, 0x434339,110,0,0x4341F0,1, 0x434358,110,0,0x4341F0,2, 0x434339,120,0,0x4341F0,1, 0x434358,120,0,0x4341F0,2>;
using def_t = unsigned char *(unsigned char *, unsigned char, CControllerState *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned char *,unsigned char,CControllerState *>, 0,1,2>;
META_END

META_BEGIN(CRecordDataForGame::CalcGameChecksum)
static int address;
static int global_address;
static const int id = 0x4346C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4346C0, 0x4346C0, 0x4346C0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x434239,100,0,0x4341F0,1, 0x43437A,100,0,0x4341F0,2, 0x434239,110,0,0x4341F0,1, 0x43437A,110,0,0x4341F0,2, 0x434239,120,0,0x4341F0,1, 0x43437A,120,0,0x4341F0,2>;
using def_t = unsigned short();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
