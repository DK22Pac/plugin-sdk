/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "eTaskType.h"

struct DecisionContext
{
    bool onFoot = false;
    bool inVehicle = false;

    DecisionContext() = default;
    DecisionContext(bool onFoot, bool inVehicle) : 
        onFoot(onFoot), inVehicle(inVehicle)
    {}
};
VALIDATE_SIZE(DecisionContext, 0x2);

struct DecisionChances
{
    // weights that sums up to total value of all responses applicable to current event,
    // then chance is weight/total
    unsigned char toNeutral = 0;
    unsigned char toPlayer = 0;
    unsigned char toFriend = 0;
    unsigned char toEnemy = 0;

    DecisionChances() = default;
    DecisionChances(unsigned char toNeutral, unsigned char toPlayer, unsigned char toFriend, unsigned char toEnemy) :
        toNeutral(toNeutral), toPlayer(toPlayer), toFriend(toFriend), toEnemy(toEnemy)
    {}
};
VALIDATE_SIZE(DecisionChances, 0x4);

class PLUGIN_API CDecision {
public:
    constexpr static auto RESPONSE_COUNT = 6; // max count of unique responses

    eTaskType task[RESPONSE_COUNT]; // response's task
    DecisionChances chances[RESPONSE_COUNT]; // response's chances for each relationship type
    DecisionContext context[RESPONSE_COUNT]; // situations the response applies to

    CDecision();
};
VALIDATE_SIZE(CDecision, 0x3C);
