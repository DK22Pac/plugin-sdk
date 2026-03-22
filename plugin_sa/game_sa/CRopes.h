/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CRope.h"

class PLUGIN_API CRopes
{
public:
    static int& ms_bPlayerControlsCrane;

    static constexpr auto MAX_NUM_ROPES = 8;
    static unsigned int& m_nRopeIdCreationCounter;
    static CRope (&ms_aRopes)[MAX_NUM_ROPES];

    static void Init();
    static void Shutdown();
    static void Update();
    static void Render();

    static bool RegisterRope(unsigned int ropeId, unsigned int ropeType, CVector startPos, bool expires, unsigned char segmentCount, unsigned char flags, CEntity* holder, unsigned int timeExpire); // call in loop to make attached to holder

    static float FindPickupHeight(CEntity* entity); // get model's center-to-top offset
    static unsigned int FindRope(unsigned int ropeId); // returns index in the array, -1 if not found
    static bool FindCoorsAlongRope(unsigned int ropeId, float dist, CVector* outPosn, CVector* outSpeed); // dist range is 0.0 to 1.0

    static unsigned int CreateRopeForSwatPed(const CVector& startPos); // returns ropeId, -1 if failed
    static bool IsCarriedByRope(CEntity* entity);
    static void SetSpeedOfTopNode(unsigned int ropeId, CVector dirSpeed);
};
