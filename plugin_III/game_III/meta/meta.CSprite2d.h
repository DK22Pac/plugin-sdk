/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CSprite2d)
static int address;
static int global_address;
static const int id = 0x51E9E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51E9E0, 0x51EC10, 0x51EBA0>;
// total references count: 10en (26), 11en (26), steam (26)
using refs_t = RefList<0x48EB4D,100,0,0x48EB10,1, 0x4A7027,100,0,0x4A7000,1, 0x4A7044,100,0,0x4A7000,2, 0x4A7061,100,0,0x4A7000,3, 0x4A707E,100,0,0x4A7000,4, 0x4A709B,100,0,0x4A7000,5, 0x4A70B8,100,0,0x4A7000,6, 0x4A70D5,100,0,0x4A7000,7, 0x4A70F2,100,0,0x4A7000,8, 0x4A710F,100,0,0x4A7000,9, 0x4A712C,100,0,0x4A7000,10, 0x4A7149,100,0,0x4A7000,11, 0x4A7166,100,0,0x4A7000,12, 0x4A7183,100,0,0x4A7000,13, 0x4A71A0,100,0,0x4A7000,14, 0x4A71BD,100,0,0x4A7000,15, 0x4A71DA,100,0,0x4A7000,16, 0x4A71F7,100,0,0x4A7000,17, 0x4A7214,100,0,0x4A7000,18, 0x4A7231,100,0,0x4A7000,19, 0x4A724E,100,0,0x4A7000,20, 0x43EC45,100,2,0,1, 0x47A0A7,100,2,0,1, 0x47A0C7,100,2,0,1, 0x501EC1,100,2,0,1, 0x50A36A,100,2,0,1, 0x48EC0D,110,0,0x48EBD0,1, 0x4A7117,110,0,0x4A70F0,1, 0x4A7134,110,0,0x4A70F0,2, 0x4A7151,110,0,0x4A70F0,3, 0x4A716E,110,0,0x4A70F0,4, 0x4A718B,110,0,0x4A70F0,5, 0x4A71A8,110,0,0x4A70F0,6, 0x4A71C5,110,0,0x4A70F0,7, 0x4A71E2,110,0,0x4A70F0,8, 0x4A71FF,110,0,0x4A70F0,9, 0x4A721C,110,0,0x4A70F0,10, 0x4A7239,110,0,0x4A70F0,11, 0x4A7256,110,0,0x4A70F0,12, 0x4A7273,110,0,0x4A70F0,13, 0x4A7290,110,0,0x4A70F0,14, 0x4A72AD,110,0,0x4A70F0,15, 0x4A72CA,110,0,0x4A70F0,16, 0x4A72E7,110,0,0x4A70F0,17, 0x4A7304,110,0,0x4A70F0,18, 0x4A7321,110,0,0x4A70F0,19, 0x4A733E,110,0,0x4A70F0,20, 0x43EC45,110,2,0,1, 0x47A0A7,110,2,0,1, 0x47A0C7,110,2,0,1, 0x501FA1,110,2,0,1, 0x50A44A,110,2,0,1, 0x48EB9D,120,0,0x48EB60,1, 0x4A70A7,120,0,0x4A7080,1, 0x4A70C4,120,0,0x4A7080,2, 0x4A70E1,120,0,0x4A7080,3, 0x4A70FE,120,0,0x4A7080,4, 0x4A711B,120,0,0x4A7080,5, 0x4A7138,120,0,0x4A7080,6, 0x4A7155,120,0,0x4A7080,7, 0x4A7172,120,0,0x4A7080,8, 0x4A718F,120,0,0x4A7080,9, 0x4A71AC,120,0,0x4A7080,10, 0x4A71C9,120,0,0x4A7080,11, 0x4A71E6,120,0,0x4A7080,12, 0x4A7203,120,0,0x4A7080,13, 0x4A7220,120,0,0x4A7080,14, 0x4A723D,120,0,0x4A7080,15, 0x4A725A,120,0,0x4A7080,16, 0x4A7277,120,0,0x4A7080,17, 0x4A7294,120,0,0x4A7080,18, 0x4A72B1,120,0,0x4A7080,19, 0x4A72CE,120,0,0x4A7080,20, 0x43EC45,120,2,0,1, 0x47A0A7,120,2,0,1, 0x47A0C7,120,2,0,1, 0x501F31,120,2,0,1, 0x50A3DA,120,2,0,1>;
using def_t = CSprite2d *(CSprite2d *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSprite2d *>, 0>;
META_END

DTOR_META_BEGIN(CSprite2d)
static int address;
static int global_address;
static const int id = 0x51E9F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51E9F0, 0x51EC20, 0x51EBB0>;
// total references count: 10en (31), 11en (31), steam (31)
using refs_t = RefList<0x43EC40,100,2,0,1, 0x43EC75,100,2,0,1, 0x47A0A2,100,2,0,1, 0x47A0C2,100,2,0,1, 0x47A203,100,2,0,1, 0x47A21B,100,2,0,1, 0x48EB49,100,2,0,1, 0x4A7023,100,2,0,1, 0x4A7040,100,2,0,1, 0x4A705D,100,2,0,1, 0x4A707A,100,2,0,1, 0x4A7097,100,2,0,1, 0x4A70B4,100,2,0,1, 0x4A70D1,100,2,0,1, 0x4A70EE,100,2,0,1, 0x4A710B,100,2,0,1, 0x4A7128,100,2,0,1, 0x4A7145,100,2,0,1, 0x4A7162,100,2,0,1, 0x4A717F,100,2,0,1, 0x4A719C,100,2,0,1, 0x4A71B9,100,2,0,1, 0x4A71D6,100,2,0,1, 0x4A71F3,100,2,0,1, 0x4A7210,100,2,0,1, 0x4A722D,100,2,0,1, 0x4A724A,100,2,0,1, 0x501EBC,100,2,0,1, 0x501EF5,100,2,0,1, 0x50A365,100,2,0,1, 0x50A395,100,2,0,1, 0x43EC40,110,2,0,1, 0x43EC75,110,2,0,1, 0x47A0A2,110,2,0,1, 0x47A0C2,110,2,0,1, 0x47A203,110,2,0,1, 0x47A21B,110,2,0,1, 0x48EC09,110,2,0,1, 0x4A7113,110,2,0,1, 0x4A7130,110,2,0,1, 0x4A714D,110,2,0,1, 0x4A716A,110,2,0,1, 0x4A7187,110,2,0,1, 0x4A71A4,110,2,0,1, 0x4A71C1,110,2,0,1, 0x4A71DE,110,2,0,1, 0x4A71FB,110,2,0,1, 0x4A7218,110,2,0,1, 0x4A7235,110,2,0,1, 0x4A7252,110,2,0,1, 0x4A726F,110,2,0,1, 0x4A728C,110,2,0,1, 0x4A72A9,110,2,0,1, 0x4A72C6,110,2,0,1, 0x4A72E3,110,2,0,1, 0x4A7300,110,2,0,1, 0x4A731D,110,2,0,1, 0x4A733A,110,2,0,1, 0x501F9C,110,2,0,1, 0x501FD5,110,2,0,1, 0x50A445,110,2,0,1, 0x50A475,110,2,0,1, 0x43EC40,120,2,0,1, 0x43EC75,120,2,0,1, 0x47A0A2,120,2,0,1, 0x47A0C2,120,2,0,1, 0x47A203,120,2,0,1, 0x47A21B,120,2,0,1, 0x48EB99,120,2,0,1, 0x4A70A3,120,2,0,1, 0x4A70C0,120,2,0,1, 0x4A70DD,120,2,0,1, 0x4A70FA,120,2,0,1, 0x4A7117,120,2,0,1, 0x4A7134,120,2,0,1, 0x4A7151,120,2,0,1, 0x4A716E,120,2,0,1, 0x4A718B,120,2,0,1, 0x4A71A8,120,2,0,1, 0x4A71C5,120,2,0,1, 0x4A71E2,120,2,0,1, 0x4A71FF,120,2,0,1, 0x4A721C,120,2,0,1, 0x4A7239,120,2,0,1, 0x4A7256,120,2,0,1, 0x4A7273,120,2,0,1, 0x4A7290,120,2,0,1, 0x4A72AD,120,2,0,1, 0x4A72CA,120,2,0,1, 0x501F2C,120,2,0,1, 0x501F65,120,2,0,1, 0x50A3D5,120,2,0,1, 0x50A405,120,2,0,1>;
using def_t = void(CSprite2d *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSprite2d *>, 0>;
META_END

META_BEGIN(CSprite2d::Delete)
static int address;
static int global_address;
static const int id = 0x51EA00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51EA00, 0x51EC30, 0x51EBC0>;
// total references count: 10en (31), 11en (31), steam (31)
using refs_t = RefList<0x44D712,100,0,0x44CB80,1, 0x47A476,100,0,0x47A440,1, 0x47A4AD,100,0,0x47A440,2, 0x48D5FF,100,0,0x48D550,1, 0x48D675,100,0,0x48D670,1, 0x4A3F65,100,0,0x4A3F60,1, 0x4A3F6F,100,0,0x4A3F60,2, 0x4A3F79,100,0,0x4A3F60,3, 0x4A3F83,100,0,0x4A3F60,4, 0x4A3F8D,100,0,0x4A3F60,5, 0x4A3F97,100,0,0x4A3F60,6, 0x4A3FA1,100,0,0x4A3F60,7, 0x4A3FAB,100,0,0x4A3F60,8, 0x4A3FB5,100,0,0x4A3F60,9, 0x4A3FBF,100,0,0x4A3F60,10, 0x4A3FC9,100,0,0x4A3F60,11, 0x4A3FD3,100,0,0x4A3F60,12, 0x4A3FDD,100,0,0x4A3F60,13, 0x4A3FE7,100,0,0x4A3F60,14, 0x4A3FF1,100,0,0x4A3F60,15, 0x4A3FFB,100,0,0x4A3F60,16, 0x4A4005,100,0,0x4A3F60,17, 0x4A400F,100,0,0x4A3F60,18, 0x4A4019,100,0,0x4A3F60,19, 0x4A4023,100,0,0x4A3F60,20, 0x500BA5,100,0,0x500BA0,1, 0x500BAF,100,0,0x500BA0,2, 0x500BB9,100,0,0x500BA0,3, 0x504C62,100,0,0x504C50,1, 0x51E9F3,100,0,0x51E9F0,1, 0x51EA48,100,0,0x51EA40,1, 0x44D712,110,0,0x44CB80,1, 0x47A466,110,0,0x47A430,1, 0x47A49D,110,0,0x47A430,2, 0x48D6FF,110,0,0x48D650,1, 0x48D775,110,0,0x48D770,1, 0x4A4055,110,0,0x4A4050,1, 0x4A405F,110,0,0x4A4050,2, 0x4A4069,110,0,0x4A4050,3, 0x4A4073,110,0,0x4A4050,4, 0x4A407D,110,0,0x4A4050,5, 0x4A4087,110,0,0x4A4050,6, 0x4A4091,110,0,0x4A4050,7, 0x4A409B,110,0,0x4A4050,8, 0x4A40A5,110,0,0x4A4050,9, 0x4A40AF,110,0,0x4A4050,10, 0x4A40B9,110,0,0x4A4050,11, 0x4A40C3,110,0,0x4A4050,12, 0x4A40CD,110,0,0x4A4050,13, 0x4A40D7,110,0,0x4A4050,14, 0x4A40E1,110,0,0x4A4050,15, 0x4A40EB,110,0,0x4A4050,16, 0x4A40F5,110,0,0x4A4050,17, 0x4A40FF,110,0,0x4A4050,18, 0x4A4109,110,0,0x4A4050,19, 0x4A4113,110,0,0x4A4050,20, 0x500C85,110,0,0x500C80,1, 0x500C8F,110,0,0x500C80,2, 0x500C99,110,0,0x500C80,3, 0x504D42,110,0,0x504D30,1, 0x51EC23,110,0,0x51EC20,1, 0x51EC78,110,0,0x51EC70,1, 0x44D712,120,0,0x44CB80,1, 0x47A466,120,0,0x47A430,1, 0x47A49D,120,0,0x47A430,2, 0x48D68F,120,0,0x48D5E0,1, 0x48D705,120,0,0x48D700,1, 0x4A3FE5,120,0,0x4A3FE0,1, 0x4A3FEF,120,0,0x4A3FE0,2, 0x4A3FF9,120,0,0x4A3FE0,3, 0x4A4003,120,0,0x4A3FE0,4, 0x4A400D,120,0,0x4A3FE0,5, 0x4A4017,120,0,0x4A3FE0,6, 0x4A4021,120,0,0x4A3FE0,7, 0x4A402B,120,0,0x4A3FE0,8, 0x4A4035,120,0,0x4A3FE0,9, 0x4A403F,120,0,0x4A3FE0,10, 0x4A4049,120,0,0x4A3FE0,11, 0x4A4053,120,0,0x4A3FE0,12, 0x4A405D,120,0,0x4A3FE0,13, 0x4A4067,120,0,0x4A3FE0,14, 0x4A4071,120,0,0x4A3FE0,15, 0x4A407B,120,0,0x4A3FE0,16, 0x4A4085,120,0,0x4A3FE0,17, 0x4A408F,120,0,0x4A3FE0,18, 0x4A4099,120,0,0x4A3FE0,19, 0x4A40A3,120,0,0x4A3FE0,20, 0x500C15,120,0,0x500C10,1, 0x500C1F,120,0,0x500C10,2, 0x500C29,120,0,0x500C10,3, 0x504CD2,120,0,0x504CC0,1, 0x51EBB3,120,0,0x51EBB0,1, 0x51EC08,120,0,0x51EC00,1>;
using def_t = void(CSprite2d *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSprite2d *>, 0>;
META_END

META_BEGIN(CSprite2d::SetRecipNearClip)
static int address;
static int global_address;
static const int id = 0x51EA20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51EA20, 0x51EC50, 0x51EBE0>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x48B816,100,0,0x48B7E0,1, 0x48C78F,100,0,0x48C740,1, 0x48C8CD,100,0,0x48C850,1, 0x48D7D3,100,0,0x48D770,1, 0x48DABC,100,0,0x48DA50,1, 0x48E708,100,0,0x48E700,1, 0x5928B5,100,0,0x592880,1, 0x48B906,110,0,0x48B8D0,1, 0x48C88F,110,0,0x48C840,1, 0x48C9CD,110,0,0x48C950,1, 0x48D8D3,110,0,0x48D870,1, 0x48DB8C,110,0,0x48DB20,1, 0x48E7C8,110,0,0x48E7C0,1, 0x592B65,110,0,0x592B30,1, 0x48B896,120,0,0x48B860,1, 0x48C81F,120,0,0x48C7D0,1, 0x48C95D,120,0,0x48C8E0,1, 0x48D863,120,0,0x48D800,1, 0x48DB1C,120,0,0x48DAB0,1, 0x48E758,120,0,0x48E750,1, 0x592A55,120,0,0x592A20,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN_OVERLOADED(CSprite2d::SetTexture, void (CSprite2d::*)(char *))
static int address;
static int global_address;
static const int id = 0x51EA40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51EA40, 0x51EC70, 0x51EC00>;
// total references count: 10en (22), 11en (22), steam (22)
using refs_t = RefList<0x44D65F,100,0,0x44CB80,1, 0x48D648,100,0,0x48D550,1, 0x4A4051,100,0,0x4A4030,1, 0x4A4060,100,0,0x4A4030,2, 0x4A406F,100,0,0x4A4030,3, 0x4A407E,100,0,0x4A4030,4, 0x4A408D,100,0,0x4A4030,5, 0x4A409C,100,0,0x4A4030,6, 0x4A40AB,100,0,0x4A4030,7, 0x4A40BA,100,0,0x4A4030,8, 0x4A40C9,100,0,0x4A4030,9, 0x4A40D8,100,0,0x4A4030,10, 0x4A40E7,100,0,0x4A4030,11, 0x4A40F6,100,0,0x4A4030,12, 0x4A4105,100,0,0x4A4030,13, 0x4A4114,100,0,0x4A4030,14, 0x4A4123,100,0,0x4A4030,15, 0x4A4132,100,0,0x4A4030,16, 0x4A4141,100,0,0x4A4030,17, 0x4A4150,100,0,0x4A4030,18, 0x4A415F,100,0,0x4A4030,19, 0x4A416E,100,0,0x4A4030,20, 0x44D65F,110,0,0x44CB80,1, 0x48D748,110,0,0x48D650,1, 0x4A4141,110,0,0x4A4120,1, 0x4A4150,110,0,0x4A4120,2, 0x4A415F,110,0,0x4A4120,3, 0x4A416E,110,0,0x4A4120,4, 0x4A417D,110,0,0x4A4120,5, 0x4A418C,110,0,0x4A4120,6, 0x4A419B,110,0,0x4A4120,7, 0x4A41AA,110,0,0x4A4120,8, 0x4A41B9,110,0,0x4A4120,9, 0x4A41C8,110,0,0x4A4120,10, 0x4A41D7,110,0,0x4A4120,11, 0x4A41E6,110,0,0x4A4120,12, 0x4A41F5,110,0,0x4A4120,13, 0x4A4204,110,0,0x4A4120,14, 0x4A4213,110,0,0x4A4120,15, 0x4A4222,110,0,0x4A4120,16, 0x4A4231,110,0,0x4A4120,17, 0x4A4240,110,0,0x4A4120,18, 0x4A424F,110,0,0x4A4120,19, 0x4A425E,110,0,0x4A4120,20, 0x44D65F,120,0,0x44CB80,1, 0x48D6D8,120,0,0x48D5E0,1, 0x4A40D1,120,0,0x4A40B0,1, 0x4A40E0,120,0,0x4A40B0,2, 0x4A40EF,120,0,0x4A40B0,3, 0x4A40FE,120,0,0x4A40B0,4, 0x4A410D,120,0,0x4A40B0,5, 0x4A411C,120,0,0x4A40B0,6, 0x4A412B,120,0,0x4A40B0,7, 0x4A413A,120,0,0x4A40B0,8, 0x4A4149,120,0,0x4A40B0,9, 0x4A4158,120,0,0x4A40B0,10, 0x4A4167,120,0,0x4A40B0,11, 0x4A4176,120,0,0x4A40B0,12, 0x4A4185,120,0,0x4A40B0,13, 0x4A4194,120,0,0x4A40B0,14, 0x4A41A3,120,0,0x4A40B0,15, 0x4A41B2,120,0,0x4A40B0,16, 0x4A41C1,120,0,0x4A40B0,17, 0x4A41D0,120,0,0x4A40B0,18, 0x4A41DF,120,0,0x4A40B0,19, 0x4A41EE,120,0,0x4A40B0,20>;
using def_t = void(CSprite2d *, char *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSprite2d *,char *>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CSprite2d::SetTexture, void (CSprite2d::*)(char *, char *))
static int address;
static int global_address;
static const int id = 0x51EA70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51EA70, 0x51ECA0, 0x51EC30>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x47A388,100,0,0x47A230,1, 0x47A406,100,0,0x47A230,2, 0x500A80,100,0,0x500A40,1, 0x500A94,100,0,0x500A40,2, 0x500AA8,100,0,0x500A40,3, 0x504946,100,0,0x5048F0,1, 0x47A37E,110,0,0x47A230,1, 0x47A3F8,110,0,0x47A230,2, 0x500B60,110,0,0x500B20,1, 0x500B74,110,0,0x500B20,2, 0x500B88,110,0,0x500B20,3, 0x504A26,110,0,0x5049D0,1, 0x47A37E,120,0,0x47A230,1, 0x47A3F8,120,0,0x47A230,2, 0x500AF0,120,0,0x500AB0,1, 0x500B04,120,0,0x500AB0,2, 0x500B18,120,0,0x500AB0,3, 0x5049B6,120,0,0x504960,1>;
using def_t = void(CSprite2d *, char *, char *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSprite2d *,char *,char *>, 0,1,2>;
META_END

META_BEGIN(CSprite2d::SetAddressing)
static int address;
static int global_address;
static const int id = 0x51EAA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51EAA0, 0x51ECD0, 0x51EC60>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x47A395,100,0,0x47A230,1, 0x47A413,100,0,0x47A230,2, 0x47A38B,110,0,0x47A230,1, 0x47A405,110,0,0x47A230,2, 0x47A38B,120,0,0x47A230,1, 0x47A405,120,0,0x47A230,2>;
using def_t = void(CSprite2d *, RwTextureAddressMode);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSprite2d *,RwTextureAddressMode>, 0,1>;
META_END

META_BEGIN(CSprite2d::InitPerFrame)
static int address;
static int global_address;
static const int id = 0x51EAE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51EAE0, 0x51ED10, 0x51ECA0>;
// total references count: 10en (9), 11en (9), steam (9)
using refs_t = RefList<0x47A5BA,100,0,0x47A5B0,1, 0x48B81B,100,0,0x48B7E0,1, 0x48C8D2,100,0,0x48C850,1, 0x48CFE4,100,0,0x48CF10,1, 0x48D7D8,100,0,0x48D770,1, 0x48DAC1,100,0,0x48DA50,1, 0x48E488,100,0,0x48E480,1, 0x48E70D,100,0,0x48E700,1, 0x5928BA,100,0,0x592880,1, 0x47A5AA,110,0,0x47A5A0,1, 0x48B90B,110,0,0x48B8D0,1, 0x48C9D2,110,0,0x48C950,1, 0x48D0E4,110,0,0x48D010,1, 0x48D8D8,110,0,0x48D870,1, 0x48DB91,110,0,0x48DB20,1, 0x48E548,110,0,0x48E540,1, 0x48E7CD,110,0,0x48E7C0,1, 0x592B6A,110,0,0x592B30,1, 0x47A5AA,120,0,0x47A5A0,1, 0x48B89B,120,0,0x48B860,1, 0x48C962,120,0,0x48C8E0,1, 0x48D074,120,0,0x48CFA0,1, 0x48D868,120,0,0x48D800,1, 0x48DB21,120,0,0x48DAB0,1, 0x48E4D8,120,0,0x48E4D0,1, 0x48E75D,120,0,0x48E750,1, 0x592A5A,120,0,0x592A20,1>;
using def_t = void();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CSprite2d::GetBank)
static int address;
static int global_address;
static const int id = 0x51EB70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51EB70, 0x51EDA0, 0x51ED30>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x500BE8,100,0,0x500BE0,1, 0x500BFC,100,0,0x500BE0,2, 0x500C0B,100,0,0x500BE0,3, 0x500CC8,110,0,0x500CC0,1, 0x500CDC,110,0,0x500CC0,2, 0x500CEB,110,0,0x500CC0,3, 0x500C58,120,0,0x500C50,1, 0x500C6C,120,0,0x500C50,2, 0x500C7B,120,0,0x500C50,3>;
using def_t = int(int, RwTexture *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,RwTexture *>, 0,1>;
META_END

META_BEGIN(CSprite2d::AddSpriteToBank)
static int address;
static int global_address;
static const int id = 0x51EBC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51EBC0, 0x51EDF0, 0x51ED80>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x500DE4,100,0,0x500C30,1, 0x500F43,100,0,0x500C30,2, 0x500EC4,110,0,0x500D10,1, 0x501023,110,0,0x500D10,2, 0x500E54,120,0,0x500CA0,1, 0x500FB3,120,0,0x500CA0,2>;
using def_t = void(int, CRect const &, CRGBA const &, float, float, float, float, float, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,CRect const &,CRGBA const &,float,float,float,float,float,float,float,float>, 0,1,2,3,4,5,6,7,8,9,10>;
META_END

META_BEGIN(CSprite2d::DrawBank)
static int address;
static int global_address;
static const int id = 0x51EC50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51EC50, 0x51EE80, 0x51EE10>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x501B56,100,0,0x501B50,1, 0x501B63,100,0,0x501B50,2, 0x501B72,100,0,0x501B50,3, 0x51EC33,100,0,0x51EBC0,1, 0x501C36,110,0,0x501C30,1, 0x501C43,110,0,0x501C30,2, 0x501C52,110,0,0x501C30,3, 0x51EE63,110,0,0x51EDF0,1, 0x501BC6,120,0,0x501BC0,1, 0x501BD3,120,0,0x501BC0,2, 0x501BE2,120,0,0x501BC0,3, 0x51EDF3,120,0,0x51ED80,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN_OVERLOADED(CSprite2d::Draw, void (CSprite2d::*)(float, float, float, float, CRGBA const &))
static int address;
static int global_address;
static const int id = 0x51ECE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51ECE0, 0x51EF10, 0x51EEA0>;
// total references count: 10en (13), 11en (13), steam (13)
using refs_t = RefList<0x47DB4A,100,0,0x47AE00,1, 0x47DC7A,100,0,0x47AE00,2, 0x47DDAA,100,0,0x47AE00,3, 0x47DEDA,100,0,0x47AE00,4, 0x47E00A,100,0,0x47AE00,5, 0x47E13A,100,0,0x47AE00,6, 0x47E26A,100,0,0x47AE00,7, 0x47E39A,100,0,0x47AE00,8, 0x47E4CA,100,0,0x47AE00,9, 0x47E60A,100,0,0x47AE00,10, 0x4839CD,100,0,0x483990,1, 0x483A12,100,0,0x483990,2, 0x483B50,100,0,0x483990,3, 0x47DC1A,110,0,0x47ADF0,1, 0x47DD4A,110,0,0x47ADF0,2, 0x47DE7A,110,0,0x47ADF0,3, 0x47DFAA,110,0,0x47ADF0,4, 0x47E0DA,110,0,0x47ADF0,5, 0x47E20A,110,0,0x47ADF0,6, 0x47E33A,110,0,0x47ADF0,7, 0x47E46A,110,0,0x47ADF0,8, 0x47E59A,110,0,0x47ADF0,9, 0x47E6DA,110,0,0x47ADF0,10, 0x483A9D,110,0,0x483A60,1, 0x483AE2,110,0,0x483A60,2, 0x483C20,110,0,0x483A60,3, 0x47DC1A,120,0,0x47ADF0,1, 0x47DD4A,120,0,0x47ADF0,2, 0x47DE7A,120,0,0x47ADF0,3, 0x47DFAA,120,0,0x47ADF0,4, 0x47E0DA,120,0,0x47ADF0,5, 0x47E20A,120,0,0x47ADF0,6, 0x47E33A,120,0,0x47ADF0,7, 0x47E46A,120,0,0x47ADF0,8, 0x47E59A,120,0,0x47ADF0,9, 0x47E6DA,120,0,0x47ADF0,10, 0x483A9D,120,0,0x483A60,1, 0x483AE2,120,0,0x483A60,2, 0x483C20,120,0,0x483A60,3>;
using def_t = void(CSprite2d *, float, float, float, float, CRGBA const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSprite2d *,float,float,float,float,CRGBA const &>, 0,1,2,3,4,5>;
META_END

META_BEGIN_OVERLOADED(CSprite2d::Draw, void (CSprite2d::*)(CRect const &, CRGBA const &))
static int address;
static int global_address;
static const int id = 0x51ED50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51ED50, 0x51EF80, 0x51EF10>;
// total references count: 10en (16), 11en (16), steam (16)
using refs_t = RefList<0x47A695,100,0,0x47A5B0,1, 0x47A812,100,0,0x47A5B0,2, 0x47A891,100,0,0x47A5B0,3, 0x47A904,100,0,0x47A5B0,4, 0x47AABB,100,0,0x47A5B0,5, 0x47AC08,100,0,0x47A5B0,6, 0x47AD4B,100,0,0x47A5B0,7, 0x47ADEA,100,0,0x47A5B0,8, 0x480520,100,0,0x47F2B0,1, 0x4806C7,100,0,0x47F2B0,2, 0x48B887,100,0,0x48B7E0,1, 0x48D844,100,0,0x48D770,1, 0x4A600B,100,0,0x4A5EF0,1, 0x508753,100,0,0x5052A0,1, 0x5097CA,100,0,0x509030,1, 0x592926,100,0,0x592880,1, 0x47A685,110,0,0x47A5A0,1, 0x47A802,110,0,0x47A5A0,2, 0x47A881,110,0,0x47A5A0,3, 0x47A8F4,110,0,0x47A5A0,4, 0x47AAAB,110,0,0x47A5A0,5, 0x47ABF8,110,0,0x47A5A0,6, 0x47AD3B,110,0,0x47A5A0,7, 0x47ADDA,110,0,0x47A5A0,8, 0x4805F0,110,0,0x47F380,1, 0x480797,110,0,0x47F380,2, 0x48B977,110,0,0x48B8D0,1, 0x48D944,110,0,0x48D870,1, 0x4A60FB,110,0,0x4A5FE0,1, 0x508833,110,0,0x505380,1, 0x5098AA,110,0,0x509110,1, 0x592BD6,110,0,0x592B30,1, 0x47A685,120,0,0x47A5A0,1, 0x47A802,120,0,0x47A5A0,2, 0x47A881,120,0,0x47A5A0,3, 0x47A8F4,120,0,0x47A5A0,4, 0x47AAAB,120,0,0x47A5A0,5, 0x47ABF8,120,0,0x47A5A0,6, 0x47AD3B,120,0,0x47A5A0,7, 0x47ADDA,120,0,0x47A5A0,8, 0x4805F0,120,0,0x47F380,1, 0x480797,120,0,0x47F380,2, 0x48B907,120,0,0x48B860,1, 0x48D8D4,120,0,0x48D800,1, 0x4A608B,120,0,0x4A5F70,1, 0x5087C3,120,0,0x505310,1, 0x50983A,120,0,0x5090A0,1, 0x592AC6,120,0,0x592A20,1>;
using def_t = void(CSprite2d *, CRect const &, CRGBA const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSprite2d *,CRect const &,CRGBA const &>, 0,1,2>;
META_END

META_BEGIN_OVERLOADED(CSprite2d::Draw, void (CSprite2d::*)(CRect const &, CRGBA const &, float, float, float, float, float, float, float, float))
static int address;
static int global_address;
static const int id = 0x51ED90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51ED90, 0x51EFC0, 0x51EF50>;
// total references count: 10en (9), 11en (9), steam (9)
using refs_t = RefList<0x505611,100,0,0x5052A0,1, 0x5056EC,100,0,0x5052A0,2, 0x505814,100,0,0x5052A0,3, 0x505B8A,100,0,0x5052A0,4, 0x505C72,100,0,0x5052A0,5, 0x505D5A,100,0,0x5052A0,6, 0x505E40,100,0,0x5052A0,7, 0x50625E,100,0,0x5052A0,8, 0x508290,100,0,0x5052A0,9, 0x5056F1,110,0,0x505380,1, 0x5057CC,110,0,0x505380,2, 0x5058F4,110,0,0x505380,3, 0x505C6A,110,0,0x505380,4, 0x505D52,110,0,0x505380,5, 0x505E3A,110,0,0x505380,6, 0x505F20,110,0,0x505380,7, 0x50633E,110,0,0x505380,8, 0x508370,110,0,0x505380,9, 0x505681,120,0,0x505310,1, 0x50575C,120,0,0x505310,2, 0x505884,120,0,0x505310,3, 0x505BFA,120,0,0x505310,4, 0x505CE2,120,0,0x505310,5, 0x505DCA,120,0,0x505310,6, 0x505EB0,120,0,0x505310,7, 0x5062CE,120,0,0x505310,8, 0x508300,120,0,0x505310,9>;
using def_t = void(CSprite2d *, CRect const &, CRGBA const &, float, float, float, float, float, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSprite2d *,CRect const &,CRGBA const &,float,float,float,float,float,float,float,float>, 0,1,2,3,4,5,6,7,8,9,10>;
META_END

META_BEGIN_OVERLOADED(CSprite2d::Draw, void (CSprite2d::*)(CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &))
static int address;
static int global_address;
static const int id = 0x51EDF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51EDF0, 0x51F020, 0x51EFB0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x48D426,100,0,0x48D120,1, 0x48DB2E,100,0,0x48DA50,1, 0x508494,100,0,0x5052A0,1, 0x48D526,110,0,0x48D220,1, 0x48DBFE,110,0,0x48DB20,1, 0x508574,110,0,0x505380,1, 0x48D4B6,120,0,0x48D1B0,1, 0x48DB8E,120,0,0x48DAB0,1, 0x508504,120,0,0x505310,1>;
using def_t = void(CSprite2d *, CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSprite2d *,CRect const &,CRGBA const &,CRGBA const &,CRGBA const &,CRGBA const &>, 0,1,2,3,4,5>;
META_END

META_BEGIN_OVERLOADED(CSprite2d::Draw, void (CSprite2d::*)(float, float, float, float, float, float, float, float, CRGBA const &))
static int address;
static int global_address;
static const int id = 0x51EE40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51EE40, 0x51F070, 0x51F000>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A5ED8,100,0,0x4A5D10,1, 0x4A5FC8,110,0,0x4A5E00,1, 0x4A5F58,120,0,0x4A5D90,1>;
using def_t = void(CSprite2d *, float, float, float, float, float, float, float, float, CRGBA const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSprite2d *,float,float,float,float,float,float,float,float,CRGBA const &>, 0,1,2,3,4,5,6,7,8,9>;
META_END

META_BEGIN_OVERLOADED(CSprite2d::SetVertices, void (*)(CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &, unsigned int))
static int address;
static int global_address;
static const int id = 0x51EE90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51EE90, 0x51F0C0, 0x51F050>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x51ED22,100,0,0x51ECE0,1, 0x51ED62,100,0,0x51ED50,1, 0x51EE0E,100,0,0x51EDF0,1, 0x51F980,100,0,0x51F970,1, 0x51FA1B,100,0,0x51FA00,1, 0x51FA9B,100,0,0x51FA80,1, 0x51EF52,110,0,0x51EF10,1, 0x51EF92,110,0,0x51EF80,1, 0x51F03E,110,0,0x51F020,1, 0x51FBB0,110,0,0x51FBA0,1, 0x51FC4B,110,0,0x51FC30,1, 0x51FCCB,110,0,0x51FCB0,1, 0x51EEE2,120,0,0x51EEA0,1, 0x51EF22,120,0,0x51EF10,1, 0x51EFCE,120,0,0x51EFB0,1, 0x51FB40,120,0,0x51FB30,1, 0x51FBDB,120,0,0x51FBC0,1, 0x51FC5B,120,0,0x51FC40,1>;
using def_t = void(CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CRect const &,CRGBA const &,CRGBA const &,CRGBA const &,CRGBA const &,unsigned int>, 0,1,2,3,4,5>;
META_END

META_BEGIN_OVERLOADED(CSprite2d::SetVertices, void (*)(float, float, float, float, float, float, float, float, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &))
static int address;
static int global_address;
static const int id = 0x51F070;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51F070, 0x51F2A0, 0x51F230>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51EE6B,100,0,0x51EE40,1, 0x51F09B,110,0,0x51F070,1, 0x51F02B,120,0,0x51F000,1>;
using def_t = void(float, float, float, float, float, float, float, float, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<float,float,float,float,float,float,float,float,CRGBA const &,CRGBA const &,CRGBA const &,CRGBA const &>, 0,1,2,3,4,5,6,7,8,9,10,11>;
META_END

META_BEGIN_OVERLOADED(CSprite2d::SetVertices, void (*)(CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &, float, float, float, float, float, float, float, float))
static int address;
static int global_address;
static const int id = 0x51F220;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51F220, 0x51F450, 0x51F3E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51EDC0,100,0,0x51ED90,1, 0x51EFF0,110,0,0x51EFC0,1, 0x51EF80,120,0,0x51EF50,1>;
using def_t = void(CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &, float, float, float, float, float, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CRect const &,CRGBA const &,CRGBA const &,CRGBA const &,CRGBA const &,float,float,float,float,float,float,float,float>, 0,1,2,3,4,5,6,7,8,9,10,11,12>;
META_END

META_BEGIN_OVERLOADED(CSprite2d::SetVertices, void (*)(int, float *, float *, CRGBA const &))
static int address;
static int global_address;
static const int id = 0x51F3E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51F3E0, 0x51F610, 0x51F5A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A698D,100,0,0x4A67E0,1, 0x4A6A7D,110,0,0x4A68D0,1, 0x4A6A0D,120,0,0x4A6860,1>;
using def_t = void(int, float *, float *, CRGBA const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,float *,float *,CRGBA const &>, 0,1,2,3>;
META_END

META_BEGIN(CSprite2d::SetMaskVertices)
static int address;
static int global_address;
static const int id = 0x51F490;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51F490, 0x51F6C0, 0x51F650>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4A6B2A,100,0,0x4A69C0,1, 0x4A6C1A,110,0,0x4A6AB0,1, 0x4A6BAA,120,0,0x4A6A40,1>;
using def_t = void(int, float *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int,float *>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CSprite2d::SetVertices, void (*)(RwIm2DVertex *, CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &, float, float, float, float, float, float, float, float))
static int address;
static int global_address;
static const int id = 0x51F720;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51F720, 0x51F950, 0x51F8E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51EC0C,100,0,0x51EBC0,1, 0x51EE3C,110,0,0x51EDF0,1, 0x51EDCC,120,0,0x51ED80,1>;
using def_t = void(RwIm2DVertex *, CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &, float, float, float, float, float, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<RwIm2DVertex *,CRect const &,CRGBA const &,CRGBA const &,CRGBA const &,CRGBA const &,float,float,float,float,float,float,float,float>, 0,1,2,3,4,5,6,7,8,9,10,11,12,13>;
META_END

META_BEGIN(CSprite2d::SetRenderState)
static int address;
static int global_address;
static const int id = 0x51F950;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51F950, 0x51FB80, 0x51FB10>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x51ED2C,100,0,0x51ECE0,1, 0x51ED6C,100,0,0x51ED50,1, 0x51EDCA,100,0,0x51ED90,1, 0x51EE18,100,0,0x51EDF0,1, 0x51EE75,100,0,0x51EE40,1, 0x51EF5C,110,0,0x51EF10,1, 0x51EF9C,110,0,0x51EF80,1, 0x51EFFA,110,0,0x51EFC0,1, 0x51F048,110,0,0x51F020,1, 0x51F0A5,110,0,0x51F070,1, 0x51EEEC,120,0,0x51EEA0,1, 0x51EF2C,120,0,0x51EF10,1, 0x51EF8A,120,0,0x51EF50,1, 0x51EFD8,120,0,0x51EFB0,1, 0x51F035,120,0,0x51F000,1>;
using def_t = void(CSprite2d *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CSprite2d *>, 0>;
META_END

META_BEGIN_OVERLOADED(CSprite2d::DrawRect, void (*)(CRect const &, CRGBA const &))
static int address;
static int global_address;
static const int id = 0x51F970;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51F970, 0x51FBA0, 0x51FB30>;
// total references count: 10en (37), 11en (37), steam (37)
using refs_t = RefList<0x46B4CB,100,0,0x46B430,1, 0x46B54B,100,0,0x46B430,2, 0x47A6EC,100,0,0x47A5B0,1, 0x47C597,100,0,0x47AE00,1, 0x47F1D5,100,0,0x47AE00,2, 0x47F289,100,0,0x47AE00,3, 0x47F8FB,100,0,0x47F2B0,1, 0x48001A,100,0,0x47F2B0,2, 0x48012E,100,0,0x47F2B0,3, 0x4802D2,100,0,0x47F2B0,4, 0x480391,100,0,0x47F2B0,5, 0x4817D0,100,0,0x481210,1, 0x484FD3,100,0,0x484F70,1, 0x485083,100,0,0x484F70,2, 0x488691,100,0,0x488420,1, 0x488727,100,0,0x488420,2, 0x489CE3,100,0,0x489710,1, 0x489F13,100,0,0x489710,2, 0x48B965,100,0,0x48B7E0,1, 0x48D3B5,100,0,0x48D120,1, 0x48D914,100,0,0x48D770,1, 0x48D9C0,100,0,0x48D770,2, 0x48E21A,100,0,0x48E0E0,1, 0x48E2D4,100,0,0x48E0E0,2, 0x48E336,100,0,0x48E0E0,3, 0x48E391,100,0,0x48E0E0,4, 0x48E3F4,100,0,0x48E0E0,5, 0x4A5968,100,0,0x4A5870,1, 0x4A59A9,100,0,0x4A5870,2, 0x500FB5,100,0,0x500F50,1, 0x507E3D,100,0,0x5052A0,1, 0x507F1A,100,0,0x5052A0,2, 0x50870D,100,0,0x5052A0,3, 0x509786,100,0,0x509030,1, 0x5929A0,100,0,0x592880,1, 0x592A52,100,0,0x592880,2, 0x592AE4,100,0,0x592880,3, 0x46B49B,110,0,0x46B400,1, 0x46B51B,110,0,0x46B400,2, 0x47A6DC,110,0,0x47A5A0,1, 0x47C667,110,0,0x47ADF0,1, 0x47F2A5,110,0,0x47ADF0,2, 0x47F359,110,0,0x47ADF0,3, 0x47F9CB,110,0,0x47F380,1, 0x4800EA,110,0,0x47F380,2, 0x4801FE,110,0,0x47F380,3, 0x4803A2,110,0,0x47F380,4, 0x480461,110,0,0x47F380,5, 0x4818A0,110,0,0x4812E0,1, 0x4850A3,110,0,0x485040,1, 0x485153,110,0,0x485040,2, 0x488791,110,0,0x488520,1, 0x488827,110,0,0x488520,2, 0x489DF3,110,0,0x489820,1, 0x48A023,110,0,0x489820,2, 0x48BA55,110,0,0x48B8D0,1, 0x48D4B5,110,0,0x48D220,1, 0x48DA14,110,0,0x48D870,1, 0x48DAC0,110,0,0x48D870,2, 0x48E2DA,110,0,0x48E1A0,1, 0x48E394,110,0,0x48E1A0,2, 0x48E3F6,110,0,0x48E1A0,3, 0x48E451,110,0,0x48E1A0,4, 0x48E4B4,110,0,0x48E1A0,5, 0x4A5A58,110,0,0x4A5960,1, 0x4A5A99,110,0,0x4A5960,2, 0x501095,110,0,0x501030,1, 0x507F1D,110,0,0x505380,1, 0x507FFA,110,0,0x505380,2, 0x5087ED,110,0,0x505380,3, 0x509866,110,0,0x509110,1, 0x592C50,110,0,0x592B30,1, 0x592D02,110,0,0x592B30,2, 0x592D94,110,0,0x592B30,3, 0x46B49B,120,0,0x46B400,1, 0x46B51B,120,0,0x46B400,2, 0x47A6DC,120,0,0x47A5A0,1, 0x47C667,120,0,0x47ADF0,1, 0x47F2A5,120,0,0x47ADF0,2, 0x47F359,120,0,0x47ADF0,3, 0x47F9CB,120,0,0x47F380,1, 0x4800EA,120,0,0x47F380,2, 0x4801FE,120,0,0x47F380,3, 0x4803A2,120,0,0x47F380,4, 0x480461,120,0,0x47F380,5, 0x4818A0,120,0,0x4812E0,1, 0x4850A3,120,0,0x485040,1, 0x485153,120,0,0x485040,2, 0x488791,120,0,0x488520,1, 0x488827,120,0,0x488520,2, 0x489DF3,120,0,0x489820,1, 0x48A023,120,0,0x489820,2, 0x48B9E5,120,0,0x48B860,1, 0x48D445,120,0,0x48D1B0,1, 0x48D9A4,120,0,0x48D800,1, 0x48DA50,120,0,0x48D800,2, 0x48E26A,120,0,0x48E130,1, 0x48E324,120,0,0x48E130,2, 0x48E386,120,0,0x48E130,3, 0x48E3E1,120,0,0x48E130,4, 0x48E444,120,0,0x48E130,5, 0x4A59E8,120,0,0x4A58F0,1, 0x4A5A29,120,0,0x4A58F0,2, 0x501025,120,0,0x500FC0,1, 0x507EAD,120,0,0x505310,1, 0x507F8A,120,0,0x505310,2, 0x50877D,120,0,0x505310,3, 0x5097F6,120,0,0x5090A0,1, 0x592B40,120,0,0x592A20,1, 0x592BF2,120,0,0x592A20,2, 0x592C84,120,0,0x592A20,3>;
using def_t = void(CRect const &, CRGBA const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CRect const &,CRGBA const &>, 0,1>;
META_END

META_BEGIN_OVERLOADED(CSprite2d::DrawRect, void (*)(CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &))
static int address;
static int global_address;
static const int id = 0x51FA00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51FA00, 0x51FC30, 0x51FBC0>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x48D02C,100,0,0x48CF10,1, 0x4F8067,100,0,0x4F7F00,1, 0x4F8416,100,0,0x4F7F00,2, 0x4F84B0,100,0,0x4F7F00,3, 0x4F8597,100,0,0x4F7F00,4, 0x4F87B7,100,0,0x4F85F0,1, 0x48D12C,110,0,0x48D010,1, 0x4F8147,110,0,0x4F7FE0,1, 0x4F84F6,110,0,0x4F7FE0,2, 0x4F8590,110,0,0x4F7FE0,3, 0x4F8677,110,0,0x4F7FE0,4, 0x4F8897,110,0,0x4F86D0,1, 0x48D0BC,120,0,0x48CFA0,1, 0x4F80D7,120,0,0x4F7F70,1, 0x4F8486,120,0,0x4F7F70,2, 0x4F8520,120,0,0x4F7F70,3, 0x4F8607,120,0,0x4F7F70,4, 0x4F8827,120,0,0x4F8660,1>;
using def_t = void(CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CRect const &,CRGBA const &,CRGBA const &,CRGBA const &,CRGBA const &>, 0,1,2,3,4>;
META_END

META_BEGIN(CSprite2d::DrawRectXLU)
static int address;
static int global_address;
static const int id = 0x51FA80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51FA80, 0x51FCB0, 0x51FC40>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F868C,100,0,0x4F85F0,1, 0x4F876C,110,0,0x4F86D0,1, 0x4F86FC,120,0,0x4F8660,1>;
using def_t = void(CRect const &, CRGBA const &, CRGBA const &, CRGBA const &, CRGBA const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CRect const &,CRGBA const &,CRGBA const &,CRGBA const &,CRGBA const &>, 0,1,2,3,4>;
META_END

template<>
struct stack_object<CSprite2d> : stack_object_no_default<CSprite2d> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CSprite2d *>(ctor_gaddr(CSprite2d), reinterpret_cast<CSprite2d *>(objBuff));
    }
    SUPPORTED_10EN_11EN_STEAM ~stack_object() {
        plugin::CallMethodDynGlobal<CSprite2d *>(dtor_gaddr(CSprite2d), reinterpret_cast<CSprite2d *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CSprite2d *operator_new<CSprite2d>() {
    void *objData = operator new(sizeof(CSprite2d)); 
    CSprite2d *obj = reinterpret_cast<CSprite2d *>(objData);
    plugin::CallMethodDynGlobal<CSprite2d *>(ctor_gaddr(CSprite2d), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CSprite2d *operator_new_array<CSprite2d>(unsigned int objCount) {
    void *objData = operator new(sizeof(CSprite2d) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CSprite2d *objArray = reinterpret_cast<CSprite2d *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CSprite2d *>(ctor_gaddr(CSprite2d), &objArray[i]);
    return objArray;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete<CSprite2d>(CSprite2d *obj) {
    if (obj == nullptr) return;
    plugin::CallMethodDynGlobal<CSprite2d *>(dtor_gaddr(CSprite2d), obj);
    operator delete(obj);
}
template <>
SUPPORTED_10EN_11EN_STEAM inline void operator_delete_array<CSprite2d>(CSprite2d *objArray) {
    if (objArray == nullptr) return;
    void *objData = reinterpret_cast<void *>(reinterpret_cast<char *>(objArray) - 4);
    unsigned int arraySize = *reinterpret_cast<unsigned int *>(objData);
    for (unsigned int i = 0; i < arraySize; i++)
        plugin::CallMethodDynGlobal<CSprite2d *>(dtor_gaddr(CSprite2d), &objArray[i]);
    operator delete(objData);
}

}
