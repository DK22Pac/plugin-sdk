/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CColTrianglePlane::Set)
static int address;
static int global_address;
static const int id = 0x411EA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x411EA0, 0x411EA0, 0x411EA0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x411CEF,100,0,0x411CB0,1, 0x411CEF,110,0,0x411CB0,1, 0x411CEF,120,0,0x411CB0,1>;
using def_t = void(CColTrianglePlane *, CompressedVector const *, CColTriangle &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CColTrianglePlane *,CompressedVector const *,CColTriangle &>, 0,1,2>;
META_END

META_BEGIN(CColTrianglePlane::GetNormal)
static int address;
static int global_address;
static const int id = 0x412140;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x412140, 0x412140, 0x412140>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x40C5AD,100,0,0x40C580,1, 0x40CE60,100,0,0x40CE30,1, 0x40EC38,100,0,0x40EC10,1, 0x40F168,100,0,0x40F140,1, 0x40FCC4,100,0,0x40FB50,1, 0x411FA9,100,0,0x411EA0,1, 0x5165D2,100,0,0x514E30,1, 0x40C5AD,110,0,0x40C580,1, 0x40CE60,110,0,0x40CE30,1, 0x40EC38,110,0,0x40EC10,1, 0x40F168,110,0,0x40F140,1, 0x40FCC4,110,0,0x40FB50,1, 0x411FA9,110,0,0x411EA0,1, 0x5167E2,110,0,0x515040,1, 0x40C5AD,120,0,0x40C580,1, 0x40CE60,120,0,0x40CE30,1, 0x40EC38,120,0,0x40EC10,1, 0x40F168,120,0,0x40F140,1, 0x40FCC4,120,0,0x40FB50,1, 0x411FA9,120,0,0x411EA0,1, 0x516772,120,0,0x514FD0,1>;
using def_t = void(CColTrianglePlane *, CVector &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CColTrianglePlane *,CVector &>, 0,1>;
META_END

}
