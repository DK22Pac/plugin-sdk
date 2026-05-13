/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CObject.h"

class PLUGIN_API CHandObject : public CObject {
public:
    class CPed  *m_pPed;
    unsigned int m_nBoneIndex;
    RwTexture   *m_pTexture;
    bool         m_bUpdatedMatricesArray;
};
VALIDATE_OFFSET(CHandObject, m_pPed, 0x17C);
VALIDATE_OFFSET(CHandObject, m_nBoneIndex, 0x180);
VALIDATE_OFFSET(CHandObject, m_pTexture, 0x184);
VALIDATE_OFFSET(CHandObject, m_bUpdatedMatricesArray, 0x188);
VALIDATE_SIZE(CHandObject, 0x18C);