/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPathFind.h"

CPathFind &ThePaths = **(CPathFind **)(0x40CA27);

void CPathFind::DoPathSearch(unsigned char pathType, CVector origin, CNodeAddress originAddr, 
		CVector target, CNodeAddress *pResultNodes, short *pNodesCount, int maxNodesToFind, float *pDistance, 
		float maxSearchDistance, CNodeAddress *targetAddr, float maxUnkLimit, bool oneSideOnly, 
		CNodeAddress forbiddenNodeAddr, bool includeNodesWithoutLinks, bool waterPath)
{
	((void (__thiscall *)(CPathFind *, unsigned char, CVector, CNodeAddress, CVector, CNodeAddress *,
		short *, int, float *, float, CNodeAddress *, float, bool, CNodeAddress, bool, bool))0x4515D0)(
		this, pathType, origin, originAddr, target, pResultNodes, pNodesCount, maxNodesToFind, pDistance, 
		maxSearchDistance, targetAddr, maxUnkLimit, oneSideOnly, forbiddenNodeAddr, includeNodesWithoutLinks, 
		waterPath);
}

bool CPathFind::IsWaterNodeNearby(CVector position, float radius) {
	return plugin::CallMethodAndReturn<bool, 0x450DE0, CPathFind*, CVector, float>(this, position, radius);
}

void CPathFind::SetPathsNeededAtPosition(const CVector& pos) {
	plugin::CallMethod<0x44DCD0, CPathFind*, const CVector&>(this, pos);
}

void CPathFind::UpdateStreaming(bool bForceStreaming) {
	plugin::CallMethod<0x450A60, CPathFind*, bool>(this, bForceStreaming);
}

CPathNode *CPathFind::GetPathNode(CNodeAddress address)
{
	return ((CPathNode *(__thiscall *)(CPathFind *, CNodeAddress))0x420AC0)(this, address);
}