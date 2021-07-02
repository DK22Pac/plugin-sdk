/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CMoneyMessage::Render)
static int address;
static int global_address;
static const int id = 0x51AD90;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51AD90, 0x51AFC0, 0x51AF50>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51B04B,100,0,0x51B030,1, 0x51B27B,110,0,0x51B260,1, 0x51B20B,120,0,0x51B1F0,1>;
using def_t = void(CMoneyMessage *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CMoneyMessage *>, 0>;
META_END

CTOR_META_BEGIN(CMoneyMessage)
static int address;
static int global_address;
static const int id = 0x51C2E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x51C2E0, 0x51C510, 0x51C4A0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x51C2C6,100,2,0,1, 0x51C4F6,110,2,0,1, 0x51C486,120,2,0,1>;
using def_t = CMoneyMessage *(CMoneyMessage *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CMoneyMessage *>, 0>;
META_END

template<>
struct stack_object<CMoneyMessage> : stack_object_no_default<CMoneyMessage> {
    SUPPORTED_10EN_11EN_STEAM stack_object() {
        plugin::CallMethodDynGlobal<CMoneyMessage *>(ctor_gaddr(CMoneyMessage), reinterpret_cast<CMoneyMessage *>(objBuff));
    }
};

template <>
SUPPORTED_10EN_11EN_STEAM inline CMoneyMessage *operator_new<CMoneyMessage>() {
    void *objData = operator new(sizeof(CMoneyMessage)); 
    CMoneyMessage *obj = reinterpret_cast<CMoneyMessage *>(objData);
    plugin::CallMethodDynGlobal<CMoneyMessage *>(ctor_gaddr(CMoneyMessage), obj);
    return obj;
}
template <>
SUPPORTED_10EN_11EN_STEAM inline CMoneyMessage *operator_new_array<CMoneyMessage>(unsigned int objCount) {
    void *objData = operator new(sizeof(CMoneyMessage) * objCount + 4); 
    *reinterpret_cast<unsigned int *>(objData) = objCount;
    CMoneyMessage *objArray = reinterpret_cast<CMoneyMessage *>(reinterpret_cast<unsigned int>(objData) + 4);
    for (unsigned int i = 0; i < objCount; i++)
        plugin::CallMethodDynGlobal<CMoneyMessage *>(ctor_gaddr(CMoneyMessage), &objArray[i]);
    return objArray;
}

}
