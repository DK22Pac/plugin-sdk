/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(RenderBuffer::ClearRenderBuffer)
static int address;
static int global_address;
static const int id = 0x517620;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x517620, 0x517830, 0x5177C0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x514017,100,0,0x514010,1, 0x5145F7,100,0,0x5145F0,1, 0x5177FE,100,0,0x5177C0,1, 0x514227,110,0,0x514220,1, 0x514807,110,0,0x514800,1, 0x517A0E,110,0,0x5179D0,1, 0x5141B7,120,0,0x5141B0,1, 0x514797,120,0,0x514790,1, 0x51799E,120,0,0x517960,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(RenderBuffer::StartStoring)
static int address;
static int global_address;
static const int id = 0x517640;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x517640, 0x517850, 0x5177E0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x514765,100,0,0x5145F0,1, 0x5169C9,100,0,0x514E30,1, 0x514975,110,0,0x514800,1, 0x516BD9,110,0,0x515040,1, 0x514905,120,0,0x514790,1, 0x516B69,120,0,0x514FD0,1>;
using def_t = void(int, int, RwImVertexIndex **, RwIm3DVertex **);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,int,RwImVertexIndex **,RwIm3DVertex **>, 0,1,2,3>;
META_END

META_BEGIN(RenderBuffer::StopStoring)
static int address;
static int global_address;
static const int id = 0x5176B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5176B0, 0x5178C0, 0x517850>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5148A4,100,0,0x5145F0,1, 0x516B58,100,0,0x514E30,1, 0x514AB4,110,0,0x514800,1, 0x516D68,110,0,0x515040,1, 0x514A44,120,0,0x514790,1, 0x516CF8,120,0,0x514FD0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(RenderBuffer::RenderStuffInBuffer)
static int address;
static int global_address;
static const int id = 0x5177C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5177C0, 0x5179D0, 0x517960>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x51456C,100,0,0x514010,1, 0x5148D3,100,0,0x5145F0,1, 0x517663,100,0,0x517640,1, 0x517677,100,0,0x517640,2, 0x51477C,110,0,0x514220,1, 0x514AE3,110,0,0x514800,1, 0x517873,110,0,0x517850,1, 0x517887,110,0,0x517850,2, 0x51470C,120,0,0x5141B0,1, 0x514A73,120,0,0x514790,1, 0x517803,120,0,0x5177E0,1, 0x517817,120,0,0x5177E0,2>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

}
