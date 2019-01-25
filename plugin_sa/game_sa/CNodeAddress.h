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
    short m_nAreaId;
    short m_nNodeId;

    inline CNodeAddress() {
        Clear();
    }

    inline CNodeAddress(short areaId, short nodeId) {
        Set(areaId, nodeId);
    }

    inline void Set(short areaId, short nodeId) {
        m_nAreaId = areaId;
        m_nNodeId = nodeId;
    }

    inline bool IsEmpty() const {
        return m_nAreaId == -1 || m_nNodeId == -1;
    }

    inline void Clear() {
        m_nAreaId = -1;
        m_nNodeId = -1;
    }

    inline bool operator==(CNodeAddress const &rhs) const {
        return m_nAreaId == rhs.m_nAreaId && m_nNodeId == rhs.m_nNodeId;
    }

    inline bool operator!=(CNodeAddress const &rhs) const {
        return m_nAreaId != rhs.m_nAreaId || m_nNodeId != rhs.m_nNodeId;
    }
};

VALIDATE_SIZE(CNodeAddress, 0x4);
