/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CMBlur::CreateImmediateModeData)
static int address;
static int global_address;
static const int id = 0x50A800;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50A800, 0x50A8E0, 0x50A870>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x50B120,100,0,0x50AE40,1, 0x50B151,100,0,0x50AE40,2, 0x50B200,110,0,0x50AF20,1, 0x50B231,110,0,0x50AF20,2, 0x50B190,120,0,0x50AEB0,1, 0x50B1C1,120,0,0x50AEB0,2>;
using def_t = void(RwCamera *, RwRect *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwCamera *,RwRect *>, 0,1>;
META_END

META_BEGIN(CMBlur::OverlayRender)
static int address;
static int global_address;
static const int id = 0x50A9C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50A9C0, 0x50AAA0, 0x50AA30>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x50ADDD,100,0,0x50AD70,1, 0x50AE2F,100,0,0x50AD70,2, 0x50AEBD,110,0,0x50AE50,1, 0x50AF0F,110,0,0x50AE50,2, 0x50AE4D,120,0,0x50ADE0,1, 0x50AE9F,120,0,0x50ADE0,2>;
using def_t = void(RwCamera *, RwRaster *, RwRGBA, int, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwCamera *,RwRaster *,RwRGBA,int,int>, 0,1,2,3,4>;
META_END

META_BEGIN(CMBlur::MotionBlurRender)
static int address;
static int global_address;
static const int id = 0x50AD70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50AD70, 0x50AE50, 0x50ADE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x46F978,100,0,0x46F940,1, 0x46F958,110,0,0x46F920,1, 0x46F958,120,0,0x46F920,1>;
using def_t = void(RwCamera *, unsigned int, unsigned int, unsigned int, unsigned int, int, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwCamera *,unsigned int,unsigned int,unsigned int,unsigned int,int,unsigned int>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(CMBlur::MotionBlurOpen)
static int address;
static int global_address;
static const int id = 0x50AE40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50AE40, 0x50AF20, 0x50AEB0>;
// total references count: 10en (2), 11en (3), steam (3)
using refs_t = RefList<0x46FEEB,100,0,0x46FEC0,1, 0x48AFEF,100,0,0x48AE60,1, 0x46FECB,110,0,0x46FEA0,1, 0x48773E,110,0,0x4857C0,1, 0x48B0DF,110,0,0x48AF50,1, 0x46FECB,120,0,0x46FEA0,1, 0x48773E,120,0,0x4857C0,1, 0x48B06F,120,0,0x48AEE0,1>;
using def_t = RwBool(RwCamera *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwCamera *>, 0>;
META_END

META_BEGIN(CMBlur::MotionBlurClose)
static int address;
static int global_address;
static const int id = 0x50B170;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x50B170, 0x50B250, 0x50B1E0>;
// total references count: 10en (4), 11en (5), steam (5)
using refs_t = RefList<0x48B000,100,0,0x48AE60,1, 0x48BCB2,100,0,0x48BCB0,1, 0x48C3D6,100,0,0x48C3A0,1, 0x50AE60,100,0,0x50AE40,1, 0x487727,110,0,0x4857C0,1, 0x48B0F0,110,0,0x48AF50,1, 0x48BDA2,110,0,0x48BDA0,1, 0x48C4C6,110,0,0x48C490,1, 0x50AF40,110,0,0x50AF20,1, 0x487727,120,0,0x4857C0,1, 0x48B080,120,0,0x48AEE0,1, 0x48BD32,120,0,0x48BD30,1, 0x48C456,120,0,0x48C420,1, 0x50AED0,120,0,0x50AEB0,1>;
using def_t = RwBool();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
