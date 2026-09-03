/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CNodeAddress {
public:
    UInt16 Region;
    UInt16 Index;

    inline CNodeAddress() {
        Clear();
    }

    inline CNodeAddress(short areaId, short nodeId) {
        Set(areaId, nodeId);
    }

    inline void Set(short areaId, short nodeId) {
        Region = areaId;
        Index = nodeId;
    }

    inline bool IsEmpty() const {
        return Region == -1 || Index == -1;
    }

    inline void Clear() {
        Region = -1;
        Index = -1;
    }

    inline bool operator==(CNodeAddress const &rhs) const {
        return Region == rhs.Region && Index == rhs.Index;
    }

    inline bool operator!=(CNodeAddress const &rhs) const {
        return Region != rhs.Region || Index != rhs.Index;
    }
};

VALIDATE_OFFSET(CNodeAddress, Region, 0x0);
VALIDATE_OFFSET(CNodeAddress, Index, 0x2);
VALIDATE_SIZE(CNodeAddress, 0x4);
