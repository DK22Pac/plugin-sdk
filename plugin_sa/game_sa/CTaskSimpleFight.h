/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskSimple.h"
#include "CAnimBlendAssociation.h"
#include "CEntity.h"


class PLUGIN_API CTaskSimpleFight : public CTaskSimple {
protected:
    CTaskSimpleFight(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:

   bool m_bIsFinished;
   bool m_bIsInControl;

   bool m_bAnimsReferenced;
private:
    char _pad;
public:
   unsigned int m_nRequiredAnimGroup;

   unsigned short m_nIdlePeriod;
   unsigned short m_nIdleCounter;
   char m_nContinueStrike;
   char m_nChainCounter;
private:
    char _pad2[2];
public:

   CEntity *m_pTargetEntity;
   CAnimBlendAssociation *m_pAnim;
   CAnimBlendAssociation *m_pIdleAnim;

   char m_nComboSet;
   char m_nCurrentMove;
   unsigned char m_nNextCommand;
   unsigned char m_nLastCommand;
    
   CTaskSimpleFight(CEntity *pTargetEntity, int nCommand, unsigned int nIdlePeriod = 10000);
};
VALIDATE_OFFSET(CTaskSimpleFight, m_bIsFinished, 0x8);
VALIDATE_OFFSET(CTaskSimpleFight, m_bIsInControl, 0x9);
VALIDATE_OFFSET(CTaskSimpleFight, m_bAnimsReferenced, 0xA);
VALIDATE_OFFSET(CTaskSimpleFight, m_nRequiredAnimGroup, 0xC);
VALIDATE_OFFSET(CTaskSimpleFight, m_nIdlePeriod, 0x10);
VALIDATE_OFFSET(CTaskSimpleFight, m_nIdleCounter, 0x12);
VALIDATE_OFFSET(CTaskSimpleFight, m_nContinueStrike, 0x14);
VALIDATE_OFFSET(CTaskSimpleFight, m_nChainCounter, 0x15);
VALIDATE_OFFSET(CTaskSimpleFight, m_pTargetEntity, 0x18);
VALIDATE_OFFSET(CTaskSimpleFight, m_pAnim, 0x1C);
VALIDATE_OFFSET(CTaskSimpleFight, m_pIdleAnim, 0x20);
VALIDATE_OFFSET(CTaskSimpleFight, m_nComboSet, 0x24);
VALIDATE_OFFSET(CTaskSimpleFight, m_nCurrentMove, 0x25);
VALIDATE_OFFSET(CTaskSimpleFight, m_nNextCommand, 0x26);
VALIDATE_OFFSET(CTaskSimpleFight, m_nLastCommand, 0x27);
VALIDATE_SIZE(CTaskSimpleFight, 0x28);
