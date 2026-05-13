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


class PLUGIN_API CTaskSimpleIKChain : public CTaskSimple {
protected:
    CTaskSimpleIKChain(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    int		m_time;
    int		m_blendTime;
    void* 	m_pIKChain;
    short		m_slotID;
    short 		m_pivotBoneTag;
    short 		m_effectorBoneTag;
private:
    char _pad[2];
public:
    RwV3d		m_effectorVec;
    CEntity*	m_pEntity;
    int		m_offsetBoneTag;
    RwV3d		m_offsetPos;
    float 		m_speed;
    bool		m_bEntityExist;
private:
    char _pad2[3];
public:
    // blending info
    float		m_blend;
    int		m_endTime;
    float		m_targetBlend;
    int		m_targetTime;
    int		m_isBlendingOut;

    CTaskSimpleIKChain(char* _IGNORED_ idString ,int effectorBoneTag,RwV3d effectorVec,int pivotBoneTag,
        CEntity* pEntity,int offsetBoneTag, RwV3d offsetPos,float speed,int time,int blendTime);
};
VALIDATE_OFFSET(CTaskSimpleIKChain, m_time, 0x8);
VALIDATE_OFFSET(CTaskSimpleIKChain, m_blendTime, 0xC);
VALIDATE_OFFSET(CTaskSimpleIKChain, m_pIKChain, 0x10);
VALIDATE_OFFSET(CTaskSimpleIKChain, m_slotID, 0x14);
VALIDATE_OFFSET(CTaskSimpleIKChain, m_pivotBoneTag, 0x16);
VALIDATE_OFFSET(CTaskSimpleIKChain, m_effectorBoneTag, 0x18);
VALIDATE_OFFSET(CTaskSimpleIKChain, m_effectorVec, 0x1C);
VALIDATE_OFFSET(CTaskSimpleIKChain, m_pEntity, 0x28);
VALIDATE_OFFSET(CTaskSimpleIKChain, m_offsetBoneTag, 0x2C);
VALIDATE_OFFSET(CTaskSimpleIKChain, m_offsetPos, 0x30);
VALIDATE_OFFSET(CTaskSimpleIKChain, m_speed, 0x3C);
VALIDATE_OFFSET(CTaskSimpleIKChain, m_bEntityExist, 0x40);
VALIDATE_OFFSET(CTaskSimpleIKChain, m_blend, 0x44);
VALIDATE_OFFSET(CTaskSimpleIKChain, m_endTime, 0x48);
VALIDATE_OFFSET(CTaskSimpleIKChain, m_targetBlend, 0x4C);
VALIDATE_OFFSET(CTaskSimpleIKChain, m_targetTime, 0x50);
VALIDATE_OFFSET(CTaskSimpleIKChain, m_isBlendingOut, 0x54);
VALIDATE_SIZE(CTaskSimpleIKChain, 0x58);
