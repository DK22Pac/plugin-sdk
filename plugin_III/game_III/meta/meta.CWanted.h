/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

CTOR_META_BEGIN(CCrimeBeingQd)
static int address;
static int global_address;
static const int id = 0x4EFB20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4EFB20, 0x4EFBD0, 0x4EFB60>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x4EF853,100,2,0,1, 0x5968B2,100,2,0,1, 0x5985E7,100,2,0,1, 0x4EF903,110,2,0,1, 0x596B62,110,2,0,1, 0x598857,110,2,0,1, 0x4EF893,120,2,0,1, 0x596A52,120,2,0,1, 0x598747,120,2,0,1>;
using def_t = CCrimeBeingQd *(CCrimeBeingQd *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCrimeBeingQd *>, 0>;
META_END

META_BEGIN_OVERLOADED(CCrimeBeingQd::operator=, void (CCrimeBeingQd::*)(CCrimeBeingQd const &))
static int address;
static int global_address;
static const int id = 0x5966A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5966A0, 0x596950, 0x596840>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5963B8,100,0,0x5961F0,1, 0x596943,100,0,0x5966E0,1, 0x596668,110,0,0x5964A0,1, 0x596BF3,110,0,0x596990,1, 0x596558,120,0,0x596390,1, 0x596AE3,120,0,0x596880,1>;
using def_t = void(CCrimeBeingQd *, CCrimeBeingQd const &);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCrimeBeingQd *,CCrimeBeingQd const &>, 0,1>;
META_END

META_BEGIN(CWanted::Initialise)
static int address;
static int global_address;
static const int id = 0x4AD6E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4AD6E0, 0x4AD7D0, 0x4AD760>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4AD79A,100,0,0x4AD790,1, 0x4EF874,100,0,0x4EF7E0,1, 0x4AD88A,110,0,0x4AD880,1, 0x4EF924,110,0,0x4EF890,1, 0x4AD81A,120,0,0x4AD810,1, 0x4EF8B4,120,0,0x4EF820,1>;
using def_t = void(CWanted *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWanted *>, 0>;
META_END

META_BEGIN(CWanted::Reset)
static int address;
static int global_address;
static const int id = 0x4AD790;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4AD790, 0x4AD880, 0x4AD810>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x421AE2,100,0,0x421A60,1, 0x4226FB,100,0,0x4222D0,1, 0x421AE2,110,0,0x421A60,1, 0x4226FB,110,0,0x4222D0,1, 0x421AE2,120,0,0x421A60,1, 0x4226FB,120,0,0x4222D0,1>;
using def_t = void(CWanted *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWanted *>, 0>;
META_END

META_BEGIN(CWanted::Update)
static int address;
static int global_address;
static const int id = 0x4AD7B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4AD7B0, 0x4AD8A0, 0x4AD830>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4EFE73,100,0,0x4EFD90,1, 0x4EFF23,110,0,0x4EFE40,1, 0x4EFEB3,120,0,0x4EFDD0,1>;
using def_t = void(CWanted *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWanted *>, 0>;
META_END

META_BEGIN(CWanted::UpdateWantedLevel)
static int address;
static int global_address;
static const int id = 0x4AD900;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4AD900, 0x4AD9F0, 0x4AD980>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x4332D8,100,0,0x4331B0,1, 0x4AD80E,100,0,0x4AD7B0,1, 0x4ADAB5,100,0,0x4ADA50,1, 0x4AE3F5,100,0,0x4AE110,1, 0x4332D8,110,0,0x4331B0,1, 0x4AD8FE,110,0,0x4AD8A0,1, 0x4ADBA5,110,0,0x4ADB40,1, 0x4AE4E5,110,0,0x4AE200,1, 0x4332D8,120,0,0x4331B0,1, 0x4AD88E,120,0,0x4AD830,1, 0x4ADB35,120,0,0x4ADAD0,1, 0x4AE475,120,0,0x4AE190,1>;
using def_t = void(CWanted *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWanted *>, 0>;
META_END

META_BEGIN(CWanted::RegisterCrime)
static int address;
static int global_address;
static const int id = 0x4AD9F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4AD9F0, 0x4ADAE0, 0x4ADA70>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x47616C,100,0,0x476070,1, 0x47616C,110,0,0x476070,1, 0x47616C,120,0,0x476070,1>;
using def_t = void(CWanted *, eCrimeType, CVector const &, unsigned int, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWanted *,eCrimeType,CVector const &,unsigned int,bool>, 0,1,2,3,4>;
META_END

META_BEGIN(CWanted::RegisterCrime_Immediately)
static int address;
static int global_address;
static const int id = 0x4ADA10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ADA10, 0x4ADB00, 0x4ADA90>;
// total references count: 10en (5), 11en (5), steam (5)
using refs_t = RefList<0x47613D,100,0,0x476070,1, 0x4D36AB,100,0,0x4D33A0,1, 0x4D36CD,100,0,0x4D33A0,2, 0x54A134,100,0,0x5499F0,1, 0x54DF86,100,0,0x54DE90,1, 0x47613D,110,0,0x476070,1, 0x4D374B,110,0,0x4D3440,1, 0x4D376D,110,0,0x4D3440,2, 0x54A334,110,0,0x549BF0,1, 0x54E106,110,0,0x54E010,1, 0x47613D,120,0,0x476070,1, 0x4D36DB,120,0,0x4D33D0,1, 0x4D36FD,120,0,0x4D33D0,2, 0x54A2E4,120,0,0x549BA0,1, 0x54E0B6,120,0,0x54DFC0,1>;
using def_t = void(CWanted *, eCrimeType, CVector const &, unsigned int, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWanted *,eCrimeType,CVector const &,unsigned int,bool>, 0,1,2,3,4>;
META_END

META_BEGIN(CWanted::SetWantedLevel)
static int address;
static int global_address;
static const int id = 0x4ADA50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ADA50, 0x4ADB40, 0x4ADAD0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4ADAD1,100,0,0x4ADAC0,1, 0x4F319B,100,0,0x4F3190,1, 0x4ADBC1,110,0,0x4ADBB0,1, 0x4F324B,110,0,0x4F3240,1, 0x4ADB51,120,0,0x4ADB40,1, 0x4F31DB,120,0,0x4F31D0,1>;
using def_t = void(CWanted *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWanted *,int>, 0,1>;
META_END

META_BEGIN(CWanted::SetWantedLevelNoDrop)
static int address;
static int global_address;
static const int id = 0x4ADAC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ADAC0, 0x4ADBB0, 0x4ADB40>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4DDB73,100,0,0x4DD980,1, 0x4F31BB,100,0,0x4F31B0,1, 0x4DDC23,110,0,0x4DDA30,1, 0x4F326B,110,0,0x4F3260,1, 0x4DDBB3,120,0,0x4DD9C0,1, 0x4F31FB,120,0,0x4F31F0,1>;
using def_t = void(CWanted *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWanted *,int>, 0,1>;
META_END

META_BEGIN(CWanted::SetMaximumWantedLevel)
static int address;
static int global_address;
static const int id = 0x4ADAE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ADAE0, 0x4ADBD0, 0x4ADB60>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4428DB,100,0,0x440CB0,1, 0x4428DB,110,0,0x440CB0,1, 0x4428DB,120,0,0x440CB0,1>;
using def_t = void(int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<int>, 0>;
META_END

META_BEGIN(CWanted::AreSwatRequired)
static int address;
static int global_address;
static const int id = 0x4ADBA0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ADBA0, 0x4ADC90, 0x4ADC20>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x40AEBB,100,0,0x40AE60,1, 0x4181FB,100,0,0x4181F0,1, 0x4371CB,100,0,0x436FA0,1, 0x40AEBB,110,0,0x40AE60,1, 0x4181FB,110,0,0x4181F0,1, 0x4371CB,110,0,0x436FA0,1, 0x40AEBB,120,0,0x40AE60,1, 0x4181FB,120,0,0x4181F0,1, 0x4371CB,120,0,0x436FA0,1>;
using def_t = bool(CWanted *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWanted *>, 0>;
META_END

META_BEGIN(CWanted::AreFbiRequired)
static int address;
static int global_address;
static const int id = 0x4ADBC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ADBC0, 0x4ADCB0, 0x4ADC40>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x40AF04,100,0,0x40AE60,1, 0x418241,100,0,0x4181F0,1, 0x4371AD,100,0,0x436FA0,1, 0x40AF04,110,0,0x40AE60,1, 0x418241,110,0,0x4181F0,1, 0x4371AD,110,0,0x436FA0,1, 0x40AF04,120,0,0x40AE60,1, 0x418241,120,0,0x4181F0,1, 0x4371AD,120,0,0x436FA0,1>;
using def_t = bool(CWanted *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWanted *>, 0>;
META_END

META_BEGIN(CWanted::AreArmyRequired)
static int address;
static int global_address;
static const int id = 0x4ADBE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ADBE0, 0x4ADCD0, 0x4ADC60>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x40AF48,100,0,0x40AE60,1, 0x41826D,100,0,0x4181F0,1, 0x43718F,100,0,0x436FA0,1, 0x40AF48,110,0,0x40AE60,1, 0x41826D,110,0,0x4181F0,1, 0x43718F,110,0,0x436FA0,1, 0x40AF48,120,0,0x40AE60,1, 0x41826D,120,0,0x4181F0,1, 0x43718F,120,0,0x436FA0,1>;
using def_t = bool(CWanted *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWanted *>, 0>;
META_END

META_BEGIN(CWanted::NumOfHelisRequired)
static int address;
static int global_address;
static const int id = 0x4ADC00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ADC00, 0x4ADCF0, 0x4ADC80>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x40AFA8,100,0,0x40AE60,1, 0x549A18,100,0,0x5499F0,1, 0x40AFA8,110,0,0x40AE60,1, 0x549C18,110,0,0x549BF0,1, 0x40AFA8,120,0,0x40AE60,1, 0x549BC8,120,0,0x549BA0,1>;
using def_t = int(CWanted *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWanted *>, 0>;
META_END

META_BEGIN(CWanted::ResetPolicePursuit)
static int address;
static int global_address;
static const int id = 0x4ADC40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ADC40, 0x4ADD30, 0x4ADCC0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4AD793,100,0,0x4AD790,1, 0x4AD883,110,0,0x4AD880,1, 0x4AD813,120,0,0x4AD810,1>;
using def_t = void(CWanted *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWanted *>, 0>;
META_END

META_BEGIN(CWanted::WorkOutPolicePresence)
static int address;
static int global_address;
static const int id = 0x4ADD00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ADD00, 0x4ADDF0, 0x4ADD80>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x476117,100,0,0x476070,1, 0x4AD7ED,100,0,0x4AD7B0,1, 0x476117,110,0,0x476070,1, 0x4AD8DD,110,0,0x4AD8A0,1, 0x476117,120,0,0x476070,1, 0x4AD86D,120,0,0x4AD830,1>;
using def_t = int(CVector, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<CVector,float>, 0,1>;
META_END

META_BEGIN(CWanted::ClearQdCrimes)
static int address;
static int global_address;
static const int id = 0x4ADF20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ADF20, 0x4AE010, 0x4ADFA0>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x40489B,100,0,0x404650,1, 0x4AD781,100,0,0x4AD6E0,1, 0x4ADA68,100,0,0x4ADA50,1, 0x40489B,110,0,0x404650,1, 0x4AD871,110,0,0x4AD7D0,1, 0x4ADB58,110,0,0x4ADB40,1, 0x40489B,120,0,0x404650,1, 0x4AD801,120,0,0x4AD760,1, 0x4ADAE8,120,0,0x4ADAD0,1>;
using def_t = void(CWanted *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWanted *>, 0>;
META_END

META_BEGIN(CWanted::AddCrimeToQ)
static int address;
static int global_address;
static const int id = 0x4ADFD0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4ADFD0, 0x4AE0C0, 0x4AE050>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4ADA06,100,0,0x4AD9F0,1, 0x4ADA2E,100,0,0x4ADA10,1, 0x4ADAF6,110,0,0x4ADAE0,1, 0x4ADB1E,110,0,0x4ADB00,1, 0x4ADA86,120,0,0x4ADA70,1, 0x4ADAAE,120,0,0x4ADA90,1>;
using def_t = bool(CWanted *, eCrimeType, int, CVector const &, bool, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWanted *,eCrimeType,int,CVector const &,bool,bool>, 0,1,2,3,4,5>;
META_END

META_BEGIN(CWanted::UpdateCrimesQ)
static int address;
static int global_address;
static const int id = 0x4AE090;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4AE090, 0x4AE180, 0x4AE110>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4AD81F,100,0,0x4AD7B0,1, 0x4AD90F,110,0,0x4AD8A0,1, 0x4AD89F,120,0,0x4AD830,1>;
using def_t = void(CWanted *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWanted *>, 0>;
META_END

META_BEGIN(CWanted::ReportCrimeNow)
static int address;
static int global_address;
static const int id = 0x4AE110;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4AE110, 0x4AE200, 0x4AE190>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4ADA3E,100,0,0x4ADA10,1, 0x4AE0CF,100,0,0x4AE090,1, 0x4ADB2E,110,0,0x4ADB00,1, 0x4AE1BF,110,0,0x4AE180,1, 0x4ADABE,120,0,0x4ADA90,1, 0x4AE14F,120,0,0x4AE110,1>;
using def_t = void(CWanted *, eCrimeType, CVector const &, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CWanted *,eCrimeType,CVector const &,bool>, 0,1,2,3>;
META_END

template<>
struct stack_object<CCrimeBeingQd> : stack_object_no_default<CCrimeBeingQd> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CCrimeBeingQd *>(ctor_gaddr(CCrimeBeingQd), reinterpret_cast<CCrimeBeingQd *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CCrimeBeingQd *operator_new<CCrimeBeingQd>() {
    void *objData = operator new(sizeof(CCrimeBeingQd)); 
    CCrimeBeingQd *obj = reinterpret_cast<CCrimeBeingQd *>(objData);
    plugin::CallMethodDynGlobal<CCrimeBeingQd *>(ctor_gaddr(CCrimeBeingQd), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CCrimeBeingQd *operator_new_array<CCrimeBeingQd>(unsigned int objCount) {
    void *objData = operator new(sizeof(CCrimeBeingQd) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CCrimeBeingQd *objArray = reinterpret_cast<CCrimeBeingQd *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CCrimeBeingQd *>(ctor_gaddr(CCrimeBeingQd), &objArray[i]);
    return objArray;
}

}
