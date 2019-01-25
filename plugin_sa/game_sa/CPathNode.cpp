/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPathNode.h"

PLUGIN_SOURCE_FILE

int addrof(CPathNode::GetNodeCoors) = ADDRESS_BY_VERSION(0x420A10, 0, 0, 0, 0, 0);
int gaddrof(CPathNode::GetNodeCoors) = GLOBAL_ADDRESS_BY_VERSION(0x420A10, 0, 0, 0, 0, 0);

CVector CPathNode::GetNodeCoors() {
    CVector ret_posn;
    plugin::CallMethodDynGlobal<CPathNode *, CVector *>(gaddrof(CPathNode::GetNodeCoors), this, &ret_posn);
    return ret_posn;
}
