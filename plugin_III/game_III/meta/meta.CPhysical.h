/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CPhysical)
static int address;
static int global_address;
static const int id = 0x494EF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x494EF0, 0x494FB0, 0x494F40>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x4BABD3,100,0,0x4BABD0,1, 0x4BACEC,100,0,0x4BACE0,1, 0x4BAD5D,100,0,0x4BAD50,1, 0x4C41C9,100,0,0x4C41C0,1, 0x550A68,100,0,0x550A60,1, 0x4BACC3,110,0,0x4BACC0,1, 0x4BADDC,110,0,0x4BADD0,1, 0x4BAE4D,110,0,0x4BAE40,1, 0x4C4269,110,0,0x4C4260,1, 0x550BA8,110,0,0x550BA0,1, 0x4BAC53,120,0,0x4BAC50,1, 0x4BAD6C,120,0,0x4BAD60,1, 0x4BADDD,120,0,0x4BADD0,1, 0x4C41F9,120,0,0x4C41F0,1, 0x550B58,120,0,0x550B50,1>;
using def_t = CPhysical *(CPhysical *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *>, 0>;
META_END

DTOR_META_BEGIN(CPhysical)
static int address;
static int global_address;
static const int id = 0x495130;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x495130, 0x4951F0, 0x495180>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x49F983,100,0,0x49F960,1, 0x4BAE62,100,0,0x4BAE00,1, 0x4C5216,100,0,0x4C50D0,1, 0x551114,100,0,0x551040,1, 0x49F974,100,2,0,1, 0x49FA73,110,0,0x49FA50,1, 0x4BAF52,110,0,0x4BAEF0,1, 0x4C52B6,110,0,0x4C5170,1, 0x551254,110,0,0x551180,1, 0x49FA64,110,2,0,1, 0x49FA03,120,0,0x49F9E0,1, 0x4BAEE2,120,0,0x4BAE80,1, 0x4C5246,120,0,0x4C5100,1, 0x551204,120,0,0x551130,1, 0x49F9F4,120,2,0,1>;
using def_t = void(CPhysical *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *>, 0>;
META_END

META_BEGIN(CPhysical::GetBoundRect)
static int address;
static int global_address;
static const int id = 0x495150;
static const bool is_virtual = true;
static const int vtable_index = 7;
using mv_addresses_t = MvAddresses<0x495150, 0x495210, 0x4951A0>;
// total references count: 10en (16), 11en (16), steam (16)
using refs_t = RefList<0x5F69EC,100,2,0x5F69D0,1, 0x5F7C24,100,2,0x5F7C08,1, 0x5F7C9C,100,2,0x5F7C80,1, 0x5F7DF0,100,2,0x5F7DD4,1, 0x5F8064,100,2,0x5F8048,1, 0x5F81B8,100,2,0x5F819C,1, 0x5F82C0,100,2,0x5F82A4,1, 0x5F8390,100,2,0x5F8374,1, 0x5F8C48,100,2,0x5F8C2C,1, 0x5FA51C,100,2,0x5FA500,1, 0x600C38,100,2,0x600C1C,1, 0x600EC0,100,2,0x600EA4,1, 0x601ECC,100,2,0x601EB0,1, 0x6021F8,100,2,0x6021DC,1, 0x602438,100,2,0x60241C,1, 0x6028C4,100,2,0x6028A8,1, 0x5F67B8,110,2,0x5F67B8,1, 0x5F79F0,110,2,0x5F79F0,1, 0x5F7A68,110,2,0x5F7A68,1, 0x5F7BBC,110,2,0x5F7BBC,1, 0x5F7E30,110,2,0x5F7E30,1, 0x5F7F84,110,2,0x5F7F84,1, 0x5F808C,110,2,0x5F808C,1, 0x5F815C,110,2,0x5F815C,1, 0x5F8A14,110,2,0x5F8A14,1, 0x5FA2E8,110,2,0x5FA2E8,1, 0x600A04,110,2,0x600A04,1, 0x600C8C,110,2,0x600C8C,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x6037B0,120,2,0x6037B0,1, 0x6049E8,120,2,0x6049E8,1, 0x604A60,120,2,0x604A60,1, 0x604BB4,120,2,0x604BB4,1, 0x604E28,120,2,0x604E28,1, 0x604F7C,120,2,0x604F7C,1, 0x605084,120,2,0x605084,1, 0x605154,120,2,0x605154,1, 0x605A0C,120,2,0x605A0C,1, 0x6072E0,120,2,0x6072E0,1, 0x60D9FC,120,2,0x60D9FC,1, 0x60DC84,120,2,0x60DC84,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = CRect *(CPhysical *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *>, 0>;
META_END

META_BEGIN(CPhysical::Add)
static int address;
static int global_address;
static const int id = 0x4951F0;
static const bool is_virtual = true;
static const int vtable_index = 1;
using mv_addresses_t = MvAddresses<0x4951F0, 0x4952B0, 0x495240>;
// total references count: 10en (16), 11en (16), steam (16)
using refs_t = RefList<0x5F69D4,100,2,0x5F69D0,1, 0x5F7C0C,100,2,0x5F7C08,1, 0x5F7C84,100,2,0x5F7C80,1, 0x5F7DD8,100,2,0x5F7DD4,1, 0x5F804C,100,2,0x5F8048,1, 0x5F81A0,100,2,0x5F819C,1, 0x5F82A8,100,2,0x5F82A4,1, 0x5F8378,100,2,0x5F8374,1, 0x5F8C30,100,2,0x5F8C2C,1, 0x5FA504,100,2,0x5FA500,1, 0x600C20,100,2,0x600C1C,1, 0x600EA8,100,2,0x600EA4,1, 0x601EB4,100,2,0x601EB0,1, 0x6021E0,100,2,0x6021DC,1, 0x602420,100,2,0x60241C,1, 0x6028AC,100,2,0x6028A8,1, 0x5F67B8,110,2,0x5F67B8,1, 0x5F79F0,110,2,0x5F79F0,1, 0x5F7A68,110,2,0x5F7A68,1, 0x5F7BBC,110,2,0x5F7BBC,1, 0x5F7E30,110,2,0x5F7E30,1, 0x5F7F84,110,2,0x5F7F84,1, 0x5F808C,110,2,0x5F808C,1, 0x5F815C,110,2,0x5F815C,1, 0x5F8A14,110,2,0x5F8A14,1, 0x5FA2E8,110,2,0x5FA2E8,1, 0x600A04,110,2,0x600A04,1, 0x600C8C,110,2,0x600C8C,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x6037B0,120,2,0x6037B0,1, 0x6049E8,120,2,0x6049E8,1, 0x604A60,120,2,0x604A60,1, 0x604BB4,120,2,0x604BB4,1, 0x604E28,120,2,0x604E28,1, 0x604F7C,120,2,0x604F7C,1, 0x605084,120,2,0x605084,1, 0x605154,120,2,0x605154,1, 0x605A0C,120,2,0x605A0C,1, 0x6072E0,120,2,0x6072E0,1, 0x60D9FC,120,2,0x60D9FC,1, 0x60DC84,120,2,0x60DC84,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = void(CPhysical *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *>, 0>;
META_END

META_BEGIN(CPhysical::Remove)
static int address;
static int global_address;
static const int id = 0x4954B0;
static const bool is_virtual = true;
static const int vtable_index = 2;
using mv_addresses_t = MvAddresses<0x4954B0, 0x495570, 0x495500>;
// total references count: 10en (16), 11en (16), steam (16)
using refs_t = RefList<0x5F69D8,100,2,0x5F69D0,1, 0x5F7C10,100,2,0x5F7C08,1, 0x5F7C88,100,2,0x5F7C80,1, 0x5F7DDC,100,2,0x5F7DD4,1, 0x5F8050,100,2,0x5F8048,1, 0x5F81A4,100,2,0x5F819C,1, 0x5F82AC,100,2,0x5F82A4,1, 0x5F837C,100,2,0x5F8374,1, 0x5F8C34,100,2,0x5F8C2C,1, 0x5FA508,100,2,0x5FA500,1, 0x600C24,100,2,0x600C1C,1, 0x600EAC,100,2,0x600EA4,1, 0x601EB8,100,2,0x601EB0,1, 0x6021E4,100,2,0x6021DC,1, 0x602424,100,2,0x60241C,1, 0x6028B0,100,2,0x6028A8,1, 0x5F67B8,110,2,0x5F67B8,1, 0x5F79F0,110,2,0x5F79F0,1, 0x5F7A68,110,2,0x5F7A68,1, 0x5F7BBC,110,2,0x5F7BBC,1, 0x5F7E30,110,2,0x5F7E30,1, 0x5F7F84,110,2,0x5F7F84,1, 0x5F808C,110,2,0x5F808C,1, 0x5F815C,110,2,0x5F815C,1, 0x5F8A14,110,2,0x5F8A14,1, 0x5FA2E8,110,2,0x5FA2E8,1, 0x600A04,110,2,0x600A04,1, 0x600C8C,110,2,0x600C8C,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x6037B0,120,2,0x6037B0,1, 0x6049E8,120,2,0x6049E8,1, 0x604A60,120,2,0x604A60,1, 0x604BB4,120,2,0x604BB4,1, 0x604E28,120,2,0x604E28,1, 0x604F7C,120,2,0x604F7C,1, 0x605084,120,2,0x605084,1, 0x605154,120,2,0x605154,1, 0x605A0C,120,2,0x605A0C,1, 0x6072E0,120,2,0x6072E0,1, 0x60D9FC,120,2,0x60D9FC,1, 0x60DC84,120,2,0x60DC84,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = void(CPhysical *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *>, 0>;
META_END

META_BEGIN(CPhysical::RemoveAndAdd)
static int address;
static int global_address;
static const int id = 0x495540;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x495540, 0x495600, 0x495590>;
// total references count: 10en (8), 11en (8), steam (8)
using refs_t = RefList<0x434FCB,100,0,0x434B20,1, 0x4961E4,100,0,0x4961A0,1, 0x496249,100,0,0x4961A0,2, 0x496DEA,100,0,0x4961A0,3, 0x496F44,100,0,0x496F10,1, 0x4970A0,100,0,0x496F10,2, 0x549829,100,0,0x547CC0,1, 0x54FEEE,100,0,0x54F800,1, 0x434FCB,110,0,0x434B20,1, 0x4962A4,110,0,0x496260,1, 0x496309,110,0,0x496260,2, 0x496EAA,110,0,0x496260,3, 0x497004,110,0,0x496FD0,1, 0x497160,110,0,0x496FD0,2, 0x549A29,110,0,0x547EC0,1, 0x55002E,110,0,0x54F940,1, 0x434FCB,120,0,0x434B20,1, 0x496234,120,0,0x4961F0,1, 0x496299,120,0,0x4961F0,2, 0x496E3A,120,0,0x4961F0,3, 0x496F94,120,0,0x496F60,1, 0x4970F0,120,0,0x496F60,2, 0x5499D9,120,0,0x547E70,1, 0x54FFDE,120,0,0x54F8F0,1>;
using def_t = void(CPhysical *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *>, 0>;
META_END

META_BEGIN(CPhysical::AddToMovingList)
static int address;
static int global_address;
static const int id = 0x4958F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4958F0, 0x4959B0, 0x495940>;
// total references count: 10en (11), 11en (11), steam (11)
using refs_t = RefList<0x44D784,100,0,0x44CB80,1, 0x497EB1,100,0,0x4973A0,1, 0x4AE9C0,100,0,0x4AE930,1, 0x4B154D,100,0,0x4B1340,1, 0x4B163A,100,0,0x4B1340,2, 0x4F458B,100,0,0x4F4470,1, 0x53B585,100,0,0x53B270,1, 0x558AAF,100,0,0x558550,1, 0x5604BD,100,0,0x55F950,1, 0x5616ED,100,0,0x560620,1, 0x564B6D,100,0,0x564A60,1, 0x44D784,110,0,0x44CB80,1, 0x497F71,110,0,0x497460,1, 0x4AEAB0,110,0,0x4AEA20,1, 0x4B163D,110,0,0x4B1430,1, 0x4B172A,110,0,0x4B1430,2, 0x4F463B,110,0,0x4F4520,1, 0x53B7C5,110,0,0x53B4B0,1, 0x558BDF,110,0,0x558680,1, 0x5605ED,110,0,0x55FA80,1, 0x56181D,110,0,0x560750,1, 0x564C9D,110,0,0x564B90,1, 0x44D784,120,0,0x44CB80,1, 0x497F01,120,0,0x4973F0,1, 0x4AEA40,120,0,0x4AE9B0,1, 0x4B15CD,120,0,0x4B13C0,1, 0x4B16BA,120,0,0x4B13C0,2, 0x4F45CB,120,0,0x4F44B0,1, 0x53B775,120,0,0x53B460,1, 0x558B8F,120,0,0x558630,1, 0x56059D,120,0,0x55FA30,1, 0x5617CD,120,0,0x560700,1, 0x564C4D,120,0,0x564B40,1>;
using def_t = void(CPhysical *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *>, 0>;
META_END

META_BEGIN(CPhysical::RemoveFromMovingList)
static int address;
static int global_address;
static const int id = 0x495940;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x495940, 0x495A00, 0x495990>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x44D7A9,100,0,0x44CB80,1, 0x4AEA90,100,0,0x4AE9D0,1, 0x4B1BA8,100,0,0x4B1A60,1, 0x4B1BF3,100,0,0x4B1A60,2, 0x44D7A9,110,0,0x44CB80,1, 0x4AEB80,110,0,0x4AEAC0,1, 0x4B1C98,110,0,0x4B1B50,1, 0x4B1CE3,110,0,0x4B1B50,2, 0x44D7A9,120,0,0x44CB80,1, 0x4AEB10,120,0,0x4AEA50,1, 0x4B1C28,120,0,0x4B1AE0,1, 0x4B1C73,120,0,0x4B1AE0,2>;
using def_t = void(CPhysical *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *>, 0>;
META_END

META_BEGIN(CPhysical::ApplyMoveForce)
static int address;
static int global_address;
static const int id = 0x4959A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4959A0, 0x495A60, 0x4959F0>;
// total references count: 10en (55), 11en (55), steam (55)
using refs_t = RefList<0x497B1F,100,0,0x4973A0,1, 0x497E43,100,0,0x4973A0,2, 0x498011,100,0,0x4973A0,3, 0x498392,100,0,0x4973A0,4, 0x4983B9,100,0,0x4973A0,5, 0x498772,100,0,0x4973A0,6, 0x498883,100,0,0x4973A0,7, 0x498FDD,100,0,0x4973A0,8, 0x49911F,100,0,0x4973A0,9, 0x49995D,100,0,0x499890,1, 0x499BAB,100,0,0x499990,1, 0x4B175C,100,0,0x4B1340,1, 0x4B1965,100,0,0x4B1340,2, 0x4BB0AA,100,0,0x4BB040,1, 0x4C825E,100,0,0x4C7FF0,1, 0x4CA279,100,0,0x4C8910,1, 0x4CAC1B,100,0,0x4C8910,2, 0x4CADDE,100,0,0x4C8910,3, 0x4D769B,100,0,0x4D7490,1, 0x4E9717,100,0,0x4E8EC0,1, 0x4EBD2D,100,0,0x4EB9A0,1, 0x4EBD84,100,0,0x4EB9A0,2, 0x4EBE3E,100,0,0x4EB9A0,3, 0x4EBEB4,100,0,0x4EB9A0,4, 0x4ECDAB,100,0,0x4EC430,1, 0x4ECF98,100,0,0x4EC430,2, 0x4F16CB,100,0,0x4F13C0,1, 0x4F1B92,100,0,0x4F1970,1, 0x522378,100,0,0x5220B0,1, 0x530827,100,0,0x530300,1, 0x530917,100,0,0x5308D0,1, 0x5328C5,100,0,0x531470,1, 0x53B577,100,0,0x53B270,1, 0x53C1B4,100,0,0x53C0E0,1, 0x53D25F,100,0,0x53CFD0,1, 0x53FD37,100,0,0x53EF10,1, 0x53FE94,100,0,0x53EF10,2, 0x54036E,100,0,0x53EF10,3, 0x5404ED,100,0,0x53EF10,4, 0x540B3D,100,0,0x53EF10,5, 0x54113F,100,0,0x53EF10,6, 0x551901,100,0,0x5512E0,1, 0x552E34,100,0,0x552BB0,1, 0x5530EE,100,0,0x552BB0,2, 0x553466,100,0,0x552BB0,3, 0x55358A,100,0,0x552BB0,4, 0x553E19,100,0,0x552BB0,5, 0x5543F8,100,0,0x552BB0,6, 0x558AF2,100,0,0x558550,1, 0x55D157,100,0,0x55CA20,1, 0x55D244,100,0,0x55CA20,2, 0x55FBBB,100,0,0x55F950,1, 0x5604F7,100,0,0x55F950,2, 0x5610CE,100,0,0x560620,1, 0x561730,100,0,0x560620,2, 0x497BDF,110,0,0x497460,1, 0x497F03,110,0,0x497460,2, 0x4980D1,110,0,0x497460,3, 0x498452,110,0,0x497460,4, 0x498479,110,0,0x497460,5, 0x498832,110,0,0x497460,6, 0x498943,110,0,0x497460,7, 0x49909D,110,0,0x497460,8, 0x4991DF,110,0,0x497460,9, 0x499A4D,110,0,0x499980,1, 0x499C9B,110,0,0x499A80,1, 0x4B184C,110,0,0x4B1430,1, 0x4B1A55,110,0,0x4B1430,2, 0x4BB19A,110,0,0x4BB130,1, 0x4C82FE,110,0,0x4C8090,1, 0x4CA319,110,0,0x4C89B0,1, 0x4CACBB,110,0,0x4C89B0,2, 0x4CAE7E,110,0,0x4C89B0,3, 0x4D773B,110,0,0x4D7530,1, 0x4E97C7,110,0,0x4E8F70,1, 0x4EBDDD,110,0,0x4EBA50,1, 0x4EBE34,110,0,0x4EBA50,2, 0x4EBEEE,110,0,0x4EBA50,3, 0x4EBF64,110,0,0x4EBA50,4, 0x4ECE5B,110,0,0x4EC4E0,1, 0x4ED048,110,0,0x4EC4E0,2, 0x4F177B,110,0,0x4F1470,1, 0x4F1C42,110,0,0x4F1A20,1, 0x5225B8,110,0,0x5222F0,1, 0x530A67,110,0,0x530540,1, 0x530B57,110,0,0x530B10,1, 0x532B05,110,0,0x5316B0,1, 0x53B7B7,110,0,0x53B4B0,1, 0x53C3F4,110,0,0x53C320,1, 0x53D49F,110,0,0x53D210,1, 0x53FF77,110,0,0x53F150,1, 0x5400D4,110,0,0x53F150,2, 0x5405AE,110,0,0x53F150,3, 0x54072D,110,0,0x53F150,4, 0x540D7D,110,0,0x53F150,5, 0x54137F,110,0,0x53F150,6, 0x551A41,110,0,0x551420,1, 0x552F74,110,0,0x552CF0,1, 0x55322E,110,0,0x552CF0,2, 0x5535A6,110,0,0x552CF0,3, 0x5536CA,110,0,0x552CF0,4, 0x553F59,110,0,0x552CF0,5, 0x554566,110,0,0x552CF0,6, 0x558C22,110,0,0x558680,1, 0x55D287,110,0,0x55CB50,1, 0x55D374,110,0,0x55CB50,2, 0x55FCEB,110,0,0x55FA80,1, 0x560627,110,0,0x55FA80,2, 0x5611FE,110,0,0x560750,1, 0x561860,110,0,0x560750,2, 0x497B6F,120,0,0x4973F0,1, 0x497E93,120,0,0x4973F0,2, 0x498061,120,0,0x4973F0,3, 0x4983E2,120,0,0x4973F0,4, 0x498409,120,0,0x4973F0,5, 0x4987C2,120,0,0x4973F0,6, 0x4988D3,120,0,0x4973F0,7, 0x49902D,120,0,0x4973F0,8, 0x49916F,120,0,0x4973F0,9, 0x4999DD,120,0,0x499910,1, 0x499C2B,120,0,0x499A10,1, 0x4B17DC,120,0,0x4B13C0,1, 0x4B19E5,120,0,0x4B13C0,2, 0x4BB12A,120,0,0x4BB0C0,1, 0x4C828E,120,0,0x4C8020,1, 0x4CA2A9,120,0,0x4C8940,1, 0x4CAC4B,120,0,0x4C8940,2, 0x4CAE0E,120,0,0x4C8940,3, 0x4D76CB,120,0,0x4D74C0,1, 0x4E9757,120,0,0x4E8F00,1, 0x4EBD6D,120,0,0x4EB9E0,1, 0x4EBDC4,120,0,0x4EB9E0,2, 0x4EBE7E,120,0,0x4EB9E0,3, 0x4EBEF4,120,0,0x4EB9E0,4, 0x4ECDEB,120,0,0x4EC470,1, 0x4ECFD8,120,0,0x4EC470,2, 0x4F170B,120,0,0x4F1400,1, 0x4F1BD2,120,0,0x4F19B0,1, 0x522548,120,0,0x522280,1, 0x5309F7,120,0,0x5304D0,1, 0x530AE7,120,0,0x530AA0,1, 0x532A95,120,0,0x531640,1, 0x53B767,120,0,0x53B460,1, 0x53C3A4,120,0,0x53C2D0,1, 0x53D44F,120,0,0x53D1C0,1, 0x53FF27,120,0,0x53F100,1, 0x540084,120,0,0x53F100,2, 0x54055E,120,0,0x53F100,3, 0x5406DD,120,0,0x53F100,4, 0x540D2D,120,0,0x53F100,5, 0x54132F,120,0,0x53F100,6, 0x5519F1,120,0,0x5513D0,1, 0x552F24,120,0,0x552CA0,1, 0x5531DE,120,0,0x552CA0,2, 0x553556,120,0,0x552CA0,3, 0x55367A,120,0,0x552CA0,4, 0x553F09,120,0,0x552CA0,5, 0x554516,120,0,0x552CA0,6, 0x558BD2,120,0,0x558630,1, 0x55D237,120,0,0x55CB00,1, 0x55D324,120,0,0x55CB00,2, 0x55FC9B,120,0,0x55FA30,1, 0x5605D7,120,0,0x55FA30,2, 0x5611AE,120,0,0x560700,1, 0x561810,120,0,0x560700,2>;
using def_t = void(CPhysical *, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *,float,float,float>, 0,1,2,3>;
META_END

META_BEGIN(CPhysical::ApplyTurnForce)
static int address;
static int global_address;
static const int id = 0x495A10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x495A10, 0x495AD0, 0x495A60>;
// total references count: 10en (42), 11en (42), steam (42)
using refs_t = RefList<0x497B4A,100,0,0x4973A0,1, 0x497E80,100,0,0x4973A0,2, 0x4983E1,100,0,0x4973A0,3, 0x49879D,100,0,0x4973A0,4, 0x49900E,100,0,0x4973A0,5, 0x499150,100,0,0x4973A0,6, 0x499979,100,0,0x499890,1, 0x499BC7,100,0,0x499990,1, 0x4B1887,100,0,0x4B1340,1, 0x4BB0C9,100,0,0x4BB040,1, 0x4C01EA,100,0,0x4BFFE0,1, 0x4EB44C,100,0,0x4EB060,1, 0x4ECC18,100,0,0x4EC430,1, 0x530936,100,0,0x5308D0,1, 0x53295E,100,0,0x531470,1, 0x53C22B,100,0,0x53C0E0,1, 0x53D29C,100,0,0x53CFD0,1, 0x53FD6F,100,0,0x53EF10,1, 0x53FEF0,100,0,0x53EF10,2, 0x5403E7,100,0,0x53EF10,3, 0x540452,100,0,0x53EF10,4, 0x540B98,100,0,0x53EF10,5, 0x540F11,100,0,0x53EF10,6, 0x541170,100,0,0x53EF10,7, 0x541C5D,100,0,0x541A30,1, 0x55191D,100,0,0x5512E0,1, 0x551DD0,100,0,0x551D90,1, 0x551E6D,100,0,0x551E10,1, 0x55207D,100,0,0x551F20,1, 0x552D9E,100,0,0x552BB0,1, 0x552E78,100,0,0x552BB0,2, 0x552FAC,100,0,0x552BB0,3, 0x55311F,100,0,0x552BB0,4, 0x553780,100,0,0x552BB0,5, 0x553882,100,0,0x552BB0,6, 0x553A2B,100,0,0x552BB0,7, 0x553C4C,100,0,0x552BB0,8, 0x554476,100,0,0x552BB0,9, 0x5547A2,100,0,0x552BB0,10, 0x554806,100,0,0x552BB0,11, 0x55486C,100,0,0x552BB0,12, 0x554C4E,100,0,0x552BB0,13, 0x497C0A,110,0,0x497460,1, 0x497F40,110,0,0x497460,2, 0x4984A1,110,0,0x497460,3, 0x49885D,110,0,0x497460,4, 0x4990CE,110,0,0x497460,5, 0x499210,110,0,0x497460,6, 0x499A69,110,0,0x499980,1, 0x499CB7,110,0,0x499A80,1, 0x4B1977,110,0,0x4B1430,1, 0x4BB1B9,110,0,0x4BB130,1, 0x4C02DA,110,0,0x4C00D0,1, 0x4EB4FC,110,0,0x4EB110,1, 0x4ECCC8,110,0,0x4EC4E0,1, 0x530B76,110,0,0x530B10,1, 0x532B9E,110,0,0x5316B0,1, 0x53C46B,110,0,0x53C320,1, 0x53D4DC,110,0,0x53D210,1, 0x53FFAF,110,0,0x53F150,1, 0x540130,110,0,0x53F150,2, 0x540627,110,0,0x53F150,3, 0x540692,110,0,0x53F150,4, 0x540DD8,110,0,0x53F150,5, 0x541151,110,0,0x53F150,6, 0x5413B0,110,0,0x53F150,7, 0x541E9D,110,0,0x541C70,1, 0x551A5D,110,0,0x551420,1, 0x551F10,110,0,0x551ED0,1, 0x551FAD,110,0,0x551F50,1, 0x5521BD,110,0,0x552060,1, 0x552EDE,110,0,0x552CF0,1, 0x552FB8,110,0,0x552CF0,2, 0x5530EC,110,0,0x552CF0,3, 0x55325F,110,0,0x552CF0,4, 0x5538C0,110,0,0x552CF0,5, 0x5539C2,110,0,0x552CF0,6, 0x553B6B,110,0,0x552CF0,7, 0x553D8C,110,0,0x552CF0,8, 0x5545E4,110,0,0x552CF0,9, 0x554912,110,0,0x552CF0,10, 0x554976,110,0,0x552CF0,11, 0x5549DC,110,0,0x552CF0,12, 0x554DBE,110,0,0x552CF0,13, 0x497B9A,120,0,0x4973F0,1, 0x497ED0,120,0,0x4973F0,2, 0x498431,120,0,0x4973F0,3, 0x4987ED,120,0,0x4973F0,4, 0x49905E,120,0,0x4973F0,5, 0x4991A0,120,0,0x4973F0,6, 0x4999F9,120,0,0x499910,1, 0x499C47,120,0,0x499A10,1, 0x4B1907,120,0,0x4B13C0,1, 0x4BB149,120,0,0x4BB0C0,1, 0x4C026A,120,0,0x4C0060,1, 0x4EB48C,120,0,0x4EB0A0,1, 0x4ECC58,120,0,0x4EC470,1, 0x530B06,120,0,0x530AA0,1, 0x532B2E,120,0,0x531640,1, 0x53C41B,120,0,0x53C2D0,1, 0x53D48C,120,0,0x53D1C0,1, 0x53FF5F,120,0,0x53F100,1, 0x5400E0,120,0,0x53F100,2, 0x5405D7,120,0,0x53F100,3, 0x540642,120,0,0x53F100,4, 0x540D88,120,0,0x53F100,5, 0x541101,120,0,0x53F100,6, 0x541360,120,0,0x53F100,7, 0x541E4D,120,0,0x541C20,1, 0x551A0D,120,0,0x5513D0,1, 0x551EC0,120,0,0x551E80,1, 0x551F5D,120,0,0x551F00,1, 0x55216D,120,0,0x552010,1, 0x552E8E,120,0,0x552CA0,1, 0x552F68,120,0,0x552CA0,2, 0x55309C,120,0,0x552CA0,3, 0x55320F,120,0,0x552CA0,4, 0x553870,120,0,0x552CA0,5, 0x553972,120,0,0x552CA0,6, 0x553B1B,120,0,0x552CA0,7, 0x553D3C,120,0,0x552CA0,8, 0x554594,120,0,0x552CA0,9, 0x5548C2,120,0,0x552CA0,10, 0x554926,120,0,0x552CA0,11, 0x55498C,120,0,0x552CA0,12, 0x554D6E,120,0,0x552CA0,13>;
using def_t = void(CPhysical *, float, float, float, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *,float,float,float,float,float,float>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(CPhysical::ApplyMoveSpeed)
static int address;
static int global_address;
static const int id = 0x495B10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x495B10, 0x495BD0, 0x495B60>;
// total references count: 10en (10), 11en (10), steam (10)
using refs_t = RefList<0x496AEB,100,0,0x4961A0,1, 0x496C3B,100,0,0x4961A0,2, 0x496F5F,100,0,0x496F10,1, 0x49909B,100,0,0x4973A0,1, 0x4B1DE5,100,0,0x4B1A60,1, 0x4BAA36,100,0,0x4BA9C0,1, 0x4CE947,100,0,0x4CE8F0,1, 0x4DFD1C,100,0,0x4DF940,1, 0x532A9F,100,0,0x531470,1, 0x532AC2,100,0,0x531470,2, 0x496BAB,110,0,0x496260,1, 0x496CFB,110,0,0x496260,2, 0x49701F,110,0,0x496FD0,1, 0x49915B,110,0,0x497460,1, 0x4B1ED5,110,0,0x4B1B50,1, 0x4BAB26,110,0,0x4BAAB0,1, 0x4CE9E7,110,0,0x4CE990,1, 0x4DFDCC,110,0,0x4DF9F0,1, 0x532CDF,110,0,0x5316B0,1, 0x532D02,110,0,0x5316B0,2, 0x496B3B,120,0,0x4961F0,1, 0x496C8B,120,0,0x4961F0,2, 0x496FAF,120,0,0x496F60,1, 0x4990EB,120,0,0x4973F0,1, 0x4B1E65,120,0,0x4B1AE0,1, 0x4BAAB6,120,0,0x4BAA40,1, 0x4CE977,120,0,0x4CE920,1, 0x4DFD5C,120,0,0x4DF980,1, 0x532C6F,120,0,0x531640,1, 0x532C92,120,0,0x531640,2>;
using def_t = void(CPhysical *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *>, 0>;
META_END

META_BEGIN(CPhysical::ApplyGravity)
static int address;
static int global_address;
static const int id = 0x495B50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x495B50, 0x495C10, 0x495BA0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x49617D,100,0,0x495F10,1, 0x49623D,110,0,0x495FD0,1, 0x4961CD,120,0,0x495F60,1>;
using def_t = void(CPhysical *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *>, 0>;
META_END

META_BEGIN_OVERLOADED(CPhysical::ApplyFriction, void (CPhysical::*)())
static int address;
static int global_address;
static const int id = 0x495B80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x495B80, 0x495C40, 0x495BD0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x496184,100,0,0x495F10,1, 0x496244,110,0,0x495FD0,1, 0x4961D4,120,0,0x495F60,1>;
using def_t = void(CPhysical *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *>, 0>;
META_END

META_BEGIN(CPhysical::ApplyAirResistance)
static int address;
static int global_address;
static const int id = 0x495C20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x495C20, 0x495CE0, 0x495C70>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x49618B,100,0,0x495F10,1, 0x49624B,110,0,0x495FD0,1, 0x4961DB,120,0,0x495F60,1>;
using def_t = void(CPhysical *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *>, 0>;
META_END

META_BEGIN(CPhysical::ApplyFrictionMoveForce)
static int address;
static int global_address;
static const int id = 0x495D90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x495D90, 0x495E50, 0x495DE0>;
// total references count: 10en (11), 11en (11), steam (11)
using refs_t = RefList<0x498E4C,100,0,0x4973A0,1, 0x498F8C,100,0,0x4973A0,2, 0x49A078,100,0,0x499BE0,1, 0x49A473,100,0,0x49A180,1, 0x49A48F,100,0,0x49A180,2, 0x49A97E,100,0,0x49A180,3, 0x49A9A4,100,0,0x49A180,4, 0x49AEC2,100,0,0x49A180,5, 0x49AF09,100,0,0x49A180,6, 0x49B56E,100,0,0x49A180,7, 0x49B5BF,100,0,0x49A180,8, 0x498F0C,110,0,0x497460,1, 0x49904C,110,0,0x497460,2, 0x49A168,110,0,0x499CD0,1, 0x49A563,110,0,0x49A270,1, 0x49A57F,110,0,0x49A270,2, 0x49AA6E,110,0,0x49A270,3, 0x49AA94,110,0,0x49A270,4, 0x49AFB2,110,0,0x49A270,5, 0x49AFF9,110,0,0x49A270,6, 0x49B65E,110,0,0x49A270,7, 0x49B6AF,110,0,0x49A270,8, 0x498E9C,120,0,0x4973F0,1, 0x498FDC,120,0,0x4973F0,2, 0x49A0F8,120,0,0x499C60,1, 0x49A4F3,120,0,0x49A200,1, 0x49A50F,120,0,0x49A200,2, 0x49A9FE,120,0,0x49A200,3, 0x49AA24,120,0,0x49A200,4, 0x49AF42,120,0,0x49A200,5, 0x49AF89,120,0,0x49A200,6, 0x49B5EE,120,0,0x49A200,7, 0x49B63F,120,0,0x49A200,8>;
using def_t = void(CPhysical *, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *,float,float,float>, 0,1,2,3>;
META_END

META_BEGIN(CPhysical::ApplyFrictionTurnForce)
static int address;
static int global_address;
static const int id = 0x495E10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x495E10, 0x495ED0, 0x495E60>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x498E74,100,0,0x4973A0,1, 0x498FB4,100,0,0x4973A0,2, 0x49A09A,100,0,0x499BE0,1, 0x49A9CF,100,0,0x49A180,1, 0x49AEED,100,0,0x49A180,2, 0x49B599,100,0,0x49A180,3, 0x49B5EA,100,0,0x49A180,4, 0x498F34,110,0,0x497460,1, 0x499074,110,0,0x497460,2, 0x49A18A,110,0,0x499CD0,1, 0x49AABF,110,0,0x49A270,1, 0x49AFDD,110,0,0x49A270,2, 0x49B689,110,0,0x49A270,3, 0x49B6DA,110,0,0x49A270,4, 0x498EC4,120,0,0x4973F0,1, 0x499004,120,0,0x4973F0,2, 0x49A11A,120,0,0x499C60,1, 0x49AA4F,120,0,0x49A200,1, 0x49AF6D,120,0,0x49A200,2, 0x49B619,120,0,0x49A200,3, 0x49B66A,120,0,0x49A200,4>;
using def_t = void(CPhysical *, float, float, float, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *,float,float,float,float,float,float>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(CPhysical::ProcessControl)
static int address;
static int global_address;
static const int id = 0x495F10;
static const bool is_virtual = true;
static const int vtable_index = 8;
using mv_addresses_t = MvAddresses<0x495F10, 0x495FD0, 0x495F60>;
// total references count: 10en (10), 11en (10), steam (10)
using refs_t = RefList<0x4BA769,100,0,0x4BA760,1, 0x4BA9C3,100,0,0x4BA9C0,1, 0x4BB05C,100,0,0x4BB040,1, 0x4CAF61,100,0,0x4C8910,1, 0x531A70,100,0,0x531470,1, 0x532B02,100,0,0x531470,2, 0x53F336,100,0,0x53EF10,1, 0x53FC19,100,0,0x53EF10,2, 0x5F69F0,100,2,0x5F69D0,1, 0x6028C8,100,2,0x6028A8,1, 0x4BA859,110,0,0x4BA850,1, 0x4BAAB3,110,0,0x4BAAB0,1, 0x4BB14C,110,0,0x4BB130,1, 0x4CB001,110,0,0x4C89B0,1, 0x531CB0,110,0,0x5316B0,1, 0x532D42,110,0,0x5316B0,2, 0x53F576,110,0,0x53F150,1, 0x53FE59,110,0,0x53F150,2, 0x5F67B8,110,2,0x5F67B8,1, 0x602278,110,2,0x602278,1, 0x4BA7E9,120,0,0x4BA7E0,1, 0x4BAA43,120,0,0x4BAA40,1, 0x4BB0DC,120,0,0x4BB0C0,1, 0x4CAF91,120,0,0x4C8940,1, 0x531C40,120,0,0x531640,1, 0x532CD2,120,0,0x531640,2, 0x53F526,120,0,0x53F100,1, 0x53FE09,120,0,0x53F100,2, 0x6037B0,120,2,0x6037B0,1, 0x60F270,120,2,0x60F270,1>;
using def_t = void(CPhysical *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *>, 0>;
META_END

META_BEGIN(CPhysical::ProcessCollision)
static int address;
static int global_address;
static const int id = 0x4961A0;
static const bool is_virtual = true;
static const int vtable_index = 9;
using mv_addresses_t = MvAddresses<0x4961A0, 0x496260, 0x4961F0>;
// total references count: 10en (16), 11en (16), steam (16)
using refs_t = RefList<0x5F69F4,100,2,0x5F69D0,1, 0x5F7C2C,100,2,0x5F7C08,1, 0x5F7CA4,100,2,0x5F7C80,1, 0x5F7DF8,100,2,0x5F7DD4,1, 0x5F806C,100,2,0x5F8048,1, 0x5F81C0,100,2,0x5F819C,1, 0x5F82C8,100,2,0x5F82A4,1, 0x5F8398,100,2,0x5F8374,1, 0x5F8C50,100,2,0x5F8C2C,1, 0x5FA524,100,2,0x5FA500,1, 0x600C40,100,2,0x600C1C,1, 0x600EC8,100,2,0x600EA4,1, 0x601ED4,100,2,0x601EB0,1, 0x602200,100,2,0x6021DC,1, 0x602440,100,2,0x60241C,1, 0x6028CC,100,2,0x6028A8,1, 0x5F67B8,110,2,0x5F67B8,1, 0x5F79F0,110,2,0x5F79F0,1, 0x5F7A68,110,2,0x5F7A68,1, 0x5F7BBC,110,2,0x5F7BBC,1, 0x5F7E30,110,2,0x5F7E30,1, 0x5F7F84,110,2,0x5F7F84,1, 0x5F808C,110,2,0x5F808C,1, 0x5F815C,110,2,0x5F815C,1, 0x5F8A14,110,2,0x5F8A14,1, 0x5FA2E8,110,2,0x5FA2E8,1, 0x600A04,110,2,0x600A04,1, 0x600C8C,110,2,0x600C8C,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x6037B0,120,2,0x6037B0,1, 0x6049E8,120,2,0x6049E8,1, 0x604A60,120,2,0x604A60,1, 0x604BB4,120,2,0x604BB4,1, 0x604E28,120,2,0x604E28,1, 0x604F7C,120,2,0x604F7C,1, 0x605084,120,2,0x605084,1, 0x605154,120,2,0x605154,1, 0x605A0C,120,2,0x605A0C,1, 0x6072E0,120,2,0x6072E0,1, 0x60D9FC,120,2,0x60D9FC,1, 0x60DC84,120,2,0x60DC84,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = void(CPhysical *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *>, 0>;
META_END

META_BEGIN(CPhysical::CheckCollision)
static int address;
static int global_address;
static const int id = 0x496E50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x496E50, 0x496F10, 0x496EA0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x496AF9,100,0,0x4961A0,1, 0x496D33,100,0,0x4961A0,2, 0x532AD0,100,0,0x531470,1, 0x496BB9,110,0,0x496260,1, 0x496DF3,110,0,0x496260,2, 0x532D10,110,0,0x5316B0,1, 0x496B49,120,0,0x4961F0,1, 0x496D83,120,0,0x4961F0,2, 0x532CA0,120,0,0x531640,1>;
using def_t = bool(CPhysical *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *>, 0>;
META_END

META_BEGIN(CPhysical::CheckCollision_SimpleCar)
static int address;
static int global_address;
static const int id = 0x496EB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x496EB0, 0x496F70, 0x496F00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x496204,100,0,0x4961A0,1, 0x4962C4,110,0,0x496260,1, 0x496254,120,0,0x4961F0,1>;
using def_t = bool(CPhysical *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *>, 0>;
META_END

META_BEGIN(CPhysical::ProcessShift)
static int address;
static int global_address;
static const int id = 0x496F10;
static const bool is_virtual = true;
static const int vtable_index = 10;
using mv_addresses_t = MvAddresses<0x496F10, 0x496FD0, 0x496F60>;
// total references count: 10en (16), 11en (16), steam (16)
using refs_t = RefList<0x5F69F8,100,2,0x5F69D0,1, 0x5F7C30,100,2,0x5F7C08,1, 0x5F7CA8,100,2,0x5F7C80,1, 0x5F7DFC,100,2,0x5F7DD4,1, 0x5F8070,100,2,0x5F8048,1, 0x5F81C4,100,2,0x5F819C,1, 0x5F82CC,100,2,0x5F82A4,1, 0x5F839C,100,2,0x5F8374,1, 0x5F8C54,100,2,0x5F8C2C,1, 0x5FA528,100,2,0x5FA500,1, 0x600C44,100,2,0x600C1C,1, 0x600ECC,100,2,0x600EA4,1, 0x601ED8,100,2,0x601EB0,1, 0x602204,100,2,0x6021DC,1, 0x602444,100,2,0x60241C,1, 0x6028D0,100,2,0x6028A8,1, 0x5F67B8,110,2,0x5F67B8,1, 0x5F79F0,110,2,0x5F79F0,1, 0x5F7A68,110,2,0x5F7A68,1, 0x5F7BBC,110,2,0x5F7BBC,1, 0x5F7E30,110,2,0x5F7E30,1, 0x5F7F84,110,2,0x5F7F84,1, 0x5F808C,110,2,0x5F808C,1, 0x5F815C,110,2,0x5F815C,1, 0x5F8A14,110,2,0x5F8A14,1, 0x5FA2E8,110,2,0x5FA2E8,1, 0x600A04,110,2,0x600A04,1, 0x600C8C,110,2,0x600C8C,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x6037B0,120,2,0x6037B0,1, 0x6049E8,120,2,0x6049E8,1, 0x604A60,120,2,0x604A60,1, 0x604BB4,120,2,0x604BB4,1, 0x604E28,120,2,0x604E28,1, 0x604F7C,120,2,0x604F7C,1, 0x605084,120,2,0x605084,1, 0x605154,120,2,0x605154,1, 0x605A0C,120,2,0x605A0C,1, 0x6072E0,120,2,0x6072E0,1, 0x60D9FC,120,2,0x60D9FC,1, 0x60DC84,120,2,0x60DC84,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = void(CPhysical *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *>, 0>;
META_END

META_BEGIN(CPhysical::AddCollisionRecord_Treadable)
static int address;
static int global_address;
static const int id = 0x4970C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4970C0, 0x497180, 0x497110>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x497189,100,0,0x497180,1, 0x497249,110,0,0x497240,1, 0x4971D9,120,0,0x4971D0,1>;
using def_t = void(CPhysical *, CEntity *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *,CEntity *>, 0,1>;
META_END

META_BEGIN(CPhysical::AddCollisionRecord)
static int address;
static int global_address;
static const int id = 0x497180;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x497180, 0x497240, 0x4971D0>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x49F7D9,100,0,0x49F790,1, 0x49F7EA,100,0,0x49F790,2, 0x4CC2F2,100,0,0x4CBB30,1, 0x4CC303,100,0,0x4CBB30,2, 0x53B5D8,100,0,0x53B270,1, 0x53B5E9,100,0,0x53B270,2, 0x49F8C9,110,0,0x49F880,1, 0x49F8DA,110,0,0x49F880,2, 0x4CC392,110,0,0x4CBBD0,1, 0x4CC3A3,110,0,0x4CBBD0,2, 0x53B818,110,0,0x53B4B0,1, 0x53B829,110,0,0x53B4B0,2, 0x49F859,120,0,0x49F810,1, 0x49F86A,120,0,0x49F810,2, 0x4CC322,120,0,0x4CBB60,1, 0x4CC333,120,0,0x4CBB60,2, 0x53B7C8,120,0,0x53B460,1, 0x53B7D9,120,0,0x53B460,2>;
using def_t = void(CPhysical *, CEntity *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *,CEntity *>, 0,1>;
META_END

META_BEGIN(CPhysical::GetHasCollidedWith)
static int address;
static int global_address;
static const int id = 0x497240;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x497240, 0x497300, 0x497290>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x414197,100,0,0x413E50,1, 0x414ED9,100,0,0x413E50,2, 0x415808,100,0,0x413E50,3, 0x440481,100,0,0x43ED30,1, 0x4404F4,100,0,0x43ED30,2, 0x4441D4,100,0,0x4429C0,1, 0x444253,100,0,0x4429C0,2, 0x414197,110,0,0x413E50,1, 0x414ED9,110,0,0x413E50,2, 0x415808,110,0,0x413E50,3, 0x440481,110,0,0x43ED30,1, 0x4404F4,110,0,0x43ED30,2, 0x4441D4,110,0,0x4429C0,1, 0x444253,110,0,0x4429C0,2, 0x414197,120,0,0x413E50,1, 0x414ED9,120,0,0x413E50,2, 0x415808,120,0,0x413E50,3, 0x440481,120,0,0x43ED30,1, 0x4404F4,120,0,0x43ED30,2, 0x4441D4,120,0,0x4429C0,1, 0x444253,120,0,0x4429C0,2>;
using def_t = bool(CPhysical *, CEntity *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *,CEntity *>, 0,1>;
META_END

META_BEGIN(CPhysical::ApplyTurnSpeed)
static int address;
static int global_address;
static const int id = 0x497280;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x497280, 0x497340, 0x4972D0>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x496AF2,100,0,0x4961A0,1, 0x496C42,100,0,0x4961A0,2, 0x496F66,100,0,0x496F10,1, 0x499094,100,0,0x4973A0,1, 0x4B1DEC,100,0,0x4B1A60,1, 0x532AA6,100,0,0x531470,1, 0x532AC9,100,0,0x531470,2, 0x496BB2,110,0,0x496260,1, 0x496D02,110,0,0x496260,2, 0x497026,110,0,0x496FD0,1, 0x499154,110,0,0x497460,1, 0x4B1EDC,110,0,0x4B1B50,1, 0x532CE6,110,0,0x5316B0,1, 0x532D09,110,0,0x5316B0,2, 0x496B42,120,0,0x4961F0,1, 0x496C92,120,0,0x4961F0,2, 0x496FB6,120,0,0x496F60,1, 0x4990E4,120,0,0x4973F0,1, 0x4B1E6C,120,0,0x4B1AE0,1, 0x532C76,120,0,0x531640,1, 0x532C99,120,0,0x531640,2>;
using def_t = void(CPhysical *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *>, 0>;
META_END

META_BEGIN(CPhysical::ApplyCollision)
static int address;
static int global_address;
static const int id = 0x4973A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4973A0, 0x497460, 0x4973F0>;
// total references count: 10en (8), 11en (8), steam (8)
using refs_t = RefList<0x49C76A,100,0,0x49B620,1, 0x49CB0A,100,0,0x49B620,2, 0x49CF92,100,0,0x49B620,3, 0x49D39F,100,0,0x49B620,4, 0x49E949,100,0,0x49E790,1, 0x49EC7F,100,0,0x49E790,2, 0x49F089,100,0,0x49E790,3, 0x49F3FD,100,0,0x49E790,4, 0x49C85A,110,0,0x49B710,1, 0x49CBFA,110,0,0x49B710,2, 0x49D082,110,0,0x49B710,3, 0x49D48F,110,0,0x49B710,4, 0x49EA39,110,0,0x49E880,1, 0x49ED6F,110,0,0x49E880,2, 0x49F179,110,0,0x49E880,3, 0x49F4ED,110,0,0x49E880,4, 0x49C7EA,120,0,0x49B6A0,1, 0x49CB8A,120,0,0x49B6A0,2, 0x49D012,120,0,0x49B6A0,3, 0x49D41F,120,0,0x49B6A0,4, 0x49E9C9,120,0,0x49E810,1, 0x49ECFF,120,0,0x49E810,2, 0x49F109,120,0,0x49E810,3, 0x49F47D,120,0,0x49E810,4>;
using def_t = bool(CPhysical *, CPhysical *, CColPoint &, float *, float *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *,CPhysical *,CColPoint &,float *,float *>, 0,1,2,3,4>;
META_END

META_BEGIN(CPhysical::ApplyCollisionAlt)
static int address;
static int global_address;
static const int id = 0x4992A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4992A0, 0x499360, 0x4992F0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x49BE36,100,0,0x49B620,1, 0x49C0D2,100,0,0x49B620,2, 0x49BF26,110,0,0x49B710,1, 0x49C1C2,110,0,0x49B710,2, 0x49BEB6,120,0,0x49B6A0,1, 0x49C152,120,0,0x49B6A0,2>;
using def_t = bool(CPhysical *, CEntity *, CColPoint &, float *, CVector &, CVector &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *,CEntity *,CColPoint &,float *,CVector &,CVector &>, 0,1,2,3,4,5>;
META_END

META_BEGIN(CPhysical::ApplySpringCollision)
static int address;
static int global_address;
static const int id = 0x499890;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x499890, 0x499980, 0x499910>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x532E68,100,0,0x531470,1, 0x5330A8,110,0,0x5316B0,1, 0x533038,120,0,0x531640,1>;
using def_t = bool(CPhysical *, float, CVector &, CVector &, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *,float,CVector &,CVector &,float,float>, 0,1,2,3,4,5>;
META_END

META_BEGIN(CPhysical::ApplySpringDampening)
static int address;
static int global_address;
static const int id = 0x499990;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x499990, 0x499A80, 0x499A10>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x533001,100,0,0x531470,1, 0x533241,110,0,0x5316B0,1, 0x5331D1,120,0,0x531640,1>;
using def_t = bool(CPhysical *, float, CVector &, CVector &, CVector &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *,float,CVector &,CVector &,CVector &>, 0,1,2,3,4>;
META_END

META_BEGIN_OVERLOADED(CPhysical::ApplyFriction, bool (CPhysical::*)(float, CColPoint &))
static int address;
static int global_address;
static const int id = 0x499BE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x499BE0, 0x499CD0, 0x499C60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x49C466,100,0,0x49B620,1, 0x49C556,110,0,0x49B710,1, 0x49C4E6,120,0,0x49B6A0,1>;
using def_t = bool(CPhysical *, float, CColPoint &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *,float,CColPoint &>, 0,1,2>;
META_END

META_BEGIN_OVERLOADED(CPhysical::ApplyFriction, bool (CPhysical::*)(CPhysical *, float, CColPoint &))
static int address;
static int global_address;
static const int id = 0x49A180;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x49A180, 0x49A270, 0x49A200>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x49CE15,100,0,0x49B620,1, 0x49D29E,100,0,0x49B620,2, 0x49D6AE,100,0,0x49B620,3, 0x49EF17,100,0,0x49E790,1, 0x49F31F,100,0,0x49E790,2, 0x49F697,100,0,0x49E790,3, 0x49CF05,110,0,0x49B710,1, 0x49D38E,110,0,0x49B710,2, 0x49D79E,110,0,0x49B710,3, 0x49F007,110,0,0x49E880,1, 0x49F40F,110,0,0x49E880,2, 0x49F787,110,0,0x49E880,3, 0x49CE95,120,0,0x49B6A0,1, 0x49D31E,120,0,0x49B6A0,2, 0x49D72E,120,0,0x49B6A0,3, 0x49EF97,120,0,0x49E810,1, 0x49F39F,120,0,0x49E810,2, 0x49F717,120,0,0x49E810,3>;
using def_t = bool(CPhysical *, CPhysical *, float, CColPoint &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *,CPhysical *,float,CColPoint &>, 0,1,2,3>;
META_END

META_BEGIN(CPhysical::ProcessCollisionSectorList)
static int address;
static int global_address;
static const int id = 0x49B620;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x49B620, 0x49B710, 0x49B6A0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x496E8E,100,0,0x496E50,1, 0x497006,100,0,0x496F10,1, 0x496F4E,110,0,0x496F10,1, 0x4970C6,110,0,0x496FD0,1, 0x496EDE,120,0,0x496EA0,1, 0x497056,120,0,0x496F60,1>;
using def_t = bool(CPhysical *, CPtrList *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *,CPtrList *>, 0,1>;
META_END

META_BEGIN(CPhysical::ProcessShiftSectorList)
static int address;
static int global_address;
static const int id = 0x49DA10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x49DA10, 0x49DB00, 0x49DA90>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x496FB6,100,0,0x496F10,1, 0x497076,110,0,0x496FD0,1, 0x497006,120,0,0x496F60,1>;
using def_t = bool(CPhysical *, CPtrList *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *,CPtrList *>, 0,1>;
META_END

META_BEGIN(CPhysical::ProcessCollisionSectorList_SimpleCar)
static int address;
static int global_address;
static const int id = 0x49E790;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x49E790, 0x49E880, 0x49E810>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x496EEE,100,0,0x496EB0,1, 0x496FAE,110,0,0x496F70,1, 0x496F3E,120,0,0x496F00,1>;
using def_t = bool(CPhysical *, CSector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *,CSector *>, 0,1>;
META_END

META_BEGIN(CPhysical::ProcessEntityCollision)
static int address;
static int global_address;
static const int id = 0x49F790;
static const bool is_virtual = true;
static const int vtable_index = 17;
using mv_addresses_t = MvAddresses<0x49F790, 0x49F880, 0x49F810>;
// total references count: 10en (10), 11en (10), steam (10)
using refs_t = RefList<0x5F6A14,100,2,0x5F69D0,1, 0x5F7C4C,100,2,0x5F7C08,1, 0x5F7CC4,100,2,0x5F7C80,1, 0x5F7E18,100,2,0x5F7DD4,1, 0x5F808C,100,2,0x5F8048,1, 0x600EE8,100,2,0x600EA4,1, 0x601EF4,100,2,0x601EB0,1, 0x602220,100,2,0x6021DC,1, 0x602460,100,2,0x60241C,1, 0x6028EC,100,2,0x6028A8,1, 0x5F67B8,110,2,0x5F67B8,1, 0x5F79F0,110,2,0x5F79F0,1, 0x5F7A68,110,2,0x5F7A68,1, 0x5F7BBC,110,2,0x5F7BBC,1, 0x5F7E30,110,2,0x5F7E30,1, 0x600C8C,110,2,0x600C8C,1, 0x601980,110,2,0x601980,1, 0x601BA4,110,2,0x601BA4,1, 0x601DE4,110,2,0x601DE4,1, 0x602278,110,2,0x602278,1, 0x6037B0,120,2,0x6037B0,1, 0x6049E8,120,2,0x6049E8,1, 0x604A60,120,2,0x604A60,1, 0x604BB4,120,2,0x604BB4,1, 0x604E28,120,2,0x604E28,1, 0x60DC84,120,2,0x60DC84,1, 0x60E978,120,2,0x60E978,1, 0x60EB9C,120,2,0x60EB9C,1, 0x60EDDC,120,2,0x60EDDC,1, 0x60F270,120,2,0x60F270,1>;
using def_t = int(CPhysical *, CEntity *, CColPoint *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *,CEntity *,CColPoint *>, 0,1,2>;
META_END

META_BEGIN(CPhysical::RemoveRefsToEntity)
static int address;
static int global_address;
static const int id = 0x49F820;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x49F820, 0x49F910, 0x49F8A0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4B3C36,100,0,0x4B3BF0,1, 0x4B3CA8,100,0,0x4B3BF0,2, 0x4B3D04,100,0,0x4B3BF0,3, 0x4B3D26,110,0,0x4B3CE0,1, 0x4B3D98,110,0,0x4B3CE0,2, 0x4B3DF4,110,0,0x4B3CE0,3, 0x4B3CB6,120,0,0x4B3C70,1, 0x4B3D28,120,0,0x4B3C70,2, 0x4B3D84,120,0,0x4B3C70,3>;
using def_t = void(CPhysical *, CEntity *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *,CEntity *>, 0,1>;
META_END

META_BEGIN(CPhysical::PlacePhysicalRelativeToOtherPhysical)
static int address;
static int global_address;
static const int id = 0x49F890;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x49F890, 0x49F980, 0x49F910>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x44B06C,100,0,0x448240,1, 0x58A7F1,100,0,0x589D00,1, 0x44B06C,110,0,0x448240,1, 0x58AB31,110,0,0x58A040,1, 0x44B06C,120,0,0x448240,1, 0x58AA21,120,0,0x589F30,1>;
using def_t = void(CPhysical *, CPhysical *, CVector);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CPhysical *,CPhysical *,CVector>, 0,1,2>;
META_END

DEL_DTOR_META_BEGIN(CPhysical)
static int address;
static int global_address;
static const int id = 0x49F960;
static const bool is_virtual = true;
static const int vtable_index = 0;
using mv_addresses_t = MvAddresses<0x49F960, 0x49FA50, 0x49F9E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5F69D0,100,2,0x5F69D0,1, 0x5F67B8,110,2,0x5F67B8,1, 0x6037B0,120,2,0x6037B0,1>;
using def_t = void(CPhysical *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPhysical *,int>, 0,1>;
META_END

}
