/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CCarGenerator::SwitchOff)
static int address;
static int global_address;
static const int id = 0x542690;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x542690, 0x5428D0, 0x542880>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x43F0FC,100,0,0x43ED30,1, 0x43F0FC,110,0,0x43ED30,1, 0x43F0FC,120,0,0x43ED30,1>;
using def_t = void(CCarGenerator *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCarGenerator *>, 0>;
META_END

META_BEGIN(CCarGenerator::SwitchOn)
static int address;
static int global_address;
static const int id = 0x5426A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5426A0, 0x5428E0, 0x542890>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x43F10A,100,0,0x43ED30,1, 0x43F113,100,0,0x43ED30,2, 0x43F10A,110,0,0x43ED30,1, 0x43F113,110,0,0x43ED30,2, 0x43F10A,120,0,0x43ED30,1, 0x43F113,120,0,0x43ED30,2>;
using def_t = void(CCarGenerator *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCarGenerator *>, 0>;
META_END

META_BEGIN(CCarGenerator::CalcNextGen)
static int address;
static int global_address;
static const int id = 0x5426C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5426C0, 0x542900, 0x5428B0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x5426A8,100,0,0x5426A0,1, 0x542B93,100,0,0x5426E0,1, 0x5428E8,110,0,0x5428E0,1, 0x542DD3,110,0,0x542920,1, 0x542898,120,0,0x542890,1, 0x542D83,120,0,0x5428D0,1>;
using def_t = unsigned int(CCarGenerator *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCarGenerator *>, 0>;
META_END

META_BEGIN(CCarGenerator::DoInternalProcessing)
static int address;
static int global_address;
static const int id = 0x5426E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x5426E0, 0x542920, 0x5428D0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x542BE3,100,0,0x542BB0,1, 0x542E23,110,0,0x542DF0,1, 0x542DD3,120,0,0x542DA0,1>;
using def_t = void(CCarGenerator *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCarGenerator *>, 0>;
META_END

META_BEGIN(CCarGenerator::Process)
static int address;
static int global_address;
static const int id = 0x542BB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x542BB0, 0x542DF0, 0x542DA0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x542F89,100,0,0x542F40,1, 0x5431C9,110,0,0x543180,1, 0x543179,120,0,0x543130,1>;
using def_t = void(CCarGenerator *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCarGenerator *>, 0>;
META_END

META_BEGIN(CCarGenerator::Setup)
static int address;
static int global_address;
static const int id = 0x542C40;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x542C40, 0x542E80, 0x542E30>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x543007,100,0,0x542FC0,1, 0x543247,110,0,0x543200,1, 0x5431F7,120,0,0x5431B0,1>;
using def_t = void(CCarGenerator *, float, float, float, float, int, short, short, unsigned char, unsigned char, unsigned char, unsigned short, unsigned short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCarGenerator *,float,float,float,float,int,short,short,unsigned char,unsigned char,unsigned char,unsigned short,unsigned short>, 0,1,2,3,4,5,6,7,8,9,10,11,12>;
META_END

META_BEGIN(CCarGenerator::CheckForBlockage)
static int address;
static int global_address;
static const int id = 0x542DF0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x542DF0, 0x543030, 0x542FE0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x5426E9,100,0,0x5426E0,1, 0x542929,110,0,0x542920,1, 0x5428D9,120,0,0x5428D0,1>;
using def_t = bool(CCarGenerator *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCarGenerator *>, 0>;
META_END

META_BEGIN(CCarGenerator::CheckIfWithinRangeOfAnyPlayers)
static int address;
static int global_address;
static const int id = 0x542E50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x542E50, 0x543090, 0x543040>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x542BD8,100,0,0x542BB0,1, 0x542E18,110,0,0x542DF0,1, 0x542DC8,120,0,0x542DA0,1>;
using def_t = bool(CCarGenerator *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCarGenerator *>, 0>;
META_END

CTOR_META_BEGIN(CCarGenerator)
static int address;
static int global_address;
static const int id = 0x543350;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x543350, 0x543590, 0x543540>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x54333A,100,2,0,1, 0x54357A,110,2,0,1, 0x54352A,120,2,0,1>;
using def_t = CCarGenerator *(CCarGenerator *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCarGenerator *>, 0>;
META_END

template<>
struct stack_object<CCarGenerator> : stack_object_no_default<CCarGenerator> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CCarGenerator *>(ctor_gaddr(CCarGenerator), reinterpret_cast<CCarGenerator *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CCarGenerator *operator_new<CCarGenerator>() {
    void *objData = operator new(sizeof(CCarGenerator)); 
    CCarGenerator *obj = reinterpret_cast<CCarGenerator *>(objData);
    plugin::CallMethodDynGlobal<CCarGenerator *>(ctor_gaddr(CCarGenerator), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CCarGenerator *operator_new_array<CCarGenerator>(unsigned int objCount) {
    void *objData = operator new(sizeof(CCarGenerator) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CCarGenerator *objArray = reinterpret_cast<CCarGenerator *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CCarGenerator *>(ctor_gaddr(CCarGenerator), &objArray[i]);
    return objArray;
}

}
