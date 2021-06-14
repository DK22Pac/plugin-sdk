/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CCoronas::Update)
static int address;
static int global_address;
static const int id = 0x4F8EC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F8EC0, 0x4F8FA0, 0x4F8F30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C9D7,100,0,0x48C850,1, 0x48CAD7,110,0,0x48C950,1, 0x48CA67,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCoronas::Render)
static int address;
static int global_address;
static const int id = 0x4F8FB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F8FB0, 0x4F9090, 0x4F9020>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48E0B8,100,0,0x48E090,1, 0x48E178,110,0,0x48E150,1, 0x48E108,120,0,0x48E0E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCoronas::RenderReflections)
static int address;
static int global_address;
static const int id = 0x4F9B40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F9B40, 0x4F9C20, 0x4F9BB0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48E03F,100,0,0x48E030,1, 0x48E0FF,110,0,0x48E0F0,1, 0x48E08F,120,0,0x48E080,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCoronas::Init)
static int address;
static int global_address;
static const int id = 0x4F9F90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4F9F90, 0x4FA070, 0x4FA000>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C22A,100,0,0x48BED0,1, 0x48C31A,110,0,0x48BFC0,1, 0x48C2AA,120,0,0x48BF50,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CCoronas::Shutdown)
static int address;
static int global_address;
static const int id = 0x4FA050;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FA050, 0x4FA130, 0x4FA0C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C47D,100,0,0x48C3A0,1, 0x48C56D,110,0,0x48C490,1, 0x48C4FD,120,0,0x48C420,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN_OVERLOADED(CCoronas::RegisterCorona, void (*)(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const &, float, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, float))
static int address;
static int global_address;
static const int id = 0x4FA080;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FA080, 0x4FA160, 0x4FA0F0>;
// total references count: 10en (42), 11en (42), steam (42)
using refs_t = RefList<0x43196C,100,0,0x431520,1, 0x431E7C,100,0,0x431C30,1, 0x4320FC,100,0,0x431F40,1, 0x43237C,100,0,0x4321C0,1, 0x4448B3,100,0,0x4429C0,1, 0x455FF5,100,0,0x455800,1, 0x4FA467,100,0,0x4FA380,1, 0x4FA4D0,100,0,0x4FA380,2, 0x537C83,100,0,0x535B40,1, 0x537CD5,100,0,0x535B40,2, 0x537DD1,100,0,0x535B40,3, 0x537F58,100,0,0x535B40,4, 0x5384DB,100,0,0x535B40,5, 0x53859A,100,0,0x535B40,6, 0x5385FA,100,0,0x535B40,7, 0x53873F,100,0,0x535B40,8, 0x538865,100,0,0x535B40,9, 0x53898D,100,0,0x535B40,10, 0x538AB3,100,0,0x535B40,11, 0x538B00,100,0,0x535B40,12, 0x538B4F,100,0,0x535B40,13, 0x538F14,100,0,0x535B40,14, 0x53902F,100,0,0x535B40,15, 0x53911F,100,0,0x535B40,16, 0x5391C0,100,0,0x535B40,17, 0x539213,100,0,0x535B40,18, 0x539262,100,0,0x535B40,19, 0x5399EA,100,0,0x535B40,20, 0x539A40,100,0,0x535B40,21, 0x539B6E,100,0,0x535B40,22, 0x539BC4,100,0,0x535B40,23, 0x547A96,100,0,0x5477F0,1, 0x547B55,100,0,0x5477F0,2, 0x54B578,100,0,0x54B2F0,1, 0x54B6AC,100,0,0x54B2F0,2, 0x54B74E,100,0,0x54B2F0,3, 0x54B7EB,100,0,0x54B2F0,4, 0x54E75E,100,0,0x54E4C0,1, 0x54E88C,100,0,0x54E4C0,2, 0x54E92E,100,0,0x54E4C0,3, 0x54EA35,100,0,0x54E4C0,4, 0x54EA70,100,0,0x54E4C0,5, 0x43196C,110,0,0x431520,1, 0x431E7C,110,0,0x431C30,1, 0x4320FC,110,0,0x431F40,1, 0x43237C,110,0,0x4321C0,1, 0x4448B3,110,0,0x4429C0,1, 0x455FF5,110,0,0x455800,1, 0x4FA547,110,0,0x4FA460,1, 0x4FA5B0,110,0,0x4FA460,2, 0x537EC3,110,0,0x535D80,1, 0x537F15,110,0,0x535D80,2, 0x538011,110,0,0x535D80,3, 0x538198,110,0,0x535D80,4, 0x53871B,110,0,0x535D80,5, 0x5387DA,110,0,0x535D80,6, 0x53883A,110,0,0x535D80,7, 0x53897F,110,0,0x535D80,8, 0x538AA5,110,0,0x535D80,9, 0x538BCD,110,0,0x535D80,10, 0x538CF3,110,0,0x535D80,11, 0x538D40,110,0,0x535D80,12, 0x538D8F,110,0,0x535D80,13, 0x539154,110,0,0x535D80,14, 0x53926F,110,0,0x535D80,15, 0x53935F,110,0,0x535D80,16, 0x539400,110,0,0x535D80,17, 0x539453,110,0,0x535D80,18, 0x5394A2,110,0,0x535D80,19, 0x539C2A,110,0,0x535D80,20, 0x539C80,110,0,0x535D80,21, 0x539DAE,110,0,0x535D80,22, 0x539E04,110,0,0x535D80,23, 0x547C96,110,0,0x5479F0,1, 0x547D55,110,0,0x5479F0,2, 0x54B6F8,110,0,0x54B470,1, 0x54B82C,110,0,0x54B470,2, 0x54B8CE,110,0,0x54B470,3, 0x54B96B,110,0,0x54B470,4, 0x54E89E,110,0,0x54E600,1, 0x54E9CC,110,0,0x54E600,2, 0x54EA6E,110,0,0x54E600,3, 0x54EB75,110,0,0x54E600,4, 0x54EBB0,110,0,0x54E600,5, 0x43196C,120,0,0x431520,1, 0x431E7C,120,0,0x431C30,1, 0x4320FC,120,0,0x431F40,1, 0x43237C,120,0,0x4321C0,1, 0x4448B3,120,0,0x4429C0,1, 0x455FF5,120,0,0x455800,1, 0x4FA4D7,120,0,0x4FA3F0,1, 0x4FA540,120,0,0x4FA3F0,2, 0x537E53,120,0,0x535D10,1, 0x537EA5,120,0,0x535D10,2, 0x537FA1,120,0,0x535D10,3, 0x538128,120,0,0x535D10,4, 0x5386CB,120,0,0x535D10,5, 0x53878A,120,0,0x535D10,6, 0x5387EA,120,0,0x535D10,7, 0x53892F,120,0,0x535D10,8, 0x538A55,120,0,0x535D10,9, 0x538B7D,120,0,0x535D10,10, 0x538CA3,120,0,0x535D10,11, 0x538CF0,120,0,0x535D10,12, 0x538D3F,120,0,0x535D10,13, 0x539104,120,0,0x535D10,14, 0x53921F,120,0,0x535D10,15, 0x53930F,120,0,0x535D10,16, 0x5393B0,120,0,0x535D10,17, 0x539403,120,0,0x535D10,18, 0x539452,120,0,0x535D10,19, 0x539BDA,120,0,0x535D10,20, 0x539C30,120,0,0x535D10,21, 0x539D5E,120,0,0x535D10,22, 0x539DB4,120,0,0x535D10,23, 0x547C46,120,0,0x5479A0,1, 0x547D05,120,0,0x5479A0,2, 0x54B6A8,120,0,0x54B420,1, 0x54B7DC,120,0,0x54B420,2, 0x54B87E,120,0,0x54B420,3, 0x54B91B,120,0,0x54B420,4, 0x54E84E,120,0,0x54E5B0,1, 0x54E97C,120,0,0x54E5B0,2, 0x54EA1E,120,0,0x54E5B0,3, 0x54EB25,120,0,0x54E5B0,4, 0x54EB60,120,0,0x54E5B0,5>;
using def_t = void(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const &, float, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int,unsigned char,unsigned char,unsigned char,unsigned char,CVector const &,float,float,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,float>, 0,1,2,3,4,5,6,7,8,9,10,11,12,13>;
META_END

META_BEGIN_OVERLOADED(CCoronas::RegisterCorona, void (*)(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const &, float, float, RwTexture *, unsigned char, unsigned char, unsigned char, unsigned char, float))
static int address;
static int global_address;
static const int id = 0x4FA0E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FA0E0, 0x4FA1C0, 0x4FA150>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x4749EB,100,0,0x474350,1, 0x4FA0CB,100,0,0x4FA080,1, 0x4FA8F0,100,0,0x4FA530,1, 0x55A574,100,0,0x55A0C0,1, 0x55A5AD,100,0,0x55A0C0,2, 0x55A6A9,100,0,0x55A0C0,3, 0x55A6E2,100,0,0x55A0C0,4, 0x4749EB,110,0,0x474350,1, 0x4FA1AB,110,0,0x4FA160,1, 0x4FA9D0,110,0,0x4FA610,1, 0x55A6A4,110,0,0x55A1F0,1, 0x55A6DD,110,0,0x55A1F0,2, 0x55A7D9,110,0,0x55A1F0,3, 0x55A812,110,0,0x55A1F0,4, 0x4749EB,120,0,0x474350,1, 0x4FA13B,120,0,0x4FA0F0,1, 0x4FA960,120,0,0x4FA5A0,1, 0x55A654,120,0,0x55A1A0,1, 0x55A68D,120,0,0x55A1A0,2, 0x55A789,120,0,0x55A1A0,3, 0x55A7C2,120,0,0x55A1A0,4>;
using def_t = void(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char, CVector const &, float, float, RwTexture *, unsigned char, unsigned char, unsigned char, unsigned char, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int,unsigned char,unsigned char,unsigned char,unsigned char,CVector const &,float,float,RwTexture *,unsigned char,unsigned char,unsigned char,unsigned char,float>, 0,1,2,3,4,5,6,7,8,9,10,11,12,13>;
META_END

META_BEGIN(CCoronas::UpdateCoronaCoors)
static int address;
static int global_address;
static const int id = 0x4FA2D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FA2D0, 0x4FA3B0, 0x4FA340>;
// total references count: 10en (9), 11en (9), steam (9)
using refs_t = RefList<0x537CFE,100,0,0x535B40,1, 0x537F7A,100,0,0x535B40,2, 0x538B93,100,0,0x535B40,3, 0x538BCF,100,0,0x535B40,4, 0x53929A,100,0,0x535B40,5, 0x5392CC,100,0,0x535B40,6, 0x539CD6,100,0,0x535B40,7, 0x539D46,100,0,0x535B40,8, 0x539D81,100,0,0x535B40,9, 0x537F3E,110,0,0x535D80,1, 0x5381BA,110,0,0x535D80,2, 0x538DD3,110,0,0x535D80,3, 0x538E0F,110,0,0x535D80,4, 0x5394DA,110,0,0x535D80,5, 0x53950C,110,0,0x535D80,6, 0x539F16,110,0,0x535D80,7, 0x539F86,110,0,0x535D80,8, 0x539FC1,110,0,0x535D80,9, 0x537ECE,120,0,0x535D10,1, 0x53814A,120,0,0x535D10,2, 0x538D83,120,0,0x535D10,3, 0x538DBF,120,0,0x535D10,4, 0x53948A,120,0,0x535D10,5, 0x5394BC,120,0,0x535D10,6, 0x539EC6,120,0,0x535D10,7, 0x539F36,120,0,0x535D10,8, 0x539F71,120,0,0x535D10,9>;
using def_t = void(unsigned int, CVector const &, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int,CVector const &,float,float>, 0,1,2,3>;
META_END

META_BEGIN(CCoronas::DoSunAndMoon)
static int address;
static int global_address;
static const int id = 0x4FA380;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4FA380, 0x4FA460, 0x4FA3F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x48C9D2,100,0,0x48C850,1, 0x48CAD2,110,0,0x48C950,1, 0x48CA62,120,0,0x48C8E0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
