/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CColModel)
static int address;
static int global_address;
static const int id = 0x411680;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x411680, 0x411680, 0x411680>;
// total references count: 10en (18), 11en (18), steam (18)
using refs_t = RefList<0x4134FF,100,0,0x4134F0,1, 0x41354B,100,0,0x4134F0,2, 0x413568,100,0,0x4134F0,3, 0x413585,100,0,0x4134F0,4, 0x4135A2,100,0,0x4134F0,5, 0x4135BF,100,0,0x4134F0,6, 0x4135DC,100,0,0x4134F0,7, 0x4135F9,100,0,0x4134F0,8, 0x413616,100,0,0x4134F0,9, 0x413633,100,0,0x4134F0,10, 0x413650,100,0,0x4134F0,11, 0x41366D,100,0,0x4134F0,12, 0x478BC2,100,0,0x478B20,1, 0x4B4AF7,100,0,0x4B4AC0,1, 0x4B5C65,100,0,0x4B5C60,1, 0x5104ED,100,0,0x5104D0,1, 0x5985FD,100,0,0x5985E0,1, 0x413517,100,2,0,1, 0x4134FF,110,0,0x4134F0,1, 0x41354B,110,0,0x4134F0,2, 0x413568,110,0,0x4134F0,3, 0x413585,110,0,0x4134F0,4, 0x4135A2,110,0,0x4134F0,5, 0x4135BF,110,0,0x4134F0,6, 0x4135DC,110,0,0x4134F0,7, 0x4135F9,110,0,0x4134F0,8, 0x413616,110,0,0x4134F0,9, 0x413633,110,0,0x4134F0,10, 0x413650,110,0,0x4134F0,11, 0x41366D,110,0,0x4134F0,12, 0x478BC2,110,0,0x478B20,1, 0x4B4BE7,110,0,0x4B4BB0,1, 0x4B5D55,110,0,0x4B5D50,1, 0x5106DD,110,0,0x5106C0,1, 0x59886D,110,0,0x598850,1, 0x413517,110,2,0,1, 0x4134FF,120,0,0x4134F0,1, 0x41354B,120,0,0x4134F0,2, 0x413568,120,0,0x4134F0,3, 0x413585,120,0,0x4134F0,4, 0x4135A2,120,0,0x4134F0,5, 0x4135BF,120,0,0x4134F0,6, 0x4135DC,120,0,0x4134F0,7, 0x4135F9,120,0,0x4134F0,8, 0x413616,120,0,0x4134F0,9, 0x413633,120,0,0x4134F0,10, 0x413650,120,0,0x4134F0,11, 0x41366D,120,0,0x4134F0,12, 0x478BC2,120,0,0x478B20,1, 0x4B4B77,120,0,0x4B4B40,1, 0x4B5CE5,120,0,0x4B5CE0,1, 0x51066D,120,0,0x510650,1, 0x59875D,120,0,0x598740,1, 0x413517,120,2,0,1>;
using def_t = CColModel *(CColModel *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CColModel *>, 0>;
META_END

DTOR_META_BEGIN(CColModel)
static int address;
static int global_address;
static const int id = 0x4116E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4116E0, 0x4116E0, 0x4116E0>;
// total references count: 10en (20), 11en (20), steam (20)
using refs_t = RefList<0x4B5DC6,100,0,0x4B5DC0,1, 0x4F6AD7,100,0,0x4F6AC0,1, 0x50BF77,100,0,0x50BF60,1, 0x50C2E5,100,0,0x50C2B0,1, 0x510296,100,0,0x510280,1, 0x4134FB,100,2,0,1, 0x413512,100,2,0,1, 0x413547,100,2,0,1, 0x413564,100,2,0,1, 0x413581,100,2,0,1, 0x41359E,100,2,0,1, 0x4135BB,100,2,0,1, 0x4135D8,100,2,0,1, 0x4135F5,100,2,0,1, 0x413612,100,2,0,1, 0x41362F,100,2,0,1, 0x41364C,100,2,0,1, 0x413669,100,2,0,1, 0x413795,100,2,0,1, 0x4B4AF3,100,2,0,1, 0x4B5EB6,110,0,0x4B5EB0,1, 0x4F6B87,110,0,0x4F6B70,1, 0x50C067,110,0,0x50C050,1, 0x50C3D5,110,0,0x50C3A0,1, 0x510486,110,0,0x510470,1, 0x4134FB,110,2,0,1, 0x413512,110,2,0,1, 0x413547,110,2,0,1, 0x413564,110,2,0,1, 0x413581,110,2,0,1, 0x41359E,110,2,0,1, 0x4135BB,110,2,0,1, 0x4135D8,110,2,0,1, 0x4135F5,110,2,0,1, 0x413612,110,2,0,1, 0x41362F,110,2,0,1, 0x41364C,110,2,0,1, 0x413669,110,2,0,1, 0x413795,110,2,0,1, 0x4B4BE3,110,2,0,1, 0x4B5E46,120,0,0x4B5E40,1, 0x4F6B17,120,0,0x4F6B00,1, 0x50BFF7,120,0,0x50BFE0,1, 0x50C365,120,0,0x50C330,1, 0x510416,120,0,0x510400,1, 0x4134FB,120,2,0,1, 0x413512,120,2,0,1, 0x413547,120,2,0,1, 0x413564,120,2,0,1, 0x413581,120,2,0,1, 0x41359E,120,2,0,1, 0x4135BB,120,2,0,1, 0x4135D8,120,2,0,1, 0x4135F5,120,2,0,1, 0x413612,120,2,0,1, 0x41362F,120,2,0,1, 0x41364C,120,2,0,1, 0x413669,120,2,0,1, 0x413795,120,2,0,1, 0x4B4B73,120,2,0,1>;
using def_t = void(CColModel *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CColModel *>, 0>;
META_END

META_BEGIN_OVERLOADED(CColModel::operator=, void (CColModel::*)(CColModel const &))
static int address;
static int global_address;
static const int id = 0x411710;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x411710, 0x411710, 0x411710>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x52D711,100,0,0x52D4E0,1, 0x5963F9,100,0,0x5961F0,1, 0x59698A,100,0,0x5966E0,1, 0x52D951,110,0,0x52D720,1, 0x5966A9,110,0,0x5964A0,1, 0x596C3A,110,0,0x596990,1, 0x52D8E1,120,0,0x52D6B0,1, 0x596599,120,0,0x596390,1, 0x596B2A,120,0,0x596880,1>;
using def_t = void(CColModel *, CColModel const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CColModel *,CColModel const &>, 0,1>;
META_END

META_BEGIN(CColModel::GetTrianglePoint)
static int address;
static int global_address;
static const int id = 0x411C70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x411C70, 0x411C70, 0x411C70>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x5153D4,100,0,0x514E30,1, 0x5153E9,100,0,0x514E30,2, 0x5153FE,100,0,0x514E30,3, 0x536E2E,100,0,0x535B40,1, 0x536E7D,100,0,0x535B40,2, 0x536ECC,100,0,0x535B40,3, 0x5155E4,110,0,0x515040,1, 0x5155F9,110,0,0x515040,2, 0x51560E,110,0,0x515040,3, 0x53706E,110,0,0x535D80,1, 0x5370BD,110,0,0x535D80,2, 0x53710C,110,0,0x535D80,3, 0x515574,120,0,0x514FD0,1, 0x515589,120,0,0x514FD0,2, 0x51559E,120,0,0x514FD0,3, 0x536FFE,120,0,0x535D10,1, 0x53704D,120,0,0x535D10,2, 0x53709C,120,0,0x535D10,3>;
using def_t = void(CColModel *, CVector &, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CColModel *,CVector &,int>, 0,1,2>;
META_END

META_BEGIN(CColModel::CalculateTrianglePlanes)
static int address;
static int global_address;
static const int id = 0x411CB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x411CB0, 0x411CB0, 0x411CB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x40B9D9,100,0,0x40B960,1, 0x40B9D9,110,0,0x40B960,1, 0x40B9D9,120,0,0x40B960,1>;
using def_t = void(CColModel *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CColModel *>, 0>;
META_END

META_BEGIN(CColModel::RemoveTrianglePlanes)
static int address;
static int global_address;
static const int id = 0x411D10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x411D10, 0x411D10, 0x411D10>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x40B9B4,100,0,0x40B960,1, 0x40B9B4,110,0,0x40B960,1, 0x40B9B4,120,0,0x40B960,1>;
using def_t = void(CColModel *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CColModel *>, 0>;
META_END

META_BEGIN(CColModel::SetLinkPtr)
static int address;
static int global_address;
static const int id = 0x411D40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x411D40, 0x411D40, 0x411D40>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x40B9E3,100,0,0x40B960,1, 0x40B9E3,110,0,0x40B960,1, 0x40B9E3,120,0,0x40B960,1>;
using def_t = void(CColModel *, CLink<CColModel *> *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CColModel *,CLink<CColModel *> *>, 0,1>;
META_END

META_BEGIN(CColModel::GetLinkPtr)
static int address;
static int global_address;
static const int id = 0x411D60;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x411D60, 0x411D60, 0x411D60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x40B97C,100,0,0x40B960,1, 0x40B97C,110,0,0x40B960,1, 0x40B97C,120,0,0x40B960,1>;
using def_t = CLink<CColModel *> *(CColModel *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CColModel *>, 0>;
META_END

META_BEGIN(CColModel::RemoveCollisionVolumes)
static int address;
static int global_address;
static const int id = 0x411D80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x411D80, 0x411D80, 0x411D80>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4116E4,100,0,0x4116E0,1, 0x50BBE5,100,0,0x50BBC0,1, 0x4116E4,110,0,0x4116E0,1, 0x50BCD5,110,0,0x50BCB0,1, 0x4116E4,120,0,0x4116E0,1, 0x50BC65,120,0,0x50BC40,1>;
using def_t = void(CColModel *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CColModel *>, 0>;
META_END

}
