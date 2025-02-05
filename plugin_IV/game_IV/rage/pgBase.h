/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "datBase.h"
#include "pgPtr.h"
#include "BlockMap.h"

namespace rage {
    class pgBase : datBase {
    public:
        pgPtr<BlockMap> blockMap;
    };

    VALIDATE_SIZE(pgBase, 0x8);
}
