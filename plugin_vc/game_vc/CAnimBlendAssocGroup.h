/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CAnimBlendAssociation.h"
#include "RenderWare.h"
#include "CAnimBlock.h"

class CAnimBlendStaticAssociation;


class CAnimBlendAssocGroup
{
public:
    CAnimBlock *m_pAnimBlock;
    CAnimBlendStaticAssociation *m_pAssociations;
    unsigned int m_nNumAnimations;
    int m_nIdOffset;
    int m_nGroupID;
};
VALIDATE_OFFSET(CAnimBlendAssocGroup, m_pAnimBlock, 0x0);
VALIDATE_OFFSET(CAnimBlendAssocGroup, m_pAssociations, 0x4);
VALIDATE_OFFSET(CAnimBlendAssocGroup, m_nNumAnimations, 0x8);
VALIDATE_OFFSET(CAnimBlendAssocGroup, m_nIdOffset, 0xC);
VALIDATE_OFFSET(CAnimBlendAssocGroup, m_nGroupID, 0x10);
VALIDATE_SIZE(CAnimBlendAssocGroup, 0x14);
