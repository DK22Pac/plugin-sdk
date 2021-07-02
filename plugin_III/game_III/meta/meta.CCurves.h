/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CCurves::CalcSpeedScaleFactor)
static int address;
static int global_address;
static const int id = 0x420410;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x420410, 0x420410, 0x420410>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x41397B,100,0,0x4137B0,1, 0x41751E,100,0,0x4165F0,1, 0x41C2D7,100,0,0x41BAE0,1, 0x41CC92,100,0,0x41C480,1, 0x41D20F,100,0,0x41CD50,1, 0x4204FD,100,0,0x4204D0,1, 0x41397B,110,0,0x4137B0,1, 0x41751E,110,0,0x4165F0,1, 0x41C2D7,110,0,0x41BAE0,1, 0x41CC92,110,0,0x41C480,1, 0x41D20F,110,0,0x41CD50,1, 0x4204FD,110,0,0x4204D0,1, 0x41397B,120,0,0x4137B0,1, 0x41751E,120,0,0x4165F0,1, 0x41C2D7,120,0,0x41BAE0,1, 0x41CC92,120,0,0x41C480,1, 0x41D20F,120,0,0x41CD50,1, 0x4204FD,120,0,0x4204D0,1>;
using def_t = float(CVector *, CVector *, float, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector *,CVector *,float,float,float,float>, 0,1,2,3,4,5>;
META_END

META_BEGIN(CCurves::CalcCurvePoint)
static int address;
static int global_address;
static const int id = 0x4204D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4204D0, 0x4204D0, 0x4204D0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x417706,100,0,0x4165F0,1, 0x418B9A,100,0,0x418880,1, 0x417706,110,0,0x4165F0,1, 0x418B9A,110,0,0x418880,1, 0x417706,120,0,0x4165F0,1, 0x418B9A,120,0,0x418880,1>;
using def_t = void(CVector *, CVector *, CVector *, CVector *, float, int, CVector *, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector *,CVector *,CVector *,CVector *,float,int,CVector *,CVector *>, 0,1,2,3,4,5,6,7>;
META_END

}
