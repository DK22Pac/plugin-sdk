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
#include "CVector2D.h"

enum eDuckControlTypes : unsigned char
{
    DUCK_STANDALONE = 0,	// duck anim removed when task removed
    DUCK_STANDALONE_WEAPON_CROUCH,// duck anim removed when task removed
    DUCK_TASK_CONTROLLED,	// duck directly linked to a controlling task
    DUCK_ANIM_CONTROLLED,	// duck linked to duck anim (make duck partial?)
    DUCK_SCRIPT_CONTROLLED,
};

class PLUGIN_API CTaskSimpleDuck : public CTaskSimple {
protected:
    CTaskSimpleDuck(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    unsigned int m_nStartTime;
    unsigned short m_nLengthOfDuck;
    short m_nShotWhizzingCounter;
    CAnimBlendAssociation *m_pDuckAnim; 
    CAnimBlendAssociation *m_pMoveAnim;

    bool m_bIsFinished;
    bool m_bIsAborting;
    bool m_bNeedToSetDuckFlag; // incase bIsDucking flag gets cleared elsewhere, so we know to stop duck task
    bool m_bIsInControl;	// if duck task is being controlled by another task then it requires continuous control

    CVector2D m_vecMoveCommand;
    unsigned char m_nDuckControlType;

    unsigned char m_nCountDownFrames;

    CTaskSimpleDuck(eDuckControlTypes DuckControlType, unsigned short nLengthOfDuck, short nUseShotsWhizzingEvents = -1);
    
};
VALIDATE_OFFSET(CTaskSimpleDuck, m_nStartTime, 0x8);
VALIDATE_OFFSET(CTaskSimpleDuck, m_nLengthOfDuck, 0xC);
VALIDATE_OFFSET(CTaskSimpleDuck, m_nShotWhizzingCounter, 0xE);
VALIDATE_OFFSET(CTaskSimpleDuck, m_pDuckAnim, 0x10);
VALIDATE_OFFSET(CTaskSimpleDuck, m_pMoveAnim, 0x14);
VALIDATE_OFFSET(CTaskSimpleDuck, m_bIsFinished, 0x18);
VALIDATE_OFFSET(CTaskSimpleDuck, m_bIsAborting, 0x19);
VALIDATE_OFFSET(CTaskSimpleDuck, m_bNeedToSetDuckFlag, 0x1A);
VALIDATE_OFFSET(CTaskSimpleDuck, m_bIsInControl, 0x1B);
VALIDATE_OFFSET(CTaskSimpleDuck, m_vecMoveCommand, 0x1C);
VALIDATE_OFFSET(CTaskSimpleDuck, m_nDuckControlType, 0x24);
VALIDATE_OFFSET(CTaskSimpleDuck, m_nCountDownFrames, 0x25);
VALIDATE_SIZE(CTaskSimpleDuck, 0x28);
