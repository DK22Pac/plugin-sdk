/*
    Plugin-SDK (Grand Theft Auto 3) header file
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
    CAnimBlendStaticAssociation *m_pAssociations;
    unsigned int                 m_nNumAnimations;
};

VALIDATE_SIZE(CAnimBlendAssocGroup, 0x8);