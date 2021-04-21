/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPedPath.h"

PLUGIN_SOURCE_FILE

int addrof(CPedPath::AddBlockade) = ADDRESS_BY_VERSION(0x42F1A0, 0x42F1A0, 0x42F1A0);
int gaddrof(CPedPath::AddBlockade) = GLOBAL_ADDRESS_BY_VERSION(0x42F1A0, 0x42F1A0, 0x42F1A0);

void CPedPath::AddBlockade(CEntity *entity, CPedPathNode(*pathNodes)[40], CVector *posn) {
    plugin::CallDynGlobal<CEntity *, CPedPathNode(*)[40], CVector *>(gaddrof(CPedPath::AddBlockade), entity, pathNodes, posn);
}

int addrof(CPedPath::AddBlockadeSectorList) = ADDRESS_BY_VERSION(0x42F420, 0x42F420, 0x42F420);
int gaddrof(CPedPath::AddBlockadeSectorList) = GLOBAL_ADDRESS_BY_VERSION(0x42F420, 0x42F420, 0x42F420);

void CPedPath::AddBlockadeSectorList(CPtrList *list, CPedPathNode(*pathNodes)[40], CVector *posn) {
    plugin::CallDynGlobal<CPtrList *, CPedPathNode(*)[40], CVector *>(gaddrof(CPedPath::AddBlockadeSectorList), list, pathNodes, posn);
}

int addrof(CPedPath::AddNodeToList) = ADDRESS_BY_VERSION(0x42F160, 0x42F160, 0x42F160);
int gaddrof(CPedPath::AddNodeToList) = GLOBAL_ADDRESS_BY_VERSION(0x42F160, 0x42F160, 0x42F160);

void CPedPath::AddNodeToList(CPedPathNode *pNode, short index, CPedPathNode *pList) {
    plugin::CallDynGlobal<CPedPathNode *, short, CPedPathNode *>(gaddrof(CPedPath::AddNodeToList), pNode, index, pList);
}

int addrof(CPedPath::AddNodeToPathList) = ADDRESS_BY_VERSION(0x42F100, 0x42F100, 0x42F100);
int gaddrof(CPedPath::AddNodeToPathList) = GLOBAL_ADDRESS_BY_VERSION(0x42F100, 0x42F100, 0x42F100);

void CPedPath::AddNodeToPathList(CPedPathNode *pNode, short index, CPedPathNode *pNodeList) {
    plugin::CallDynGlobal<CPedPathNode *, short, CPedPathNode *>(gaddrof(CPedPath::AddNodeToPathList), pNode, index, pNodeList);
}

int addrof(CPedPath::CalcPedRoute) = ADDRESS_BY_VERSION(0x42E680, 0x42E680, 0x42E680);
int gaddrof(CPedPath::CalcPedRoute) = GLOBAL_ADDRESS_BY_VERSION(0x42E680, 0x42E680, 0x42E680);

bool CPedPath::CalcPedRoute(unsigned char pathType, CVector position, CVector destination, CVector *pointPoses, short *pointsFound, short maxPoints) {
    return plugin::CallAndReturnDynGlobal<bool, unsigned char, CVector, CVector, CVector *, short *, short>(gaddrof(CPedPath::CalcPedRoute), pathType, position, destination, pointPoses, pointsFound, maxPoints);
}

int addrof(CPedPath::RemoveNodeFromList) = ADDRESS_BY_VERSION(0x42F140, 0x42F140, 0x42F140);
int gaddrof(CPedPath::RemoveNodeFromList) = GLOBAL_ADDRESS_BY_VERSION(0x42F140, 0x42F140, 0x42F140);

void CPedPath::RemoveNodeFromList(CPedPathNode *node) {
    plugin::CallDynGlobal<CPedPathNode *>(gaddrof(CPedPath::RemoveNodeFromList), node);
}
