#pragma once

#include "plbase/PluginBase.h"
#include "CObject.h"

class PLUGIN_API CHandObject : public CObject {
public:
    class CPed  *m_pPed;
    unsigned int m_nBoneIndex;
    RwTexture   *m_pTexture;
    bool         m_bUpdatedMatricesArray;
    char _pad[3];
};

VALIDATE_SIZE(CHandObject, 0x18C);