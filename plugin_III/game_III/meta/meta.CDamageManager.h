/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CDamageManager::GetComponentGroup)
static int address;
static int global_address;
static const int id = 0x545790;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x545790, 0x545990, 0x545940>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x545A96,100,0,0x545A80,1, 0x545C96,110,0,0x545C80,1, 0x545C46,120,0,0x545C30,1>;
using def_t = bool(CDamageManager *, tComponent, tComponentGroup *, unsigned char *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDamageManager *,tComponent,tComponentGroup *,unsigned char *>, 0,1,2,3>;
META_END

META_BEGIN(CDamageManager::ResetDamageStatus)
static int address;
static int global_address;
static const int id = 0x545850;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x545850, 0x545A50, 0x545A00>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x52C6E6,100,0,0x52C6B0,1, 0x53C24D,100,0,0x53C240,1, 0x52C926,110,0,0x52C8F0,1, 0x53C48D,110,0,0x53C480,1, 0x52C8B6,120,0,0x52C880,1, 0x53C43D,120,0,0x53C430,1>;
using def_t = void(CDamageManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDamageManager *>, 0>;
META_END

META_BEGIN(CDamageManager::SetLightStatus)
static int address;
static int global_address;
static const int id = 0x545860;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x545860, 0x545A60, 0x545A10>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x545B25,100,0,0x545A80,1, 0x545D25,110,0,0x545C80,1, 0x545CD5,120,0,0x545C30,1>;
using def_t = void(CDamageManager *, eLights, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDamageManager *,eLights,unsigned int>, 0,1,2>;
META_END

META_BEGIN(CDamageManager::GetLightStatus)
static int address;
static int global_address;
static const int id = 0x545890;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x545890, 0x545A90, 0x545A40>;
// total references count: 10en (46), 11en (46), steam (46)
using refs_t = RefList<0x52F6F9,100,0,0x52F390,1, 0x52FF4E,100,0,0x52F390,2, 0x53848B,100,0,0x535B40,1, 0x5384EB,100,0,0x535B40,2, 0x53854A,100,0,0x535B40,3, 0x5385AA,100,0,0x535B40,4, 0x53862C,100,0,0x535B40,5, 0x53874F,100,0,0x535B40,6, 0x53887A,100,0,0x535B40,7, 0x53899D,100,0,0x535B40,8, 0x538AC8,100,0,0x535B40,9, 0x538B10,100,0,0x535B40,10, 0x538B6A,100,0,0x535B40,11, 0x538BA3,100,0,0x535B40,12, 0x538BDF,100,0,0x535B40,13, 0x538C50,100,0,0x535B40,14, 0x538E09,100,0,0x535B40,15, 0x538F24,100,0,0x535B40,16, 0x53908E,100,0,0x535B40,17, 0x53912F,100,0,0x535B40,18, 0x5391D8,100,0,0x535B40,19, 0x539223,100,0,0x535B40,20, 0x539278,100,0,0x535B40,21, 0x5392AA,100,0,0x535B40,22, 0x5392DC,100,0,0x535B40,23, 0x539343,100,0,0x535B40,24, 0x539496,100,0,0x535B40,25, 0x5394A7,100,0,0x535B40,26, 0x539565,100,0,0x535B40,27, 0x539576,100,0,0x535B40,28, 0x5395DF,100,0,0x535B40,29, 0x5395F0,100,0,0x535B40,30, 0x5396E9,100,0,0x535B40,31, 0x5396FA,100,0,0x535B40,32, 0x5399A4,100,0,0x535B40,33, 0x5399FA,100,0,0x535B40,34, 0x539A50,100,0,0x535B40,35, 0x539AB7,100,0,0x535B40,36, 0x539B28,100,0,0x535B40,37, 0x539B7E,100,0,0x535B40,38, 0x539BD4,100,0,0x535B40,39, 0x539C3B,100,0,0x535B40,40, 0x539CAB,100,0,0x535B40,41, 0x539CE6,100,0,0x535B40,42, 0x539D1B,100,0,0x535B40,43, 0x539D56,100,0,0x535B40,44, 0x52F939,110,0,0x52F5D0,1, 0x53018E,110,0,0x52F5D0,2, 0x5386CB,110,0,0x535D80,1, 0x53872B,110,0,0x535D80,2, 0x53878A,110,0,0x535D80,3, 0x5387EA,110,0,0x535D80,4, 0x53886C,110,0,0x535D80,5, 0x53898F,110,0,0x535D80,6, 0x538ABA,110,0,0x535D80,7, 0x538BDD,110,0,0x535D80,8, 0x538D08,110,0,0x535D80,9, 0x538D50,110,0,0x535D80,10, 0x538DAA,110,0,0x535D80,11, 0x538DE3,110,0,0x535D80,12, 0x538E1F,110,0,0x535D80,13, 0x538E90,110,0,0x535D80,14, 0x539049,110,0,0x535D80,15, 0x539164,110,0,0x535D80,16, 0x5392CE,110,0,0x535D80,17, 0x53936F,110,0,0x535D80,18, 0x539418,110,0,0x535D80,19, 0x539463,110,0,0x535D80,20, 0x5394B8,110,0,0x535D80,21, 0x5394EA,110,0,0x535D80,22, 0x53951C,110,0,0x535D80,23, 0x539583,110,0,0x535D80,24, 0x5396D6,110,0,0x535D80,25, 0x5396E7,110,0,0x535D80,26, 0x5397A5,110,0,0x535D80,27, 0x5397B6,110,0,0x535D80,28, 0x53981F,110,0,0x535D80,29, 0x539830,110,0,0x535D80,30, 0x539929,110,0,0x535D80,31, 0x53993A,110,0,0x535D80,32, 0x539BE4,110,0,0x535D80,33, 0x539C3A,110,0,0x535D80,34, 0x539C90,110,0,0x535D80,35, 0x539CF7,110,0,0x535D80,36, 0x539D68,110,0,0x535D80,37, 0x539DBE,110,0,0x535D80,38, 0x539E14,110,0,0x535D80,39, 0x539E7B,110,0,0x535D80,40, 0x539EEB,110,0,0x535D80,41, 0x539F26,110,0,0x535D80,42, 0x539F5B,110,0,0x535D80,43, 0x539F96,110,0,0x535D80,44, 0x52F8C9,120,0,0x52F560,1, 0x53011E,120,0,0x52F560,2, 0x53867B,120,0,0x535D10,1, 0x5386DB,120,0,0x535D10,2, 0x53873A,120,0,0x535D10,3, 0x53879A,120,0,0x535D10,4, 0x53881C,120,0,0x535D10,5, 0x53893F,120,0,0x535D10,6, 0x538A6A,120,0,0x535D10,7, 0x538B8D,120,0,0x535D10,8, 0x538CB8,120,0,0x535D10,9, 0x538D00,120,0,0x535D10,10, 0x538D5A,120,0,0x535D10,11, 0x538D93,120,0,0x535D10,12, 0x538DCF,120,0,0x535D10,13, 0x538E40,120,0,0x535D10,14, 0x538FF9,120,0,0x535D10,15, 0x539114,120,0,0x535D10,16, 0x53927E,120,0,0x535D10,17, 0x53931F,120,0,0x535D10,18, 0x5393C8,120,0,0x535D10,19, 0x539413,120,0,0x535D10,20, 0x539468,120,0,0x535D10,21, 0x53949A,120,0,0x535D10,22, 0x5394CC,120,0,0x535D10,23, 0x539533,120,0,0x535D10,24, 0x539686,120,0,0x535D10,25, 0x539697,120,0,0x535D10,26, 0x539755,120,0,0x535D10,27, 0x539766,120,0,0x535D10,28, 0x5397CF,120,0,0x535D10,29, 0x5397E0,120,0,0x535D10,30, 0x5398D9,120,0,0x535D10,31, 0x5398EA,120,0,0x535D10,32, 0x539B94,120,0,0x535D10,33, 0x539BEA,120,0,0x535D10,34, 0x539C40,120,0,0x535D10,35, 0x539CA7,120,0,0x535D10,36, 0x539D18,120,0,0x535D10,37, 0x539D6E,120,0,0x535D10,38, 0x539DC4,120,0,0x535D10,39, 0x539E2B,120,0,0x535D10,40, 0x539E9B,120,0,0x535D10,41, 0x539ED6,120,0,0x535D10,42, 0x539F0B,120,0,0x535D10,43, 0x539F46,120,0,0x535D10,44>;
using def_t = int(CDamageManager *, eLights);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDamageManager *,eLights>, 0,1>;
META_END

META_BEGIN(CDamageManager::SetPanelStatus)
static int address;
static int global_address;
static const int id = 0x5458B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5458B0, 0x545AB0, 0x545A60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x545A29,100,0,0x545A00,1, 0x545C29,110,0,0x545C00,1, 0x545BD9,120,0,0x545BB0,1>;
using def_t = void(CDamageManager *, int, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDamageManager *,int,unsigned int>, 0,1,2>;
META_END

META_BEGIN(CDamageManager::GetPanelStatus)
static int address;
static int global_address;
static const int id = 0x5458E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5458E0, 0x545AE0, 0x545A90>;
// total references count: 10en (7), 11en (7), steam (7)
using refs_t = RefList<0x52F7F0,100,0,0x52F390,1, 0x52F8D9,100,0,0x52F390,2, 0x52FCD4,100,0,0x52F390,3, 0x52FCF0,100,0,0x52F390,4, 0x530133,100,0,0x530120,1, 0x5301B3,100,0,0x5301A0,1, 0x545A0C,100,0,0x545A00,1, 0x52FA30,110,0,0x52F5D0,1, 0x52FB19,110,0,0x52F5D0,2, 0x52FF14,110,0,0x52F5D0,3, 0x52FF30,110,0,0x52F5D0,4, 0x530373,110,0,0x530360,1, 0x5303F3,110,0,0x5303E0,1, 0x545C0C,110,0,0x545C00,1, 0x52F9C0,120,0,0x52F560,1, 0x52FAA9,120,0,0x52F560,2, 0x52FEA4,120,0,0x52F560,3, 0x52FEC0,120,0,0x52F560,4, 0x530303,120,0,0x5302F0,1, 0x530383,120,0,0x530370,1, 0x545BBC,120,0,0x545BB0,1>;
using def_t = int(CDamageManager *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDamageManager *,int>, 0,1>;
META_END

META_BEGIN(CDamageManager::SetWheelStatus)
static int address;
static int global_address;
static const int id = 0x545900;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x545900, 0x545B00, 0x545AB0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x53C12C,100,0,0x53C0E0,1, 0x545A69,100,0,0x545A40,1, 0x53C36C,110,0,0x53C320,1, 0x545C69,110,0,0x545C40,1, 0x53C31C,120,0,0x53C2D0,1, 0x545C19,120,0,0x545BF0,1>;
using def_t = void(CDamageManager *, int, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDamageManager *,int,unsigned int>, 0,1,2>;
META_END

META_BEGIN(CDamageManager::GetWheelStatus)
static int address;
static int global_address;
static const int id = 0x545910;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x545910, 0x545B10, 0x545AC0>;
// total references count: 10en (16), 11en (16), steam (16)
using refs_t = RefList<0x532C37,100,0,0x531470,1, 0x532C58,100,0,0x531470,2, 0x533662,100,0,0x531470,3, 0x5337D4,100,0,0x531470,4, 0x533B54,100,0,0x531470,5, 0x533CD4,100,0,0x531470,6, 0x53A271,100,0,0x539EA0,1, 0x53A402,100,0,0x539EA0,2, 0x53A59D,100,0,0x539EA0,3, 0x53A73D,100,0,0x539EA0,4, 0x53A8D9,100,0,0x539EA0,5, 0x53AEF9,100,0,0x539EA0,6, 0x53B07F,100,0,0x539EA0,7, 0x53C116,100,0,0x53C0E0,1, 0x545A4C,100,0,0x545A40,1, 0x56BD2B,100,0,0x56BCB0,1, 0x532E77,110,0,0x5316B0,1, 0x532E98,110,0,0x5316B0,2, 0x5338A2,110,0,0x5316B0,3, 0x533A14,110,0,0x5316B0,4, 0x533D94,110,0,0x5316B0,5, 0x533F14,110,0,0x5316B0,6, 0x53A4B1,110,0,0x53A0E0,1, 0x53A642,110,0,0x53A0E0,2, 0x53A7DD,110,0,0x53A0E0,3, 0x53A97D,110,0,0x53A0E0,4, 0x53AB19,110,0,0x53A0E0,5, 0x53B139,110,0,0x53A0E0,6, 0x53B2BF,110,0,0x53A0E0,7, 0x53C356,110,0,0x53C320,1, 0x545C4C,110,0,0x545C40,1, 0x56C07B,110,0,0x56C000,1, 0x532E07,120,0,0x531640,1, 0x532E28,120,0,0x531640,2, 0x533832,120,0,0x531640,3, 0x5339A4,120,0,0x531640,4, 0x533D24,120,0,0x531640,5, 0x533EA4,120,0,0x531640,6, 0x53A461,120,0,0x53A090,1, 0x53A5F2,120,0,0x53A090,2, 0x53A78D,120,0,0x53A090,3, 0x53A92D,120,0,0x53A090,4, 0x53AAC9,120,0,0x53A090,5, 0x53B0E9,120,0,0x53A090,6, 0x53B26F,120,0,0x53A090,7, 0x53C306,120,0,0x53C2D0,1, 0x545BFC,120,0,0x545BF0,1, 0x56BF7B,120,0,0x56BF00,1>;
using def_t = int(CDamageManager *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDamageManager *,int>, 0,1>;
META_END

META_BEGIN(CDamageManager::SetDoorStatus)
static int address;
static int global_address;
static const int id = 0x545920;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x545920, 0x545B20, 0x545AD0>;
// total references count: 10en (26), 11en (26), steam (26)
using refs_t = RefList<0x4DE724,100,0,0x4DE500,1, 0x4DE998,100,0,0x4DE500,2, 0x4DEE1A,100,0,0x4DEC80,1, 0x4DEF07,100,0,0x4DEC80,2, 0x4DF2AF,100,0,0x4DF1B0,1, 0x4DF8DB,100,0,0x4DF5C0,1, 0x4DF91E,100,0,0x4DF5C0,2, 0x4E4BF4,100,0,0x4E4B90,1, 0x52CC21,100,0,0x52C6B0,1, 0x52CC34,100,0,0x52C6B0,2, 0x52CC47,100,0,0x52C6B0,3, 0x52CC5A,100,0,0x52C6B0,4, 0x52E87C,100,0,0x52E750,1, 0x53026D,100,0,0x530200,1, 0x53538B,100,0,0x535320,1, 0x53C26D,100,0,0x53C240,1, 0x53C27C,100,0,0x53C240,2, 0x53C28B,100,0,0x53C240,3, 0x53C29A,100,0,0x53C240,4, 0x545995,100,0,0x545970,1, 0x5950A4,100,0,0x594D10,1, 0x5950DB,100,0,0x594D10,2, 0x595112,100,0,0x594D10,3, 0x595149,100,0,0x594D10,4, 0x595180,100,0,0x594D10,5, 0x5951B7,100,0,0x594D10,6, 0x4DE7D4,110,0,0x4DE5B0,1, 0x4DEA48,110,0,0x4DE5B0,2, 0x4DEECA,110,0,0x4DED30,1, 0x4DEFB7,110,0,0x4DED30,2, 0x4DF35F,110,0,0x4DF260,1, 0x4DF98B,110,0,0x4DF670,1, 0x4DF9CE,110,0,0x4DF670,2, 0x4E4CA4,110,0,0x4E4C40,1, 0x52CE61,110,0,0x52C8F0,1, 0x52CE74,110,0,0x52C8F0,2, 0x52CE87,110,0,0x52C8F0,3, 0x52CE9A,110,0,0x52C8F0,4, 0x52EABC,110,0,0x52E990,1, 0x5304AD,110,0,0x530440,1, 0x5355CB,110,0,0x535560,1, 0x53C4AD,110,0,0x53C480,1, 0x53C4BC,110,0,0x53C480,2, 0x53C4CB,110,0,0x53C480,3, 0x53C4DA,110,0,0x53C480,4, 0x545B95,110,0,0x545B70,1, 0x595354,110,0,0x594FC0,1, 0x59538B,110,0,0x594FC0,2, 0x5953C2,110,0,0x594FC0,3, 0x5953F9,110,0,0x594FC0,4, 0x595430,110,0,0x594FC0,5, 0x595467,110,0,0x594FC0,6, 0x4DE764,120,0,0x4DE540,1, 0x4DE9D8,120,0,0x4DE540,2, 0x4DEE5A,120,0,0x4DECC0,1, 0x4DEF47,120,0,0x4DECC0,2, 0x4DF2EF,120,0,0x4DF1F0,1, 0x4DF91B,120,0,0x4DF600,1, 0x4DF95E,120,0,0x4DF600,2, 0x4E4C34,120,0,0x4E4BD0,1, 0x52CDF1,120,0,0x52C880,1, 0x52CE04,120,0,0x52C880,2, 0x52CE17,120,0,0x52C880,3, 0x52CE2A,120,0,0x52C880,4, 0x52EA4C,120,0,0x52E920,1, 0x53043D,120,0,0x5303D0,1, 0x53555B,120,0,0x5354F0,1, 0x53C45D,120,0,0x53C430,1, 0x53C46C,120,0,0x53C430,2, 0x53C47B,120,0,0x53C430,3, 0x53C48A,120,0,0x53C430,4, 0x545B45,120,0,0x545B20,1, 0x595244,120,0,0x594EB0,1, 0x59527B,120,0,0x594EB0,2, 0x5952B2,120,0,0x594EB0,3, 0x5952E9,120,0,0x594EB0,4, 0x595320,120,0,0x594EB0,5, 0x595357,120,0,0x594EB0,6>;
using def_t = void(CDamageManager *, int, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDamageManager *,int,unsigned int>, 0,1,2>;
META_END

META_BEGIN(CDamageManager::GetDoorStatus)
static int address;
static int global_address;
static const int id = 0x545930;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x545930, 0x545B30, 0x545AE0>;
// total references count: 10en (20), 11en (20), steam (20)
using refs_t = RefList<0x4DEE0A,100,0,0x4DEC80,1, 0x4DF2A0,100,0,0x4DF1B0,1, 0x4E4BE4,100,0,0x4E4B90,1, 0x4EFF22,100,0,0x4EFD90,1, 0x52E869,100,0,0x52E750,1, 0x52F00B,100,0,0x52F000,1, 0x530214,100,0,0x530200,1, 0x534380,100,0,0x531470,1, 0x535268,100,0,0x535250,1, 0x53532F,100,0,0x535320,1, 0x53551B,100,0,0x535450,1, 0x53AB1F,100,0,0x539EA0,1, 0x54597C,100,0,0x545970,1, 0x56C7BC,100,0,0x56C770,1, 0x595090,100,0,0x594D10,1, 0x5950C7,100,0,0x594D10,2, 0x5950FE,100,0,0x594D10,3, 0x595135,100,0,0x594D10,4, 0x59516C,100,0,0x594D10,5, 0x5951A3,100,0,0x594D10,6, 0x4DEEBA,110,0,0x4DED30,1, 0x4DF350,110,0,0x4DF260,1, 0x4E4C94,110,0,0x4E4C40,1, 0x4EFFD2,110,0,0x4EFE40,1, 0x52EAA9,110,0,0x52E990,1, 0x52F24B,110,0,0x52F240,1, 0x530454,110,0,0x530440,1, 0x5345C0,110,0,0x5316B0,1, 0x5354A8,110,0,0x535490,1, 0x53556F,110,0,0x535560,1, 0x53575B,110,0,0x535690,1, 0x53AD5F,110,0,0x53A0E0,1, 0x545B7C,110,0,0x545B70,1, 0x56CB0C,110,0,0x56CAC0,1, 0x595340,110,0,0x594FC0,1, 0x595377,110,0,0x594FC0,2, 0x5953AE,110,0,0x594FC0,3, 0x5953E5,110,0,0x594FC0,4, 0x59541C,110,0,0x594FC0,5, 0x595453,110,0,0x594FC0,6, 0x4DEE4A,120,0,0x4DECC0,1, 0x4DF2E0,120,0,0x4DF1F0,1, 0x4E4C24,120,0,0x4E4BD0,1, 0x4EFF62,120,0,0x4EFDD0,1, 0x52EA39,120,0,0x52E920,1, 0x52F1DB,120,0,0x52F1D0,1, 0x5303E4,120,0,0x5303D0,1, 0x534550,120,0,0x531640,1, 0x535438,120,0,0x535420,1, 0x5354FF,120,0,0x5354F0,1, 0x5356EB,120,0,0x535620,1, 0x53AD0F,120,0,0x53A090,1, 0x545B2C,120,0,0x545B20,1, 0x56CA0C,120,0,0x56C9C0,1, 0x595230,120,0,0x594EB0,1, 0x595267,120,0,0x594EB0,2, 0x59529E,120,0,0x594EB0,3, 0x5952D5,120,0,0x594EB0,4, 0x59530C,120,0,0x594EB0,5, 0x595343,120,0,0x594EB0,6>;
using def_t = int(CDamageManager *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDamageManager *,int>, 0,1>;
META_END

META_BEGIN(CDamageManager::SetEngineStatus)
static int address;
static int global_address;
static const int id = 0x545940;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x545940, 0x545B40, 0x545AF0>;
// total references count: 10en (9), 11en (9), steam (9)
using refs_t = RefList<0x479EC9,100,0,0x479E60,1, 0x490ECD,100,0,0x490E70,1, 0x4A084E,100,0,0x49FD30,1, 0x52FFB9,100,0,0x52F390,1, 0x530030,100,0,0x52F390,2, 0x5459E9,100,0,0x5459B0,1, 0x545BC0,100,0,0x545B70,1, 0x551BEC,100,0,0x551950,1, 0x552B4A,100,0,0x552AF0,1, 0x479EC9,110,0,0x479E60,1, 0x490F8D,110,0,0x490F30,1, 0x4A093E,110,0,0x49FE20,1, 0x5301F9,110,0,0x52F5D0,1, 0x530270,110,0,0x52F5D0,2, 0x545BE9,110,0,0x545BB0,1, 0x545DC0,110,0,0x545D70,1, 0x551D2C,110,0,0x551A90,1, 0x552C8A,110,0,0x552C30,1, 0x479EC9,120,0,0x479E60,1, 0x490F1D,120,0,0x490EC0,1, 0x4A08CE,120,0,0x49FDB0,1, 0x530189,120,0,0x52F560,1, 0x530200,120,0,0x52F560,2, 0x545B99,120,0,0x545B60,1, 0x545D70,120,0,0x545D20,1, 0x551CDC,120,0,0x551A40,1, 0x552C3A,120,0,0x552BE0,1>;
using def_t = void(CDamageManager *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDamageManager *,unsigned int>, 0,1>;
META_END

META_BEGIN(CDamageManager::GetEngineStatus)
static int address;
static int global_address;
static const int id = 0x545960;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x545960, 0x545B60, 0x545B10>;
// total references count: 10en (11), 11en (11), steam (11)
using refs_t = RefList<0x423A17,100,0,0x4222D0,1, 0x479601,100,0,0x479590,1, 0x479EB6,100,0,0x479E60,1, 0x4DF742,100,0,0x4DF5C0,1, 0x52FF9E,100,0,0x52F390,1, 0x534357,100,0,0x531470,1, 0x53547E,100,0,0x535450,1, 0x5459B4,100,0,0x5459B0,1, 0x552B37,100,0,0x552AF0,1, 0x56AE18,100,0,0x56ADF0,1, 0x56CB2A,100,0,0x56CAF0,1, 0x423A17,110,0,0x4222D0,1, 0x479601,110,0,0x479590,1, 0x479EB6,110,0,0x479E60,1, 0x4DF7F2,110,0,0x4DF670,1, 0x5301DE,110,0,0x52F5D0,1, 0x534597,110,0,0x5316B0,1, 0x5356BE,110,0,0x535690,1, 0x545BB4,110,0,0x545BB0,1, 0x552C77,110,0,0x552C30,1, 0x56B168,110,0,0x56B140,1, 0x56CE7A,110,0,0x56CE40,1, 0x423A17,120,0,0x4222D0,1, 0x479601,120,0,0x479590,1, 0x479EB6,120,0,0x479E60,1, 0x4DF782,120,0,0x4DF600,1, 0x53016E,120,0,0x52F560,1, 0x534527,120,0,0x531640,1, 0x53564E,120,0,0x535620,1, 0x545B64,120,0,0x545B60,1, 0x552C27,120,0,0x552BE0,1, 0x56B068,120,0,0x56B040,1, 0x56CD7A,120,0,0x56CD40,1>;
using def_t = int(CDamageManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDamageManager *>, 0>;
META_END

META_BEGIN(CDamageManager::ProgressDoorDamage)
static int address;
static int global_address;
static const int id = 0x545970;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x545970, 0x545B70, 0x545B20>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x545B06,100,0,0x545A80,1, 0x545B14,100,0,0x545A80,2, 0x545D06,110,0,0x545C80,1, 0x545D14,110,0,0x545C80,2, 0x545CB6,120,0,0x545C30,1, 0x545CC4,120,0,0x545C30,2>;
using def_t = void(CDamageManager *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDamageManager *,unsigned char>, 0,1>;
META_END

META_BEGIN(CDamageManager::ProgressEngineDamage)
static int address;
static int global_address;
static const int id = 0x5459B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5459B0, 0x545BB0, 0x545B60>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x545AFA,100,0,0x545A80,1, 0x545B4A,100,0,0x545A80,2, 0x545CFA,110,0,0x545C80,1, 0x545D4A,110,0,0x545C80,2, 0x545CAA,120,0,0x545C30,1, 0x545CFA,120,0,0x545C30,2>;
using def_t = void(CDamageManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDamageManager *>, 0>;
META_END

META_BEGIN(CDamageManager::ProgressPanelDamage)
static int address;
static int global_address;
static const int id = 0x545A00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x545A00, 0x545C00, 0x545BB0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x545B56,100,0,0x545A80,1, 0x545B96,100,0,0x545B70,1, 0x545B9F,100,0,0x545B70,2, 0x545D56,110,0,0x545C80,1, 0x545D96,110,0,0x545D70,1, 0x545D9F,110,0,0x545D70,2, 0x545D06,120,0,0x545C30,1, 0x545D46,120,0,0x545D20,1, 0x545D4F,120,0,0x545D20,2>;
using def_t = void(CDamageManager *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDamageManager *,unsigned char>, 0,1>;
META_END

META_BEGIN(CDamageManager::ProgressWheelDamage)
static int address;
static int global_address;
static const int id = 0x545A40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x545A40, 0x545C40, 0x545BF0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x545AE0,100,0,0x545A80,1, 0x545CE0,110,0,0x545C80,1, 0x545C90,120,0,0x545C30,1>;
using def_t = void(CDamageManager *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDamageManager *,unsigned char>, 0,1>;
META_END

META_BEGIN(CDamageManager::ApplyDamage)
static int address;
static int global_address;
static const int id = 0x545A80;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x545A80, 0x545C80, 0x545C30>;
// total references count: 10en (13), 11en (13), steam (13)
using refs_t = RefList<0x52F7C1,100,0,0x52F390,1, 0x52F847,100,0,0x52F390,2, 0x52F8AA,100,0,0x52F390,3, 0x52F925,100,0,0x52F390,4, 0x52F99B,100,0,0x52F390,5, 0x52FA11,100,0,0x52F390,6, 0x52FA87,100,0,0x52F390,7, 0x52FAFD,100,0,0x52F390,8, 0x52FB5C,100,0,0x52F390,9, 0x52FBBF,100,0,0x52F390,10, 0x52FC22,100,0,0x52F390,11, 0x52FC85,100,0,0x52F390,12, 0x52FCC3,100,0,0x52F390,13, 0x52FA01,110,0,0x52F5D0,1, 0x52FA87,110,0,0x52F5D0,2, 0x52FAEA,110,0,0x52F5D0,3, 0x52FB65,110,0,0x52F5D0,4, 0x52FBDB,110,0,0x52F5D0,5, 0x52FC51,110,0,0x52F5D0,6, 0x52FCC7,110,0,0x52F5D0,7, 0x52FD3D,110,0,0x52F5D0,8, 0x52FD9C,110,0,0x52F5D0,9, 0x52FDFF,110,0,0x52F5D0,10, 0x52FE62,110,0,0x52F5D0,11, 0x52FEC5,110,0,0x52F5D0,12, 0x52FF03,110,0,0x52F5D0,13, 0x52F991,120,0,0x52F560,1, 0x52FA17,120,0,0x52F560,2, 0x52FA7A,120,0,0x52F560,3, 0x52FAF5,120,0,0x52F560,4, 0x52FB6B,120,0,0x52F560,5, 0x52FBE1,120,0,0x52F560,6, 0x52FC57,120,0,0x52F560,7, 0x52FCCD,120,0,0x52F560,8, 0x52FD2C,120,0,0x52F560,9, 0x52FD8F,120,0,0x52F560,10, 0x52FDF2,120,0,0x52F560,11, 0x52FE55,120,0,0x52F560,12, 0x52FE93,120,0,0x52F560,13>;
using def_t = bool(CDamageManager *, tComponent, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDamageManager *,tComponent,float,float>, 0,1,2,3>;
META_END

META_BEGIN(CDamageManager::FuckCarCompletely)
static int address;
static int global_address;
static const int id = 0x545B70;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x545B70, 0x545D70, 0x545D20>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x53BCB7,100,0,0x53BC60,1, 0x53BEF7,110,0,0x53BEA0,1, 0x53BEA7,120,0,0x53BE50,1>;
using def_t = void(CDamageManager *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CDamageManager *>, 0>;
META_END

}
