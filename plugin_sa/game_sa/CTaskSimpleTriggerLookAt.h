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


class PLUGIN_API CTaskSimpleTriggerLookAt : public CTaskSimple {
protected:
    CTaskSimpleTriggerLookAt(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    CEntity*	m_pEntity;
    int		m_time;
    int		m_offsetBoneTag;
    RwV3d		m_offsetPos;
    bool m_bUseTorso;
private:
    char _pad[3];
public:
    float m_fSpeed;
    int m_BlendTime;
    bool m_bEntityExist;
    char m_priority;
private:
    char _pad2[2];
public:

    CTaskSimpleTriggerLookAt(CEntity* pEntity, int time, int offsetBoneTag, RwV3d offsetPos,
        bool bUseTorso = true, float speed = 0.25f, int blendTime = 1000, int priority = 3);
};
VALIDATE_OFFSET(CTaskSimpleTriggerLookAt, m_pEntity, 0x8);
VALIDATE_OFFSET(CTaskSimpleTriggerLookAt, m_time, 0xC);
VALIDATE_OFFSET(CTaskSimpleTriggerLookAt, m_offsetBoneTag, 0x10);
VALIDATE_OFFSET(CTaskSimpleTriggerLookAt, m_offsetPos, 0x14);
VALIDATE_OFFSET(CTaskSimpleTriggerLookAt, m_bUseTorso, 0x20);
VALIDATE_OFFSET(CTaskSimpleTriggerLookAt, m_fSpeed, 0x24);
VALIDATE_OFFSET(CTaskSimpleTriggerLookAt, m_BlendTime, 0x28);
VALIDATE_OFFSET(CTaskSimpleTriggerLookAt, m_bEntityExist, 0x2C);
VALIDATE_OFFSET(CTaskSimpleTriggerLookAt, m_priority, 0x2D);
VALIDATE_SIZE(CTaskSimpleTriggerLookAt, 0x30);
