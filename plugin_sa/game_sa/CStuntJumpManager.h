/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CPool.h"
#include "CBoundingBox.h"

enum class eJumpState : uint8_t {
    START_POINT_INTERSECTED,
    IN_FLIGHT,
    END_POINT_INTERSECTED,
};

struct CStuntJump {
    CBoundingBox start;
    CBoundingBox end;
    CVector      camera;
    int32_t      reward;
    bool         done;
    bool         found;
};

VALIDATE_SIZE(CStuntJump, 0x44);

typedef CPool<CStuntJump> CStuntJumpsPool;

class CStuntJumpManager {
public:
    static inline CStuntJumpsPool*& mp_poolStuntJumps = *(CStuntJumpsPool**)0xA9A888;
    static inline CStuntJump*& mp_Active = *(CStuntJump**)0xA9A88C; // nullptr
    static inline bool& m_bActive = *(bool*)0xA9A890;
    static inline bool& m_bHitReward = *(bool*)0xA9A891;
    static inline uint32_t& m_iTimer = *(uint32_t*)0xA9A894;
    static inline eJumpState& m_jumpState = *(eJumpState*)0xA9A898;
    static inline int32_t& m_iNumJumps = *(int32_t*)0xA9A89C;
    static inline uint32_t& m_iNumCompleted = *(uint32_t*)0xA9A8A0;

    static bool Save();
    static bool Load();
};