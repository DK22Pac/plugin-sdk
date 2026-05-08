/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskComplex.h"
#include "CNodeAddress.h"

enum eWanderType
{
    WANDER_TYPE_STANDARD = 0,
    WANDER_TYPE_COP,
    WANDER_TYPE_MEDIC,
    WANDER_TYPE_CRIMINAL,
    WANDER_TYPE_GANG,
    WANDER_TYPE_SHOP,
    WANDER_TYPE_FLEE,
    WANDER_TYPE_PROSTITUTE
};

class PLUGIN_API CTaskComplexWander : public CTaskComplex {
protected:
    CTaskComplexWander(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    int m_nMoveState; // see eMoveState
    unsigned char m_nDir;
private:
    char _pad[3];
public:
    float m_fTargetRadius;

    CNodeAddress m_LastNode;
    CNodeAddress m_NextNode;

    int m_nLastUpdateDirFrameCount;

    union
    {
        unsigned char m_nFlags;
        struct {
            unsigned char m_bWanderSensibly : 1;
            unsigned char m_bNewDir : 1;
            unsigned char m_bNewNodes : 1;
            unsigned char m_bAllNodesBlocked : 1;
        };
    };

    CTaskComplexWander(int MoveState, unsigned char Dir, bool bWanderSensibly, float TargetRadius = 0.5f);
    
};
VALIDATE_OFFSET(CTaskComplexWander, m_nMoveState, 0xC);
VALIDATE_OFFSET(CTaskComplexWander, m_nDir, 0x10);
VALIDATE_OFFSET(CTaskComplexWander, m_fTargetRadius, 0x14);
VALIDATE_OFFSET(CTaskComplexWander, m_LastNode, 0x18);
VALIDATE_OFFSET(CTaskComplexWander, m_NextNode, 0x1C);
VALIDATE_OFFSET(CTaskComplexWander, m_nLastUpdateDirFrameCount, 0x20);
VALIDATE_OFFSET(CTaskComplexWander, m_nFlags, 0x24);
VALIDATE_SIZE(CTaskComplexWander, 0x28);
