/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CTaskSimple.h"
#include "CPed.h"
#include "CAnimBlendAssociation.h"

class CTaskSimpleStealthKill : public CTaskSimple
{
protected:
    CTaskSimpleStealthKill(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    bool m_bKeepTargetAlive;
private:
    char _pad[3];
public:
    CPed *m_pTarget;
    int m_nAssocGroupId;
    bool b_bIsAborting;
    bool b_bIsFinished;
private:
    char _pad2[2];
public:
    CAnimBlendAssociation *m_pAnim;
    unsigned int m_nTime;

    CTaskSimpleStealthKill(bool bKeepTargetAlive,CPed *pTarget,int nAssocGroupId);
};
VALIDATE_OFFSET(CTaskSimpleStealthKill, m_bKeepTargetAlive, 0x8);
VALIDATE_OFFSET(CTaskSimpleStealthKill, m_pTarget, 0xC);
VALIDATE_OFFSET(CTaskSimpleStealthKill, m_nAssocGroupId, 0x10);
VALIDATE_OFFSET(CTaskSimpleStealthKill, b_bIsAborting, 0x14);
VALIDATE_OFFSET(CTaskSimpleStealthKill, b_bIsFinished, 0x15);
VALIDATE_OFFSET(CTaskSimpleStealthKill, m_pAnim, 0x18);
VALIDATE_OFFSET(CTaskSimpleStealthKill, m_nTime, 0x1C);
VALIDATE_SIZE(CTaskSimpleStealthKill, 0x20);

