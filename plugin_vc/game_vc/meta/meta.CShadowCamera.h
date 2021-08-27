/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CShadowCamera::DrawOutlineBorder)
static int address;
static int global_address;
static const int id = 0x6264D0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x6264D0, 0x6264B0, 0x626120>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x625B71,100,0,0x625B60,1, 0x625B51,110,0,0x625B40,1, 0x6257C1,120,0,0x6257B0,1>;
using def_t = RwRaster *(CShadowCamera *, RwRGBA const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CShadowCamera *,RwRGBA const &>, 0,1>;
META_END

META_BEGIN(CShadowCamera::RasterGradient)
static int address;
static int global_address;
static const int id = 0x6266A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x6266A0, 0x626680, 0x6262F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x625D34,100,0,0x625BC0,1, 0x625D14,110,0,0x625BA0,1, 0x625984,120,0,0x625810,1>;
using def_t = RwRaster *(CShadowCamera *, RwRaster *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CShadowCamera *,RwRaster *>, 0,1>;
META_END

META_BEGIN(CShadowCamera::RasterBlur)
static int address;
static int global_address;
static const int id = 0x626780;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x626780, 0x626760, 0x6263D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x625D23,100,0,0x625BC0,1, 0x625D03,110,0,0x625BA0,1, 0x625973,120,0,0x625810,1>;
using def_t = RwRaster *(CShadowCamera *, RwRaster *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CShadowCamera *,RwRaster *,int>, 0,1,2>;
META_END

META_BEGIN(CShadowCamera::RasterResample)
static int address;
static int global_address;
static const int id = 0x626900;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x626900, 0x6268E0, 0x626550>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x625D12,100,0,0x625BC0,1, 0x625CF2,110,0,0x625BA0,1, 0x625962,120,0,0x625810,1>;
using def_t = RwRaster *(CShadowCamera *, RwRaster *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CShadowCamera *,RwRaster *>, 0,1>;
META_END

META_BEGIN(CShadowCamera::MakeGradientRaster)
static int address;
static int global_address;
static const int id = 0x6269F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x6269F0, 0x6269D0, 0x626640>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x626244,100,0,0x625E60,1, 0x626224,110,0,0x625E40,1, 0x625E94,120,0,0x625AB0,1>;
using def_t = RwRaster *(CShadowCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CShadowCamera *>, 0>;
META_END

META_BEGIN(CShadowCamera::InvertRaster)
static int address;
static int global_address;
static const int id = 0x626BD0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x626BD0, 0x626BB0, 0x626820>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x625CE8,100,0,0x625BC0,1, 0x626D7D,100,0,0x626D00,1, 0x625CC8,110,0,0x625BA0,1, 0x626D5D,110,0,0x626CE0,1, 0x625938,120,0,0x625810,1, 0x6269CD,120,0,0x626950,1>;
using def_t = void(CShadowCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CShadowCamera *>, 0>;
META_END

META_BEGIN(CShadowCamera::Update)
static int address;
static int global_address;
static const int id = 0x626D00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x626D00, 0x626CE0, 0x626950>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x625CFE,100,0,0x625BC0,1, 0x625CDE,110,0,0x625BA0,1, 0x62594E,120,0,0x625810,1>;
using def_t = RwCamera *(CShadowCamera *, RpAtomic *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CShadowCamera *,RpAtomic *>, 0,1>;
META_END

META_BEGIN(CShadowCamera::Destroy)
static int address;
static int global_address;
static const int id = 0x626DE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x626DE0, 0x626DC0, 0x626A30>;
// total references count: 10en (32), 11en (32), steam (32)
using refs_t = RefList<0x625F53,100,0,0x625E60,1, 0x625F5B,100,0,0x625E60,2, 0x625F63,100,0,0x625E60,3, 0x625F6B,100,0,0x625E60,4, 0x626042,100,0,0x625E60,5, 0x62604A,100,0,0x625E60,6, 0x626052,100,0,0x625E60,7, 0x62605A,100,0,0x625E60,8, 0x6260CF,100,0,0x625E60,9, 0x6260D7,100,0,0x625E60,10, 0x6260DF,100,0,0x625E60,11, 0x6260E7,100,0,0x625E60,12, 0x626153,100,0,0x625E60,13, 0x62615B,100,0,0x625E60,14, 0x626163,100,0,0x625E60,15, 0x62616B,100,0,0x625E60,16, 0x6261E1,100,0,0x625E60,17, 0x6261E9,100,0,0x625E60,18, 0x6261F1,100,0,0x625E60,19, 0x6261F9,100,0,0x625E60,20, 0x6263F4,100,0,0x6263F0,1, 0x6263FC,100,0,0x6263F0,2, 0x626404,100,0,0x6263F0,3, 0x62640C,100,0,0x6263F0,4, 0x62644B,100,0,0x6263F0,5, 0x626453,100,0,0x6263F0,6, 0x62645B,100,0,0x6263F0,7, 0x626462,100,0,0x6263F0,8, 0x626EBF,100,0,0x626E70,1, 0x626EE9,100,0,0x626E70,2, 0x626F0D,100,0,0x626E70,3, 0x626F56,100,0,0x626E70,4, 0x625F33,110,0,0x625E40,1, 0x625F3B,110,0,0x625E40,2, 0x625F43,110,0,0x625E40,3, 0x625F4B,110,0,0x625E40,4, 0x626022,110,0,0x625E40,5, 0x62602A,110,0,0x625E40,6, 0x626032,110,0,0x625E40,7, 0x62603A,110,0,0x625E40,8, 0x6260AF,110,0,0x625E40,9, 0x6260B7,110,0,0x625E40,10, 0x6260BF,110,0,0x625E40,11, 0x6260C7,110,0,0x625E40,12, 0x626133,110,0,0x625E40,13, 0x62613B,110,0,0x625E40,14, 0x626143,110,0,0x625E40,15, 0x62614B,110,0,0x625E40,16, 0x6261C1,110,0,0x625E40,17, 0x6261C9,110,0,0x625E40,18, 0x6261D1,110,0,0x625E40,19, 0x6261D9,110,0,0x625E40,20, 0x6263D4,110,0,0x6263D0,1, 0x6263DC,110,0,0x6263D0,2, 0x6263E4,110,0,0x6263D0,3, 0x6263EC,110,0,0x6263D0,4, 0x62642B,110,0,0x6263D0,5, 0x626433,110,0,0x6263D0,6, 0x62643B,110,0,0x6263D0,7, 0x626442,110,0,0x6263D0,8, 0x626E9F,110,0,0x626E50,1, 0x626EC9,110,0,0x626E50,2, 0x626EED,110,0,0x626E50,3, 0x626F36,110,0,0x626E50,4, 0x625BA3,120,0,0x625AB0,1, 0x625BAB,120,0,0x625AB0,2, 0x625BB3,120,0,0x625AB0,3, 0x625BBB,120,0,0x625AB0,4, 0x625C92,120,0,0x625AB0,5, 0x625C9A,120,0,0x625AB0,6, 0x625CA2,120,0,0x625AB0,7, 0x625CAA,120,0,0x625AB0,8, 0x625D1F,120,0,0x625AB0,9, 0x625D27,120,0,0x625AB0,10, 0x625D2F,120,0,0x625AB0,11, 0x625D37,120,0,0x625AB0,12, 0x625DA3,120,0,0x625AB0,13, 0x625DAB,120,0,0x625AB0,14, 0x625DB3,120,0,0x625AB0,15, 0x625DBB,120,0,0x625AB0,16, 0x625E31,120,0,0x625AB0,17, 0x625E39,120,0,0x625AB0,18, 0x625E41,120,0,0x625AB0,19, 0x625E49,120,0,0x625AB0,20, 0x626044,120,0,0x626040,1, 0x62604C,120,0,0x626040,2, 0x626054,120,0,0x626040,3, 0x62605C,120,0,0x626040,4, 0x62609B,120,0,0x626040,5, 0x6260A3,120,0,0x626040,6, 0x6260AB,120,0,0x626040,7, 0x6260B2,120,0,0x626040,8, 0x626B0F,120,0,0x626AC0,1, 0x626B39,120,0,0x626AC0,2, 0x626B5D,120,0,0x626AC0,3, 0x626BA6,120,0,0x626AC0,4>;
using def_t = void(CShadowCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CShadowCamera *>, 0>;
META_END

META_BEGIN(CShadowCamera::Create)
static int address;
static int global_address;
static const int id = 0x626E70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x626E70, 0x626E50, 0x626AC0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x626037,100,0,0x625E60,1, 0x6260C4,100,0,0x625E60,2, 0x626148,100,0,0x625E60,3, 0x6261D6,100,0,0x625E60,4, 0x626017,110,0,0x625E40,1, 0x6260A4,110,0,0x625E40,2, 0x626128,110,0,0x625E40,3, 0x6261B6,110,0,0x625E40,4, 0x625C87,120,0,0x625AB0,1, 0x625D14,120,0,0x625AB0,2, 0x625D98,120,0,0x625AB0,3, 0x625E26,120,0,0x625AB0,4>;
using def_t = RwCamera *(CShadowCamera *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CShadowCamera *,int>, 0,1>;
META_END

META_BEGIN(ShadowRenderCallBack)
static int address;
static int global_address;
static const int id = 0x626DA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x626DA0, 0x626D80, 0x6269F0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x625CD3,100,2,0,1, 0x625CB3,110,2,0,1, 0x625923,120,2,0,1>;
using def_t = RpAtomic *(RpAtomic *, void *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RpAtomic *,void *>, 0,1>;
META_END

}
