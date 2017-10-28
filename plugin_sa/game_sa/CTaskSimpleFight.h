/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"
#include "CAnimBlendAssociation.h"
#include "CEntity.h"

#pragma pack(push,4)
class PLUGIN_API CTaskSimpleFight : public CTaskSimple {
protected:
    CTaskSimpleFight(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:

   CTaskSimpleFight(CEntity* pEntity, int arg2, unsigned int time);

   char field_8;
   char field_9;
   char field_A;
   int m_dwIfpIndex;
   short m_dwTime;
   short field_12;
   char field_14;
   char field_15;
   CEntity* m_pEntity;
   CAnimBlendAssociation *m_pAnimAssociation;
   int field_20;
   char comboType;
   char attackType;
   char _paramA3;
   char field_27;
    
};
#pragma pack(pop)

VALIDATE_SIZE(CTaskSimpleFight, 0x28);