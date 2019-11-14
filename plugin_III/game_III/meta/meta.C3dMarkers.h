/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(C3dMarkers::Init)
static int address;
static int global_address;
static const int id = 0x51B2B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51B2B0, 0x51B4E0, 0>;
// total references count: 10en (1), 11en (1), steam (0)
using refs_t = RefList<0x518BD5,100,0,0x5189E0,1, 0x518E05,110,0,0x518C10,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(C3dMarkers::Shutdown)
static int address;
static int global_address;
static const int id = 0x51B3B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51B3B0, 0x51B5E0, 0>;
// total references count: 10en (1), 11en (1), steam (0)
using refs_t = RefList<0x518BE0,100,0,0x518BE0,1, 0x518E10,110,0,0x518E10,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(C3dMarkers::Render)
static int address;
static int global_address;
static const int id = 0x51B400;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51B400, 0x51B630, 0>;
// total references count: 10en (1), 11en (1), steam (0)
using refs_t = RefList<0x518DD9,100,0,0x518DC0,1, 0x519009,110,0,0x518FF0,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(C3dMarkers::PlaceMarker)
static int address;
static int global_address;
static const int id = 0x51B480;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51B480, 0x51B6B0, 0>;
// total references count: 10en (6), 11en (6), steam (0)
using refs_t = RefList<0x4A4DAE,100,0,0x4A4C70,1, 0x4A4E5B,100,0,0x4A4C70,2, 0x4A4EFF,100,0,0x4A4C70,3, 0x51BBBD,100,0,0x51BB80,1, 0x51BBFB,100,0,0x51BB80,2, 0x51BC37,100,0,0x51BB80,3, 0x4A4E9E,110,0,0x4A4D60,1, 0x4A4F4B,110,0,0x4A4D60,2, 0x4A4FEF,110,0,0x4A4D60,3, 0x51BDED,110,0,0x51BDB0,1, 0x51BE2B,110,0,0x51BDB0,2, 0x51BE67,110,0,0x51BDB0,3>;
using def_t = void(unsigned int, unsigned short, CVector &, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned short, float, short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int,unsigned short,CVector &,float,unsigned char,unsigned char,unsigned char,unsigned char,unsigned short,float,short>, 0,1,2,3,4,5,6,7,8,9,10>;
META_END

META_BEGIN(C3dMarkers::PlaceMarkerSet)
static int address;
static int global_address;
static const int id = 0x51BB80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51BB80, 0x51BDB0, 0>;
// total references count: 10en (4), 11en (4), steam (0)
using refs_t = RefList<0x44DF20,100,0,0x44CB80,1, 0x44FB0A,100,0,0x44FAC0,1, 0x4A4D0A,100,0,0x4A4C70,1, 0x51787E,100,0,0x517810,1, 0x44DF20,110,0,0x44CB80,1, 0x44FB0A,110,0,0x44FAC0,1, 0x4A4DFA,110,0,0x4A4D60,1, 0x517A8E,110,0,0x517A20,1>;
using def_t = void(unsigned int, unsigned short, CVector &, float, unsigned char, unsigned char, unsigned char, unsigned char, unsigned short, float, short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<unsigned int,unsigned short,CVector &,float,unsigned char,unsigned char,unsigned char,unsigned char,unsigned short,float,short>, 0,1,2,3,4,5,6,7,8,9,10>;
META_END

}
