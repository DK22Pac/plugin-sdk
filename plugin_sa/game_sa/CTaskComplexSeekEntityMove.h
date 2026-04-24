/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CTaskComplex.h"
#include "CTaskTimer.h"
#include "eMoveState.h"

class CEntity;

class PLUGIN_API CTaskComplexSeekEntityMove : public CTaskComplex {
protected:
    CTaskComplexSeekEntityMove(plugin::dummy_func_t a) : CTaskComplex(a) {}

public:
    CEntity* m_entity;
    uint32_t m_time;
    uint32_t m_scanInterval;
    float m_maxEntityDist2D;
    float m_moveStateRadius;
    float m_minEntityDist2D;
    float m_followNodeThresholdHeightChange;
    CTaskTimer m_scanTimer;
    CTaskTimer m_timer;

    // position calculator
    void* posCalculatorVTable; // TODO: add posCalculator classes

    eMoveState m_moveState;
    bool m_playTiredAnim : 1;
    bool m_faceEntityWhenDone : 1;
    bool m_achievedSeekEntity : 1; // distance lesser than m_maxEntityDist2D
    bool m_trackingEntity : 1;

    CTaskComplexSeekEntityMove(
        CEntity* entity, // target entity
        uint32_t time, // task timeout
        uint32_t scanInterval, // target position refresh period
        float maxEntityDist2D, // goal distance
        float moveStateRadius, // switch from run to walk
        float followNodeThresholdHeightChange,
        bool playTiredAnim, // if timeouted play tired animation
        bool faceEntityWhenDone);
};

VALIDATE_OFFSET(CTaskComplexSeekEntityMove, m_entity, 0xC);
VALIDATE_OFFSET(CTaskComplexSeekEntityMove, m_time, 0x10);
VALIDATE_OFFSET(CTaskComplexSeekEntityMove, m_scanInterval, 0x14);
VALIDATE_OFFSET(CTaskComplexSeekEntityMove, m_maxEntityDist2D, 0x18);
VALIDATE_OFFSET(CTaskComplexSeekEntityMove, m_moveStateRadius, 0x1C);
VALIDATE_OFFSET(CTaskComplexSeekEntityMove, m_minEntityDist2D, 0x20);
VALIDATE_OFFSET(CTaskComplexSeekEntityMove, m_followNodeThresholdHeightChange, 0x24);
VALIDATE_OFFSET(CTaskComplexSeekEntityMove, m_scanTimer, 0x28);
VALIDATE_OFFSET(CTaskComplexSeekEntityMove, m_timer, 0x34);
VALIDATE_OFFSET(CTaskComplexSeekEntityMove, posCalculatorVTable, 0x40);
VALIDATE_OFFSET(CTaskComplexSeekEntityMove, m_moveState, 0x44);
VALIDATE_SIZE(CTaskComplexSeekEntityMove, 0x4C);
