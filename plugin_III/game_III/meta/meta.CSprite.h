/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CSprite::CalcScreenCoors)
static int address;
static int global_address;
static const int id = 0x51C3A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51C3A0, 0x51C5D0, 0x51C560>;
// total references count: 10en (21), 11en (21), steam (21)
using refs_t = RefList<0x431A1B,100,0,0x431520,1, 0x432FEA,100,0,0x432F60,1, 0x4F6F34,100,0,0x4F6D90,1, 0x4F71ED,100,0,0x4F6D90,2, 0x4F7329,100,0,0x4F6D90,3, 0x4F753C,100,0,0x4F6D90,4, 0x4F76EB,100,0,0x4F6D90,5, 0x4F7B51,100,0,0x4F6D90,6, 0x4F7D1C,100,0,0x4F6D90,7, 0x4F9131,100,0,0x4F8FB0,1, 0x4F9D76,100,0,0x4F9B40,1, 0x4FA4EE,100,0,0x4FA380,1, 0x4FFF2E,100,0,0x4FFCE0,1, 0x50000A,100,0,0x4FFCE0,2, 0x500840,100,0,0x5005F0,1, 0x50F0BC,100,0,0x50EE20,1, 0x50F3A9,100,0,0x50EE20,2, 0x511178,100,0,0x510C30,1, 0x511642,100,0,0x510C30,2, 0x51AE11,100,0,0x51AD90,1, 0x564DD1,100,0,0x564D70,1, 0x431A1B,110,0,0x431520,1, 0x432FEA,110,0,0x432F60,1, 0x4F7014,110,0,0x4F6E70,1, 0x4F72CD,110,0,0x4F6E70,2, 0x4F7409,110,0,0x4F6E70,3, 0x4F761C,110,0,0x4F6E70,4, 0x4F77CB,110,0,0x4F6E70,5, 0x4F7C31,110,0,0x4F6E70,6, 0x4F7DFC,110,0,0x4F6E70,7, 0x4F9211,110,0,0x4F9090,1, 0x4F9E56,110,0,0x4F9C20,1, 0x4FA5CE,110,0,0x4FA460,1, 0x50000E,110,0,0x4FFDC0,1, 0x5000EA,110,0,0x4FFDC0,2, 0x500920,110,0,0x5006D0,1, 0x50F2AC,110,0,0x50F010,1, 0x50F599,110,0,0x50F010,2, 0x511368,110,0,0x510E20,1, 0x511832,110,0,0x510E20,2, 0x51B041,110,0,0x51AFC0,1, 0x564F11,110,0,0x564EB0,1, 0x431A1B,120,0,0x431520,1, 0x432FEA,120,0,0x432F60,1, 0x4F6FA4,120,0,0x4F6E00,1, 0x4F725D,120,0,0x4F6E00,2, 0x4F7399,120,0,0x4F6E00,3, 0x4F75AC,120,0,0x4F6E00,4, 0x4F775B,120,0,0x4F6E00,5, 0x4F7BC1,120,0,0x4F6E00,6, 0x4F7D8C,120,0,0x4F6E00,7, 0x4F91A1,120,0,0x4F9020,1, 0x4F9DE6,120,0,0x4F9BB0,1, 0x4FA55E,120,0,0x4FA3F0,1, 0x4FFF9E,120,0,0x4FFD50,1, 0x50007A,120,0,0x4FFD50,2, 0x5008B0,120,0,0x500660,1, 0x50F23C,120,0,0x50EFA0,1, 0x50F529,120,0,0x50EFA0,2, 0x5112F8,120,0,0x510DB0,1, 0x5117C2,120,0,0x510DB0,2, 0x51AFD1,120,0,0x51AF50,1, 0x564EC1,120,0,0x564E60,1>;
using def_t = bool(RwV3d const &, RwV3d *, float *, float *, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwV3d const &,RwV3d *,float *,float *,bool>, 0,1,2,3,4>;
META_END

META_BEGIN(CSprite::CalcHorizonCoors)
static int address;
static int global_address;
static const int id = 0x51C4A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51C4A0, 0x51C6D0, 0x51C660>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F80F6,100,0,0x4F7F00,1, 0x4F81D6,110,0,0x4F7FE0,1, 0x4F8166,120,0,0x4F7F70,1>;
using def_t = float();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CSprite::FlushSpriteBuffer)
static int address;
static int global_address;
static const int id = 0x51C520;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51C520, 0x51C750, 0x51C6E0>;
// total references count: 10en (18), 11en (18), steam (18)
using refs_t = RefList<0x4F7275,100,0,0x4F6D90,1, 0x4F75C4,100,0,0x4F6D90,2, 0x4F7A76,100,0,0x4F6D90,3, 0x4F7C5B,100,0,0x4F6D90,4, 0x4F7E43,100,0,0x4F6D90,5, 0x4F9F35,100,0,0x4F9B40,1, 0x5000A9,100,0,0x4FFCE0,1, 0x5008EA,100,0,0x5005F0,1, 0x50EF17,100,0,0x50EE20,1, 0x50EF92,100,0,0x50EE20,2, 0x50EFE0,100,0,0x50EE20,3, 0x50F656,100,0,0x50EE20,4, 0x51C940,100,0,0x51C5D0,1, 0x51D0F1,100,0,0x51CCD0,1, 0x51D9BF,100,0,0x51D5B0,1, 0x51E39F,100,0,0x51D9E0,1, 0x51E481,100,0,0x51E3C0,1, 0x51E5E4,100,0,0x51E490,1, 0x4F7355,110,0,0x4F6E70,1, 0x4F76A4,110,0,0x4F6E70,2, 0x4F7B56,110,0,0x4F6E70,3, 0x4F7D3B,110,0,0x4F6E70,4, 0x4F7F23,110,0,0x4F6E70,5, 0x4FA015,110,0,0x4F9C20,1, 0x500189,110,0,0x4FFDC0,1, 0x5009CA,110,0,0x5006D0,1, 0x50F107,110,0,0x50F010,1, 0x50F182,110,0,0x50F010,2, 0x50F1D0,110,0,0x50F010,3, 0x50F846,110,0,0x50F010,4, 0x51CB70,110,0,0x51C800,1, 0x51D321,110,0,0x51CF00,1, 0x51DBEF,110,0,0x51D7E0,1, 0x51E5CF,110,0,0x51DC10,1, 0x51E6B1,110,0,0x51E5F0,1, 0x51E814,110,0,0x51E6C0,1, 0x4F72E5,120,0,0x4F6E00,1, 0x4F7634,120,0,0x4F6E00,2, 0x4F7AE6,120,0,0x4F6E00,3, 0x4F7CCB,120,0,0x4F6E00,4, 0x4F7EB3,120,0,0x4F6E00,5, 0x4F9FA5,120,0,0x4F9BB0,1, 0x500119,120,0,0x4FFD50,1, 0x50095A,120,0,0x500660,1, 0x50F097,120,0,0x50EFA0,1, 0x50F112,120,0,0x50EFA0,2, 0x50F160,120,0,0x50EFA0,3, 0x50F7D6,120,0,0x50EFA0,4, 0x51CB00,120,0,0x51C790,1, 0x51D2B1,120,0,0x51CE90,1, 0x51DB7F,120,0,0x51D770,1, 0x51E55F,120,0,0x51DBA0,1, 0x51E641,120,0,0x51E580,1, 0x51E7A4,120,0,0x51E650,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CSprite::InitSpriteBuffer)
static int address;
static int global_address;
static const int id = 0x51C590;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51C590, 0x51C7C0, 0x51C750>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4F6E28,100,0,0x4F6D90,1, 0x4FFD58,100,0,0x4FFCE0,1, 0x500619,100,0,0x5005F0,1, 0x51C5C7,100,0,0x51C5B0,1, 0x4F6F08,110,0,0x4F6E70,1, 0x4FFE38,110,0,0x4FFDC0,1, 0x5006F9,110,0,0x5006D0,1, 0x51C7F7,110,0,0x51C7E0,1, 0x4F6E98,120,0,0x4F6E00,1, 0x4FFDC8,120,0,0x4FFD50,1, 0x500689,120,0,0x500660,1, 0x51C787,120,0,0x51C770,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CSprite::InitSpriteBuffer2D)
static int address;
static int global_address;
static const int id = 0x51C5B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51C5B0, 0x51C7E0, 0x51C770>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50EE84,100,0,0x50EE20,1, 0x50F074,110,0,0x50F010,1, 0x50F004,120,0,0x50EFA0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CSprite::RenderBufferedOneXLUSprite)
static int address;
static int global_address;
static const int id = 0x51C5D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51C5D0, 0x51C800, 0x51C790>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x4F7263,100,0,0x4F6D90,1, 0x4F7E31,100,0,0x4F6D90,2, 0x4F9F19,100,0,0x4F9B40,1, 0x500085,100,0,0x4FFCE0,1, 0x5008B2,100,0,0x5005F0,1, 0x50F643,100,0,0x50EE20,1, 0x4F7343,110,0,0x4F6E70,1, 0x4F7F11,110,0,0x4F6E70,2, 0x4F9FF9,110,0,0x4F9C20,1, 0x500165,110,0,0x4FFDC0,1, 0x500992,110,0,0x5006D0,1, 0x50F833,110,0,0x50F010,1, 0x4F72D3,120,0,0x4F6E00,1, 0x4F7EA1,120,0,0x4F6E00,2, 0x4F9F89,120,0,0x4F9BB0,1, 0x5000F5,120,0,0x4FFD50,1, 0x500922,120,0,0x500660,1, 0x50F7C3,120,0,0x50EFA0,1>;
using def_t = void(float, float, float, float, float, unsigned char, unsigned char, unsigned char, short, float, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float,float,float,float,unsigned char,unsigned char,unsigned char,short,float,unsigned char>, 0,1,2,3,4,5,6,7,8,9,10>;
META_END

META_BEGIN(CSprite::RenderOneXLUSprite)
static int address;
static int global_address;
static const int id = 0x51C960;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51C960, 0x51CB90, 0x51CB20>;
// total references count: 10en (8), 11en (8), steam (8)
using refs_t = RefList<0x4330FB,100,0,0x432F60,1, 0x4F6FB6,100,0,0x4F6D90,1, 0x4F700E,100,0,0x4F6D90,2, 0x4F73D8,100,0,0x4F6D90,3, 0x4F95D7,100,0,0x4F8FB0,1, 0x4F981A,100,0,0x4F8FB0,2, 0x505A8C,100,0,0x5052A0,1, 0x564E3E,100,0,0x564D70,1, 0x4330FB,110,0,0x432F60,1, 0x4F7096,110,0,0x4F6E70,1, 0x4F70EE,110,0,0x4F6E70,2, 0x4F74B8,110,0,0x4F6E70,3, 0x4F96B7,110,0,0x4F9090,1, 0x4F98FA,110,0,0x4F9090,2, 0x505B6C,110,0,0x505380,1, 0x564F7E,110,0,0x564EB0,1, 0x4330FB,120,0,0x432F60,1, 0x4F7026,120,0,0x4F6E00,1, 0x4F707E,120,0,0x4F6E00,2, 0x4F7448,120,0,0x4F6E00,3, 0x4F9647,120,0,0x4F9020,1, 0x4F988A,120,0,0x4F9020,2, 0x505AFC,120,0,0x505310,1, 0x564F2E,120,0,0x564E60,1>;
using def_t = void(float, float, float, float, float, unsigned char, unsigned char, unsigned char, short, float, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float,float,float,float,unsigned char,unsigned char,unsigned char,short,float,unsigned char>, 0,1,2,3,4,5,6,7,8,9,10>;
META_END

META_BEGIN(CSprite::RenderBufferedOneXLUSprite_Rotate_Aspect)
static int address;
static int global_address;
static const int id = 0x51CCD0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51CCD0, 0x51CF00, 0x51CE90>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F7C49,100,0,0x4F6D90,1, 0x4F7D29,110,0,0x4F6E70,1, 0x4F7CB9,120,0,0x4F6E00,1>;
using def_t = void(float, float, float, float, float, unsigned char, unsigned char, unsigned char, short, float, float, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float,float,float,float,unsigned char,unsigned char,unsigned char,short,float,float,unsigned char>, 0,1,2,3,4,5,6,7,8,9,10,11>;
META_END

META_BEGIN(CSprite::RenderOneXLUSprite_Rotate_Aspect)
static int address;
static int global_address;
static const int id = 0x51D110;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51D110, 0x51D340, 0x51D2D0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4F96EE,100,0,0x4F8FB0,1, 0x5112DA,100,0,0x510C30,1, 0x5117B0,100,0,0x510C30,2, 0x4F97CE,110,0,0x4F9090,1, 0x5114CA,110,0,0x510E20,1, 0x5119A0,110,0,0x510E20,2, 0x4F975E,120,0,0x4F9020,1, 0x51145A,120,0,0x510DB0,1, 0x511930,120,0,0x510DB0,2>;
using def_t = void(float, float, float, float, float, unsigned char, unsigned char, unsigned char, short, float, float, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float,float,float,float,unsigned char,unsigned char,unsigned char,short,float,float,unsigned char>, 0,1,2,3,4,5,6,7,8,9,10,11>;
META_END

META_BEGIN(CSprite::RenderBufferedOneXLUSprite_Rotate_Dimension)
static int address;
static int global_address;
static const int id = 0x51D5B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51D5B0, 0x51D7E0, 0x51D770>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4F75B0,100,0,0x4F6D90,1, 0x50F17E,100,0,0x50EE20,1, 0x50F315,100,0,0x50EE20,2, 0x50F4D7,100,0,0x50EE20,3, 0x4F7690,110,0,0x4F6E70,1, 0x50F36E,110,0,0x50F010,1, 0x50F505,110,0,0x50F010,2, 0x50F6C7,110,0,0x50F010,3, 0x4F7620,120,0,0x4F6E00,1, 0x50F2FE,120,0,0x50EFA0,1, 0x50F495,120,0,0x50EFA0,2, 0x50F657,120,0,0x50EFA0,3>;
using def_t = void(float, float, float, float, float, unsigned char, unsigned char, unsigned char, short, float, float, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float,float,float,float,unsigned char,unsigned char,unsigned char,short,float,float,unsigned char>, 0,1,2,3,4,5,6,7,8,9,10,11>;
META_END

META_BEGIN(CSprite::RenderBufferedOneXLUSprite_Rotate_2Colours)
static int address;
static int global_address;
static const int id = 0x51D9E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51D9E0, 0x51DC10, 0x51DBA0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F7A50,100,0,0x4F6D90,1, 0x4F7B30,110,0,0x4F6E70,1, 0x4F7AC0,120,0,0x4F6E00,1>;
using def_t = void(float, float, float, float, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char, float, float, float, float, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float,float,float,float,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,float,float,float,float,unsigned char>, 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15>;
META_END

META_BEGIN(CSprite::RenderBufferedOneXLUSprite2D)
static int address;
static int global_address;
static const int id = 0x51E3C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51E3C0, 0x51E5F0, 0x51E580>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50F098,100,0,0x50EE20,1, 0x50F288,110,0,0x50F010,1, 0x50F218,120,0,0x50EFA0,1>;
using def_t = void(float, float, float, float, RwRGBA const &, short, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float,float,float,RwRGBA const &,short,unsigned char>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(CSprite::RenderBufferedOneXLUSprite2D_Rotate_Dimension)
static int address;
static int global_address;
static const int id = 0x51E490;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51E490, 0x51E6C0, 0x51E650>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x50F066,100,0,0x50EE20,1, 0x50F256,110,0,0x50F010,1, 0x50F1E6,120,0,0x50EFA0,1>;
using def_t = void(float, float, float, float, RwRGBA const &, short, float, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float,float,float,RwRGBA const &,short,float,unsigned char>, 0,1,2,3,4,5,6,7>;
META_END

META_BEGIN_OVERLOADED(CSprite::Set6Vertices2D, void (*)(RwIm2DVertex *, CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &))
static int address;
static int global_address;
static const int id = 0x51E5F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51E5F0, 0x51E820, 0x51E7B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51E46A,100,0,0x51E3C0,1, 0x51E69A,110,0,0x51E5F0,1, 0x51E62A,120,0,0x51E580,1>;
using def_t = void(RwIm2DVertex *, CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwIm2DVertex *,CRect const &,CRGBA const &,CRGBA const &,CRGBA const &,CRGBA const &>, 0,1,2,3,4,5>;
META_END

META_BEGIN_OVERLOADED(CSprite::Set6Vertices2D, void (*)(RwIm2DVertex *, float, float, float, float, float, float, float, float, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &))
static int address;
static int global_address;
static const int id = 0x51E7F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51E7F0, 0x51EA20, 0x51E9B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51E5CD,100,0,0x51E490,1, 0x51E7FD,110,0,0x51E6C0,1, 0x51E78D,120,0,0x51E650,1>;
using def_t = void(RwIm2DVertex *, float, float, float, float, float, float, float, float, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwIm2DVertex *,float,float,float,float,float,float,float,float,CRGBA const &,CRGBA const &,CRGBA const &,CRGBA const &>, 0,1,2,3,4,5,6,7,8,9,10,11,12>;
META_END

}
