/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CColStore.h"

CVector& CColStore::ms_vecCollisionNeeded = *(CVector*)0x965580;
bool& CColStore::ms_bCollisionNeeded = *(bool*)0x965558;
int CColStore::ms_nRequiredCollisionArea = *(int*)0x965554;

CColPool*& CColStore::ms_pColPool = *(CColPool**)0x965560;
CQuadTreeNode*& CColStore::ms_pQuadTree = *(CQuadTreeNode**)0x96555C;

