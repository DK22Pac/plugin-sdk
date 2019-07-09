/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CMotionBlurStreaks::Init)
static int address;
static int global_address;
static const int id = 0x519330;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x519330, 0x519560, 0x5194F0>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x518BC1,100,0,0x5189E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CMotionBlurStreaks::Update)
static int address;
static int global_address;
static const int id = 0x519360;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x519360, 0x519590, 0x519520>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x518D41,100,0,0x518D40,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CMotionBlurStreaks::Render)
static int address;
static int global_address;
static const int id = 0x519390;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x519390, 0x5195C0, 0x519550>;
// total references count: 10en (1), 11en (0), steam (0)
using refs_t = RefList<0x518DC0,100,0,0x518DC0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CMotionBlurStreaks::RegisterStreak)
static int address;
static int global_address;
static const int id = 0x519460;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x519460, 0x519690, 0x519620>;
// total references count: 10en (3), 11en (0), steam (0)
using refs_t = RefList<0x47472A,100,0,0x474350,1, 0x4747CA,100,0,0x474350,2, 0x518D1F,100,0,0x518BF0,1>;
using def_t = void(unsigned int, unsigned char, unsigned char, unsigned char, CVector, CVector);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int,unsigned char,unsigned char,unsigned char,CVector,CVector>, 0,1,2,3,4,5>;
META_END

}
