/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CompressedVector.h"
#include "CVector.h"
#include "CNodeAddress.h"

class PLUGIN_API CPathNode {
public:
    enum {
        SPECIAL_NONE = 0x0,
        SPECIAL_PARKING_PARALLEL = 0x1,
        SPECIAL_PARKING_PERPENDICULAR = 0x2,
        SPECIAL_VALET = 0x3,
        SPECIAL_NIGHTCLUB = 0x4,
        SPECIAL_DELIVERIES = 0x5,
        SPECIAL_VALET_UNLOAD = 0x6,
        SPECIAL_NIGHTCLUB_UNLOAD = 0x7,
        SPECIAL_DRIVE_THROUGH = 0x8,
        SPECIAL_DRIVE_THROUGH_WINDOW = 0x9,
        SPECIAL_DELIVERIES_UNLOAD = 0xA,
    };

    CPathNode* pNext;
    CPathNode* pPrevious;
    Int16 CoorsX;
    Int16 CoorsY;
    Int16 CoorsZ;
    Int16 DistanceToTarget;
    Int16 IndexAdjacentNodes;
    CNodeAddress Address;
    UInt8 Width;
    UInt8 Group;

    UInt8 NumberAdjNodes : 4;
    UInt8 OnDeadEnd : 1;
    UInt8 SwitchedOff : 1;
    UInt8 RoadBlock : 1;
    UInt8 WaterNode : 1;
    UInt8 SwitchedOffOriginal : 1;
    UInt8 AlreadyFound : 1;
    UInt8 DontWanderHere : 1;
    UInt8 InteriorNode : 1;
    UInt8 Speed : 2;
    UInt8 Dummy : 2;
    UInt8 Density : 4;
    UInt8 SpecialFunction : 4;

public:
    SUPPORTED_10US CVector GetNodeCoors();
};

VALIDATE_OFFSET(CPathNode, pNext, 0x0);
VALIDATE_OFFSET(CPathNode, pPrevious, 0x4);
VALIDATE_OFFSET(CPathNode, CoorsX, 0x8);
VALIDATE_OFFSET(CPathNode, DistanceToTarget, 0xE);
VALIDATE_OFFSET(CPathNode, IndexAdjacentNodes, 0x10);
VALIDATE_OFFSET(CPathNode, Address, 0x12);
VALIDATE_OFFSET(CPathNode, Width, 0x16);
VALIDATE_OFFSET(CPathNode, Group, 0x17);
VALIDATE_SIZE(CPathNode, 0x1C);

#include "meta/meta.CPathNode.h"
