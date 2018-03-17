/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CPathNode.h"
#include "CVector.h"
#include "CMatrix.h"

class PLUGIN_API CNodeAddress
{
public:
    short m_wAreaId;
    short m_wNodeId;

    CNodeAddress() : m_wAreaId(-1), m_wNodeId(-1) {}
};

VALIDATE_SIZE(CNodeAddress, 0x4);

class PLUGIN_API CCarPathLinkAddress
{
public:
    short m_wCarPathLinkId : 10;
    short m_wAreaId : 6;
};

VALIDATE_SIZE(CCarPathLinkAddress, 0x2);



class CPathFind {
public:
	CPathNode nodes[9650];
	
    bool GeneratePedCreationCoors(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, CVector* ar7, int* arg8, int* arg9, float* arg10, CMatrix* arg11);
    bool GenerateCarCreationCoors(float arg1, float arg2, float arg3, float arg4, float arg5, float arg6, bool arg7, CVector* arg8, int* arg9, int* arg10, float* arg11, bool arg12);
	int FindNodeClosestToCoors(CVector arg1, unsigned char arg2, float arg3, bool arg4, bool arg5, bool arg6, bool arg7);

};

VALIDATE_SIZE(CPathFind, 0x2F1E8);

extern CPathFind &ThePaths;


